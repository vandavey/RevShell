
#include "nuitka/prelude.h"
#include "structseq.h"

// Sentinel PyObject to be used for all our call iterator endings. It will
// become a PyCObject pointing to NULL. It's address is unique, and that's
// enough for us to use it as sentinel value.
PyObject *_sentinel_value = NULL;

PyObject *Nuitka_dunder_compiled_value = NULL;

// We need to make sure this is local to the package, or else it will
// be taken from any external linkage.
#if defined(_NUITKA_MODULE) && !defined(_NUITKA_CONSTANTS_FROM_RESOURCE) && !defined(__cplusplus)
const unsigned char constant_bin[0];
#endif

PyObject *const_int_0;
PyObject *const_str_dot;
PyObject *const_float_0_0;
PyObject *const_float_1_0;
PyObject *const_int_neg_1;
PyObject *const_int_pos_1;
PyObject *const_int_pos_2;
PyObject *const_int_pos_3;
PyObject *const_int_pos_4;
PyObject *const_int_pos_5;
PyObject *const_int_pos_7;
PyObject *const_str_chr_7;
PyObject *const_str_empty;
PyObject *const_str_space;
PyObject *const_dict_empty;
PyObject *const_str_chr_58;
PyObject *const_str_chr_59;
PyObject *const_str_chr_64;
PyObject *const_str_chr_93;
PyObject *const_bytes_empty;
PyObject *const_str_plain_A;
PyObject *const_str_plain_B;
PyObject *const_str_plain_C;
PyObject *const_str_plain_D;
PyObject *const_str_plain_J;
PyObject *const_str_plain_K;
PyObject *const_str_plain_X;
PyObject *const_str_plain_Y;
PyObject *const_str_plain__;
PyObject *const_str_plain_m;
PyObject *const_str_plain_n;
PyObject *const_str_plain_x;
PyObject *const_str_plain_y;
PyObject *const_tuple_empty;
PyObject *const_str_plain_nt;
PyObject *const_str_plain_os;
PyObject *const_str_plain_rb;
PyObject *const_str_plain_sh;
PyObject *const_str_plain_DIM;
PyObject *const_str_plain_RED;
PyObject *const_str_plain_cls;
PyObject *const_str_plain_end;
PyObject *const_str_plain_exc;
PyObject *const_str_plain_int;
PyObject *const_str_plain_len;
PyObject *const_str_plain_msg;
PyObject *const_str_plain_str;
PyObject *const_str_plain_sum;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_Ansi;
PyObject *const_str_plain_BLUE;
PyObject *const_str_plain_Back;
PyObject *const_str_plain_CYAN;
PyObject *const_str_plain_Fore;
PyObject *const_str_plain_GREY;
PyObject *const_str_plain_PIPE;
PyObject *const_str_plain_Path;
PyObject *const_str_plain_Port;
PyObject *const_str_plain_ansi;
PyObject *const_str_plain_args;
PyObject *const_str_plain_back;
PyObject *const_str_plain_bash;
PyObject *const_str_plain_bool;
PyObject *const_str_plain_csbi;
PyObject *const_str_plain_dict;
PyObject *const_str_plain_exit;
PyObject *const_str_plain_file;
PyObject *const_str_plain_fore;
PyObject *const_str_plain_host;
PyObject *const_str_plain_info;
PyObject *const_str_plain_init;
PyObject *const_str_plain_iter;
PyObject *const_str_plain_join;
PyObject *const_str_plain_keys;
PyObject *const_str_plain_kill;
PyObject *const_str_plain_mode;
PyObject *const_str_plain_name;
PyObject *const_str_plain_open;
PyObject *const_str_plain_port;
PyObject *const_str_plain_quit;
PyObject *const_str_plain_read;
PyObject *const_str_plain_repr;
PyObject *const_str_plain_self;
PyObject *const_str_plain_send;
PyObject *const_str_plain_site;
PyObject *const_str_plain_sock;
PyObject *const_str_plain_text;
PyObject *const_str_plain_type;
PyObject *const_str_plain_user;
PyObject *const_str_plain_verb;
PyObject *const_float_minus_0_0;
PyObject *const_float_minus_1_0;
PyObject *const_str_plain_BLACK;
PyObject *const_str_plain_COORD;
PyObject *const_str_plain_Debug;
PyObject *const_str_plain_False;
PyObject *const_str_plain_GREEN;
PyObject *const_str_plain_RESET;
PyObject *const_str_plain_Style;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_WHITE;
PyObject *const_str_plain_attrs;
PyObject *const_str_plain_bytes;
PyObject *const_str_plain_clear;
PyObject *const_str_plain_close;
PyObject *const_str_plain_debug;
PyObject *const_str_plain_error;
PyObject *const_str_plain_level;
PyObject *const_str_plain_lower;
PyObject *const_str_plain_multi;
PyObject *const_str_plain_print;
PyObject *const_str_plain_range;
PyObject *const_str_plain_shell;
PyObject *const_str_plain_split;
PyObject *const_str_plain_start;
PyObject *const_str_plain_stdin;
PyObject *const_str_plain_strip;
PyObject *const_str_plain_style;
PyObject *const_str_plain_throw;
PyObject *const_str_plain_title;
PyObject *const_str_plain_tuple;
PyObject *const_str_plain_types;
PyObject *const_str_plain_utils;
PyObject *const_str_plain_value;
PyObject *const_str_plain_which;
PyObject *const_str_plain_win32;
PyObject *const_str_plain_write;
PyObject *const_str_angle_lambda;
PyObject *const_str_plain_BRIGHT;
PyObject *const_str_plain_Client;
PyObject *const_str_plain_Cursor;
PyObject *const_str_plain_NORMAL;
PyObject *const_str_plain_STDERR;
PyObject *const_str_plain_STDOUT;
PyObject *const_str_plain_Server;
PyObject *const_str_plain_YELLOW;
PyObject *const_str_plain_adjust;
PyObject *const_str_plain_append;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_deinit;
PyObject *const_str_plain_dwSize;
PyObject *const_str_plain_encode;
PyObject *const_str_plain_format;
PyObject *const_str_plain_getcwd;
PyObject *const_str_plain_handle;
PyObject *const_str_plain_ipaddr;
PyObject *const_str_plain_kwargs;
PyObject *const_str_plain_length;
PyObject *const_str_plain_listen;
PyObject *const_str_plain_locals;
PyObject *const_str_plain_object;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_output;
PyObject *const_str_plain_prompt;
PyObject *const_str_plain_reinit;
PyObject *const_str_plain_return;
PyObject *const_str_plain_shutil;
PyObject *const_str_plain_socket;
PyObject *const_str_plain_status;
PyObject *const_str_plain_stderr;
PyObject *const_str_plain_stdout;
PyObject *const_str_plain_stream;
PyObject *const_str_plain_struct;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_windll;
PyObject *const_str_angle_genexpr;
PyObject *const_str_plain_Address;
PyObject *const_str_plain_MAGENTA;
PyObject *const_str_plain_SHUT_WR;
PyObject *const_str_plain_Verbose;
PyObject *const_str_plain_WinTerm;
PyObject *const_str_plain___all__;
PyObject *const_str_plain___cmp__;
PyObject *const_str_plain___doc__;
PyObject *const_str_plain_command;
PyObject *const_str_plain_compile;
PyObject *const_str_plain_connect;
PyObject *const_str_plain_convert;
PyObject *const_str_plain_environ;
PyObject *const_str_plain_execute;
PyObject *const_str_plain_getattr;
PyObject *const_str_plain_globals;
PyObject *const_str_plain_inspect;
PyObject *const_str_plain_receive;
PyObject *const_str_plain_timeout;
PyObject *const_tuple_false_tuple;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_AnsiBack;
PyObject *const_str_plain_AnsiFore;
PyObject *const_str_plain_WinColor;
PyObject *const_str_plain_WinStyle;
PyObject *const_str_plain___dict__;
PyObject *const_str_plain___exit__;
PyObject *const_str_plain___file__;
PyObject *const_str_plain___init__;
PyObject *const_str_plain___iter__;
PyObject *const_str_plain___main__;
PyObject *const_str_plain___name__;
PyObject *const_str_plain___path__;
PyObject *const_str_plain___spec__;
PyObject *const_str_plain_fromlist;
PyObject *const_str_plain_position;
PyObject *const_str_plain_shutdown;
PyObject *const_str_plain_sys_info;
PyObject *const_str_angle_metaclass;
PyObject *const_str_plain_AnsiStyle;
PyObject *const_str_plain_RESET_ALL;
PyObject *const_str_plain___class__;
PyObject *const_str_plain___debug__;
PyObject *const_str_plain___enter__;
PyObject *const_str_plain_autoreset;
PyObject *const_str_plain_bytearray;
PyObject *const_str_plain_metaclass;
PyObject *const_str_plain_nodeutils;
PyObject *const_str_plain_on_stderr;
PyObject *const_str_plain_reset_all;
PyObject *const_str_plain_set_title;
PyObject *const_str_plain___cached__;
PyObject *const_str_plain___import__;
PyObject *const_str_plain___loader__;
PyObject *const_str_plain___module__;
PyObject *const_str_plain_erase_line;
PyObject *const_str_plain_executable;
PyObject *const_str_plain_ipv4_parse;
PyObject *const_str_plain_subprocess;
PyObject *const_str_plain_AnsiToWin32;
PyObject *const_str_plain_LIGHTRED_EX;
PyObject *const_str_plain___getitem__;
PyObject *const_str_plain___package__;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_ansitowin32;
PyObject *const_str_plain_classmethod;
PyObject *const_str_plain_should_wrap;
PyObject *const_str_plain_wAttributes;
PyObject *const_str_plain_winapi_test;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_str_plain_LIGHTBLUE_EX;
PyObject *const_str_plain_LIGHTCYAN_EX;
PyObject *const_str_plain_StreamSocket;
PyObject *const_str_plain___builtins__;
PyObject *const_str_plain___compiled__;
PyObject *const_str_plain___qualname__;
PyObject *const_str_plain_erase_screen;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_staticmethod;
PyObject *const_str_plain_style_prompt;
PyObject *const_str_plain_LIGHTBLACK_EX;
PyObject *const_str_plain_LIGHTGREEN_EX;
PyObject *const_str_plain_LIGHTWHITE_EX;
PyObject *const_str_plain___metaclass__;
PyObject *const_str_plain__initializing;
PyObject *const_str_plain_colorama_text;
PyObject *const_str_plain_cursor_adjust;
PyObject *const_str_plain_init_colorama;
PyObject *const_tuple_str_plain___tuple;
PyObject *const_tuple_type_object_tuple;
PyObject *const_str_plain_LIGHTYELLOW_EX;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_except_handler;
PyObject *const_str_plain_get_executable;
PyObject *const_tuple_str_plain_sh_tuple;
PyObject *const_str_plain_LIGHTMAGENTA_EX;
PyObject *const_str_plain_SetConsoleTitle;
PyObject *const_str_plain___mro_entries__;
PyObject *const_str_plain_dwCursorPosition;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_tuple_str_plain_bash_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_str_plain___class_getitem__;
PyObject *const_str_plain_adjusted_position;
PyObject *const_tuple_str_plain_Union_tuple;
PyObject *const_tuple_str_plain_title_tuple;
PyObject *const_tuple_str_plain_utils_tuple;
PyObject *const_tuple_str_plain_prompt_tuple;
PyObject *const_str_plain_set_cursor_position;
PyObject *const_tuple_int_pos_1_int_pos_1_tuple;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_str_plain_SetConsoleTextAttribute;
PyObject *const_tuple_str_plain_AnsiToWin32_tuple;
PyObject *const_str_plain_SetConsoleCursorPosition;
PyObject *const_str_plain_FillConsoleOutputAttribute;
PyObject *const_str_plain_FillConsoleOutputCharacter;
PyObject *const_str_plain_GetConsoleScreenBufferInfo;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_dict_056a293e2058d56276328e53ff09a8b9;
PyObject *const_list_str_plain_exit_str_plain_quit_list;
PyObject *const_list_a39782fbe5995e36c0fb8fe046a621d5_list;
PyObject *const_str_digest_1333e55a1f31a553fddc3cea41718b7b;
PyObject *const_str_digest_25731c733fd74e8333aa29126ce85686;
PyObject *const_str_digest_400656c24b2153937a2fae015d9afff2;
PyObject *const_str_digest_45e4dde2057b0bf276d6a84f4c917d27;
PyObject *const_str_digest_4f8c7230e3d1a51c6fa37895ee70f054;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_digest_9816e8d1552296af90d250823c964059;
PyObject *const_str_digest_a0aa42e170b872fd3517d0d685093963;
PyObject *const_str_digest_adc474dd61fbd736d69c1bac5d9712e0;
PyObject *const_str_digest_b1cece54b3ab7ef5f46c4734f2c6bcf2;
PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
PyObject *const_str_digest_c59e90e4116bd3913a98e5005e589c71;
PyObject *const_str_digest_da9f3a6afe07a7bdcf8222f42daf9d25;
PyObject *const_str_digest_f478257b76e2ddf5f773cc05fd405fcd;
PyObject *const_str_digest_fcf040720b88d60da4ce975010c44a3a;
PyObject *const_tuple_str_digest_da9f3a6afe07a7bdcf8222f42daf9d25_tuple;
PyObject *const_tuple_anon_function_anon_builtin_function_or_method_tuple;

static void _createGlobalConstants(void) {
    NUITKA_MAY_BE_UNUSED PyObject *exception_type, *exception_value;
    NUITKA_MAY_BE_UNUSED PyTracebackObject *exception_tb;

#ifdef _MSC_VER
    // Prevent unused warnings in case of simple programs, the attribute
    // NUITKA_MAY_BE_UNUSED doesn't work for MSVC.
    (void *)exception_type; (void *)exception_value; (void *)exception_tb;
#endif

    const_int_0 = PyLong_FromUnsignedLong(0ul);
    const_str_dot = UNSTREAM_STRING_ASCII(&constant_bin[ 2944 ], 1, 0);
    const_float_0_0 = UNSTREAM_FLOAT(&constant_bin[ 10576 ]);
    const_float_1_0 = UNSTREAM_FLOAT(&constant_bin[ 10584 ]);
    const_int_neg_1 = PyLong_FromLong(-1l);
    const_int_pos_1 = PyLong_FromUnsignedLong(1ul);
    const_int_pos_2 = PyLong_FromUnsignedLong(2ul);
    const_int_pos_3 = PyLong_FromUnsignedLong(3ul);
    const_int_pos_4 = PyLong_FromUnsignedLong(4ul);
    const_int_pos_5 = PyLong_FromUnsignedLong(5ul);
    const_int_pos_7 = PyLong_FromUnsignedLong(7ul);
    const_str_chr_7 = UNSTREAM_STRING_ASCII(&constant_bin[ 4554 ], 1, 0);
    const_str_empty = UNSTREAM_STRING_ASCII(&constant_bin[ 0 ], 0, 0);
    const_str_space = UNSTREAM_STRING_ASCII(&constant_bin[ 4 ], 1, 0);
    const_dict_empty = _PyDict_NewPresized( 0 );
    assert(PyDict_Size(const_dict_empty) == 0);
    const_str_chr_58 = UNSTREAM_STRING_ASCII(&constant_bin[ 2897 ], 1, 0);
    const_str_chr_59 = UNSTREAM_STRING_ASCII(&constant_bin[ 3685 ], 1, 0);
    const_str_chr_64 = UNSTREAM_STRING_ASCII(&constant_bin[ 10592 ], 1, 0);
    const_str_chr_93 = UNSTREAM_STRING_ASCII(&constant_bin[ 2859 ], 1, 0);
    const_bytes_empty = UNSTREAM_BYTES(&constant_bin[ 0 ], 0);
    const_str_plain_A = UNSTREAM_STRING_ASCII(&constant_bin[ 507 ], 1, 1);
    const_str_plain_B = UNSTREAM_STRING_ASCII(&constant_bin[ 447 ], 1, 1);
    const_str_plain_C = UNSTREAM_STRING_ASCII(&constant_bin[ 369 ], 1, 1);
    const_str_plain_D = UNSTREAM_STRING_ASCII(&constant_bin[ 1548 ], 1, 1);
    const_str_plain_J = UNSTREAM_STRING_ASCII(&constant_bin[ 4494 ], 1, 1);
    const_str_plain_K = UNSTREAM_STRING_ASCII(&constant_bin[ 3683 ], 1, 1);
    const_str_plain_X = UNSTREAM_STRING_ASCII(&constant_bin[ 8132 ], 1, 1);
    const_str_plain_Y = UNSTREAM_STRING_ASCII(&constant_bin[ 5827 ], 1, 1);
    const_str_plain__ = UNSTREAM_STRING_ASCII(&constant_bin[ 64 ], 1, 1);
    const_str_plain_m = UNSTREAM_STRING_ASCII(&constant_bin[ 2 ], 1, 1);
    const_str_plain_n = UNSTREAM_STRING_ASCII(&constant_bin[ 0 ], 1, 1);
    const_str_plain_x = UNSTREAM_STRING_ASCII(&constant_bin[ 207 ], 1, 1);
    const_str_plain_y = UNSTREAM_STRING_ASCII(&constant_bin[ 604 ], 1, 1);
    const_tuple_empty = PyTuple_New(0);
    const_str_plain_nt = UNSTREAM_STRING_ASCII(&constant_bin[ 373 ], 2, 1);
    const_str_plain_os = UNSTREAM_STRING_ASCII(&constant_bin[ 263 ], 2, 1);
    const_str_plain_rb = UNSTREAM_STRING_ASCII(&constant_bin[ 261 ], 2, 1);
    const_str_plain_sh = UNSTREAM_STRING_ASCII(&constant_bin[ 2115 ], 2, 1);
    const_str_plain_DIM = UNSTREAM_STRING_ASCII(&constant_bin[ 10593 ], 3, 1);
    const_str_plain_RED = UNSTREAM_STRING_ASCII(&constant_bin[ 10596 ], 3, 1);
    const_str_plain_cls = UNSTREAM_STRING_ASCII(&constant_bin[ 10599 ], 3, 1);
    const_str_plain_end = UNSTREAM_STRING_ASCII(&constant_bin[ 8072 ], 3, 1);
    const_str_plain_exc = UNSTREAM_STRING_ASCII(&constant_bin[ 8002 ], 3, 1);
    const_str_plain_int = UNSTREAM_STRING_ASCII(&constant_bin[ 779 ], 3, 1);
    const_str_plain_len = UNSTREAM_STRING_ASCII(&constant_bin[ 10602 ], 3, 1);
    const_str_plain_msg = UNSTREAM_STRING_ASCII(&constant_bin[ 181 ], 3, 1);
    const_str_plain_str = UNSTREAM_STRING_ASCII(&constant_bin[ 1076 ], 3, 1);
    const_str_plain_sum = UNSTREAM_STRING_ASCII(&constant_bin[ 10605 ], 3, 1);
    const_str_plain_sys = UNSTREAM_STRING_ASCII(&constant_bin[ 685 ], 3, 1);
    const_str_plain_Ansi = UNSTREAM_STRING_ASCII(&constant_bin[ 507 ], 4, 1);
    const_str_plain_BLUE = UNSTREAM_STRING_ASCII(&constant_bin[ 10608 ], 4, 1);
    const_str_plain_Back = UNSTREAM_STRING_ASCII(&constant_bin[ 572 ], 4, 1);
    const_str_plain_CYAN = UNSTREAM_STRING_ASCII(&constant_bin[ 10612 ], 4, 1);
    const_str_plain_Fore = UNSTREAM_STRING_ASCII(&constant_bin[ 542 ], 4, 1);
    const_str_plain_GREY = UNSTREAM_STRING_ASCII(&constant_bin[ 10616 ], 4, 1);
    const_str_plain_PIPE = UNSTREAM_STRING_ASCII(&constant_bin[ 10620 ], 4, 1);
    const_str_plain_Path = UNSTREAM_STRING_ASCII(&constant_bin[ 2175 ], 4, 1);
    const_str_plain_Port = UNSTREAM_STRING_ASCII(&constant_bin[ 10624 ], 4, 1);
    const_str_plain_ansi = UNSTREAM_STRING_ASCII(&constant_bin[ 3809 ], 4, 1);
    const_str_plain_args = UNSTREAM_STRING_ASCII(&constant_bin[ 101 ], 4, 1);
    const_str_plain_back = UNSTREAM_STRING_ASCII(&constant_bin[ 6696 ], 4, 1);
    const_str_plain_bash = UNSTREAM_STRING_ASCII(&constant_bin[ 10628 ], 4, 1);
    const_str_plain_bool = UNSTREAM_STRING_ASCII(&constant_bin[ 10632 ], 4, 1);
    const_str_plain_csbi = UNSTREAM_STRING_ASCII(&constant_bin[ 6184 ], 4, 1);
    const_str_plain_dict = UNSTREAM_STRING_ASCII(&constant_bin[ 10636 ], 4, 1);
    const_str_plain_exit = UNSTREAM_STRING_ASCII(&constant_bin[ 206 ], 4, 1);
    const_str_plain_file = UNSTREAM_STRING_ASCII(&constant_bin[ 2608 ], 4, 1);
    const_str_plain_fore = UNSTREAM_STRING_ASCII(&constant_bin[ 6632 ], 4, 1);
    const_str_plain_host = UNSTREAM_STRING_ASCII(&constant_bin[ 2317 ], 4, 1);
    const_str_plain_info = UNSTREAM_STRING_ASCII(&constant_bin[ 7459 ], 4, 1);
    const_str_plain_init = UNSTREAM_STRING_ASCII(&constant_bin[ 1229 ], 4, 1);
    const_str_plain_iter = UNSTREAM_STRING_ASCII(&constant_bin[ 5272 ], 4, 1);
    const_str_plain_join = UNSTREAM_STRING_ASCII(&constant_bin[ 10640 ], 4, 1);
    const_str_plain_keys = UNSTREAM_STRING_ASCII(&constant_bin[ 10644 ], 4, 1);
    const_str_plain_kill = UNSTREAM_STRING_ASCII(&constant_bin[ 10310 ], 4, 1);
    const_str_plain_mode = UNSTREAM_STRING_ASCII(&constant_bin[ 155 ], 4, 1);
    const_str_plain_name = UNSTREAM_STRING_ASCII(&constant_bin[ 0 ], 4, 1);
    const_str_plain_open = UNSTREAM_STRING_ASCII(&constant_bin[ 7439 ], 4, 1);
    const_str_plain_port = UNSTREAM_STRING_ASCII(&constant_bin[ 288 ], 4, 1);
    const_str_plain_quit = UNSTREAM_STRING_ASCII(&constant_bin[ 10648 ], 4, 1);
    const_str_plain_read = UNSTREAM_STRING_ASCII(&constant_bin[ 10652 ], 4, 1);
    const_str_plain_repr = UNSTREAM_STRING_ASCII(&constant_bin[ 10656 ], 4, 1);
    const_str_plain_self = UNSTREAM_STRING_ASCII(&constant_bin[ 10660 ], 4, 1);
    const_str_plain_send = UNSTREAM_STRING_ASCII(&constant_bin[ 8159 ], 4, 1);
    const_str_plain_site = UNSTREAM_STRING_ASCII(&constant_bin[ 2636 ], 4, 1);
    const_str_plain_sock = UNSTREAM_STRING_ASCII(&constant_bin[ 2201 ], 4, 1);
    const_str_plain_text = UNSTREAM_STRING_ASCII(&constant_bin[ 1358 ], 4, 1);
    const_str_plain_type = UNSTREAM_STRING_ASCII(&constant_bin[ 1835 ], 4, 1);
    const_str_plain_user = UNSTREAM_STRING_ASCII(&constant_bin[ 2291 ], 4, 1);
    const_str_plain_verb = UNSTREAM_STRING_ASCII(&constant_bin[ 259 ], 4, 1);
    const_float_minus_0_0 = UNSTREAM_FLOAT(&constant_bin[ 10664 ]);
    const_float_minus_1_0 = UNSTREAM_FLOAT(&constant_bin[ 10672 ]);
    const_str_plain_BLACK = UNSTREAM_STRING_ASCII(&constant_bin[ 10680 ], 5, 1);
    const_str_plain_COORD = UNSTREAM_STRING_ASCII(&constant_bin[ 1682 ], 5, 1);
    const_str_plain_Debug = UNSTREAM_STRING_ASCII(&constant_bin[ 10685 ], 5, 1);
    const_str_plain_False = UNSTREAM_STRING_ASCII(&constant_bin[ 4879 ], 5, 1);
    const_str_plain_GREEN = UNSTREAM_STRING_ASCII(&constant_bin[ 10690 ], 5, 1);
    const_str_plain_RESET = UNSTREAM_STRING_ASCII(&constant_bin[ 10695 ], 5, 1);
    const_str_plain_Style = UNSTREAM_STRING_ASCII(&constant_bin[ 602 ], 5, 1);
    const_str_plain_Union = UNSTREAM_STRING_ASCII(&constant_bin[ 2407 ], 5, 1);
    const_str_plain_WHITE = UNSTREAM_STRING_ASCII(&constant_bin[ 10700 ], 5, 1);
    const_str_plain_attrs = UNSTREAM_STRING_ASCII(&constant_bin[ 6673 ], 5, 1);
    const_str_plain_bytes = UNSTREAM_STRING_ASCII(&constant_bin[ 8563 ], 5, 1);
    const_str_plain_clear = UNSTREAM_STRING_ASCII(&constant_bin[ 3718 ], 5, 1);
    const_str_plain_close = UNSTREAM_STRING_ASCII(&constant_bin[ 4191 ], 5, 1);
    const_str_plain_debug = UNSTREAM_STRING_ASCII(&constant_bin[ 342 ], 5, 1);
    const_str_plain_error = UNSTREAM_STRING_ASCII(&constant_bin[ 8455 ], 5, 1);
    const_str_plain_level = UNSTREAM_STRING_ASCII(&constant_bin[ 2662 ], 5, 1);
    const_str_plain_lower = UNSTREAM_STRING_ASCII(&constant_bin[ 10705 ], 5, 1);
    const_str_plain_multi = UNSTREAM_STRING_ASCII(&constant_bin[ 7189 ], 5, 1);
    const_str_plain_print = UNSTREAM_STRING_ASCII(&constant_bin[ 3914 ], 5, 1);
    const_str_plain_range = UNSTREAM_STRING_ASCII(&constant_bin[ 10710 ], 5, 1);
    const_str_plain_shell = UNSTREAM_STRING_ASCII(&constant_bin[ 2930 ], 5, 1);
    const_str_plain_split = UNSTREAM_STRING_ASCII(&constant_bin[ 10715 ], 5, 1);
    const_str_plain_start = UNSTREAM_STRING_ASCII(&constant_bin[ 4072 ], 5, 1);
    const_str_plain_stdin = UNSTREAM_STRING_ASCII(&constant_bin[ 7533 ], 5, 1);
    const_str_plain_strip = UNSTREAM_STRING_ASCII(&constant_bin[ 5151 ], 5, 1);
    const_str_plain_style = UNSTREAM_STRING_ASCII(&constant_bin[ 6637 ], 5, 1);
    const_str_plain_throw = UNSTREAM_STRING_ASCII(&constant_bin[ 10720 ], 5, 1);
    const_str_plain_title = UNSTREAM_STRING_ASCII(&constant_bin[ 7026 ], 5, 1);
    const_str_plain_tuple = UNSTREAM_STRING_ASCII(&constant_bin[ 10725 ], 5, 1);
    const_str_plain_types = UNSTREAM_STRING_ASCII(&constant_bin[ 1835 ], 5, 1);
    const_str_plain_utils = UNSTREAM_STRING_ASCII(&constant_bin[ 232 ], 5, 1);
    const_str_plain_value = UNSTREAM_STRING_ASCII(&constant_bin[ 9639 ], 5, 1);
    const_str_plain_which = UNSTREAM_STRING_ASCII(&constant_bin[ 5537 ], 5, 1);
    const_str_plain_win32 = UNSTREAM_STRING_ASCII(&constant_bin[ 2088 ], 5, 1);
    const_str_plain_write = UNSTREAM_STRING_ASCII(&constant_bin[ 4324 ], 5, 1);
    const_str_angle_lambda = UNSTREAM_STRING_ASCII(&constant_bin[ 10730 ], 8, 0);
    const_str_plain_BRIGHT = UNSTREAM_STRING_ASCII(&constant_bin[ 7031 ], 6, 1);
    const_str_plain_Client = UNSTREAM_STRING_ASCII(&constant_bin[ 369 ], 6, 1);
    const_str_plain_Cursor = UNSTREAM_STRING_ASCII(&constant_bin[ 633 ], 6, 1);
    const_str_plain_NORMAL = UNSTREAM_STRING_ASCII(&constant_bin[ 10738 ], 6, 1);
    const_str_plain_STDERR = UNSTREAM_STRING_ASCII(&constant_bin[ 1574 ], 6, 1);
    const_str_plain_STDOUT = UNSTREAM_STRING_ASCII(&constant_bin[ 1546 ], 6, 1);
    const_str_plain_Server = UNSTREAM_STRING_ASCII(&constant_bin[ 314 ], 6, 1);
    const_str_plain_YELLOW = UNSTREAM_STRING_ASCII(&constant_bin[ 10744 ], 6, 1);
    const_str_plain_adjust = UNSTREAM_STRING_ASCII(&constant_bin[ 6872 ], 6, 1);
    const_str_plain_append = UNSTREAM_STRING_ASCII(&constant_bin[ 10750 ], 6, 1);
    const_str_plain_decode = UNSTREAM_STRING_ASCII(&constant_bin[ 10756 ], 6, 1);
    const_str_plain_deinit = UNSTREAM_STRING_ASCII(&constant_bin[ 1255 ], 6, 1);
    const_str_plain_dwSize = UNSTREAM_STRING_ASCII(&constant_bin[ 10762 ], 6, 1);
    const_str_plain_encode = UNSTREAM_STRING_ASCII(&constant_bin[ 10768 ], 6, 1);
    const_str_plain_format = UNSTREAM_STRING_ASCII(&constant_bin[ 9129 ], 6, 1);
    const_str_plain_getcwd = UNSTREAM_STRING_ASCII(&constant_bin[ 10774 ], 6, 1);
    const_str_plain_handle = UNSTREAM_STRING_ASCII(&constant_bin[ 3458 ], 6, 1);
    const_str_plain_ipaddr = UNSTREAM_STRING_ASCII(&constant_bin[ 10009 ], 6, 1);
    const_str_plain_kwargs = UNSTREAM_STRING_ASCII(&constant_bin[ 4989 ], 6, 1);
    const_str_plain_length = UNSTREAM_STRING_ASCII(&constant_bin[ 10780 ], 6, 1);
    const_str_plain_listen = UNSTREAM_STRING_ASCII(&constant_bin[ 9425 ], 6, 1);
    const_str_plain_locals = UNSTREAM_STRING_ASCII(&constant_bin[ 4464 ], 6, 1);
    const_str_plain_object = UNSTREAM_STRING_ASCII(&constant_bin[ 10786 ], 6, 1);
    const_str_plain_origin = UNSTREAM_STRING_ASCII(&constant_bin[ 10792 ], 6, 1);
    const_str_plain_output = UNSTREAM_STRING_ASCII(&constant_bin[ 2873 ], 6, 1);
    const_str_plain_prompt = UNSTREAM_STRING_ASCII(&constant_bin[ 8766 ], 6, 1);
    const_str_plain_reinit = UNSTREAM_STRING_ASCII(&constant_bin[ 10798 ], 6, 1);
    const_str_plain_return = UNSTREAM_STRING_ASCII(&constant_bin[ 8519 ], 6, 1);
    const_str_plain_shutil = UNSTREAM_STRING_ASCII(&constant_bin[ 2115 ], 6, 1);
    const_str_plain_socket = UNSTREAM_STRING_ASCII(&constant_bin[ 2201 ], 6, 1);
    const_str_plain_status = UNSTREAM_STRING_ASCII(&constant_bin[ 2545 ], 6, 1);
    const_str_plain_stderr = UNSTREAM_STRING_ASCII(&constant_bin[ 1109 ], 6, 1);
    const_str_plain_stdout = UNSTREAM_STRING_ASCII(&constant_bin[ 1043 ], 6, 1);
    const_str_plain_stream = UNSTREAM_STRING_ASCII(&constant_bin[ 1076 ], 6, 1);
    const_str_plain_struct = UNSTREAM_STRING_ASCII(&constant_bin[ 2263 ], 6, 1);
    const_str_plain_typing = UNSTREAM_STRING_ASCII(&constant_bin[ 10804 ], 6, 1);
    const_str_plain_windll = UNSTREAM_STRING_ASCII(&constant_bin[ 894 ], 6, 1);
    const_str_angle_genexpr = UNSTREAM_STRING_ASCII(&constant_bin[ 4472 ], 9, 0);
    const_str_plain_Address = UNSTREAM_STRING_ASCII(&constant_bin[ 2577 ], 7, 1);
    const_str_plain_MAGENTA = UNSTREAM_STRING_ASCII(&constant_bin[ 10810 ], 7, 1);
    const_str_plain_SHUT_WR = UNSTREAM_STRING_ASCII(&constant_bin[ 10817 ], 7, 1);
    const_str_plain_Verbose = UNSTREAM_STRING_ASCII(&constant_bin[ 10824 ], 7, 1);
    const_str_plain_WinTerm = UNSTREAM_STRING_ASCII(&constant_bin[ 922 ], 7, 1);
    const_str_plain___all__ = UNSTREAM_STRING_ASCII(&constant_bin[ 10831 ], 7, 1);
    const_str_plain___cmp__ = UNSTREAM_STRING_ASCII(&constant_bin[ 10838 ], 7, 1);
    const_str_plain___doc__ = UNSTREAM_STRING_ASCII(&constant_bin[ 10845 ], 7, 1);
    const_str_plain_command = UNSTREAM_STRING_ASCII(&constant_bin[ 7754 ], 7, 1);
    const_str_plain_compile = UNSTREAM_STRING_ASCII(&constant_bin[ 10852 ], 7, 1);
    const_str_plain_connect = UNSTREAM_STRING_ASCII(&constant_bin[ 7428 ], 7, 1);
    const_str_plain_convert = UNSTREAM_STRING_ASCII(&constant_bin[ 4300 ], 7, 1);
    const_str_plain_environ = UNSTREAM_STRING_ASCII(&constant_bin[ 7510 ], 7, 1);
    const_str_plain_execute = UNSTREAM_STRING_ASCII(&constant_bin[ 8886 ], 7, 1);
    const_str_plain_getattr = UNSTREAM_STRING_ASCII(&constant_bin[ 4632 ], 7, 1);
    const_str_plain_globals = UNSTREAM_STRING_ASCII(&constant_bin[ 10859 ], 7, 1);
    const_str_plain_inspect = UNSTREAM_STRING_ASCII(&constant_bin[ 10866 ], 7, 1);
    const_str_plain_receive = UNSTREAM_STRING_ASCII(&constant_bin[ 7899 ], 7, 1);
    const_str_plain_timeout = UNSTREAM_STRING_ASCII(&constant_bin[ 10873 ], 7, 1);
    const_tuple_false_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_false_tuple, 0, Py_False); Py_INCREF(Py_False);
    const_tuple_int_0_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_int_0_tuple, 0, const_int_0); Py_INCREF(const_int_0);
    const_str_plain_AnsiBack = UNSTREAM_STRING_ASCII(&constant_bin[ 568 ], 8, 1);
    const_str_plain_AnsiFore = UNSTREAM_STRING_ASCII(&constant_bin[ 538 ], 8, 1);
    const_str_plain_WinColor = UNSTREAM_STRING_ASCII(&constant_bin[ 837 ], 8, 1);
    const_str_plain_WinStyle = UNSTREAM_STRING_ASCII(&constant_bin[ 807 ], 8, 1);
    const_str_plain___dict__ = UNSTREAM_STRING_ASCII(&constant_bin[ 10880 ], 8, 1);
    const_str_plain___exit__ = UNSTREAM_STRING_ASCII(&constant_bin[ 5891 ], 8, 1);
    const_str_plain___file__ = UNSTREAM_STRING_ASCII(&constant_bin[ 2606 ], 8, 1);
    const_str_plain___init__ = UNSTREAM_STRING_ASCII(&constant_bin[ 3631 ], 8, 1);
    const_str_plain___iter__ = UNSTREAM_STRING_ASCII(&constant_bin[ 10888 ], 8, 1);
    const_str_plain___main__ = UNSTREAM_STRING_ASCII(&constant_bin[ 10896 ], 8, 1);
    const_str_plain___name__ = UNSTREAM_STRING_ASCII(&constant_bin[ 10904 ], 8, 1);
    const_str_plain___path__ = UNSTREAM_STRING_ASCII(&constant_bin[ 10912 ], 8, 1);
    const_str_plain___spec__ = UNSTREAM_STRING_ASCII(&constant_bin[ 10920 ], 8, 1);
    const_str_plain_fromlist = UNSTREAM_STRING_ASCII(&constant_bin[ 10928 ], 8, 1);
    const_str_plain_position = UNSTREAM_STRING_ASCII(&constant_bin[ 6661 ], 8, 1);
    const_str_plain_shutdown = UNSTREAM_STRING_ASCII(&constant_bin[ 10936 ], 8, 1);
    const_str_plain_sys_info = UNSTREAM_STRING_ASCII(&constant_bin[ 8590 ], 8, 1);
    const_str_angle_metaclass = UNSTREAM_STRING_ASCII(&constant_bin[ 10944 ], 11, 0);
    const_str_plain_AnsiStyle = UNSTREAM_STRING_ASCII(&constant_bin[ 598 ], 9, 1);
    const_str_plain_RESET_ALL = UNSTREAM_STRING_ASCII(&constant_bin[ 10955 ], 9, 1);
    const_str_plain___class__ = UNSTREAM_STRING_ASCII(&constant_bin[ 10964 ], 9, 1);
    const_str_plain___debug__ = UNSTREAM_STRING_ASCII(&constant_bin[ 10973 ], 9, 1);
    const_str_plain___enter__ = UNSTREAM_STRING_ASCII(&constant_bin[ 5032 ], 9, 1);
    const_str_plain_autoreset = UNSTREAM_STRING_ASCII(&constant_bin[ 4954 ], 9, 1);
    const_str_plain_bytearray = UNSTREAM_STRING_ASCII(&constant_bin[ 10982 ], 9, 1);
    const_str_plain_metaclass = UNSTREAM_STRING_ASCII(&constant_bin[ 10945 ], 9, 1);
    const_str_plain_nodeutils = UNSTREAM_STRING_ASCII(&constant_bin[ 8671 ], 9, 1);
    const_str_plain_on_stderr = UNSTREAM_STRING_ASCII(&constant_bin[ 10991 ], 9, 1);
    const_str_plain_reset_all = UNSTREAM_STRING_ASCII(&constant_bin[ 1198 ], 9, 1);
    const_str_plain_set_title = UNSTREAM_STRING_ASCII(&constant_bin[ 7022 ], 9, 1);
    const_str_plain___cached__ = UNSTREAM_STRING_ASCII(&constant_bin[ 11000 ], 10, 1);
    const_str_plain___import__ = UNSTREAM_STRING_ASCII(&constant_bin[ 11010 ], 10, 1);
    const_str_plain___loader__ = UNSTREAM_STRING_ASCII(&constant_bin[ 11020 ], 10, 1);
    const_str_plain___module__ = UNSTREAM_STRING_ASCII(&constant_bin[ 11030 ], 10, 1);
    const_str_plain_erase_line = UNSTREAM_STRING_ASCII(&constant_bin[ 7095 ], 10, 1);
    const_str_plain_executable = UNSTREAM_STRING_ASCII(&constant_bin[ 7987 ], 10, 1);
    const_str_plain_ipv4_parse = UNSTREAM_STRING_ASCII(&constant_bin[ 11040 ], 10, 1);
    const_str_plain_subprocess = UNSTREAM_STRING_ASCII(&constant_bin[ 2143 ], 10, 1);
    const_str_plain_AnsiToWin32 = UNSTREAM_STRING_ASCII(&constant_bin[ 1005 ], 11, 1);
    const_str_plain_LIGHTRED_EX = UNSTREAM_STRING_ASCII(&constant_bin[ 11050 ], 11, 1);
    const_str_plain___getitem__ = UNSTREAM_STRING_ASCII(&constant_bin[ 11061 ], 11, 1);
    const_str_plain___package__ = UNSTREAM_STRING_ASCII(&constant_bin[ 11072 ], 11, 1);
    const_str_plain___prepare__ = UNSTREAM_STRING_ASCII(&constant_bin[ 11083 ], 11, 1);
    const_str_plain_ansitowin32 = UNSTREAM_STRING_ASCII(&constant_bin[ 4163 ], 11, 1);
    const_str_plain_classmethod = UNSTREAM_STRING_ASCII(&constant_bin[ 11094 ], 11, 1);
    const_str_plain_should_wrap = UNSTREAM_STRING_ASCII(&constant_bin[ 5922 ], 11, 1);
    const_str_plain_wAttributes = UNSTREAM_STRING_ASCII(&constant_bin[ 6189 ], 11, 1);
    const_str_plain_winapi_test = UNSTREAM_STRING_ASCII(&constant_bin[ 745 ], 11, 1);
    const_tuple_int_pos_1_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_int_pos_1_tuple, 0, const_int_pos_1); Py_INCREF(const_int_pos_1);
    const_str_plain_LIGHTBLUE_EX = UNSTREAM_STRING_ASCII(&constant_bin[ 11105 ], 12, 1);
    const_str_plain_LIGHTCYAN_EX = UNSTREAM_STRING_ASCII(&constant_bin[ 11117 ], 12, 1);
    const_str_plain_StreamSocket = UNSTREAM_STRING_ASCII(&constant_bin[ 2229 ], 12, 1);
    const_str_plain___builtins__ = UNSTREAM_STRING_ASCII(&constant_bin[ 11129 ], 12, 1);
    const_str_plain___compiled__ = UNSTREAM_STRING_ASCII(&constant_bin[ 11141 ], 12, 1);
    const_str_plain___qualname__ = UNSTREAM_STRING_ASCII(&constant_bin[ 11153 ], 12, 1);
    const_str_plain_erase_screen = UNSTREAM_STRING_ASCII(&constant_bin[ 6801 ], 12, 1);
    const_str_plain_has_location = UNSTREAM_STRING_ASCII(&constant_bin[ 11165 ], 12, 1);
    const_str_plain_staticmethod = UNSTREAM_STRING_ASCII(&constant_bin[ 2373 ], 12, 1);
    const_str_plain_style_prompt = UNSTREAM_STRING_ASCII(&constant_bin[ 11177 ], 12, 1);
    const_str_plain_LIGHTBLACK_EX = UNSTREAM_STRING_ASCII(&constant_bin[ 11189 ], 13, 1);
    const_str_plain_LIGHTGREEN_EX = UNSTREAM_STRING_ASCII(&constant_bin[ 11202 ], 13, 1);
    const_str_plain_LIGHTWHITE_EX = UNSTREAM_STRING_ASCII(&constant_bin[ 11215 ], 13, 1);
    const_str_plain___metaclass__ = UNSTREAM_STRING_ASCII(&constant_bin[ 11228 ], 13, 1);
    const_str_plain__initializing = UNSTREAM_STRING_ASCII(&constant_bin[ 11241 ], 13, 1);
    const_str_plain_colorama_text = UNSTREAM_STRING_ASCII(&constant_bin[ 11254 ], 13, 1);
    const_str_plain_cursor_adjust = UNSTREAM_STRING_ASCII(&constant_bin[ 6865 ], 13, 1);
    const_str_plain_init_colorama = UNSTREAM_STRING_ASCII(&constant_bin[ 11267 ], 13, 1);
    const_tuple_str_plain___tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain___tuple, 0, const_str_plain__); Py_INCREF(const_str_plain__);
    const_tuple_type_object_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_type_object_tuple, 0, (PyObject *)&PyBaseObject_Type); Py_INCREF((PyObject *)&PyBaseObject_Type);
    const_str_plain_LIGHTYELLOW_EX = UNSTREAM_STRING_ASCII(&constant_bin[ 11280 ], 14, 1);
    const_str_plain___orig_bases__ = UNSTREAM_STRING_ASCII(&constant_bin[ 11294 ], 14, 1);
    const_str_plain_except_handler = UNSTREAM_STRING_ASCII(&constant_bin[ 9005 ], 14, 1);
    const_str_plain_get_executable = UNSTREAM_STRING_ASCII(&constant_bin[ 7983 ], 14, 1);
    const_tuple_str_plain_sh_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_sh_tuple, 0, const_str_plain_sh); Py_INCREF(const_str_plain_sh);
    const_str_plain_LIGHTMAGENTA_EX = UNSTREAM_STRING_ASCII(&constant_bin[ 11308 ], 15, 1);
    const_str_plain_SetConsoleTitle = UNSTREAM_STRING_ASCII(&constant_bin[ 1962 ], 15, 1);
    const_str_plain___mro_entries__ = UNSTREAM_STRING_ASCII(&constant_bin[ 11323 ], 15, 1);
    const_str_plain_dwCursorPosition = UNSTREAM_STRING_ASCII(&constant_bin[ 11338 ], 16, 1);
    const_tuple_none_none_none_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_none_none_none_tuple, 0, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_none_none_none_tuple, 1, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_none_none_none_tuple, 2, Py_None); Py_INCREF(Py_None);
    const_tuple_str_plain_bash_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_bash_tuple, 0, const_str_plain_bash); Py_INCREF(const_str_plain_bash);
    const_tuple_str_plain_self_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain___class_getitem__ = UNSTREAM_STRING_ASCII(&constant_bin[ 11354 ], 17, 1);
    const_str_plain_adjusted_position = UNSTREAM_STRING_ASCII(&constant_bin[ 11371 ], 17, 1);
    const_tuple_str_plain_Union_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_Union_tuple, 0, const_str_plain_Union); Py_INCREF(const_str_plain_Union);
    const_tuple_str_plain_title_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_title_tuple, 0, const_str_plain_title); Py_INCREF(const_str_plain_title);
    const_tuple_str_plain_utils_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_utils_tuple, 0, const_str_plain_utils); Py_INCREF(const_str_plain_utils);
    const_tuple_str_plain_prompt_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_prompt_tuple, 0, const_str_plain_prompt); Py_INCREF(const_str_plain_prompt);
    const_str_plain_set_cursor_position = UNSTREAM_STRING_ASCII(&constant_bin[ 6650 ], 19, 1);
    const_tuple_int_pos_1_int_pos_1_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_int_pos_1_int_pos_1_tuple, 0, const_int_pos_1); Py_INCREF(const_int_pos_1);
    PyTuple_SET_ITEM(const_tuple_int_pos_1_int_pos_1_tuple, 1, const_int_pos_1); Py_INCREF(const_int_pos_1);
    const_tuple_str_plain___class___tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain___class___tuple, 0, const_str_plain___class__); Py_INCREF(const_str_plain___class__);
    const_str_plain_SetConsoleTextAttribute = UNSTREAM_STRING_ASCII(&constant_bin[ 1637 ], 23, 1);
    const_tuple_str_plain_AnsiToWin32_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_AnsiToWin32_tuple, 0, const_str_plain_AnsiToWin32); Py_INCREF(const_str_plain_AnsiToWin32);
    const_str_plain_SetConsoleCursorPosition = UNSTREAM_STRING_ASCII(&constant_bin[ 1758 ], 24, 1);
    const_str_plain_FillConsoleOutputAttribute = UNSTREAM_STRING_ASCII(&constant_bin[ 1913 ], 26, 1);
    const_str_plain_FillConsoleOutputCharacter = UNSTREAM_STRING_ASCII(&constant_bin[ 1863 ], 26, 1);
    const_str_plain_GetConsoleScreenBufferInfo = UNSTREAM_STRING_ASCII(&constant_bin[ 1436 ], 26, 1);
    const_str_plain_submodule_search_locations = UNSTREAM_STRING_ASCII(&constant_bin[ 11388 ], 26, 1);
    const_dict_056a293e2058d56276328e53ff09a8b9 = _PyDict_NewPresized( 1 );
    PyDict_SetItem(const_dict_056a293e2058d56276328e53ff09a8b9, const_str_plain_return, Py_None);
    assert(PyDict_Size(const_dict_056a293e2058d56276328e53ff09a8b9) == 1);
    const_list_str_plain_exit_str_plain_quit_list = PyList_New(2);
    PyList_SET_ITEM(const_list_str_plain_exit_str_plain_quit_list, 0, const_str_plain_exit); Py_INCREF(const_str_plain_exit);
    PyList_SET_ITEM(const_list_str_plain_exit_str_plain_quit_list, 1, const_str_plain_quit); Py_INCREF(const_str_plain_quit);
    const_list_a39782fbe5995e36c0fb8fe046a621d5_list = PyList_New(3);
    PyList_SET_ITEM(const_list_a39782fbe5995e36c0fb8fe046a621d5_list, 0, const_str_plain_cls); Py_INCREF(const_str_plain_cls);
    PyList_SET_ITEM(const_list_a39782fbe5995e36c0fb8fe046a621d5_list, 1, const_str_plain_clear); Py_INCREF(const_str_plain_clear);
    const_str_digest_4f8c7230e3d1a51c6fa37895ee70f054 = UNSTREAM_STRING_ASCII(&constant_bin[ 11414 ], 12, 0);
    PyList_SET_ITEM(const_list_a39782fbe5995e36c0fb8fe046a621d5_list, 2, const_str_digest_4f8c7230e3d1a51c6fa37895ee70f054); Py_INCREF(const_str_digest_4f8c7230e3d1a51c6fa37895ee70f054);
    const_str_digest_1333e55a1f31a553fddc3cea41718b7b = UNSTREAM_STRING_ASCII(&constant_bin[ 7703 ], 18, 0);
    const_str_digest_25731c733fd74e8333aa29126ce85686 = UNSTREAM_STRING_ASCII(&constant_bin[ 5003 ], 2, 0);
    const_str_digest_400656c24b2153937a2fae015d9afff2 = UNSTREAM_STRING_ASCII(&constant_bin[ 3465 ], 53, 0);
    const_str_digest_45e4dde2057b0bf276d6a84f4c917d27 = UNSTREAM_STRING_ASCII(&constant_bin[ 11426 ], 7, 0);
    const_str_digest_75fd71b1edada749c2ef7ac810062295 = UNSTREAM_STRING_ASCII(&constant_bin[ 11433 ], 46, 0);
    const_str_digest_9816e8d1552296af90d250823c964059 = UNSTREAM_STRING_ASCII(&constant_bin[ 11479 ], 46, 0);
    const_str_digest_a0aa42e170b872fd3517d0d685093963 = UNSTREAM_STRING_ASCII(&constant_bin[ 9240 ], 18, 0);
    const_str_digest_adc474dd61fbd736d69c1bac5d9712e0 = UNSTREAM_STRING_ASCII(&constant_bin[ 11525 ], 47, 0);
    const_str_digest_b1cece54b3ab7ef5f46c4734f2c6bcf2 = UNSTREAM_STRING_ASCII(&constant_bin[ 11572 ], 64, 0);
    const_str_digest_b9c4baf879ebd882d40843df3a4dead7 = UNSTREAM_STRING_ASCII(&constant_bin[ 3231 ], 2, 1);
    const_str_digest_c59e90e4116bd3913a98e5005e589c71 = UNSTREAM_STRING_ASCII(&constant_bin[ 2814 ], 2, 0);
    const_str_digest_da9f3a6afe07a7bdcf8222f42daf9d25 = UNSTREAM_STRING_ASCII(&constant_bin[ 11636 ], 17, 0);
    const_str_digest_f478257b76e2ddf5f773cc05fd405fcd = UNSTREAM_STRING_ASCII(&constant_bin[ 11653 ], 6, 0);
    const_str_digest_fcf040720b88d60da4ce975010c44a3a = UNSTREAM_STRING_ASCII(&constant_bin[ 11659 ], 38, 0);
    const_tuple_str_digest_da9f3a6afe07a7bdcf8222f42daf9d25_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_da9f3a6afe07a7bdcf8222f42daf9d25_tuple, 0, const_str_digest_da9f3a6afe07a7bdcf8222f42daf9d25); Py_INCREF(const_str_digest_da9f3a6afe07a7bdcf8222f42daf9d25);
    const_tuple_anon_function_anon_builtin_function_or_method_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_anon_function_anon_builtin_function_or_method_tuple, 0, (PyObject *)&PyFunction_Type); Py_INCREF((PyObject *)&PyFunction_Type);
    PyTuple_SET_ITEM(const_tuple_anon_function_anon_builtin_function_or_method_tuple, 1, (PyObject *)&PyCFunction_Type); Py_INCREF((PyObject *)&PyCFunction_Type);

#if _NUITKA_EXE
    /* Set the "sys.executable" path to the original CPython executable. */
    PySys_SetObject(
        (char *)"executable",
        const_str_digest_b1cece54b3ab7ef5f46c4734f2c6bcf2
    );

#ifndef _NUITKA_STANDALONE
    /* Set the "sys.prefix" path to the original one. */
    PySys_SetObject(
        (char *)"prefix",
        const_str_digest_400656c24b2153937a2fae015d9afff2
    );

    /* Set the "sys.prefix" path to the original one. */
    PySys_SetObject(
        (char *)"exec_prefix",
        const_str_digest_400656c24b2153937a2fae015d9afff2
    );


#if PYTHON_VERSION >= 300
    /* Set the "sys.base_prefix" path to the original one. */
    PySys_SetObject(
        (char *)"base_prefix",
        const_str_digest_400656c24b2153937a2fae015d9afff2
    );

    /* Set the "sys.exec_base_prefix" path to the original one. */
    PySys_SetObject(
        (char *)"base_exec_prefix",
        const_str_digest_400656c24b2153937a2fae015d9afff2
    );

#endif
#endif
#endif

    static PyTypeObject Nuitka_VersionInfoType;

    // Same fields as "sys.version_info" except no serial number.
    static PyStructSequence_Field Nuitka_VersionInfoFields[] = {
        {(char *)"major", (char *)"Major release number"},
        {(char *)"minor", (char *)"Minor release number"},
        {(char *)"micro", (char *)"Micro release number"},
        {(char *)"releaselevel", (char *)"'alpha', 'beta', 'candidate', or 'release'"},
        {0}
    };

    static PyStructSequence_Desc Nuitka_VersionInfoDesc = {
        (char *)"__nuitka_version__",                                    /* name */
        (char *)"__compiled__\n\nVersion information as a named tuple.", /* doc */
        Nuitka_VersionInfoFields,                                        /* fields */
        4
    };

    PyStructSequence_InitType(&Nuitka_VersionInfoType, &Nuitka_VersionInfoDesc);

    Nuitka_dunder_compiled_value = PyStructSequence_New(&Nuitka_VersionInfoType);
    assert(Nuitka_dunder_compiled_value != NULL);

    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 0, PyInt_FromLong(0));
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 1, PyInt_FromLong(6));
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 2, PyInt_FromLong(8));

    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 3, Nuitka_String_FromString("release"));

    // Prevent users from creating the Nuitka version type object.
    Nuitka_VersionInfoType.tp_init = NULL;
    Nuitka_VersionInfoType.tp_new = NULL;


}

// In debug mode we can check that the constants were not tampered with in any
// given moment. We typically do it at program exit, but we can add extra calls
// for sanity.
#ifndef __NUITKA_NO_ASSERT__
void checkGlobalConstants(void) {

}
#endif

void createGlobalConstants(void) {
    if (_sentinel_value == NULL) {
#if PYTHON_VERSION < 300
        _sentinel_value = PyCObject_FromVoidPtr(NULL, NULL);
#else
        // The NULL value is not allowed for a capsule, so use something else.
        _sentinel_value = PyCapsule_New((void *)27, "sentinel", NULL);
#endif
        assert(_sentinel_value);

        _createGlobalConstants();
    }
}
