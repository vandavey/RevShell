
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
PyObject *const_str_chr_39;
PyObject *const_str_chr_47;
PyObject *const_str_chr_59;
PyObject *const_str_chr_92;
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
PyObject *const_str_plain_cd;
PyObject *const_str_plain_ls;
PyObject *const_str_plain_nt;
PyObject *const_str_plain_os;
PyObject *const_str_plain_rb;
PyObject *const_str_plain_DIM;
PyObject *const_str_plain_RED;
PyObject *const_str_plain_cwd;
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
PyObject *const_str_plain_Path;
PyObject *const_str_plain_Port;
PyObject *const_str_plain_ansi;
PyObject *const_str_plain_args;
PyObject *const_str_plain_back;
PyObject *const_str_plain_bool;
PyObject *const_str_plain_csbi;
PyObject *const_str_plain_dict;
PyObject *const_str_plain_exit;
PyObject *const_str_plain_file;
PyObject *const_str_plain_fore;
PyObject *const_str_plain_grep;
PyObject *const_str_plain_init;
PyObject *const_str_plain_iter;
PyObject *const_str_plain_join;
PyObject *const_str_plain_keys;
PyObject *const_str_plain_mode;
PyObject *const_str_plain_name;
PyObject *const_str_plain_open;
PyObject *const_str_plain_path;
PyObject *const_str_plain_port;
PyObject *const_str_plain_read;
PyObject *const_str_plain_repr;
PyObject *const_str_plain_self;
PyObject *const_str_plain_send;
PyObject *const_str_plain_site;
PyObject *const_str_plain_sock;
PyObject *const_str_plain_text;
PyObject *const_str_plain_type;
PyObject *const_str_plain_verb;
PyObject *const_float_minus_0_0;
PyObject *const_float_minus_1_0;
PyObject *const_str_plain_BLACK;
PyObject *const_str_plain_COORD;
PyObject *const_str_plain_Debug;
PyObject *const_str_plain_False;
PyObject *const_str_plain_GREEN;
PyObject *const_str_plain_OPSYS;
PyObject *const_str_plain_RESET;
PyObject *const_str_plain_Shell;
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
PyObject *const_str_plain_opsys;
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
PyObject *const_str_plain_win32;
PyObject *const_str_plain_write;
PyObject *const_str_angle_lambda;
PyObject *const_str_plain_BRIGHT;
PyObject *const_str_plain_Client;
PyObject *const_str_plain_Cursor;
PyObject *const_str_plain_LastWD;
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
PyObject *const_str_plain_exists;
PyObject *const_str_plain_family;
PyObject *const_str_plain_format;
PyObject *const_str_plain_handle;
PyObject *const_str_plain_ipaddr;
PyObject *const_str_plain_kwargs;
PyObject *const_str_plain_length;
PyObject *const_str_plain_listen;
PyObject *const_str_plain_locals;
PyObject *const_str_plain_object;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_output;
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
PyObject *const_tuple_none_tuple;
PyObject *const_tuple_true_tuple;
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
PyObject *const_str_plain_getattr;
PyObject *const_str_plain_getpass;
PyObject *const_str_plain_globals;
PyObject *const_str_plain_inspect;
PyObject *const_str_plain_pathlib;
PyObject *const_str_plain_sysinfo;
PyObject *const_str_plain_timeout;
PyObject *const_str_plain_verbose;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_AnsiBack;
PyObject *const_str_plain_AnsiFore;
PyObject *const_str_plain_Hostname;
PyObject *const_str_plain_UserName;
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
PyObject *const_str_plain__run_cmd;
PyObject *const_str_plain_fromlist;
PyObject *const_str_plain_get_exec;
PyObject *const_str_plain_hostinfo;
PyObject *const_str_plain_out_type;
PyObject *const_str_plain_position;
PyObject *const_str_plain_recv_msg;
PyObject *const_str_plain_shutdown;
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
PyObject *const_str_plain_change_dir;
PyObject *const_str_plain_erase_line;
PyObject *const_str_plain_get_prompt;
PyObject *const_str_plain_ipv4_parse;
PyObject *const_str_plain_shell_path;
PyObject *const_str_plain_subprocess;
PyObject *const_str_plain_AnsiToWin32;
PyObject *const_str_plain_Environment;
PyObject *const_str_plain_LIGHTRED_EX;
PyObject *const_str_plain_RemoteOpSys;
PyObject *const_str_plain___getitem__;
PyObject *const_str_plain___package__;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_ansitowin32;
PyObject *const_str_plain_classmethod;
PyObject *const_str_plain_get_sysinfo;
PyObject *const_str_plain_gethostname;
PyObject *const_str_plain_receive_cmd;
PyObject *const_str_plain_send_output;
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
PyObject *const_str_plain_stdin_status;
PyObject *const_str_plain_style_prompt;
PyObject *const_str_plain_LIGHTBLACK_EX;
PyObject *const_str_plain_LIGHTGREEN_EX;
PyObject *const_str_plain_LIGHTWHITE_EX;
PyObject *const_str_plain___metaclass__;
PyObject *const_str_plain__initializing;
PyObject *const_str_plain_check_special;
PyObject *const_str_plain_colorama_text;
PyObject *const_str_plain_cursor_adjust;
PyObject *const_str_plain_init_colorama;
PyObject *const_tuple_str_plain___tuple;
PyObject *const_tuple_type_object_tuple;
PyObject *const_str_plain_LIGHTYELLOW_EX;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_except_handler;
PyObject *const_str_plain_LIGHTMAGENTA_EX;
PyObject *const_str_plain_SetConsoleTitle;
PyObject *const_str_plain___mro_entries__;
PyObject *const_str_plain_dwCursorPosition;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_tuple_str_plain_Path_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_str_plain___class_getitem__;
PyObject *const_str_plain_adjusted_position;
PyObject *const_tuple_str_plain_Union_tuple;
PyObject *const_tuple_str_plain_title_tuple;
PyObject *const_tuple_str_plain_utils_tuple;
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
PyObject *const_str_digest_1333e55a1f31a553fddc3cea41718b7b;
PyObject *const_str_digest_25731c733fd74e8333aa29126ce85686;
PyObject *const_str_digest_45e4dde2057b0bf276d6a84f4c917d27;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_digest_89d190fd52ae2a8345598700d9c75841;
PyObject *const_str_digest_9816e8d1552296af90d250823c964059;
PyObject *const_str_digest_a0aa42e170b872fd3517d0d685093963;
PyObject *const_str_digest_a7fa929725106fc5b33607dee30bb84b;
PyObject *const_str_digest_adc474dd61fbd736d69c1bac5d9712e0;
PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
PyObject *const_str_digest_da609fb9798623e87040dd3347dd4e2b;
PyObject *const_str_digest_da9f3a6afe07a7bdcf8222f42daf9d25;
PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyObject *const_str_digest_ebebb18731664a12452b2ba6915b22ed;
PyObject *const_str_digest_fcf040720b88d60da4ce975010c44a3a;
PyObject *const_tuple_str_digest_da9f3a6afe07a7bdcf8222f42daf9d25_tuple;
PyObject *const_tuple_str_digest_ebebb18731664a12452b2ba6915b22ed_tuple;
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
    const_str_dot = UNSTREAM_STRING_ASCII(&constant_bin[ 3130 ], 1, 0);
    const_float_0_0 = UNSTREAM_FLOAT(&constant_bin[ 11990 ]);
    const_float_1_0 = UNSTREAM_FLOAT(&constant_bin[ 11998 ]);
    const_int_neg_1 = PyLong_FromLong(-1l);
    const_int_pos_1 = PyLong_FromUnsignedLong(1ul);
    const_int_pos_2 = PyLong_FromUnsignedLong(2ul);
    const_int_pos_3 = PyLong_FromUnsignedLong(3ul);
    const_int_pos_4 = PyLong_FromUnsignedLong(4ul);
    const_int_pos_5 = PyLong_FromUnsignedLong(5ul);
    const_int_pos_7 = PyLong_FromUnsignedLong(7ul);
    const_str_chr_7 = UNSTREAM_STRING_ASCII(&constant_bin[ 4517 ], 1, 0);
    const_str_empty = UNSTREAM_STRING_ASCII(&constant_bin[ 0 ], 0, 0);
    const_str_space = UNSTREAM_STRING_ASCII(&constant_bin[ 4 ], 1, 0);
    const_dict_empty = _PyDict_NewPresized( 0 );
    assert(PyDict_Size(const_dict_empty) == 0);
    const_str_chr_39 = UNSTREAM_STRING_ASCII(&constant_bin[ 5 ], 1, 0);
    const_str_chr_47 = UNSTREAM_STRING_ASCII(&constant_bin[ 2874 ], 1, 0);
    const_str_chr_59 = UNSTREAM_STRING_ASCII(&constant_bin[ 3704 ], 1, 0);
    const_str_chr_92 = UNSTREAM_STRING_ASCII(&constant_bin[ 3254 ], 1, 0);
    const_bytes_empty = UNSTREAM_BYTES(&constant_bin[ 0 ], 0);
    const_str_plain_A = UNSTREAM_STRING_ASCII(&constant_bin[ 560 ], 1, 1);
    const_str_plain_B = UNSTREAM_STRING_ASCII(&constant_bin[ 500 ], 1, 1);
    const_str_plain_C = UNSTREAM_STRING_ASCII(&constant_bin[ 422 ], 1, 1);
    const_str_plain_D = UNSTREAM_STRING_ASCII(&constant_bin[ 1577 ], 1, 1);
    const_str_plain_J = UNSTREAM_STRING_ASCII(&constant_bin[ 4390 ], 1, 1);
    const_str_plain_K = UNSTREAM_STRING_ASCII(&constant_bin[ 3702 ], 1, 1);
    const_str_plain_X = UNSTREAM_STRING_ASCII(&constant_bin[ 3476 ], 1, 1);
    const_str_plain_Y = UNSTREAM_STRING_ASCII(&constant_bin[ 5790 ], 1, 1);
    const_str_plain__ = UNSTREAM_STRING_ASCII(&constant_bin[ 64 ], 1, 1);
    const_str_plain_m = UNSTREAM_STRING_ASCII(&constant_bin[ 2 ], 1, 1);
    const_str_plain_n = UNSTREAM_STRING_ASCII(&constant_bin[ 0 ], 1, 1);
    const_str_plain_x = UNSTREAM_STRING_ASCII(&constant_bin[ 209 ], 1, 1);
    const_str_plain_y = UNSTREAM_STRING_ASCII(&constant_bin[ 657 ], 1, 1);
    const_tuple_empty = PyTuple_New(0);
    const_str_plain_cd = UNSTREAM_STRING_ASCII(&constant_bin[ 12006 ], 2, 1);
    const_str_plain_ls = UNSTREAM_STRING_ASCII(&constant_bin[ 237 ], 2, 1);
    const_str_plain_nt = UNSTREAM_STRING_ASCII(&constant_bin[ 426 ], 2, 1);
    const_str_plain_os = UNSTREAM_STRING_ASCII(&constant_bin[ 291 ], 2, 1);
    const_str_plain_rb = UNSTREAM_STRING_ASCII(&constant_bin[ 289 ], 2, 1);
    const_str_plain_DIM = UNSTREAM_STRING_ASCII(&constant_bin[ 12008 ], 3, 1);
    const_str_plain_RED = UNSTREAM_STRING_ASCII(&constant_bin[ 12011 ], 3, 1);
    const_str_plain_cwd = UNSTREAM_STRING_ASCII(&constant_bin[ 12014 ], 3, 1);
    const_str_plain_end = UNSTREAM_STRING_ASCII(&constant_bin[ 8015 ], 3, 1);
    const_str_plain_exc = UNSTREAM_STRING_ASCII(&constant_bin[ 7835 ], 3, 1);
    const_str_plain_int = UNSTREAM_STRING_ASCII(&constant_bin[ 808 ], 3, 1);
    const_str_plain_len = UNSTREAM_STRING_ASCII(&constant_bin[ 7977 ], 3, 1);
    const_str_plain_msg = UNSTREAM_STRING_ASCII(&constant_bin[ 183 ], 3, 1);
    const_str_plain_str = UNSTREAM_STRING_ASCII(&constant_bin[ 1105 ], 3, 1);
    const_str_plain_sum = UNSTREAM_STRING_ASCII(&constant_bin[ 12017 ], 3, 1);
    const_str_plain_sys = UNSTREAM_STRING_ASCII(&constant_bin[ 714 ], 3, 1);
    const_str_plain_Ansi = UNSTREAM_STRING_ASCII(&constant_bin[ 560 ], 4, 1);
    const_str_plain_BLUE = UNSTREAM_STRING_ASCII(&constant_bin[ 12020 ], 4, 1);
    const_str_plain_Back = UNSTREAM_STRING_ASCII(&constant_bin[ 625 ], 4, 1);
    const_str_plain_CYAN = UNSTREAM_STRING_ASCII(&constant_bin[ 12024 ], 4, 1);
    const_str_plain_Fore = UNSTREAM_STRING_ASCII(&constant_bin[ 595 ], 4, 1);
    const_str_plain_GREY = UNSTREAM_STRING_ASCII(&constant_bin[ 12028 ], 4, 1);
    const_str_plain_Path = UNSTREAM_STRING_ASCII(&constant_bin[ 2294 ], 4, 1);
    const_str_plain_Port = UNSTREAM_STRING_ASCII(&constant_bin[ 12032 ], 4, 1);
    const_str_plain_ansi = UNSTREAM_STRING_ASCII(&constant_bin[ 3979 ], 4, 1);
    const_str_plain_args = UNSTREAM_STRING_ASCII(&constant_bin[ 101 ], 4, 1);
    const_str_plain_back = UNSTREAM_STRING_ASCII(&constant_bin[ 6603 ], 4, 1);
    const_str_plain_bool = UNSTREAM_STRING_ASCII(&constant_bin[ 8396 ], 4, 1);
    const_str_plain_csbi = UNSTREAM_STRING_ASCII(&constant_bin[ 6119 ], 4, 1);
    const_str_plain_dict = UNSTREAM_STRING_ASCII(&constant_bin[ 10410 ], 4, 1);
    const_str_plain_exit = UNSTREAM_STRING_ASCII(&constant_bin[ 208 ], 4, 1);
    const_str_plain_file = UNSTREAM_STRING_ASCII(&constant_bin[ 2648 ], 4, 1);
    const_str_plain_fore = UNSTREAM_STRING_ASCII(&constant_bin[ 6539 ], 4, 1);
    const_str_plain_grep = UNSTREAM_STRING_ASCII(&constant_bin[ 12036 ], 4, 1);
    const_str_plain_init = UNSTREAM_STRING_ASCII(&constant_bin[ 1258 ], 4, 1);
    const_str_plain_iter = UNSTREAM_STRING_ASCII(&constant_bin[ 5235 ], 4, 1);
    const_str_plain_join = UNSTREAM_STRING_ASCII(&constant_bin[ 9395 ], 4, 1);
    const_str_plain_keys = UNSTREAM_STRING_ASCII(&constant_bin[ 12040 ], 4, 1);
    const_str_plain_mode = UNSTREAM_STRING_ASCII(&constant_bin[ 12044 ], 4, 1);
    const_str_plain_name = UNSTREAM_STRING_ASCII(&constant_bin[ 0 ], 4, 1);
    const_str_plain_open = UNSTREAM_STRING_ASCII(&constant_bin[ 12048 ], 4, 1);
    const_str_plain_path = UNSTREAM_STRING_ASCII(&constant_bin[ 7298 ], 4, 1);
    const_str_plain_port = UNSTREAM_STRING_ASCII(&constant_bin[ 261 ], 4, 1);
    const_str_plain_read = UNSTREAM_STRING_ASCII(&constant_bin[ 12052 ], 4, 1);
    const_str_plain_repr = UNSTREAM_STRING_ASCII(&constant_bin[ 12056 ], 4, 1);
    const_str_plain_self = UNSTREAM_STRING_ASCII(&constant_bin[ 7902 ], 4, 1);
    const_str_plain_send = UNSTREAM_STRING_ASCII(&constant_bin[ 8014 ], 4, 1);
    const_str_plain_site = UNSTREAM_STRING_ASCII(&constant_bin[ 2676 ], 4, 1);
    const_str_plain_sock = UNSTREAM_STRING_ASCII(&constant_bin[ 2144 ], 4, 1);
    const_str_plain_text = UNSTREAM_STRING_ASCII(&constant_bin[ 1387 ], 4, 1);
    const_str_plain_type = UNSTREAM_STRING_ASCII(&constant_bin[ 1864 ], 4, 1);
    const_str_plain_verb = UNSTREAM_STRING_ASCII(&constant_bin[ 287 ], 4, 1);
    const_float_minus_0_0 = UNSTREAM_FLOAT(&constant_bin[ 12060 ]);
    const_float_minus_1_0 = UNSTREAM_FLOAT(&constant_bin[ 12068 ]);
    const_str_plain_BLACK = UNSTREAM_STRING_ASCII(&constant_bin[ 12076 ], 5, 1);
    const_str_plain_COORD = UNSTREAM_STRING_ASCII(&constant_bin[ 1711 ], 5, 1);
    const_str_plain_Debug = UNSTREAM_STRING_ASCII(&constant_bin[ 12081 ], 5, 1);
    const_str_plain_False = UNSTREAM_STRING_ASCII(&constant_bin[ 4842 ], 5, 1);
    const_str_plain_GREEN = UNSTREAM_STRING_ASCII(&constant_bin[ 12086 ], 5, 1);
    const_str_plain_OPSYS = UNSTREAM_STRING_ASCII(&constant_bin[ 8240 ], 5, 1);
    const_str_plain_RESET = UNSTREAM_STRING_ASCII(&constant_bin[ 12091 ], 5, 1);
    const_str_plain_Shell = UNSTREAM_STRING_ASCII(&constant_bin[ 3279 ], 5, 1);
    const_str_plain_Style = UNSTREAM_STRING_ASCII(&constant_bin[ 655 ], 5, 1);
    const_str_plain_Union = UNSTREAM_STRING_ASCII(&constant_bin[ 2445 ], 5, 1);
    const_str_plain_WHITE = UNSTREAM_STRING_ASCII(&constant_bin[ 12096 ], 5, 1);
    const_str_plain_attrs = UNSTREAM_STRING_ASCII(&constant_bin[ 6580 ], 5, 1);
    const_str_plain_bytes = UNSTREAM_STRING_ASCII(&constant_bin[ 11326 ], 5, 1);
    const_str_plain_clear = UNSTREAM_STRING_ASCII(&constant_bin[ 3737 ], 5, 1);
    const_str_plain_close = UNSTREAM_STRING_ASCII(&constant_bin[ 4087 ], 5, 1);
    const_str_plain_debug = UNSTREAM_STRING_ASCII(&constant_bin[ 395 ], 5, 1);
    const_str_plain_error = UNSTREAM_STRING_ASCII(&constant_bin[ 7206 ], 5, 1);
    const_str_plain_level = UNSTREAM_STRING_ASCII(&constant_bin[ 2702 ], 5, 1);
    const_str_plain_lower = UNSTREAM_STRING_ASCII(&constant_bin[ 12101 ], 5, 1);
    const_str_plain_multi = UNSTREAM_STRING_ASCII(&constant_bin[ 7061 ], 5, 1);
    const_str_plain_opsys = UNSTREAM_STRING_ASCII(&constant_bin[ 12106 ], 5, 1);
    const_str_plain_print = UNSTREAM_STRING_ASCII(&constant_bin[ 3845 ], 5, 1);
    const_str_plain_range = UNSTREAM_STRING_ASCII(&constant_bin[ 12111 ], 5, 1);
    const_str_plain_shell = UNSTREAM_STRING_ASCII(&constant_bin[ 316 ], 5, 1);
    const_str_plain_split = UNSTREAM_STRING_ASCII(&constant_bin[ 9854 ], 5, 1);
    const_str_plain_start = UNSTREAM_STRING_ASCII(&constant_bin[ 4063 ], 5, 1);
    const_str_plain_stdin = UNSTREAM_STRING_ASCII(&constant_bin[ 7384 ], 5, 1);
    const_str_plain_strip = UNSTREAM_STRING_ASCII(&constant_bin[ 5114 ], 5, 1);
    const_str_plain_style = UNSTREAM_STRING_ASCII(&constant_bin[ 6544 ], 5, 1);
    const_str_plain_throw = UNSTREAM_STRING_ASCII(&constant_bin[ 12116 ], 5, 1);
    const_str_plain_title = UNSTREAM_STRING_ASCII(&constant_bin[ 6905 ], 5, 1);
    const_str_plain_tuple = UNSTREAM_STRING_ASCII(&constant_bin[ 12121 ], 5, 1);
    const_str_plain_types = UNSTREAM_STRING_ASCII(&constant_bin[ 1864 ], 5, 1);
    const_str_plain_utils = UNSTREAM_STRING_ASCII(&constant_bin[ 234 ], 5, 1);
    const_str_plain_value = UNSTREAM_STRING_ASCII(&constant_bin[ 10529 ], 5, 1);
    const_str_plain_win32 = UNSTREAM_STRING_ASCII(&constant_bin[ 2117 ], 5, 1);
    const_str_plain_write = UNSTREAM_STRING_ASCII(&constant_bin[ 4220 ], 5, 1);
    const_str_angle_lambda = UNSTREAM_STRING_ASCII(&constant_bin[ 12126 ], 8, 0);
    const_str_plain_BRIGHT = UNSTREAM_STRING_ASCII(&constant_bin[ 6910 ], 6, 1);
    const_str_plain_Client = UNSTREAM_STRING_ASCII(&constant_bin[ 422 ], 6, 1);
    const_str_plain_Cursor = UNSTREAM_STRING_ASCII(&constant_bin[ 686 ], 6, 1);
    const_str_plain_LastWD = UNSTREAM_STRING_ASCII(&constant_bin[ 7907 ], 6, 1);
    const_str_plain_NORMAL = UNSTREAM_STRING_ASCII(&constant_bin[ 12134 ], 6, 1);
    const_str_plain_STDERR = UNSTREAM_STRING_ASCII(&constant_bin[ 1603 ], 6, 1);
    const_str_plain_STDOUT = UNSTREAM_STRING_ASCII(&constant_bin[ 1575 ], 6, 1);
    const_str_plain_Server = UNSTREAM_STRING_ASCII(&constant_bin[ 343 ], 6, 1);
    const_str_plain_YELLOW = UNSTREAM_STRING_ASCII(&constant_bin[ 12140 ], 6, 1);
    const_str_plain_adjust = UNSTREAM_STRING_ASCII(&constant_bin[ 6779 ], 6, 1);
    const_str_plain_append = UNSTREAM_STRING_ASCII(&constant_bin[ 12146 ], 6, 1);
    const_str_plain_decode = UNSTREAM_STRING_ASCII(&constant_bin[ 12152 ], 6, 1);
    const_str_plain_deinit = UNSTREAM_STRING_ASCII(&constant_bin[ 1284 ], 6, 1);
    const_str_plain_dwSize = UNSTREAM_STRING_ASCII(&constant_bin[ 12158 ], 6, 1);
    const_str_plain_encode = UNSTREAM_STRING_ASCII(&constant_bin[ 12164 ], 6, 1);
    const_str_plain_exists = UNSTREAM_STRING_ASCII(&constant_bin[ 12170 ], 6, 1);
    const_str_plain_family = UNSTREAM_STRING_ASCII(&constant_bin[ 12176 ], 6, 1);
    const_str_plain_format = UNSTREAM_STRING_ASCII(&constant_bin[ 9727 ], 6, 1);
    const_str_plain_handle = UNSTREAM_STRING_ASCII(&constant_bin[ 9496 ], 6, 1);
    const_str_plain_ipaddr = UNSTREAM_STRING_ASCII(&constant_bin[ 11129 ], 6, 1);
    const_str_plain_kwargs = UNSTREAM_STRING_ASCII(&constant_bin[ 4952 ], 6, 1);
    const_str_plain_length = UNSTREAM_STRING_ASCII(&constant_bin[ 12182 ], 6, 1);
    const_str_plain_listen = UNSTREAM_STRING_ASCII(&constant_bin[ 155 ], 6, 1);
    const_str_plain_locals = UNSTREAM_STRING_ASCII(&constant_bin[ 4360 ], 6, 1);
    const_str_plain_object = UNSTREAM_STRING_ASCII(&constant_bin[ 12188 ], 6, 1);
    const_str_plain_origin = UNSTREAM_STRING_ASCII(&constant_bin[ 12194 ], 6, 1);
    const_str_plain_output = UNSTREAM_STRING_ASCII(&constant_bin[ 2932 ], 6, 1);
    const_str_plain_reinit = UNSTREAM_STRING_ASCII(&constant_bin[ 12200 ], 6, 1);
    const_str_plain_return = UNSTREAM_STRING_ASCII(&constant_bin[ 7362 ], 6, 1);
    const_str_plain_shutil = UNSTREAM_STRING_ASCII(&constant_bin[ 2234 ], 6, 1);
    const_str_plain_socket = UNSTREAM_STRING_ASCII(&constant_bin[ 2144 ], 6, 1);
    const_str_plain_status = UNSTREAM_STRING_ASCII(&constant_bin[ 2585 ], 6, 1);
    const_str_plain_stderr = UNSTREAM_STRING_ASCII(&constant_bin[ 1138 ], 6, 1);
    const_str_plain_stdout = UNSTREAM_STRING_ASCII(&constant_bin[ 1072 ], 6, 1);
    const_str_plain_stream = UNSTREAM_STRING_ASCII(&constant_bin[ 1105 ], 6, 1);
    const_str_plain_struct = UNSTREAM_STRING_ASCII(&constant_bin[ 2206 ], 6, 1);
    const_str_plain_typing = UNSTREAM_STRING_ASCII(&constant_bin[ 12206 ], 6, 1);
    const_str_plain_windll = UNSTREAM_STRING_ASCII(&constant_bin[ 923 ], 6, 1);
    const_tuple_none_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_none_tuple, 0, Py_None); Py_INCREF(Py_None);
    const_tuple_true_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_true_tuple, 0, Py_True); Py_INCREF(Py_True);
    const_str_angle_genexpr = UNSTREAM_STRING_ASCII(&constant_bin[ 4368 ], 9, 0);
    const_str_plain_Address = UNSTREAM_STRING_ASCII(&constant_bin[ 2617 ], 7, 1);
    const_str_plain_MAGENTA = UNSTREAM_STRING_ASCII(&constant_bin[ 12212 ], 7, 1);
    const_str_plain_SHUT_WR = UNSTREAM_STRING_ASCII(&constant_bin[ 12219 ], 7, 1);
    const_str_plain_Verbose = UNSTREAM_STRING_ASCII(&constant_bin[ 12226 ], 7, 1);
    const_str_plain_WinTerm = UNSTREAM_STRING_ASCII(&constant_bin[ 951 ], 7, 1);
    const_str_plain___all__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12233 ], 7, 1);
    const_str_plain___cmp__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12240 ], 7, 1);
    const_str_plain___doc__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12247 ], 7, 1);
    const_str_plain_command = UNSTREAM_STRING_ASCII(&constant_bin[ 3121 ], 7, 1);
    const_str_plain_compile = UNSTREAM_STRING_ASCII(&constant_bin[ 12254 ], 7, 1);
    const_str_plain_connect = UNSTREAM_STRING_ASCII(&constant_bin[ 3179 ], 7, 1);
    const_str_plain_convert = UNSTREAM_STRING_ASCII(&constant_bin[ 4196 ], 7, 1);
    const_str_plain_environ = UNSTREAM_STRING_ASCII(&constant_bin[ 10333 ], 7, 1);
    const_str_plain_getattr = UNSTREAM_STRING_ASCII(&constant_bin[ 4595 ], 7, 1);
    const_str_plain_getpass = UNSTREAM_STRING_ASCII(&constant_bin[ 2320 ], 7, 1);
    const_str_plain_globals = UNSTREAM_STRING_ASCII(&constant_bin[ 12261 ], 7, 1);
    const_str_plain_inspect = UNSTREAM_STRING_ASCII(&constant_bin[ 12268 ], 7, 1);
    const_str_plain_pathlib = UNSTREAM_STRING_ASCII(&constant_bin[ 12275 ], 7, 1);
    const_str_plain_sysinfo = UNSTREAM_STRING_ASCII(&constant_bin[ 7700 ], 7, 1);
    const_str_plain_timeout = UNSTREAM_STRING_ASCII(&constant_bin[ 9987 ], 7, 1);
    const_str_plain_verbose = UNSTREAM_STRING_ASCII(&constant_bin[ 287 ], 7, 1);
    const_tuple_int_0_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_int_0_tuple, 0, const_int_0); Py_INCREF(const_int_0);
    const_str_plain_AnsiBack = UNSTREAM_STRING_ASCII(&constant_bin[ 621 ], 8, 1);
    const_str_plain_AnsiFore = UNSTREAM_STRING_ASCII(&constant_bin[ 591 ], 8, 1);
    const_str_plain_Hostname = UNSTREAM_STRING_ASCII(&constant_bin[ 12282 ], 8, 1);
    const_str_plain_UserName = UNSTREAM_STRING_ASCII(&constant_bin[ 12290 ], 8, 1);
    const_str_plain_WinColor = UNSTREAM_STRING_ASCII(&constant_bin[ 866 ], 8, 1);
    const_str_plain_WinStyle = UNSTREAM_STRING_ASCII(&constant_bin[ 836 ], 8, 1);
    const_str_plain___dict__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12298 ], 8, 1);
    const_str_plain___exit__ = UNSTREAM_STRING_ASCII(&constant_bin[ 5854 ], 8, 1);
    const_str_plain___file__ = UNSTREAM_STRING_ASCII(&constant_bin[ 2646 ], 8, 1);
    const_str_plain___init__ = UNSTREAM_STRING_ASCII(&constant_bin[ 3645 ], 8, 1);
    const_str_plain___iter__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12306 ], 8, 1);
    const_str_plain___main__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12314 ], 8, 1);
    const_str_plain___name__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12322 ], 8, 1);
    const_str_plain___path__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12330 ], 8, 1);
    const_str_plain___spec__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12338 ], 8, 1);
    const_str_plain__run_cmd = UNSTREAM_STRING_ASCII(&constant_bin[ 8470 ], 8, 1);
    const_str_plain_fromlist = UNSTREAM_STRING_ASCII(&constant_bin[ 12346 ], 8, 1);
    const_str_plain_get_exec = UNSTREAM_STRING_ASCII(&constant_bin[ 8597 ], 8, 1);
    const_str_plain_hostinfo = UNSTREAM_STRING_ASCII(&constant_bin[ 12354 ], 8, 1);
    const_str_plain_out_type = UNSTREAM_STRING_ASCII(&constant_bin[ 8275 ], 8, 1);
    const_str_plain_position = UNSTREAM_STRING_ASCII(&constant_bin[ 6568 ], 8, 1);
    const_str_plain_recv_msg = UNSTREAM_STRING_ASCII(&constant_bin[ 8851 ], 8, 1);
    const_str_plain_shutdown = UNSTREAM_STRING_ASCII(&constant_bin[ 12362 ], 8, 1);
    const_str_angle_metaclass = UNSTREAM_STRING_ASCII(&constant_bin[ 12370 ], 11, 0);
    const_str_plain_AnsiStyle = UNSTREAM_STRING_ASCII(&constant_bin[ 651 ], 9, 1);
    const_str_plain_RESET_ALL = UNSTREAM_STRING_ASCII(&constant_bin[ 12381 ], 9, 1);
    const_str_plain___class__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12390 ], 9, 1);
    const_str_plain___debug__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12399 ], 9, 1);
    const_str_plain___enter__ = UNSTREAM_STRING_ASCII(&constant_bin[ 4995 ], 9, 1);
    const_str_plain_autoreset = UNSTREAM_STRING_ASCII(&constant_bin[ 4917 ], 9, 1);
    const_str_plain_bytearray = UNSTREAM_STRING_ASCII(&constant_bin[ 12408 ], 9, 1);
    const_str_plain_metaclass = UNSTREAM_STRING_ASCII(&constant_bin[ 12371 ], 9, 1);
    const_str_plain_nodeutils = UNSTREAM_STRING_ASCII(&constant_bin[ 8095 ], 9, 1);
    const_str_plain_on_stderr = UNSTREAM_STRING_ASCII(&constant_bin[ 12417 ], 9, 1);
    const_str_plain_reset_all = UNSTREAM_STRING_ASCII(&constant_bin[ 1227 ], 9, 1);
    const_str_plain_set_title = UNSTREAM_STRING_ASCII(&constant_bin[ 6901 ], 9, 1);
    const_str_plain___cached__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12426 ], 10, 1);
    const_str_plain___import__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12436 ], 10, 1);
    const_str_plain___loader__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12446 ], 10, 1);
    const_str_plain___module__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12456 ], 10, 1);
    const_str_plain_change_dir = UNSTREAM_STRING_ASCII(&constant_bin[ 7855 ], 10, 1);
    const_str_plain_erase_line = UNSTREAM_STRING_ASCII(&constant_bin[ 6974 ], 10, 1);
    const_str_plain_get_prompt = UNSTREAM_STRING_ASCII(&constant_bin[ 9660 ], 10, 1);
    const_str_plain_ipv4_parse = UNSTREAM_STRING_ASCII(&constant_bin[ 12466 ], 10, 1);
    const_str_plain_shell_path = UNSTREAM_STRING_ASCII(&constant_bin[ 12476 ], 10, 1);
    const_str_plain_subprocess = UNSTREAM_STRING_ASCII(&constant_bin[ 2262 ], 10, 1);
    const_str_plain_AnsiToWin32 = UNSTREAM_STRING_ASCII(&constant_bin[ 1034 ], 11, 1);
    const_str_plain_Environment = UNSTREAM_STRING_ASCII(&constant_bin[ 12486 ], 11, 1);
    const_str_plain_LIGHTRED_EX = UNSTREAM_STRING_ASCII(&constant_bin[ 12497 ], 11, 1);
    const_str_plain_RemoteOpSys = UNSTREAM_STRING_ASCII(&constant_bin[ 12508 ], 11, 1);
    const_str_plain___getitem__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12519 ], 11, 1);
    const_str_plain___package__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12530 ], 11, 1);
    const_str_plain___prepare__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12541 ], 11, 1);
    const_str_plain_ansitowin32 = UNSTREAM_STRING_ASCII(&constant_bin[ 4457 ], 11, 1);
    const_str_plain_classmethod = UNSTREAM_STRING_ASCII(&constant_bin[ 12552 ], 11, 1);
    const_str_plain_get_sysinfo = UNSTREAM_STRING_ASCII(&constant_bin[ 7696 ], 11, 1);
    const_str_plain_gethostname = UNSTREAM_STRING_ASCII(&constant_bin[ 12563 ], 11, 1);
    const_str_plain_receive_cmd = UNSTREAM_STRING_ASCII(&constant_bin[ 8985 ], 11, 1);
    const_str_plain_send_output = UNSTREAM_STRING_ASCII(&constant_bin[ 8014 ], 11, 1);
    const_str_plain_should_wrap = UNSTREAM_STRING_ASCII(&constant_bin[ 5885 ], 11, 1);
    const_str_plain_wAttributes = UNSTREAM_STRING_ASCII(&constant_bin[ 6124 ], 11, 1);
    const_str_plain_winapi_test = UNSTREAM_STRING_ASCII(&constant_bin[ 774 ], 11, 1);
    const_tuple_int_pos_1_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_int_pos_1_tuple, 0, const_int_pos_1); Py_INCREF(const_int_pos_1);
    const_str_plain_LIGHTBLUE_EX = UNSTREAM_STRING_ASCII(&constant_bin[ 12574 ], 12, 1);
    const_str_plain_LIGHTCYAN_EX = UNSTREAM_STRING_ASCII(&constant_bin[ 12586 ], 12, 1);
    const_str_plain_StreamSocket = UNSTREAM_STRING_ASCII(&constant_bin[ 2172 ], 12, 1);
    const_str_plain___builtins__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12598 ], 12, 1);
    const_str_plain___compiled__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12610 ], 12, 1);
    const_str_plain___qualname__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12622 ], 12, 1);
    const_str_plain_erase_screen = UNSTREAM_STRING_ASCII(&constant_bin[ 6708 ], 12, 1);
    const_str_plain_has_location = UNSTREAM_STRING_ASCII(&constant_bin[ 12634 ], 12, 1);
    const_str_plain_staticmethod = UNSTREAM_STRING_ASCII(&constant_bin[ 2411 ], 12, 1);
    const_str_plain_stdin_status = UNSTREAM_STRING_ASCII(&constant_bin[ 12646 ], 12, 1);
    const_str_plain_style_prompt = UNSTREAM_STRING_ASCII(&constant_bin[ 12658 ], 12, 1);
    const_str_plain_LIGHTBLACK_EX = UNSTREAM_STRING_ASCII(&constant_bin[ 12670 ], 13, 1);
    const_str_plain_LIGHTGREEN_EX = UNSTREAM_STRING_ASCII(&constant_bin[ 12683 ], 13, 1);
    const_str_plain_LIGHTWHITE_EX = UNSTREAM_STRING_ASCII(&constant_bin[ 12696 ], 13, 1);
    const_str_plain___metaclass__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12709 ], 13, 1);
    const_str_plain__initializing = UNSTREAM_STRING_ASCII(&constant_bin[ 12722 ], 13, 1);
    const_str_plain_check_special = UNSTREAM_STRING_ASCII(&constant_bin[ 8571 ], 13, 1);
    const_str_plain_colorama_text = UNSTREAM_STRING_ASCII(&constant_bin[ 12735 ], 13, 1);
    const_str_plain_cursor_adjust = UNSTREAM_STRING_ASCII(&constant_bin[ 6772 ], 13, 1);
    const_str_plain_init_colorama = UNSTREAM_STRING_ASCII(&constant_bin[ 12748 ], 13, 1);
    const_tuple_str_plain___tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain___tuple, 0, const_str_plain__); Py_INCREF(const_str_plain__);
    const_tuple_type_object_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_type_object_tuple, 0, (PyObject *)&PyBaseObject_Type); Py_INCREF((PyObject *)&PyBaseObject_Type);
    const_str_plain_LIGHTYELLOW_EX = UNSTREAM_STRING_ASCII(&constant_bin[ 12761 ], 14, 1);
    const_str_plain___orig_bases__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12775 ], 14, 1);
    const_str_plain_except_handler = UNSTREAM_STRING_ASCII(&constant_bin[ 9489 ], 14, 1);
    const_str_plain_LIGHTMAGENTA_EX = UNSTREAM_STRING_ASCII(&constant_bin[ 12789 ], 15, 1);
    const_str_plain_SetConsoleTitle = UNSTREAM_STRING_ASCII(&constant_bin[ 1991 ], 15, 1);
    const_str_plain___mro_entries__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12804 ], 15, 1);
    const_str_plain_dwCursorPosition = UNSTREAM_STRING_ASCII(&constant_bin[ 12819 ], 16, 1);
    const_tuple_none_none_none_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_none_none_none_tuple, 0, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_none_none_none_tuple, 1, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_none_none_none_tuple, 2, Py_None); Py_INCREF(Py_None);
    const_tuple_str_plain_Path_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_Path_tuple, 0, const_str_plain_Path); Py_INCREF(const_str_plain_Path);
    const_tuple_str_plain_self_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain___class_getitem__ = UNSTREAM_STRING_ASCII(&constant_bin[ 12835 ], 17, 1);
    const_str_plain_adjusted_position = UNSTREAM_STRING_ASCII(&constant_bin[ 12852 ], 17, 1);
    const_tuple_str_plain_Union_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_Union_tuple, 0, const_str_plain_Union); Py_INCREF(const_str_plain_Union);
    const_tuple_str_plain_title_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_title_tuple, 0, const_str_plain_title); Py_INCREF(const_str_plain_title);
    const_tuple_str_plain_utils_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_utils_tuple, 0, const_str_plain_utils); Py_INCREF(const_str_plain_utils);
    const_str_plain_set_cursor_position = UNSTREAM_STRING_ASCII(&constant_bin[ 6557 ], 19, 1);
    const_tuple_int_pos_1_int_pos_1_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_int_pos_1_int_pos_1_tuple, 0, const_int_pos_1); Py_INCREF(const_int_pos_1);
    PyTuple_SET_ITEM(const_tuple_int_pos_1_int_pos_1_tuple, 1, const_int_pos_1); Py_INCREF(const_int_pos_1);
    const_tuple_str_plain___class___tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain___class___tuple, 0, const_str_plain___class__); Py_INCREF(const_str_plain___class__);
    const_str_plain_SetConsoleTextAttribute = UNSTREAM_STRING_ASCII(&constant_bin[ 1666 ], 23, 1);
    const_tuple_str_plain_AnsiToWin32_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_AnsiToWin32_tuple, 0, const_str_plain_AnsiToWin32); Py_INCREF(const_str_plain_AnsiToWin32);
    const_str_plain_SetConsoleCursorPosition = UNSTREAM_STRING_ASCII(&constant_bin[ 1787 ], 24, 1);
    const_str_plain_FillConsoleOutputAttribute = UNSTREAM_STRING_ASCII(&constant_bin[ 1942 ], 26, 1);
    const_str_plain_FillConsoleOutputCharacter = UNSTREAM_STRING_ASCII(&constant_bin[ 1892 ], 26, 1);
    const_str_plain_GetConsoleScreenBufferInfo = UNSTREAM_STRING_ASCII(&constant_bin[ 1465 ], 26, 1);
    const_str_plain_submodule_search_locations = UNSTREAM_STRING_ASCII(&constant_bin[ 12869 ], 26, 1);
    const_dict_056a293e2058d56276328e53ff09a8b9 = _PyDict_NewPresized( 1 );
    PyDict_SetItem(const_dict_056a293e2058d56276328e53ff09a8b9, const_str_plain_return, Py_None);
    assert(PyDict_Size(const_dict_056a293e2058d56276328e53ff09a8b9) == 1);
    const_str_digest_1333e55a1f31a553fddc3cea41718b7b = UNSTREAM_STRING_ASCII(&constant_bin[ 7588 ], 18, 0);
    const_str_digest_25731c733fd74e8333aa29126ce85686 = UNSTREAM_STRING_ASCII(&constant_bin[ 4966 ], 2, 0);
    const_str_digest_45e4dde2057b0bf276d6a84f4c917d27 = UNSTREAM_STRING_ASCII(&constant_bin[ 12895 ], 7, 0);
    const_str_digest_75fd71b1edada749c2ef7ac810062295 = UNSTREAM_STRING_ASCII(&constant_bin[ 12902 ], 46, 0);
    const_str_digest_89d190fd52ae2a8345598700d9c75841 = UNSTREAM_STRING_ASCII(&constant_bin[ 10694 ], 11, 0);
    const_str_digest_9816e8d1552296af90d250823c964059 = UNSTREAM_STRING_ASCII(&constant_bin[ 12948 ], 46, 0);
    const_str_digest_a0aa42e170b872fd3517d0d685093963 = UNSTREAM_STRING_ASCII(&constant_bin[ 10006 ], 18, 0);
    const_str_digest_a7fa929725106fc5b33607dee30bb84b = UNSTREAM_STRING_ASCII(&constant_bin[ 12994 ], 36, 0);
    const_str_digest_adc474dd61fbd736d69c1bac5d9712e0 = UNSTREAM_STRING_ASCII(&constant_bin[ 13030 ], 47, 0);
    const_str_digest_b9c4baf879ebd882d40843df3a4dead7 = UNSTREAM_STRING_ASCII(&constant_bin[ 3130 ], 2, 1);
    const_str_digest_da609fb9798623e87040dd3347dd4e2b = UNSTREAM_STRING_ASCII(&constant_bin[ 3592 ], 25, 0);
    const_str_digest_da9f3a6afe07a7bdcf8222f42daf9d25 = UNSTREAM_STRING_ASCII(&constant_bin[ 13077 ], 17, 0);
    const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77 = UNSTREAM_STRING_ASCII(&constant_bin[ 3368 ], 2, 0);
    const_str_digest_ebebb18731664a12452b2ba6915b22ed = UNSTREAM_STRING_ASCII(&constant_bin[ 13094 ], 2, 0);
    const_str_digest_fcf040720b88d60da4ce975010c44a3a = UNSTREAM_STRING_ASCII(&constant_bin[ 13096 ], 38, 0);
    const_tuple_str_digest_da9f3a6afe07a7bdcf8222f42daf9d25_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_da9f3a6afe07a7bdcf8222f42daf9d25_tuple, 0, const_str_digest_da9f3a6afe07a7bdcf8222f42daf9d25); Py_INCREF(const_str_digest_da9f3a6afe07a7bdcf8222f42daf9d25);
    const_tuple_str_digest_ebebb18731664a12452b2ba6915b22ed_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_ebebb18731664a12452b2ba6915b22ed_tuple, 0, const_str_digest_ebebb18731664a12452b2ba6915b22ed); Py_INCREF(const_str_digest_ebebb18731664a12452b2ba6915b22ed);
    const_tuple_anon_function_anon_builtin_function_or_method_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_anon_function_anon_builtin_function_or_method_tuple, 0, (PyObject *)&PyFunction_Type); Py_INCREF((PyObject *)&PyFunction_Type);
    PyTuple_SET_ITEM(const_tuple_anon_function_anon_builtin_function_or_method_tuple, 1, (PyObject *)&PyCFunction_Type); Py_INCREF((PyObject *)&PyCFunction_Type);

#if _NUITKA_EXE
    /* Set the "sys.executable" path to the original CPython executable. */
    PySys_SetObject(
        (char *)"executable",
        const_str_digest_a7fa929725106fc5b33607dee30bb84b
    );

#ifndef _NUITKA_STANDALONE
    /* Set the "sys.prefix" path to the original one. */
    PySys_SetObject(
        (char *)"prefix",
        const_str_digest_da609fb9798623e87040dd3347dd4e2b
    );

    /* Set the "sys.prefix" path to the original one. */
    PySys_SetObject(
        (char *)"exec_prefix",
        const_str_digest_da609fb9798623e87040dd3347dd4e2b
    );


#if PYTHON_VERSION >= 300
    /* Set the "sys.base_prefix" path to the original one. */
    PySys_SetObject(
        (char *)"base_prefix",
        const_str_digest_da609fb9798623e87040dd3347dd4e2b
    );

    /* Set the "sys.exec_base_prefix" path to the original one. */
    PySys_SetObject(
        (char *)"base_exec_prefix",
        const_str_digest_da609fb9798623e87040dd3347dd4e2b
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
