/* Generated code for Python module 'dns.rdatatype'
 * created by Nuitka version 0.6.8.4
 *
 * This code is in part copyright 2020 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_dns$rdatatype" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dns$rdatatype;
PyDictObject *moduledict_dns$rdatatype;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_angle_dictcontraction;
extern PyObject *const_int_pos_12;
extern PyObject *const_int_pos_20;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain__singletons;
extern PyObject *const_int_pos_24;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_plain_AVC;
extern PyObject *const_str_digest_4d995bb32f101017e85f92250eb6aecc;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_int_pos_42;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_int_pos_22;
extern PyObject *const_int_pos_9;
extern PyObject *const_str_plain___file__;
static PyObject *const_int_pos_55;
static PyObject *const_int_pos_249;
extern PyObject *const_str_plain_group;
static PyObject *const_str_digest_ce38c0b7a1e7f2d0350eae64edadf285;
extern PyObject *const_int_pos_11;
static PyObject *const_str_plain_CDS;
extern PyObject *const_int_pos_39;
static PyObject *const_str_plain_APL;
extern PyObject *const_str_plain_AXFR;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_to_text;
static PyObject *const_int_pos_19;
extern PyObject *const_str_plain_PTR;
static PyObject *const_str_plain_GPOS;
static PyObject *const_str_plain_CERT;
static PyObject *const_str_plain_DNAME;
static PyObject *const_str_plain_EUI64;
static PyObject *const_int_pos_23;
extern PyObject *const_str_plain_exception;
extern PyObject *const_int_pos_17;
static PyObject *const_int_pos_250;
extern PyObject *const_int_pos_6;
static PyObject *const_int_pos_257;
extern PyObject *const_str_plain__by_text;
static PyObject *const_int_pos_25;
static PyObject *const_int_pos_27;
static PyObject *const_int_pos_52;
extern PyObject *const_str_plain_dns;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_41;
extern PyObject *const_str_plain_is_singleton;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_int_pos_16;
extern PyObject *const_int_pos_33;
extern PyObject *const_int_pos_30;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_plain_MG;
static PyObject *const_str_plain_UNSPEC;
static PyObject *const_int_pos_99;
static PyObject *const_str_plain_CDNSKEY;
static PyObject *const_int_pos_62;
static PyObject *const_int_pos_258;
extern PyObject *const_str_digest_3942994be9697bf77c7c2d2968097727;
static PyObject *const_str_digest_e9451610c9676a726f50fd8b76dddcd6;
extern PyObject *const_str_plain_rdtype;
static PyObject *const_str_plain_NSAP_PTR;
static PyObject *const_str_plain_EUI48;
static PyObject *const_str_plain_ISDN;
static PyObject *const_str_plain_NSAP;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain__metatypes;
static PyObject *const_int_pos_38;
extern PyObject *const_str_plain_SIG;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_7c51a0813f6cee1bc16c42973b271783;
static PyObject *const_str_plain_MAILA;
static PyObject *const_str_plain_MF;
static PyObject *const_str_plain_NULL;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_DNSException;
extern PyObject *const_int_pos_65535;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_MD;
static PyObject *const_str_plain_RT;
static PyObject *const_str_plain_KEY;
static PyObject *const_str_plain_UnknownRdatatype;
static PyObject *const_int_pos_48;
static PyObject *const_str_digest_c0e8f2dd51f9b5c7c89a89b0a5d7624b;
static PyObject *const_int_pos_59;
extern PyObject *const_str_plain_is_metatype;
static PyObject *const_str_plain_AFSDB;
static PyObject *const_str_digest_22f9e76526db8842ba562b20330e3929;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_AAAA;
static PyObject *const_str_plain_SRV;
static PyObject *const_str_digest_2788b6baee241e4dc5eba1964df5bbca;
static PyObject *const_str_plain_TA;
static PyObject *const_str_plain_CSYNC;
extern PyObject *const_str_plain_compile;
static PyObject *const_str_plain_NS;
extern PyObject *const_int_pos_60;
extern PyObject *const_str_plain_match;
static PyObject *const_int_pos_109;
extern PyObject *const_tuple_str_plain_value_str_plain_text_tuple;
extern PyObject *const_str_plain_OPT;
static PyObject *const_str_plain_CAA;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_int_pos_46;
static PyObject *const_int_pos_26;
extern PyObject *const_str_plain_RRSIG;
extern PyObject *const_str_plain_I;
static PyObject *const_str_plain_HIP;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_upper;
static PyObject *const_str_plain_NSEC;
static PyObject *const_str_plain_DHCID;
extern PyObject *const_int_pos_15;
static PyObject *const_str_plain_KX;
static PyObject *const_str_digest_a6cd0972ce604dcabcbb9770378d1738;
static PyObject *const_int_pos_21;
static PyObject *const_str_plain_MINFO;
extern PyObject *const_int_pos_18;
static PyObject *const_str_plain_TXT;
static PyObject *const_int_pos_51;
extern PyObject *const_str_plain_from_text;
extern PyObject *const_str_plain_text;
extern PyObject *const_int_pos_37;
extern PyObject *const_int_pos_254;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_MR;
extern PyObject *const_str_plain_rdtype_text;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_plain_TLSA;
extern PyObject *const_str_plain_x;
static PyObject *const_str_plain_MB;
static PyObject *const_str_plain_DS;
extern PyObject *const_str_plain_IXFR;
static PyObject *const_str_plain_NXT;
extern PyObject *const_int_pos_36;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_SOA;
static PyObject *const_int_pos_50;
extern PyObject *const_int_pos_32768;
static PyObject *const_str_plain_SPF;
extern PyObject *const_str_plain_type;
extern PyObject *const_int_pos_45;
static PyObject *const_str_plain_NSEC3;
extern PyObject *const_int_pos_13;
static PyObject *const_str_plain_MAILB;
extern PyObject *const_int_pos_47;
extern PyObject *const_str_plain___cached__;
static PyObject *const_int_pos_252;
extern PyObject *const_int_pos_253;
static PyObject *const_str_plain_TKEY;
extern PyObject *const_tuple_str_plain_x_str_plain_y_tuple;
static PyObject *const_str_plain_TYPE;
extern PyObject *const_str_plain_CNAME;
static PyObject *const_str_digest_937c697f853e396f95de247fbf2d6145;
static PyObject *const_str_plain_RP;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_e0d01e548b37df92fd9aed5f27570280;
extern PyObject *const_int_pos_44;
static PyObject *const_int_pos_61;
static PyObject *const_str_plain_DNSKEY;
static PyObject *const_str_plain_URI;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_108;
extern PyObject *const_str_plain_y;
extern PyObject *const_int_pos_256;
static PyObject *const_int_pos_32769;
static PyObject *const_str_plain_NSEC3PARAM;
static PyObject *const_str_digest_2f58886b2c1f395ac0b5c7c5c96ed03f;
extern PyObject *const_str_plain_ANY;
static PyObject *const_str_plain_NAPTR;
static PyObject *const_str_plain_SSHFP;
extern PyObject *const_str_plain_register_type;
static PyObject *const_int_pos_251;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_103;
extern PyObject *const_str_digest_fcf040720b88d60da4ce975010c44a3a;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_plain_OPENPGPKEY;
extern PyObject *const_str_plain__by_value;
static PyObject *const_str_digest_6f1aa42e861eea04c7f6cab5acf2772e;
static PyObject *const_str_plain_LOC;
extern PyObject *const_int_pos_255;
static PyObject *const_str_plain_DLV;
static PyObject *const_str_plain_X25;
static PyObject *const_str_plain_IPSECKEY;
extern PyObject *const_str_plain_TSIG;
static PyObject *const_str_plain_WKS;
static PyObject *const_str_plain_HINFO;
extern PyObject *const_tuple_str_plain_text_str_plain_value_str_plain_match_tuple;
extern PyObject *const_int_pos_7;
static PyObject *const_int_pos_28;
static PyObject *const_str_plain_MX;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_35;
extern PyObject *const_str_plain_A;
static PyObject *const_str_plain_PX;
static PyObject *const_str_plain__unknown_type_pattern;
extern PyObject *const_int_pos_2;
static PyObject *const_int_pos_29;
static PyObject *const_tuple_str_plain_rdtype_tuple;
static PyObject *const_str_plain_A6;
extern PyObject *const_int_pos_49;
extern PyObject *const_str_plain_NONE;
extern PyObject *const_int_pos_43;
static PyObject *const_int_pos_14;
static PyObject *const_str_digest_a9a897f8a3e373c1d354ef6c4741f705;
static PyObject *const_tuple_66e3c2d5903aec506b1312c0d7dcdecd_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain__singletons = UNSTREAM_STRING_ASCII(&constant_bin[ 7328 ], 11, 1);
    const_str_plain_AVC = UNSTREAM_STRING_ASCII(&constant_bin[ 73935 ], 3, 1);
    const_int_pos_55 = PyLong_FromUnsignedLong(55ul);
    const_int_pos_249 = PyLong_FromUnsignedLong(249ul);
    const_str_digest_ce38c0b7a1e7f2d0350eae64edadf285 = UNSTREAM_STRING_ASCII(&constant_bin[ 73938 ], 36, 0);
    const_str_plain_CDS = UNSTREAM_STRING_ASCII(&constant_bin[ 73974 ], 3, 1);
    const_str_plain_APL = UNSTREAM_STRING_ASCII(&constant_bin[ 73977 ], 3, 1);
    const_int_pos_19 = PyLong_FromUnsignedLong(19ul);
    const_str_plain_GPOS = UNSTREAM_STRING_ASCII(&constant_bin[ 73980 ], 4, 1);
    const_str_plain_CERT = UNSTREAM_STRING_ASCII(&constant_bin[ 73984 ], 4, 1);
    const_str_plain_DNAME = UNSTREAM_STRING_ASCII(&constant_bin[ 7436 ], 5, 1);
    const_str_plain_EUI64 = UNSTREAM_STRING_ASCII(&constant_bin[ 73988 ], 5, 1);
    const_int_pos_23 = PyLong_FromUnsignedLong(23ul);
    const_int_pos_250 = PyLong_FromUnsignedLong(250ul);
    const_int_pos_257 = PyLong_FromUnsignedLong(257ul);
    const_int_pos_25 = PyLong_FromUnsignedLong(25ul);
    const_int_pos_27 = PyLong_FromUnsignedLong(27ul);
    const_int_pos_52 = PyLong_FromUnsignedLong(52ul);
    const_str_plain_MG = UNSTREAM_STRING_ASCII(&constant_bin[ 73993 ], 2, 1);
    const_str_plain_UNSPEC = UNSTREAM_STRING_ASCII(&constant_bin[ 73995 ], 6, 1);
    const_int_pos_99 = PyLong_FromUnsignedLong(99ul);
    const_str_plain_CDNSKEY = UNSTREAM_STRING_ASCII(&constant_bin[ 74001 ], 7, 1);
    const_int_pos_62 = PyLong_FromUnsignedLong(62ul);
    const_int_pos_258 = PyLong_FromUnsignedLong(258ul);
    const_str_digest_e9451610c9676a726f50fd8b76dddcd6 = UNSTREAM_STRING_ASCII(&constant_bin[ 74008 ], 22, 0);
    const_str_plain_NSAP_PTR = UNSTREAM_STRING_ASCII(&constant_bin[ 74030 ], 8, 1);
    const_str_plain_EUI48 = UNSTREAM_STRING_ASCII(&constant_bin[ 74038 ], 5, 1);
    const_str_plain_ISDN = UNSTREAM_STRING_ASCII(&constant_bin[ 74043 ], 4, 1);
    const_str_plain_NSAP = UNSTREAM_STRING_ASCII(&constant_bin[ 74030 ], 4, 1);
    const_str_plain__metatypes = UNSTREAM_STRING_ASCII(&constant_bin[ 7296 ], 10, 1);
    const_int_pos_38 = PyLong_FromUnsignedLong(38ul);
    const_str_digest_7c51a0813f6cee1bc16c42973b271783 = UNSTREAM_STRING_ASCII(&constant_bin[ 74047 ], 16, 0);
    const_str_plain_MAILA = UNSTREAM_STRING_ASCII(&constant_bin[ 74063 ], 5, 1);
    const_str_plain_MF = UNSTREAM_STRING_ASCII(&constant_bin[ 74068 ], 2, 1);
    const_str_plain_NULL = UNSTREAM_STRING_ASCII(&constant_bin[ 74070 ], 4, 1);
    const_str_plain_MD = UNSTREAM_STRING_ASCII(&constant_bin[ 9794 ], 2, 1);
    const_str_plain_RT = UNSTREAM_STRING_ASCII(&constant_bin[ 14707 ], 2, 1);
    const_str_plain_KEY = UNSTREAM_STRING_ASCII(&constant_bin[ 7271 ], 3, 1);
    const_str_plain_UnknownRdatatype = UNSTREAM_STRING_ASCII(&constant_bin[ 7232 ], 16, 1);
    const_int_pos_48 = PyLong_FromUnsignedLong(48ul);
    const_str_digest_c0e8f2dd51f9b5c7c89a89b0a5d7624b = UNSTREAM_STRING_ASCII(&constant_bin[ 74074 ], 38, 0);
    const_int_pos_59 = PyLong_FromUnsignedLong(59ul);
    const_str_plain_AFSDB = UNSTREAM_STRING_ASCII(&constant_bin[ 74112 ], 5, 1);
    const_str_digest_22f9e76526db8842ba562b20330e3929 = UNSTREAM_STRING_ASCII(&constant_bin[ 74117 ], 197, 0);
    const_str_plain_SRV = UNSTREAM_STRING_ASCII(&constant_bin[ 74314 ], 3, 1);
    const_str_digest_2788b6baee241e4dc5eba1964df5bbca = UNSTREAM_STRING_ASCII(&constant_bin[ 74317 ], 287, 0);
    const_str_plain_TA = UNSTREAM_STRING_ASCII(&constant_bin[ 14711 ], 2, 1);
    const_str_plain_CSYNC = UNSTREAM_STRING_ASCII(&constant_bin[ 74604 ], 5, 1);
    const_str_plain_NS = UNSTREAM_STRING_ASCII(&constant_bin[ 1561 ], 2, 1);
    const_int_pos_109 = PyLong_FromUnsignedLong(109ul);
    const_str_plain_CAA = UNSTREAM_STRING_ASCII(&constant_bin[ 74609 ], 3, 1);
    const_int_pos_26 = PyLong_FromUnsignedLong(26ul);
    const_str_plain_HIP = UNSTREAM_STRING_ASCII(&constant_bin[ 74612 ], 3, 1);
    const_str_plain_NSEC = UNSTREAM_STRING_ASCII(&constant_bin[ 7463 ], 4, 1);
    const_str_plain_DHCID = UNSTREAM_STRING_ASCII(&constant_bin[ 74615 ], 5, 1);
    const_str_plain_KX = UNSTREAM_STRING_ASCII(&constant_bin[ 74620 ], 2, 1);
    const_str_digest_a6cd0972ce604dcabcbb9770378d1738 = UNSTREAM_STRING_ASCII(&constant_bin[ 74622 ], 13, 0);
    const_int_pos_21 = PyLong_FromUnsignedLong(21ul);
    const_str_plain_MINFO = UNSTREAM_STRING_ASCII(&constant_bin[ 74635 ], 5, 1);
    const_str_plain_TXT = UNSTREAM_STRING_ASCII(&constant_bin[ 74640 ], 3, 1);
    const_int_pos_51 = PyLong_FromUnsignedLong(51ul);
    const_str_plain_MR = UNSTREAM_STRING_ASCII(&constant_bin[ 74643 ], 2, 1);
    const_str_plain_TLSA = UNSTREAM_STRING_ASCII(&constant_bin[ 74645 ], 4, 1);
    const_str_plain_MB = UNSTREAM_STRING_ASCII(&constant_bin[ 74649 ], 2, 1);
    const_str_plain_DS = UNSTREAM_STRING_ASCII(&constant_bin[ 9219 ], 2, 1);
    const_str_plain_NXT = UNSTREAM_STRING_ASCII(&constant_bin[ 7411 ], 3, 1);
    const_int_pos_50 = PyLong_FromUnsignedLong(50ul);
    const_str_plain_SPF = UNSTREAM_STRING_ASCII(&constant_bin[ 74651 ], 3, 1);
    const_str_plain_NSEC3 = UNSTREAM_STRING_ASCII(&constant_bin[ 74654 ], 5, 1);
    const_str_plain_MAILB = UNSTREAM_STRING_ASCII(&constant_bin[ 74264 ], 5, 1);
    const_int_pos_252 = PyLong_FromUnsignedLong(252ul);
    const_str_plain_TKEY = UNSTREAM_STRING_ASCII(&constant_bin[ 7270 ], 4, 1);
    const_str_plain_TYPE = UNSTREAM_STRING_ASCII(&constant_bin[ 74622 ], 4, 1);
    const_str_digest_937c697f853e396f95de247fbf2d6145 = UNSTREAM_STRING_ASCII(&constant_bin[ 74659 ], 60, 0);
    const_str_plain_RP = UNSTREAM_STRING_ASCII(&constant_bin[ 74719 ], 2, 1);
    const_str_digest_e0d01e548b37df92fd9aed5f27570280 = UNSTREAM_STRING_ASCII(&constant_bin[ 74721 ], 281, 0);
    const_int_pos_61 = PyLong_FromUnsignedLong(61ul);
    const_str_plain_DNSKEY = UNSTREAM_STRING_ASCII(&constant_bin[ 74002 ], 6, 1);
    const_str_plain_URI = UNSTREAM_STRING_ASCII(&constant_bin[ 75002 ], 3, 1);
    const_int_pos_32769 = PyLong_FromUnsignedLong(32769ul);
    const_str_plain_NSEC3PARAM = UNSTREAM_STRING_ASCII(&constant_bin[ 75005 ], 10, 1);
    const_str_digest_2f58886b2c1f395ac0b5c7c5c96ed03f = UNSTREAM_STRING_ASCII(&constant_bin[ 75015 ], 8, 0);
    const_str_plain_NAPTR = UNSTREAM_STRING_ASCII(&constant_bin[ 75023 ], 5, 1);
    const_str_plain_SSHFP = UNSTREAM_STRING_ASCII(&constant_bin[ 75028 ], 5, 1);
    const_int_pos_251 = PyLong_FromUnsignedLong(251ul);
    const_str_plain_OPENPGPKEY = UNSTREAM_STRING_ASCII(&constant_bin[ 75033 ], 10, 1);
    const_str_digest_6f1aa42e861eea04c7f6cab5acf2772e = UNSTREAM_STRING_ASCII(&constant_bin[ 75043 ], 394, 0);
    const_str_plain_LOC = UNSTREAM_STRING_ASCII(&constant_bin[ 56350 ], 3, 1);
    const_str_plain_DLV = UNSTREAM_STRING_ASCII(&constant_bin[ 75437 ], 3, 1);
    const_str_plain_X25 = UNSTREAM_STRING_ASCII(&constant_bin[ 75440 ], 3, 1);
    const_str_plain_IPSECKEY = UNSTREAM_STRING_ASCII(&constant_bin[ 75443 ], 8, 1);
    const_str_plain_WKS = UNSTREAM_STRING_ASCII(&constant_bin[ 75451 ], 3, 1);
    const_str_plain_HINFO = UNSTREAM_STRING_ASCII(&constant_bin[ 75454 ], 5, 1);
    const_int_pos_28 = PyLong_FromUnsignedLong(28ul);
    const_str_plain_MX = UNSTREAM_STRING_ASCII(&constant_bin[ 75459 ], 2, 1);
    const_str_plain_PX = UNSTREAM_STRING_ASCII(&constant_bin[ 75461 ], 2, 1);
    const_str_plain__unknown_type_pattern = UNSTREAM_STRING_ASCII(&constant_bin[ 7189 ], 21, 1);
    const_int_pos_29 = PyLong_FromUnsignedLong(29ul);
    const_tuple_str_plain_rdtype_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_rdtype_tuple, 0, const_str_plain_rdtype); Py_INCREF(const_str_plain_rdtype);
    const_str_plain_A6 = UNSTREAM_STRING_ASCII(&constant_bin[ 75463 ], 2, 1);
    const_int_pos_14 = PyLong_FromUnsignedLong(14ul);
    const_str_digest_a9a897f8a3e373c1d354ef6c4741f705 = UNSTREAM_STRING_ASCII(&constant_bin[ 75465 ], 258, 0);
    const_tuple_66e3c2d5903aec506b1312c0d7dcdecd_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_66e3c2d5903aec506b1312c0d7dcdecd_tuple, 0, const_str_plain_rdtype); Py_INCREF(const_str_plain_rdtype);
    PyTuple_SET_ITEM(const_tuple_66e3c2d5903aec506b1312c0d7dcdecd_tuple, 1, const_str_plain_rdtype_text); Py_INCREF(const_str_plain_rdtype_text);
    PyTuple_SET_ITEM(const_tuple_66e3c2d5903aec506b1312c0d7dcdecd_tuple, 2, const_str_plain_is_singleton); Py_INCREF(const_str_plain_is_singleton);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dns$rdatatype(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6c2525664815ad2901739fd30878e651;
static PyCodeObject *codeobj_904d48cecc92bad80ed9f21d685782de;
static PyCodeObject *codeobj_387dcb89ee81466e50b156144167623f;
static PyCodeObject *codeobj_32444586c257df7a5f82ee89ef24fcd3;
static PyCodeObject *codeobj_ee5d63ed97e11b4a99fb08adcc46d137;
static PyCodeObject *codeobj_e4c032b9b7fa80323380d1fcc387e495;
static PyCodeObject *codeobj_98fec927ba79054528d25e8cf42bfc31;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_937c697f853e396f95de247fbf2d6145;
    codeobj_6c2525664815ad2901739fd30878e651 = MAKE_CODEOBJECT(module_filename_obj, 172, CO_NEWLOCALS | CO_NOFREE, const_str_angle_dictcontraction, const_tuple_str_plain_x_str_plain_y_tuple, 1, 0, 0);
    codeobj_904d48cecc92bad80ed9f21d685782de = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_e9451610c9676a726f50fd8b76dddcd6, const_tuple_empty, 0, 0, 0);
    codeobj_387dcb89ee81466e50b156144167623f = MAKE_CODEOBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_from_text, const_tuple_str_plain_text_str_plain_value_str_plain_match_tuple, 1, 0, 0);
    codeobj_32444586c257df7a5f82ee89ef24fcd3 = MAKE_CODEOBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_is_metatype, const_tuple_str_plain_rdtype_tuple, 1, 0, 0);
    codeobj_ee5d63ed97e11b4a99fb08adcc46d137 = MAKE_CODEOBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_is_singleton, const_tuple_str_plain_rdtype_tuple, 1, 0, 0);
    codeobj_e4c032b9b7fa80323380d1fcc387e495 = MAKE_CODEOBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_register_type, const_tuple_66e3c2d5903aec506b1312c0d7dcdecd_tuple, 3, 0, 0);
    codeobj_98fec927ba79054528d25e8cf42bfc31 = MAKE_CODEOBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_to_text, const_tuple_str_plain_value_str_plain_text_tuple, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_dns$rdatatype$$$function_1_from_text();


static PyObject *MAKE_FUNCTION_dns$rdatatype$$$function_2_to_text();


static PyObject *MAKE_FUNCTION_dns$rdatatype$$$function_3_is_metatype();


static PyObject *MAKE_FUNCTION_dns$rdatatype$$$function_4_is_singleton();


static PyObject *MAKE_FUNCTION_dns$rdatatype$$$function_5_register_type(PyObject *defaults);


// The module function definitions.
static PyObject *impl_dns$rdatatype$$$function_1_from_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    PyObject *var_value = NULL;
    PyObject *var_match = NULL;
    struct Nuitka_FrameObject *frame_387dcb89ee81466e50b156144167623f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_387dcb89ee81466e50b156144167623f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_387dcb89ee81466e50b156144167623f)) {
        Py_XDECREF(cache_frame_387dcb89ee81466e50b156144167623f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_387dcb89ee81466e50b156144167623f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_387dcb89ee81466e50b156144167623f = MAKE_FUNCTION_FRAME(codeobj_387dcb89ee81466e50b156144167623f, module_dns$rdatatype, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_387dcb89ee81466e50b156144167623f->m_type_description == NULL);
    frame_387dcb89ee81466e50b156144167623f = cache_frame_387dcb89ee81466e50b156144167623f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_387dcb89ee81466e50b156144167623f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_387dcb89ee81466e50b156144167623f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain__by_text);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__by_text);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3149 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_get);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_called_instance_1 = par_text;
        frame_387dcb89ee81466e50b156144167623f->m_frame.f_lineno = 208;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_upper);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 208;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_387dcb89ee81466e50b156144167623f->m_frame.f_lineno = 208;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_value == NULL);
        var_value = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_value);
        tmp_compexpr_left_1 = var_value;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain__unknown_type_pattern);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__unknown_type_pattern);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7183 ], 43, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT(par_text);
        tmp_args_element_name_2 = par_text;
        frame_387dcb89ee81466e50b156144167623f->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = {tmp_args_element_name_2};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_match, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_match == NULL);
        var_match = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_match);
        tmp_compexpr_left_2 = var_match;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_UnknownRdatatype);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_UnknownRdatatype);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7226 ], 38, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 212;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_raise_type_1 = tmp_mvar_value_3;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 212;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_match);
        tmp_called_instance_3 = var_match;
        frame_387dcb89ee81466e50b156144167623f->m_frame.f_lineno = 213;
        tmp_int_arg_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_int_pos_1_tuple, 0));

        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_or_left_value_1_object_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tmp_or_right_value_1_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_value);
        tmp_compexpr_left_3 = var_value;
        tmp_compexpr_right_3 = const_int_0;
        tmp_tmp_or_left_value_1_object_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_or_left_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_or_left_value_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_left_value_1_object_1);

            exception_lineno = 214;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_or_left_value_1_object_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_value);
        tmp_compexpr_left_4 = var_value;
        tmp_compexpr_right_4 = const_int_pos_65535;
        tmp_tmp_or_right_value_1_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_tmp_or_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_or_right_value_1_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_right_value_1_object_1);

            exception_lineno = 214;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_or_right_value_1_object_1);
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_c0e8f2dd51f9b5c7c89a89b0a5d7624b;
        frame_387dcb89ee81466e50b156144167623f->m_frame.f_lineno = 215;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 215;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_387dcb89ee81466e50b156144167623f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_387dcb89ee81466e50b156144167623f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_387dcb89ee81466e50b156144167623f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_387dcb89ee81466e50b156144167623f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_387dcb89ee81466e50b156144167623f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_387dcb89ee81466e50b156144167623f,
        type_description_1,
        par_text,
        var_value,
        var_match
    );


    // Release cached frame.
    if (frame_387dcb89ee81466e50b156144167623f == cache_frame_387dcb89ee81466e50b156144167623f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_387dcb89ee81466e50b156144167623f);
    }
    cache_frame_387dcb89ee81466e50b156144167623f = NULL;

    assertFrameObject(frame_387dcb89ee81466e50b156144167623f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_value);
    tmp_return_value = var_value;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_value);
    Py_DECREF(var_value);
    var_value = NULL;

    Py_XDECREF(var_match);
    var_match = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_value);
    var_value = NULL;

    Py_XDECREF(var_match);
    var_match = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dns$rdatatype$$$function_2_to_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *var_text = NULL;
    struct Nuitka_FrameObject *frame_98fec927ba79054528d25e8cf42bfc31;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_98fec927ba79054528d25e8cf42bfc31 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_98fec927ba79054528d25e8cf42bfc31)) {
        Py_XDECREF(cache_frame_98fec927ba79054528d25e8cf42bfc31);

#if _DEBUG_REFCOUNTS
        if (cache_frame_98fec927ba79054528d25e8cf42bfc31 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_98fec927ba79054528d25e8cf42bfc31 = MAKE_FUNCTION_FRAME(codeobj_98fec927ba79054528d25e8cf42bfc31, module_dns$rdatatype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_98fec927ba79054528d25e8cf42bfc31->m_type_description == NULL);
    frame_98fec927ba79054528d25e8cf42bfc31 = cache_frame_98fec927ba79054528d25e8cf42bfc31;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_98fec927ba79054528d25e8cf42bfc31);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_98fec927ba79054528d25e8cf42bfc31) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_or_left_value_1_object_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_or_right_value_1_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_value);
        tmp_compexpr_left_1 = par_value;
        tmp_compexpr_right_1 = const_int_0;
        tmp_tmp_or_left_value_1_object_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_or_left_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_or_left_value_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_left_value_1_object_1);

            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_or_left_value_1_object_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_value);
        tmp_compexpr_left_2 = par_value;
        tmp_compexpr_right_2 = const_int_pos_65535;
        tmp_tmp_or_right_value_1_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_or_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_or_right_value_1_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_right_value_1_object_1);

            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_or_right_value_1_object_1);
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_c0e8f2dd51f9b5c7c89a89b0a5d7624b;
        frame_98fec927ba79054528d25e8cf42bfc31->m_frame.f_lineno = 231;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 231;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain__by_value);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__by_value);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3209 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 232;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_value);
        tmp_args_element_name_1 = par_value;
        frame_98fec927ba79054528d25e8cf42bfc31->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_get, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_text == NULL);
        var_text = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(var_text);
        tmp_compexpr_left_3 = var_text;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_operand_name_1;
        tmp_left_name_1 = const_str_plain_TYPE;
        CHECK_OBJECT(par_value);
        tmp_operand_name_1 = par_value;
        tmp_right_name_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_name_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_text;
            assert(old != NULL);
            var_text = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_98fec927ba79054528d25e8cf42bfc31);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_98fec927ba79054528d25e8cf42bfc31);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_98fec927ba79054528d25e8cf42bfc31, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_98fec927ba79054528d25e8cf42bfc31->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_98fec927ba79054528d25e8cf42bfc31, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_98fec927ba79054528d25e8cf42bfc31,
        type_description_1,
        par_value,
        var_text
    );


    // Release cached frame.
    if (frame_98fec927ba79054528d25e8cf42bfc31 == cache_frame_98fec927ba79054528d25e8cf42bfc31) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_98fec927ba79054528d25e8cf42bfc31);
    }
    cache_frame_98fec927ba79054528d25e8cf42bfc31 = NULL;

    assertFrameObject(frame_98fec927ba79054528d25e8cf42bfc31);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_text);
    tmp_return_value = var_text;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_text);
    Py_DECREF(var_text);
    var_text = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_text);
    var_text = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dns$rdatatype$$$function_3_is_metatype(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rdtype = python_pars[0];
    struct Nuitka_FrameObject *frame_32444586c257df7a5f82ee89ef24fcd3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_32444586c257df7a5f82ee89ef24fcd3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_32444586c257df7a5f82ee89ef24fcd3)) {
        Py_XDECREF(cache_frame_32444586c257df7a5f82ee89ef24fcd3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_32444586c257df7a5f82ee89ef24fcd3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_32444586c257df7a5f82ee89ef24fcd3 = MAKE_FUNCTION_FRAME(codeobj_32444586c257df7a5f82ee89ef24fcd3, module_dns$rdatatype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_32444586c257df7a5f82ee89ef24fcd3->m_type_description == NULL);
    frame_32444586c257df7a5f82ee89ef24fcd3 = cache_frame_32444586c257df7a5f82ee89ef24fcd3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_32444586c257df7a5f82ee89ef24fcd3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_32444586c257df7a5f82ee89ef24fcd3) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT(par_rdtype);
        tmp_compexpr_left_1 = par_rdtype;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_TKEY);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TKEY);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7264 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_and_left_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_rdtype);
        tmp_compexpr_left_2 = par_rdtype;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_ANY);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ANY);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6979 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_2;
        tmp_and_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_left_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_rdtype);
        tmp_compexpr_left_3 = par_rdtype;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain__metatypes);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__metatypes);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7290 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_3 = tmp_mvar_value_3;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_32444586c257df7a5f82ee89ef24fcd3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_32444586c257df7a5f82ee89ef24fcd3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_32444586c257df7a5f82ee89ef24fcd3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_32444586c257df7a5f82ee89ef24fcd3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_32444586c257df7a5f82ee89ef24fcd3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32444586c257df7a5f82ee89ef24fcd3, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_32444586c257df7a5f82ee89ef24fcd3,
        type_description_1,
        par_rdtype
    );


    // Release cached frame.
    if (frame_32444586c257df7a5f82ee89ef24fcd3 == cache_frame_32444586c257df7a5f82ee89ef24fcd3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_32444586c257df7a5f82ee89ef24fcd3);
    }
    cache_frame_32444586c257df7a5f82ee89ef24fcd3 = NULL;

    assertFrameObject(frame_32444586c257df7a5f82ee89ef24fcd3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_rdtype);
    Py_DECREF(par_rdtype);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_rdtype);
    Py_DECREF(par_rdtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dns$rdatatype$$$function_4_is_singleton(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rdtype = python_pars[0];
    struct Nuitka_FrameObject *frame_ee5d63ed97e11b4a99fb08adcc46d137;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ee5d63ed97e11b4a99fb08adcc46d137 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ee5d63ed97e11b4a99fb08adcc46d137)) {
        Py_XDECREF(cache_frame_ee5d63ed97e11b4a99fb08adcc46d137);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee5d63ed97e11b4a99fb08adcc46d137 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee5d63ed97e11b4a99fb08adcc46d137 = MAKE_FUNCTION_FRAME(codeobj_ee5d63ed97e11b4a99fb08adcc46d137, module_dns$rdatatype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ee5d63ed97e11b4a99fb08adcc46d137->m_type_description == NULL);
    frame_ee5d63ed97e11b4a99fb08adcc46d137 = cache_frame_ee5d63ed97e11b4a99fb08adcc46d137;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ee5d63ed97e11b4a99fb08adcc46d137);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ee5d63ed97e11b4a99fb08adcc46d137) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_rdtype);
        tmp_compexpr_left_1 = par_rdtype;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain__singletons);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__singletons);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7322 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee5d63ed97e11b4a99fb08adcc46d137);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee5d63ed97e11b4a99fb08adcc46d137);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee5d63ed97e11b4a99fb08adcc46d137);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ee5d63ed97e11b4a99fb08adcc46d137, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee5d63ed97e11b4a99fb08adcc46d137->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee5d63ed97e11b4a99fb08adcc46d137, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee5d63ed97e11b4a99fb08adcc46d137,
        type_description_1,
        par_rdtype
    );


    // Release cached frame.
    if (frame_ee5d63ed97e11b4a99fb08adcc46d137 == cache_frame_ee5d63ed97e11b4a99fb08adcc46d137) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_ee5d63ed97e11b4a99fb08adcc46d137);
    }
    cache_frame_ee5d63ed97e11b4a99fb08adcc46d137 = NULL;

    assertFrameObject(frame_ee5d63ed97e11b4a99fb08adcc46d137);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_rdtype);
    Py_DECREF(par_rdtype);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_rdtype);
    Py_DECREF(par_rdtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dns$rdatatype$$$function_5_register_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rdtype = python_pars[0];
    PyObject *par_rdtype_text = python_pars[1];
    PyObject *par_is_singleton = python_pars[2];
    struct Nuitka_FrameObject *frame_e4c032b9b7fa80323380d1fcc387e495;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e4c032b9b7fa80323380d1fcc387e495 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e4c032b9b7fa80323380d1fcc387e495)) {
        Py_XDECREF(cache_frame_e4c032b9b7fa80323380d1fcc387e495);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e4c032b9b7fa80323380d1fcc387e495 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e4c032b9b7fa80323380d1fcc387e495 = MAKE_FUNCTION_FRAME(codeobj_e4c032b9b7fa80323380d1fcc387e495, module_dns$rdatatype, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e4c032b9b7fa80323380d1fcc387e495->m_type_description == NULL);
    frame_e4c032b9b7fa80323380d1fcc387e495 = cache_frame_e4c032b9b7fa80323380d1fcc387e495;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e4c032b9b7fa80323380d1fcc387e495);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e4c032b9b7fa80323380d1fcc387e495) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_rdtype);
        tmp_ass_subvalue_1 = par_rdtype;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain__by_text);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__by_text);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3149 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 284;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_rdtype_text);
        tmp_ass_subscript_1 = par_rdtype_text;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_rdtype_text);
        tmp_ass_subvalue_2 = par_rdtype_text;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain__by_value);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__by_value);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3209 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 285;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = tmp_mvar_value_2;
        CHECK_OBJECT(par_rdtype);
        tmp_ass_subscript_2 = par_rdtype;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_is_singleton);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_is_singleton);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_ass_subscript_3;
        tmp_ass_subvalue_3 = Py_True;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain__singletons);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__singletons);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7322 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 287;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = tmp_mvar_value_3;
        CHECK_OBJECT(par_rdtype);
        tmp_ass_subscript_3 = par_rdtype;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e4c032b9b7fa80323380d1fcc387e495);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e4c032b9b7fa80323380d1fcc387e495);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e4c032b9b7fa80323380d1fcc387e495, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e4c032b9b7fa80323380d1fcc387e495->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e4c032b9b7fa80323380d1fcc387e495, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e4c032b9b7fa80323380d1fcc387e495,
        type_description_1,
        par_rdtype,
        par_rdtype_text,
        par_is_singleton
    );


    // Release cached frame.
    if (frame_e4c032b9b7fa80323380d1fcc387e495 == cache_frame_e4c032b9b7fa80323380d1fcc387e495) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_e4c032b9b7fa80323380d1fcc387e495);
    }
    cache_frame_e4c032b9b7fa80323380d1fcc387e495 = NULL;

    assertFrameObject(frame_e4c032b9b7fa80323380d1fcc387e495);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_rdtype);
    Py_DECREF(par_rdtype);
    CHECK_OBJECT(par_rdtype_text);
    Py_DECREF(par_rdtype_text);
    CHECK_OBJECT(par_is_singleton);
    Py_DECREF(par_is_singleton);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_rdtype);
    Py_DECREF(par_rdtype);
    CHECK_OBJECT(par_rdtype_text);
    Py_DECREF(par_rdtype_text);
    CHECK_OBJECT(par_is_singleton);
    Py_DECREF(par_is_singleton);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_dns$rdatatype$$$function_1_from_text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dns$rdatatype$$$function_1_from_text,
        const_str_plain_from_text,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_387dcb89ee81466e50b156144167623f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dns$rdatatype,
        const_str_digest_6f1aa42e861eea04c7f6cab5acf2772e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dns$rdatatype$$$function_2_to_text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dns$rdatatype$$$function_2_to_text,
        const_str_plain_to_text,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_98fec927ba79054528d25e8cf42bfc31,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dns$rdatatype,
        const_str_digest_a9a897f8a3e373c1d354ef6c4741f705,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dns$rdatatype$$$function_3_is_metatype() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dns$rdatatype$$$function_3_is_metatype,
        const_str_plain_is_metatype,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_32444586c257df7a5f82ee89ef24fcd3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dns$rdatatype,
        const_str_digest_22f9e76526db8842ba562b20330e3929,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dns$rdatatype$$$function_4_is_singleton() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dns$rdatatype$$$function_4_is_singleton,
        const_str_plain_is_singleton,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ee5d63ed97e11b4a99fb08adcc46d137,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dns$rdatatype,
        const_str_digest_e0d01e548b37df92fd9aed5f27570280,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dns$rdatatype$$$function_5_register_type(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dns$rdatatype$$$function_5_register_type,
        const_str_plain_register_type,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e4c032b9b7fa80323380d1fcc387e495,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dns$rdatatype,
        const_str_digest_2788b6baee241e4dc5eba1964df5bbca,
        0
    );

    return (PyObject *)result;
}


extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;
extern PyObject *const_str_empty;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_dns$rdatatype[] = {
    impl_dns$rdatatype$$$function_1_from_text,
    impl_dns$rdatatype$$$function_2_to_text,
    impl_dns$rdatatype$$$function_3_is_metatype,
    impl_dns$rdatatype$$$function_4_is_singleton,
    impl_dns$rdatatype$$$function_5_register_type,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_dns$rdatatype;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_dns$rdatatype) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    // TODO: More stuff needed for Python3, best to re-order arguments of MAKE_CODEOBJECT.
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_dns$rdatatype[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_dns$rdatatype,
        doc,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_dns$rdatatype(PyObject *module) {
    module_dns$rdatatype = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_dns$rdatatype;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("dns.rdatatype: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("dns.rdatatype: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("dns.rdatatype: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initdns$rdatatype\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_dns$rdatatype = MODULE_DICT(module_dns$rdatatype);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL)
        {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_dns$rdatatype,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_dns$rdatatype,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_dns$rdatatype,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_dns$rdatatype,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_dns$rdatatype,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_dns$rdatatype);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain___name__),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF(module_spec_class);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE(spec_value, const_str_plain_submodule_search_locations, PyList_New(0));
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_x = NULL;
    PyObject *outline_0_var_y = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_904d48cecc92bad80ed9f21d685782de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_6c2525664815ad2901739fd30878e651_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_6c2525664815ad2901739fd30878e651_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_dns$rdatatype_189 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_7c51a0813f6cee1bc16c42973b271783;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_937c697f853e396f95de247fbf2d6145;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_904d48cecc92bad80ed9f21d685782de = MAKE_MODULE_FRAME(codeobj_904d48cecc92bad80ed9f21d685782de, module_dns$rdatatype);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_904d48cecc92bad80ed9f21d685782de);
    assert(Py_REFCNT(frame_904d48cecc92bad80ed9f21d685782de) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_937c697f853e396f95de247fbf2d6145;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_assattr_target_1 = tmp_mvar_value_1;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_origin, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_2);
        tmp_assattr_target_2 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_has_location, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_re;
        tmp_globals_name_1 = (PyObject *)moduledict_dns$rdatatype;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_904d48cecc92bad80ed9f21d685782de->m_frame.f_lineno = 20;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_3942994be9697bf77c7c2d2968097727;
        tmp_globals_name_2 = (PyObject *)moduledict_dns$rdatatype;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_904d48cecc92bad80ed9f21d685782de->m_frame.f_lineno = 22;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_dns, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_int_0;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NONE, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_int_pos_1;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_A, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_int_pos_2;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NS, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_int_pos_3;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MD, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_int_pos_4;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MF, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_int_pos_5;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_CNAME, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = const_int_pos_6;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_SOA, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = const_int_pos_7;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MB, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = const_int_pos_8;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MG, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = const_int_pos_9;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MR, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = const_int_pos_10;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NULL, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = const_int_pos_11;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_WKS, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = const_int_pos_12;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_PTR, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = const_int_pos_13;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_HINFO, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = const_int_pos_14;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MINFO, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = const_int_pos_15;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MX, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = const_int_pos_16;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_TXT, tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = const_int_pos_17;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_RP, tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = const_int_pos_18;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_AFSDB, tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = const_int_pos_19;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_X25, tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = const_int_pos_20;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_ISDN, tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = const_int_pos_21;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_RT, tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = const_int_pos_22;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NSAP, tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = const_int_pos_23;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NSAP_PTR, tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = const_int_pos_24;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_SIG, tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = const_int_pos_25;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_KEY, tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = const_int_pos_26;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_PX, tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = const_int_pos_27;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_GPOS, tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = const_int_pos_28;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_AAAA, tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = const_int_pos_29;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_LOC, tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = const_int_pos_30;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NXT, tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = const_int_pos_33;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_SRV, tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = const_int_pos_35;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NAPTR, tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = const_int_pos_36;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_KX, tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = const_int_pos_37;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_CERT, tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = const_int_pos_38;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_A6, tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = const_int_pos_39;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_DNAME, tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = const_int_pos_41;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_OPT, tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = const_int_pos_42;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_APL, tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = const_int_pos_43;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_DS, tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = const_int_pos_44;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_SSHFP, tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = const_int_pos_45;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_IPSECKEY, tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = const_int_pos_46;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_RRSIG, tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = const_int_pos_47;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NSEC, tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = const_int_pos_48;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_DNSKEY, tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = const_int_pos_49;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_DHCID, tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = const_int_pos_50;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NSEC3, tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = const_int_pos_51;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NSEC3PARAM, tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = const_int_pos_52;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_TLSA, tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = const_int_pos_55;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_HIP, tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = const_int_pos_59;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_CDS, tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = const_int_pos_60;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_CDNSKEY, tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = const_int_pos_61;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_OPENPGPKEY, tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = const_int_pos_62;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_CSYNC, tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = const_int_pos_99;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_SPF, tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = const_int_pos_103;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_UNSPEC, tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = const_int_pos_108;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_EUI48, tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = const_int_pos_109;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_EUI64, tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = const_int_pos_249;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_TKEY, tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = const_int_pos_250;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_TSIG, tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = const_int_pos_251;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_IXFR, tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = const_int_pos_252;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_AXFR, tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = const_int_pos_253;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MAILB, tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = const_int_pos_254;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MAILA, tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = const_int_pos_255;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_ANY, tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = const_int_pos_256;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_URI, tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = const_int_pos_257;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_CAA, tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = const_int_pos_258;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_AVC, tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = const_int_pos_32768;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_TA, tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = const_int_pos_32769;
        UPDATE_STRING_DICT0(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_DLV, tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_dict_key_27;
        PyObject *tmp_dict_value_27;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_dict_key_28;
        PyObject *tmp_dict_value_28;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_dict_key_29;
        PyObject *tmp_dict_value_29;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_dict_key_30;
        PyObject *tmp_dict_value_30;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_dict_key_31;
        PyObject *tmp_dict_value_31;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_dict_key_32;
        PyObject *tmp_dict_value_32;
        PyObject *tmp_mvar_value_34;
        PyObject *tmp_dict_key_33;
        PyObject *tmp_dict_value_33;
        PyObject *tmp_mvar_value_35;
        PyObject *tmp_dict_key_34;
        PyObject *tmp_dict_value_34;
        PyObject *tmp_mvar_value_36;
        PyObject *tmp_dict_key_35;
        PyObject *tmp_dict_value_35;
        PyObject *tmp_mvar_value_37;
        PyObject *tmp_dict_key_36;
        PyObject *tmp_dict_value_36;
        PyObject *tmp_mvar_value_38;
        PyObject *tmp_dict_key_37;
        PyObject *tmp_dict_value_37;
        PyObject *tmp_mvar_value_39;
        PyObject *tmp_dict_key_38;
        PyObject *tmp_dict_value_38;
        PyObject *tmp_mvar_value_40;
        PyObject *tmp_dict_key_39;
        PyObject *tmp_dict_value_39;
        PyObject *tmp_mvar_value_41;
        PyObject *tmp_dict_key_40;
        PyObject *tmp_dict_value_40;
        PyObject *tmp_mvar_value_42;
        PyObject *tmp_dict_key_41;
        PyObject *tmp_dict_value_41;
        PyObject *tmp_mvar_value_43;
        PyObject *tmp_dict_key_42;
        PyObject *tmp_dict_value_42;
        PyObject *tmp_mvar_value_44;
        PyObject *tmp_dict_key_43;
        PyObject *tmp_dict_value_43;
        PyObject *tmp_mvar_value_45;
        PyObject *tmp_dict_key_44;
        PyObject *tmp_dict_value_44;
        PyObject *tmp_mvar_value_46;
        PyObject *tmp_dict_key_45;
        PyObject *tmp_dict_value_45;
        PyObject *tmp_mvar_value_47;
        PyObject *tmp_dict_key_46;
        PyObject *tmp_dict_value_46;
        PyObject *tmp_mvar_value_48;
        PyObject *tmp_dict_key_47;
        PyObject *tmp_dict_value_47;
        PyObject *tmp_mvar_value_49;
        PyObject *tmp_dict_key_48;
        PyObject *tmp_dict_value_48;
        PyObject *tmp_mvar_value_50;
        PyObject *tmp_dict_key_49;
        PyObject *tmp_dict_value_49;
        PyObject *tmp_mvar_value_51;
        PyObject *tmp_dict_key_50;
        PyObject *tmp_dict_value_50;
        PyObject *tmp_mvar_value_52;
        PyObject *tmp_dict_key_51;
        PyObject *tmp_dict_value_51;
        PyObject *tmp_mvar_value_53;
        PyObject *tmp_dict_key_52;
        PyObject *tmp_dict_value_52;
        PyObject *tmp_mvar_value_54;
        PyObject *tmp_dict_key_53;
        PyObject *tmp_dict_value_53;
        PyObject *tmp_mvar_value_55;
        PyObject *tmp_dict_key_54;
        PyObject *tmp_dict_value_54;
        PyObject *tmp_mvar_value_56;
        PyObject *tmp_dict_key_55;
        PyObject *tmp_dict_value_55;
        PyObject *tmp_mvar_value_57;
        PyObject *tmp_dict_key_56;
        PyObject *tmp_dict_value_56;
        PyObject *tmp_mvar_value_58;
        PyObject *tmp_dict_key_57;
        PyObject *tmp_dict_value_57;
        PyObject *tmp_mvar_value_59;
        PyObject *tmp_dict_key_58;
        PyObject *tmp_dict_value_58;
        PyObject *tmp_mvar_value_60;
        PyObject *tmp_dict_key_59;
        PyObject *tmp_dict_value_59;
        PyObject *tmp_mvar_value_61;
        PyObject *tmp_dict_key_60;
        PyObject *tmp_dict_value_60;
        PyObject *tmp_mvar_value_62;
        PyObject *tmp_dict_key_61;
        PyObject *tmp_dict_value_61;
        PyObject *tmp_mvar_value_63;
        PyObject *tmp_dict_key_62;
        PyObject *tmp_dict_value_62;
        PyObject *tmp_mvar_value_64;
        PyObject *tmp_dict_key_63;
        PyObject *tmp_dict_value_63;
        PyObject *tmp_mvar_value_65;
        PyObject *tmp_dict_key_64;
        PyObject *tmp_dict_value_64;
        PyObject *tmp_mvar_value_66;
        PyObject *tmp_dict_key_65;
        PyObject *tmp_dict_value_65;
        PyObject *tmp_mvar_value_67;
        PyObject *tmp_dict_key_66;
        PyObject *tmp_dict_value_66;
        PyObject *tmp_mvar_value_68;
        PyObject *tmp_dict_key_67;
        PyObject *tmp_dict_value_67;
        PyObject *tmp_mvar_value_69;
        PyObject *tmp_dict_key_68;
        PyObject *tmp_dict_value_68;
        PyObject *tmp_mvar_value_70;
        PyObject *tmp_dict_key_69;
        PyObject *tmp_dict_value_69;
        PyObject *tmp_mvar_value_71;
        PyObject *tmp_dict_key_70;
        PyObject *tmp_dict_value_70;
        PyObject *tmp_mvar_value_72;
        tmp_dict_key_1 = const_str_plain_NONE;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NONE);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NONE);
        }

        CHECK_OBJECT(tmp_mvar_value_3);
        tmp_dict_value_1 = tmp_mvar_value_3;
        tmp_assign_source_76 = _PyDict_NewPresized( 70 );
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_A;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_A);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_A);
        }

        CHECK_OBJECT(tmp_mvar_value_4);
        tmp_dict_value_2 = tmp_mvar_value_4;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_NS;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NS);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NS);
        }

        CHECK_OBJECT(tmp_mvar_value_5);
        tmp_dict_value_3 = tmp_mvar_value_5;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_MD;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MD);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MD);
        }

        CHECK_OBJECT(tmp_mvar_value_6);
        tmp_dict_value_4 = tmp_mvar_value_6;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_MF;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MF);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MF);
        }

        CHECK_OBJECT(tmp_mvar_value_7);
        tmp_dict_value_5 = tmp_mvar_value_7;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = const_str_plain_CNAME;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_CNAME);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CNAME);
        }

        CHECK_OBJECT(tmp_mvar_value_8);
        tmp_dict_value_6 = tmp_mvar_value_8;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = const_str_plain_SOA;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_SOA);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SOA);
        }

        CHECK_OBJECT(tmp_mvar_value_9);
        tmp_dict_value_7 = tmp_mvar_value_9;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = const_str_plain_MB;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MB);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MB);
        }

        CHECK_OBJECT(tmp_mvar_value_10);
        tmp_dict_value_8 = tmp_mvar_value_10;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = const_str_plain_MG;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MG);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MG);
        }

        CHECK_OBJECT(tmp_mvar_value_11);
        tmp_dict_value_9 = tmp_mvar_value_11;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = const_str_plain_MR;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MR);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MR);
        }

        CHECK_OBJECT(tmp_mvar_value_12);
        tmp_dict_value_10 = tmp_mvar_value_12;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = const_str_plain_NULL;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NULL);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NULL);
        }

        CHECK_OBJECT(tmp_mvar_value_13);
        tmp_dict_value_11 = tmp_mvar_value_13;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = const_str_plain_WKS;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_WKS);

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_WKS);
        }

        CHECK_OBJECT(tmp_mvar_value_14);
        tmp_dict_value_12 = tmp_mvar_value_14;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = const_str_plain_PTR;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_PTR);

        if (unlikely(tmp_mvar_value_15 == NULL)) {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_PTR);
        }

        CHECK_OBJECT(tmp_mvar_value_15);
        tmp_dict_value_13 = tmp_mvar_value_15;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = const_str_plain_HINFO;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_HINFO);

        if (unlikely(tmp_mvar_value_16 == NULL)) {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HINFO);
        }

        CHECK_OBJECT(tmp_mvar_value_16);
        tmp_dict_value_14 = tmp_mvar_value_16;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = const_str_plain_MINFO;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MINFO);

        if (unlikely(tmp_mvar_value_17 == NULL)) {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MINFO);
        }

        CHECK_OBJECT(tmp_mvar_value_17);
        tmp_dict_value_15 = tmp_mvar_value_17;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = const_str_plain_MX;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MX);

        if (unlikely(tmp_mvar_value_18 == NULL)) {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MX);
        }

        CHECK_OBJECT(tmp_mvar_value_18);
        tmp_dict_value_16 = tmp_mvar_value_18;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = const_str_plain_TXT;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_TXT);

        if (unlikely(tmp_mvar_value_19 == NULL)) {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TXT);
        }

        CHECK_OBJECT(tmp_mvar_value_19);
        tmp_dict_value_17 = tmp_mvar_value_19;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = const_str_plain_RP;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_RP);

        if (unlikely(tmp_mvar_value_20 == NULL)) {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_RP);
        }

        CHECK_OBJECT(tmp_mvar_value_20);
        tmp_dict_value_18 = tmp_mvar_value_20;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = const_str_plain_AFSDB;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_AFSDB);

        if (unlikely(tmp_mvar_value_21 == NULL)) {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_AFSDB);
        }

        CHECK_OBJECT(tmp_mvar_value_21);
        tmp_dict_value_19 = tmp_mvar_value_21;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_20 = const_str_plain_X25;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_X25);

        if (unlikely(tmp_mvar_value_22 == NULL)) {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_X25);
        }

        CHECK_OBJECT(tmp_mvar_value_22);
        tmp_dict_value_20 = tmp_mvar_value_22;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_dict_key_21 = const_str_plain_ISDN;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_ISDN);

        if (unlikely(tmp_mvar_value_23 == NULL)) {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ISDN);
        }

        CHECK_OBJECT(tmp_mvar_value_23);
        tmp_dict_value_21 = tmp_mvar_value_23;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = const_str_plain_RT;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_RT);

        if (unlikely(tmp_mvar_value_24 == NULL)) {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_RT);
        }

        CHECK_OBJECT(tmp_mvar_value_24);
        tmp_dict_value_22 = tmp_mvar_value_24;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_23 = const_str_plain_NSAP;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NSAP);

        if (unlikely(tmp_mvar_value_25 == NULL)) {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NSAP);
        }

        CHECK_OBJECT(tmp_mvar_value_25);
        tmp_dict_value_23 = tmp_mvar_value_25;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = const_str_digest_2f58886b2c1f395ac0b5c7c5c96ed03f;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NSAP_PTR);

        if (unlikely(tmp_mvar_value_26 == NULL)) {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NSAP_PTR);
        }

        CHECK_OBJECT(tmp_mvar_value_26);
        tmp_dict_value_24 = tmp_mvar_value_26;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_25 = const_str_plain_SIG;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_SIG);

        if (unlikely(tmp_mvar_value_27 == NULL)) {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SIG);
        }

        CHECK_OBJECT(tmp_mvar_value_27);
        tmp_dict_value_25 = tmp_mvar_value_27;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_dict_key_26 = const_str_plain_KEY;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_KEY);

        if (unlikely(tmp_mvar_value_28 == NULL)) {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_KEY);
        }

        CHECK_OBJECT(tmp_mvar_value_28);
        tmp_dict_value_26 = tmp_mvar_value_28;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_dict_key_27 = const_str_plain_PX;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_PX);

        if (unlikely(tmp_mvar_value_29 == NULL)) {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_PX);
        }

        CHECK_OBJECT(tmp_mvar_value_29);
        tmp_dict_value_27 = tmp_mvar_value_29;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_dict_key_28 = const_str_plain_GPOS;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_GPOS);

        if (unlikely(tmp_mvar_value_30 == NULL)) {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_GPOS);
        }

        CHECK_OBJECT(tmp_mvar_value_30);
        tmp_dict_value_28 = tmp_mvar_value_30;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_28, tmp_dict_value_28);
        assert(!(tmp_res != 0));
        tmp_dict_key_29 = const_str_plain_AAAA;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_AAAA);

        if (unlikely(tmp_mvar_value_31 == NULL)) {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_AAAA);
        }

        CHECK_OBJECT(tmp_mvar_value_31);
        tmp_dict_value_29 = tmp_mvar_value_31;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_29, tmp_dict_value_29);
        assert(!(tmp_res != 0));
        tmp_dict_key_30 = const_str_plain_LOC;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_LOC);

        if (unlikely(tmp_mvar_value_32 == NULL)) {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LOC);
        }

        CHECK_OBJECT(tmp_mvar_value_32);
        tmp_dict_value_30 = tmp_mvar_value_32;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_30, tmp_dict_value_30);
        assert(!(tmp_res != 0));
        tmp_dict_key_31 = const_str_plain_NXT;
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NXT);

        if (unlikely(tmp_mvar_value_33 == NULL)) {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NXT);
        }

        CHECK_OBJECT(tmp_mvar_value_33);
        tmp_dict_value_31 = tmp_mvar_value_33;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_31, tmp_dict_value_31);
        assert(!(tmp_res != 0));
        tmp_dict_key_32 = const_str_plain_SRV;
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_SRV);

        if (unlikely(tmp_mvar_value_34 == NULL)) {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SRV);
        }

        CHECK_OBJECT(tmp_mvar_value_34);
        tmp_dict_value_32 = tmp_mvar_value_34;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_32, tmp_dict_value_32);
        assert(!(tmp_res != 0));
        tmp_dict_key_33 = const_str_plain_NAPTR;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NAPTR);

        if (unlikely(tmp_mvar_value_35 == NULL)) {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NAPTR);
        }

        CHECK_OBJECT(tmp_mvar_value_35);
        tmp_dict_value_33 = tmp_mvar_value_35;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_33, tmp_dict_value_33);
        assert(!(tmp_res != 0));
        tmp_dict_key_34 = const_str_plain_KX;
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_KX);

        if (unlikely(tmp_mvar_value_36 == NULL)) {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_KX);
        }

        CHECK_OBJECT(tmp_mvar_value_36);
        tmp_dict_value_34 = tmp_mvar_value_36;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_34, tmp_dict_value_34);
        assert(!(tmp_res != 0));
        tmp_dict_key_35 = const_str_plain_CERT;
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_CERT);

        if (unlikely(tmp_mvar_value_37 == NULL)) {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CERT);
        }

        CHECK_OBJECT(tmp_mvar_value_37);
        tmp_dict_value_35 = tmp_mvar_value_37;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_35, tmp_dict_value_35);
        assert(!(tmp_res != 0));
        tmp_dict_key_36 = const_str_plain_A6;
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_A6);

        if (unlikely(tmp_mvar_value_38 == NULL)) {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_A6);
        }

        CHECK_OBJECT(tmp_mvar_value_38);
        tmp_dict_value_36 = tmp_mvar_value_38;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_36, tmp_dict_value_36);
        assert(!(tmp_res != 0));
        tmp_dict_key_37 = const_str_plain_DNAME;
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_DNAME);

        if (unlikely(tmp_mvar_value_39 == NULL)) {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DNAME);
        }

        CHECK_OBJECT(tmp_mvar_value_39);
        tmp_dict_value_37 = tmp_mvar_value_39;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_dict_key_38 = const_str_plain_OPT;
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_OPT);

        if (unlikely(tmp_mvar_value_40 == NULL)) {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_OPT);
        }

        CHECK_OBJECT(tmp_mvar_value_40);
        tmp_dict_value_38 = tmp_mvar_value_40;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_38, tmp_dict_value_38);
        assert(!(tmp_res != 0));
        tmp_dict_key_39 = const_str_plain_APL;
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_APL);

        if (unlikely(tmp_mvar_value_41 == NULL)) {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_APL);
        }

        CHECK_OBJECT(tmp_mvar_value_41);
        tmp_dict_value_39 = tmp_mvar_value_41;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_39, tmp_dict_value_39);
        assert(!(tmp_res != 0));
        tmp_dict_key_40 = const_str_plain_DS;
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_DS);

        if (unlikely(tmp_mvar_value_42 == NULL)) {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DS);
        }

        CHECK_OBJECT(tmp_mvar_value_42);
        tmp_dict_value_40 = tmp_mvar_value_42;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_40, tmp_dict_value_40);
        assert(!(tmp_res != 0));
        tmp_dict_key_41 = const_str_plain_SSHFP;
        tmp_mvar_value_43 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_SSHFP);

        if (unlikely(tmp_mvar_value_43 == NULL)) {
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SSHFP);
        }

        CHECK_OBJECT(tmp_mvar_value_43);
        tmp_dict_value_41 = tmp_mvar_value_43;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_41, tmp_dict_value_41);
        assert(!(tmp_res != 0));
        tmp_dict_key_42 = const_str_plain_IPSECKEY;
        tmp_mvar_value_44 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_IPSECKEY);

        if (unlikely(tmp_mvar_value_44 == NULL)) {
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_IPSECKEY);
        }

        CHECK_OBJECT(tmp_mvar_value_44);
        tmp_dict_value_42 = tmp_mvar_value_44;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_42, tmp_dict_value_42);
        assert(!(tmp_res != 0));
        tmp_dict_key_43 = const_str_plain_RRSIG;
        tmp_mvar_value_45 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_RRSIG);

        if (unlikely(tmp_mvar_value_45 == NULL)) {
            tmp_mvar_value_45 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_RRSIG);
        }

        CHECK_OBJECT(tmp_mvar_value_45);
        tmp_dict_value_43 = tmp_mvar_value_45;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_43, tmp_dict_value_43);
        assert(!(tmp_res != 0));
        tmp_dict_key_44 = const_str_plain_NSEC;
        tmp_mvar_value_46 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NSEC);

        if (unlikely(tmp_mvar_value_46 == NULL)) {
            tmp_mvar_value_46 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NSEC);
        }

        CHECK_OBJECT(tmp_mvar_value_46);
        tmp_dict_value_44 = tmp_mvar_value_46;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_44, tmp_dict_value_44);
        assert(!(tmp_res != 0));
        tmp_dict_key_45 = const_str_plain_DNSKEY;
        tmp_mvar_value_47 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_DNSKEY);

        if (unlikely(tmp_mvar_value_47 == NULL)) {
            tmp_mvar_value_47 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DNSKEY);
        }

        CHECK_OBJECT(tmp_mvar_value_47);
        tmp_dict_value_45 = tmp_mvar_value_47;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_45, tmp_dict_value_45);
        assert(!(tmp_res != 0));
        tmp_dict_key_46 = const_str_plain_DHCID;
        tmp_mvar_value_48 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_DHCID);

        if (unlikely(tmp_mvar_value_48 == NULL)) {
            tmp_mvar_value_48 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DHCID);
        }

        CHECK_OBJECT(tmp_mvar_value_48);
        tmp_dict_value_46 = tmp_mvar_value_48;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_46, tmp_dict_value_46);
        assert(!(tmp_res != 0));
        tmp_dict_key_47 = const_str_plain_NSEC3;
        tmp_mvar_value_49 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NSEC3);

        if (unlikely(tmp_mvar_value_49 == NULL)) {
            tmp_mvar_value_49 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NSEC3);
        }

        CHECK_OBJECT(tmp_mvar_value_49);
        tmp_dict_value_47 = tmp_mvar_value_49;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_47, tmp_dict_value_47);
        assert(!(tmp_res != 0));
        tmp_dict_key_48 = const_str_plain_NSEC3PARAM;
        tmp_mvar_value_50 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NSEC3PARAM);

        if (unlikely(tmp_mvar_value_50 == NULL)) {
            tmp_mvar_value_50 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NSEC3PARAM);
        }

        CHECK_OBJECT(tmp_mvar_value_50);
        tmp_dict_value_48 = tmp_mvar_value_50;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_48, tmp_dict_value_48);
        assert(!(tmp_res != 0));
        tmp_dict_key_49 = const_str_plain_TLSA;
        tmp_mvar_value_51 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_TLSA);

        if (unlikely(tmp_mvar_value_51 == NULL)) {
            tmp_mvar_value_51 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TLSA);
        }

        CHECK_OBJECT(tmp_mvar_value_51);
        tmp_dict_value_49 = tmp_mvar_value_51;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_49, tmp_dict_value_49);
        assert(!(tmp_res != 0));
        tmp_dict_key_50 = const_str_plain_HIP;
        tmp_mvar_value_52 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_HIP);

        if (unlikely(tmp_mvar_value_52 == NULL)) {
            tmp_mvar_value_52 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HIP);
        }

        CHECK_OBJECT(tmp_mvar_value_52);
        tmp_dict_value_50 = tmp_mvar_value_52;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_50, tmp_dict_value_50);
        assert(!(tmp_res != 0));
        tmp_dict_key_51 = const_str_plain_CDS;
        tmp_mvar_value_53 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_CDS);

        if (unlikely(tmp_mvar_value_53 == NULL)) {
            tmp_mvar_value_53 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CDS);
        }

        CHECK_OBJECT(tmp_mvar_value_53);
        tmp_dict_value_51 = tmp_mvar_value_53;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_51, tmp_dict_value_51);
        assert(!(tmp_res != 0));
        tmp_dict_key_52 = const_str_plain_CDNSKEY;
        tmp_mvar_value_54 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_CDNSKEY);

        if (unlikely(tmp_mvar_value_54 == NULL)) {
            tmp_mvar_value_54 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CDNSKEY);
        }

        CHECK_OBJECT(tmp_mvar_value_54);
        tmp_dict_value_52 = tmp_mvar_value_54;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_52, tmp_dict_value_52);
        assert(!(tmp_res != 0));
        tmp_dict_key_53 = const_str_plain_OPENPGPKEY;
        tmp_mvar_value_55 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_OPENPGPKEY);

        if (unlikely(tmp_mvar_value_55 == NULL)) {
            tmp_mvar_value_55 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_OPENPGPKEY);
        }

        CHECK_OBJECT(tmp_mvar_value_55);
        tmp_dict_value_53 = tmp_mvar_value_55;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_53, tmp_dict_value_53);
        assert(!(tmp_res != 0));
        tmp_dict_key_54 = const_str_plain_CSYNC;
        tmp_mvar_value_56 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_CSYNC);

        if (unlikely(tmp_mvar_value_56 == NULL)) {
            tmp_mvar_value_56 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CSYNC);
        }

        CHECK_OBJECT(tmp_mvar_value_56);
        tmp_dict_value_54 = tmp_mvar_value_56;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_54, tmp_dict_value_54);
        assert(!(tmp_res != 0));
        tmp_dict_key_55 = const_str_plain_SPF;
        tmp_mvar_value_57 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_SPF);

        if (unlikely(tmp_mvar_value_57 == NULL)) {
            tmp_mvar_value_57 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SPF);
        }

        CHECK_OBJECT(tmp_mvar_value_57);
        tmp_dict_value_55 = tmp_mvar_value_57;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_55, tmp_dict_value_55);
        assert(!(tmp_res != 0));
        tmp_dict_key_56 = const_str_plain_UNSPEC;
        tmp_mvar_value_58 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_UNSPEC);

        if (unlikely(tmp_mvar_value_58 == NULL)) {
            tmp_mvar_value_58 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_UNSPEC);
        }

        CHECK_OBJECT(tmp_mvar_value_58);
        tmp_dict_value_56 = tmp_mvar_value_58;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_56, tmp_dict_value_56);
        assert(!(tmp_res != 0));
        tmp_dict_key_57 = const_str_plain_EUI48;
        tmp_mvar_value_59 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_EUI48);

        if (unlikely(tmp_mvar_value_59 == NULL)) {
            tmp_mvar_value_59 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EUI48);
        }

        CHECK_OBJECT(tmp_mvar_value_59);
        tmp_dict_value_57 = tmp_mvar_value_59;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_57, tmp_dict_value_57);
        assert(!(tmp_res != 0));
        tmp_dict_key_58 = const_str_plain_EUI64;
        tmp_mvar_value_60 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_EUI64);

        if (unlikely(tmp_mvar_value_60 == NULL)) {
            tmp_mvar_value_60 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EUI64);
        }

        CHECK_OBJECT(tmp_mvar_value_60);
        tmp_dict_value_58 = tmp_mvar_value_60;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_58, tmp_dict_value_58);
        assert(!(tmp_res != 0));
        tmp_dict_key_59 = const_str_plain_TKEY;
        tmp_mvar_value_61 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_TKEY);

        if (unlikely(tmp_mvar_value_61 == NULL)) {
            tmp_mvar_value_61 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TKEY);
        }

        CHECK_OBJECT(tmp_mvar_value_61);
        tmp_dict_value_59 = tmp_mvar_value_61;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_59, tmp_dict_value_59);
        assert(!(tmp_res != 0));
        tmp_dict_key_60 = const_str_plain_TSIG;
        tmp_mvar_value_62 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_TSIG);

        if (unlikely(tmp_mvar_value_62 == NULL)) {
            tmp_mvar_value_62 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TSIG);
        }

        CHECK_OBJECT(tmp_mvar_value_62);
        tmp_dict_value_60 = tmp_mvar_value_62;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_60, tmp_dict_value_60);
        assert(!(tmp_res != 0));
        tmp_dict_key_61 = const_str_plain_IXFR;
        tmp_mvar_value_63 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_IXFR);

        if (unlikely(tmp_mvar_value_63 == NULL)) {
            tmp_mvar_value_63 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_IXFR);
        }

        CHECK_OBJECT(tmp_mvar_value_63);
        tmp_dict_value_61 = tmp_mvar_value_63;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_61, tmp_dict_value_61);
        assert(!(tmp_res != 0));
        tmp_dict_key_62 = const_str_plain_AXFR;
        tmp_mvar_value_64 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_AXFR);

        if (unlikely(tmp_mvar_value_64 == NULL)) {
            tmp_mvar_value_64 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_AXFR);
        }

        CHECK_OBJECT(tmp_mvar_value_64);
        tmp_dict_value_62 = tmp_mvar_value_64;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_62, tmp_dict_value_62);
        assert(!(tmp_res != 0));
        tmp_dict_key_63 = const_str_plain_MAILB;
        tmp_mvar_value_65 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MAILB);

        if (unlikely(tmp_mvar_value_65 == NULL)) {
            tmp_mvar_value_65 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MAILB);
        }

        CHECK_OBJECT(tmp_mvar_value_65);
        tmp_dict_value_63 = tmp_mvar_value_65;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_63, tmp_dict_value_63);
        assert(!(tmp_res != 0));
        tmp_dict_key_64 = const_str_plain_MAILA;
        tmp_mvar_value_66 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_MAILA);

        if (unlikely(tmp_mvar_value_66 == NULL)) {
            tmp_mvar_value_66 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MAILA);
        }

        CHECK_OBJECT(tmp_mvar_value_66);
        tmp_dict_value_64 = tmp_mvar_value_66;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_64, tmp_dict_value_64);
        assert(!(tmp_res != 0));
        tmp_dict_key_65 = const_str_plain_ANY;
        tmp_mvar_value_67 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_ANY);

        if (unlikely(tmp_mvar_value_67 == NULL)) {
            tmp_mvar_value_67 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ANY);
        }

        CHECK_OBJECT(tmp_mvar_value_67);
        tmp_dict_value_65 = tmp_mvar_value_67;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_65, tmp_dict_value_65);
        assert(!(tmp_res != 0));
        tmp_dict_key_66 = const_str_plain_URI;
        tmp_mvar_value_68 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_URI);

        if (unlikely(tmp_mvar_value_68 == NULL)) {
            tmp_mvar_value_68 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_URI);
        }

        CHECK_OBJECT(tmp_mvar_value_68);
        tmp_dict_value_66 = tmp_mvar_value_68;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_66, tmp_dict_value_66);
        assert(!(tmp_res != 0));
        tmp_dict_key_67 = const_str_plain_CAA;
        tmp_mvar_value_69 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_CAA);

        if (unlikely(tmp_mvar_value_69 == NULL)) {
            tmp_mvar_value_69 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CAA);
        }

        CHECK_OBJECT(tmp_mvar_value_69);
        tmp_dict_value_67 = tmp_mvar_value_69;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_67, tmp_dict_value_67);
        assert(!(tmp_res != 0));
        tmp_dict_key_68 = const_str_plain_AVC;
        tmp_mvar_value_70 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_AVC);

        if (unlikely(tmp_mvar_value_70 == NULL)) {
            tmp_mvar_value_70 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_AVC);
        }

        CHECK_OBJECT(tmp_mvar_value_70);
        tmp_dict_value_68 = tmp_mvar_value_70;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_68, tmp_dict_value_68);
        assert(!(tmp_res != 0));
        tmp_dict_key_69 = const_str_plain_TA;
        tmp_mvar_value_71 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_TA);

        if (unlikely(tmp_mvar_value_71 == NULL)) {
            tmp_mvar_value_71 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TA);
        }

        CHECK_OBJECT(tmp_mvar_value_71);
        tmp_dict_value_69 = tmp_mvar_value_71;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_69, tmp_dict_value_69);
        assert(!(tmp_res != 0));
        tmp_dict_key_70 = const_str_plain_DLV;
        tmp_mvar_value_72 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_DLV);

        if (unlikely(tmp_mvar_value_72 == NULL)) {
            tmp_mvar_value_72 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DLV);
        }

        CHECK_OBJECT(tmp_mvar_value_72);
        tmp_dict_value_70 = tmp_mvar_value_72;
        tmp_res = PyDict_SetItem(tmp_assign_source_76, tmp_dict_key_70, tmp_dict_value_70);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain__by_text, tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        // Tried code:
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_73;
            tmp_mvar_value_73 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain__by_text);

            if (unlikely(tmp_mvar_value_73 == NULL)) {
                tmp_mvar_value_73 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__by_text);
            }

            CHECK_OBJECT(tmp_mvar_value_73);
            tmp_called_instance_1 = tmp_mvar_value_73;
            frame_904d48cecc92bad80ed9f21d685782de->m_frame.f_lineno = 172;
            tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_items);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto try_except_handler_1;
            }
            tmp_assign_source_78 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto try_except_handler_1;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_78;
        }
        {
            PyObject *tmp_assign_source_79;
            tmp_assign_source_79 = PyDict_New();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_79;
        }
        if (isFrameUnusable(cache_frame_6c2525664815ad2901739fd30878e651_2)) {
            Py_XDECREF(cache_frame_6c2525664815ad2901739fd30878e651_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6c2525664815ad2901739fd30878e651_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6c2525664815ad2901739fd30878e651_2 = MAKE_FUNCTION_FRAME(codeobj_6c2525664815ad2901739fd30878e651, module_dns$rdatatype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_6c2525664815ad2901739fd30878e651_2->m_type_description == NULL);
        frame_6c2525664815ad2901739fd30878e651_2 = cache_frame_6c2525664815ad2901739fd30878e651_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_6c2525664815ad2901739fd30878e651_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_6c2525664815ad2901739fd30878e651_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_80;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_80 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_80 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 172;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_80;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_81;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
            tmp_assign_source_81 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_81;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_82;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_82 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_82 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 172;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
                tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_82;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_83;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_83 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_83 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 172;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
                tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_83;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "oo";
                        exception_lineno = 172;
                        goto try_except_handler_4;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = const_str_digest_fcf040720b88d60da4ce975010c44a3a;
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 172;
                goto try_except_handler_4;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_3;
        // End of try:
        try_end_1:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_2;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_84;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
            tmp_assign_source_84 = tmp_dictcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_84;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_85;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
            tmp_assign_source_85 = tmp_dictcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_y;
                outline_0_var_y = tmp_assign_source_85;
                Py_INCREF(outline_0_var_y);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        CHECK_OBJECT(outline_0_var_x);
        tmp_dictset_value = outline_0_var_x;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_dictset_dict = tmp_dictcontraction_1__contraction;
        CHECK_OBJECT(outline_0_var_y);
        tmp_dictset_key = outline_0_var_y;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_assign_source_77 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_77);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;

        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;

        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;

        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;

        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;

        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6c2525664815ad2901739fd30878e651_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_6c2525664815ad2901739fd30878e651_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6c2525664815ad2901739fd30878e651_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6c2525664815ad2901739fd30878e651_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6c2525664815ad2901739fd30878e651_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6c2525664815ad2901739fd30878e651_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6c2525664815ad2901739fd30878e651_2,
            type_description_2,
            outline_0_var_x,
            outline_0_var_y
        );


        // Release cached frame.
        if (frame_6c2525664815ad2901739fd30878e651_2 == cache_frame_6c2525664815ad2901739fd30878e651_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_6c2525664815ad2901739fd30878e651_2);
        }
        cache_frame_6c2525664815ad2901739fd30878e651_2 = NULL;

        assertFrameObject(frame_6c2525664815ad2901739fd30878e651_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_1;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;

        Py_XDECREF(outline_0_var_y);
        outline_0_var_y = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_1:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;

        Py_XDECREF(outline_0_var_y);
        outline_0_var_y = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 172;
        goto frame_exception_exit_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain__by_value, tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_dict_key_71;
        PyObject *tmp_dict_value_71;
        PyObject *tmp_mvar_value_74;
        tmp_mvar_value_74 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_OPT);

        if (unlikely(tmp_mvar_value_74 == NULL)) {
            tmp_mvar_value_74 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_OPT);
        }

        if (tmp_mvar_value_74 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7355 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }

        tmp_dict_key_71 = tmp_mvar_value_74;
        tmp_dict_value_71 = Py_True;
        tmp_assign_source_86 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_86, tmp_dict_key_71, tmp_dict_value_71);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_86);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain__metatypes, tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_dict_key_72;
        PyObject *tmp_dict_value_72;
        PyObject *tmp_mvar_value_75;
        PyObject *tmp_dict_key_73;
        PyObject *tmp_dict_value_73;
        PyObject *tmp_mvar_value_76;
        PyObject *tmp_dict_key_74;
        PyObject *tmp_dict_value_74;
        PyObject *tmp_mvar_value_77;
        PyObject *tmp_dict_key_75;
        PyObject *tmp_dict_value_75;
        PyObject *tmp_mvar_value_78;
        PyObject *tmp_dict_key_76;
        PyObject *tmp_dict_value_76;
        PyObject *tmp_mvar_value_79;
        tmp_mvar_value_75 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_SOA);

        if (unlikely(tmp_mvar_value_75 == NULL)) {
            tmp_mvar_value_75 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SOA);
        }

        if (tmp_mvar_value_75 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7380 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }

        tmp_dict_key_72 = tmp_mvar_value_75;
        tmp_dict_value_72 = Py_True;
        tmp_assign_source_87 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_87, tmp_dict_key_72, tmp_dict_value_72);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_87);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_76 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NXT);

        if (unlikely(tmp_mvar_value_76 == NULL)) {
            tmp_mvar_value_76 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NXT);
        }

        if (tmp_mvar_value_76 == NULL) {
            Py_DECREF(tmp_assign_source_87);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7405 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }

        tmp_dict_key_73 = tmp_mvar_value_76;
        tmp_dict_value_73 = Py_True;
        tmp_res = PyDict_SetItem(tmp_assign_source_87, tmp_dict_key_73, tmp_dict_value_73);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_87);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_77 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_DNAME);

        if (unlikely(tmp_mvar_value_77 == NULL)) {
            tmp_mvar_value_77 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DNAME);
        }

        if (tmp_mvar_value_77 == NULL) {
            Py_DECREF(tmp_assign_source_87);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7430 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }

        tmp_dict_key_74 = tmp_mvar_value_77;
        tmp_dict_value_74 = Py_True;
        tmp_res = PyDict_SetItem(tmp_assign_source_87, tmp_dict_key_74, tmp_dict_value_74);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_87);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_78 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_NSEC);

        if (unlikely(tmp_mvar_value_78 == NULL)) {
            tmp_mvar_value_78 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NSEC);
        }

        if (tmp_mvar_value_78 == NULL) {
            Py_DECREF(tmp_assign_source_87);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7457 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }

        tmp_dict_key_75 = tmp_mvar_value_78;
        tmp_dict_value_75 = Py_True;
        tmp_res = PyDict_SetItem(tmp_assign_source_87, tmp_dict_key_75, tmp_dict_value_75);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_87);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_79 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_CNAME);

        if (unlikely(tmp_mvar_value_79 == NULL)) {
            tmp_mvar_value_79 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CNAME);
        }

        if (tmp_mvar_value_79 == NULL) {
            Py_DECREF(tmp_assign_source_87);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7483 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }

        tmp_dict_key_76 = tmp_mvar_value_79;
        tmp_dict_value_76 = Py_True;
        tmp_res = PyDict_SetItem(tmp_assign_source_87, tmp_dict_key_76, tmp_dict_value_76);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_87);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain__singletons, tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_80;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_81;
        tmp_mvar_value_80 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_re);

        if (unlikely(tmp_mvar_value_80 == NULL)) {
            tmp_mvar_value_80 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
        }

        if (tmp_mvar_value_80 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1147 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_80;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_compile);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_str_digest_a6cd0972ce604dcabcbb9770378d1738;
        tmp_mvar_value_81 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_re);

        if (unlikely(tmp_mvar_value_81 == NULL)) {
            tmp_mvar_value_81 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
        }

        if (tmp_mvar_value_81 == NULL) {
            Py_DECREF(tmp_called_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 1147 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_81;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_I);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        frame_904d48cecc92bad80ed9f21d685782de->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_88 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain__unknown_type_pattern, tmp_assign_source_88);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_mvar_value_82;
        tmp_mvar_value_82 = GET_STRING_DICT_VALUE(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_dns);

        if (unlikely(tmp_mvar_value_82 == NULL)) {
            tmp_mvar_value_82 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_dns);
        }

        if (tmp_mvar_value_82 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2626 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;

            goto try_except_handler_5;
        }

        tmp_expression_name_4 = tmp_mvar_value_82;
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_exception);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_5;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, const_str_plain_DNSException);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_5;
        }
        tmp_assign_source_89 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_89, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_90 = impl___internal__$$$function_3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_90;
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_91;
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_1, tmp_key_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_5;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = const_str_plain_metaclass;
        tmp_metaclass_name_1 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_5;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_5;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_5 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_5, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_92 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_92;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_3, tmp_key_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_5;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 189;

        goto try_except_handler_5;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_6;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_6 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr(tmp_expression_name_6, const_str_plain___prepare__);
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_7 = tmp_class_creation_1__metaclass;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, const_str_plain___prepare__);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_5;
        }
        tmp_tuple_element_2 = const_str_plain_UnknownRdatatype;
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_904d48cecc92bad80ed9f21d685782de->m_frame.f_lineno = 189;
        tmp_assign_source_93 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_93;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_8;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_8 = tmp_class_creation_1__prepared;
        tmp_res = PyObject_HasAttr(tmp_expression_name_8, const_str_plain___getitem__);
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_5;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_type_arg_2;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = const_str_plain___name__;
        tmp_getattr_default_1 = const_str_angle_metaclass;
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_5;
        }
        tmp_right_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_type_arg_2 = tmp_class_creation_1__prepared;
        tmp_expression_name_9 = BUILTIN_TYPE1(tmp_type_arg_2);
        assert(!(tmp_expression_name_9 == NULL));
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, const_str_plain___name__);
        Py_DECREF(tmp_expression_name_9);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_1);

            exception_lineno = 189;

            goto try_except_handler_5;
        }
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 189;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_94;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_95;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_dns$rdatatype_189 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_4d995bb32f101017e85f92250eb6aecc;
        tmp_res = PyObject_SetItem(locals_dns$rdatatype_189, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_digest_ce38c0b7a1e7f2d0350eae64edadf285;
        tmp_res = PyObject_SetItem(locals_dns$rdatatype_189, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_plain_UnknownRdatatype;
        tmp_res = PyObject_SetItem(locals_dns$rdatatype_189, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_7;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_compexpr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_dns$rdatatype_189, const_str_plain___orig_bases__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto try_except_handler_7;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_96;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_UnknownRdatatype;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_dns$rdatatype_189;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_904d48cecc92bad80ed9f21d685782de->m_frame.f_lineno = 189;
            tmp_assign_source_96 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_96;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_95 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_95);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_dns$rdatatype_189);
        locals_dns$rdatatype_189 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dns$rdatatype_189);
        locals_dns$rdatatype_189 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 189;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_UnknownRdatatype, tmp_assign_source_95);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_904d48cecc92bad80ed9f21d685782de);
#endif
    popFrameStack();

    assertFrameObject(frame_904d48cecc92bad80ed9f21d685782de);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_904d48cecc92bad80ed9f21d685782de);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_904d48cecc92bad80ed9f21d685782de, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_904d48cecc92bad80ed9f21d685782de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_904d48cecc92bad80ed9f21d685782de, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;

    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = MAKE_FUNCTION_dns$rdatatype$$$function_1_from_text();



        UPDATE_STRING_DICT1(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_from_text, tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = MAKE_FUNCTION_dns$rdatatype$$$function_2_to_text();



        UPDATE_STRING_DICT1(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_to_text, tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = MAKE_FUNCTION_dns$rdatatype$$$function_3_is_metatype();



        UPDATE_STRING_DICT1(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_is_metatype, tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = MAKE_FUNCTION_dns$rdatatype$$$function_4_is_singleton();



        UPDATE_STRING_DICT1(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_is_singleton, tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_false_tuple;
        Py_INCREF(tmp_defaults_1);
        tmp_assign_source_101 = MAKE_FUNCTION_dns$rdatatype$$$function_5_register_type(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_dns$rdatatype, (Nuitka_StringObject *)const_str_plain_register_type, tmp_assign_source_101);
    }

    return module_dns$rdatatype;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
