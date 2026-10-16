#include <xlnt/xlnt.hpp>

#include <cstdint>
#include <exception>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: excelCounter <workbook.xlsx>\n";
        return 1;
    }

    try
    {
        xlnt::workbook workbook{xlnt::path{std::string{argv[1]}}};
        std::uint64_t total = 0;

        for (auto worksheet : workbook)
        {
            std::uint64_t sheet_count = 0;

            for (auto row : worksheet.rows())
            {
                for (auto cell : row)
                {
                    if (cell.has_value() || cell.has_formula())
                    {
                        ++sheet_count;
                    }
                }
            }

            std::cout << worksheet.title() << ": " << sheet_count
                      << " occupied cells\n";
            total += sheet_count;
        }

        std::cout << "Total: " << total << " occupied cells\n";
    }
    catch (const std::exception &error)
    {
        std::cerr << "Could not read workbook \"" << argv[1]
                  << "\": " << error.what() << '\n';
        return 1;
    }

    return 0;
}
