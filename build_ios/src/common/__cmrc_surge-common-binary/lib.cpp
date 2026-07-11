        #include <cmrc/cmrc.hpp>
#include <map>
#include <utility>

namespace cmrc {
namespace surge_common_binary {

namespace res_chars {
// These are the files which are available in this resource library
// Pointers to /Users/klambert/workspace_KJSL/github_kevleyski/surge/resources/surge-shared/configuration.xml
extern const char* const f_69c6_configuration_xml_begin;
extern const char* const f_69c6_configuration_xml_end;
// Pointers to /Users/klambert/workspace_KJSL/github_kevleyski/surge/resources/surge-shared/memoryWavetable.wt
extern const char* const f_16bc_memoryWavetable_wt_begin;
extern const char* const f_16bc_memoryWavetable_wt_end;
// Pointers to /Users/klambert/workspace_KJSL/github_kevleyski/surge/resources/surge-shared/oscspecification.html
extern const char* const f_bbf2_oscspecification_html_begin;
extern const char* const f_bbf2_oscspecification_html_end;
// Pointers to /Users/klambert/workspace_KJSL/github_kevleyski/surge/resources/surge-shared/paramdocumentation.xml
extern const char* const f_387c_paramdocumentation_xml_begin;
extern const char* const f_387c_paramdocumentation_xml_end;
// Pointers to /Users/klambert/workspace_KJSL/github_kevleyski/surge/resources/surge-shared/README_UserArea.txt
extern const char* const f_c6da_README_UserArea_txt_begin;
extern const char* const f_c6da_README_UserArea_txt_end;
// Pointers to /Users/klambert/workspace_KJSL/github_kevleyski/surge/resources/surge-shared/windows.wt
extern const char* const f_271d_windows_wt_begin;
extern const char* const f_271d_windows_wt_end;
}

namespace {

const cmrc::detail::index_type&
get_root_index() {
    static cmrc::detail::directory root_directory_;
    static cmrc::detail::file_or_directory root_directory_fod{root_directory_};
    static cmrc::detail::index_type root_index;
    root_index.emplace("", &root_directory_fod);
    struct dir_inl {
        class cmrc::detail::directory& directory;
    };
    dir_inl root_directory_dir{root_directory_};
    (void)root_directory_dir;
    
    root_index.emplace(
        "configuration.xml",
        root_directory_dir.directory.add_file(
            "configuration.xml",
            res_chars::f_69c6_configuration_xml_begin,
            res_chars::f_69c6_configuration_xml_end
        )
    );
    root_index.emplace(
        "memoryWavetable.wt",
        root_directory_dir.directory.add_file(
            "memoryWavetable.wt",
            res_chars::f_16bc_memoryWavetable_wt_begin,
            res_chars::f_16bc_memoryWavetable_wt_end
        )
    );
    root_index.emplace(
        "oscspecification.html",
        root_directory_dir.directory.add_file(
            "oscspecification.html",
            res_chars::f_bbf2_oscspecification_html_begin,
            res_chars::f_bbf2_oscspecification_html_end
        )
    );
    root_index.emplace(
        "paramdocumentation.xml",
        root_directory_dir.directory.add_file(
            "paramdocumentation.xml",
            res_chars::f_387c_paramdocumentation_xml_begin,
            res_chars::f_387c_paramdocumentation_xml_end
        )
    );
    root_index.emplace(
        "README_UserArea.txt",
        root_directory_dir.directory.add_file(
            "README_UserArea.txt",
            res_chars::f_c6da_README_UserArea_txt_begin,
            res_chars::f_c6da_README_UserArea_txt_end
        )
    );
    root_index.emplace(
        "windows.wt",
        root_directory_dir.directory.add_file(
            "windows.wt",
            res_chars::f_271d_windows_wt_begin,
            res_chars::f_271d_windows_wt_end
        )
    );
    return root_index;
}

}

cmrc::embedded_filesystem get_filesystem() {
    static auto& index = get_root_index();
    return cmrc::embedded_filesystem{index};
}

} // surge_common_binary
} // cmrc
    