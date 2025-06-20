/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define SP_REGNUM 2
#define A2_REGNUM 12
#define S11_REGNUM 27
#define T2_REGNUM 7
#define VTYPE_REGNUM 67
#define A5_REGNUM 15
#define S2_REGNUM 18
#define S0_REGNUM 8
#define S10_REGNUM 26
#define T4_REGNUM 29
#define NORMAL_RETURN 0
#define A0_REGNUM 10
#define TP_REGNUM 4
#define S5_REGNUM 21
#define EXCEPTION_RETURN 2
#define S8_REGNUM 24
#define A3_REGNUM 13
#define VXRM_REGNUM 68
#define VL_REGNUM 66
#define FRM_REGNUM 69
#define A6_REGNUM 16
#define S3_REGNUM 19
#define GP_REGNUM 3
#define A1_REGNUM 11
#define T5_REGNUM 30
#define T1_REGNUM 6
#define X0_REGNUM 0
#define SIBCALL_RETURN 1
#define S6_REGNUM 22
#define INVALID_ATTRIBUTE 255
#define S9_REGNUM 25
#define T0_REGNUM 5
#define RETURN_ADDR_REGNUM 1
#define A4_REGNUM 14
#define A7_REGNUM 17
#define S1_REGNUM 9
#define T3_REGNUM 28
#define S4_REGNUM 20
#define S7_REGNUM 23
#define T6_REGNUM 31

enum unspec {
  UNSPEC_EH_RETURN = 0,
  UNSPEC_ADDRESS_FIRST = 1,
  UNSPEC_FORCE_FOR_MEM = 2,
  UNSPEC_PCREL = 3,
  UNSPEC_LOAD_GOT = 4,
  UNSPEC_TLS = 5,
  UNSPEC_TLS_LE = 6,
  UNSPEC_TLS_IE = 7,
  UNSPEC_TLS_GD = 8,
  UNSPEC_TLSDESC = 9,
  UNSPEC_AUIPC = 10,
  UNSPEC_FLT_QUIET = 11,
  UNSPEC_FLE_QUIET = 12,
  UNSPEC_COPYSIGN = 13,
  UNSPEC_FMV_X_W = 14,
  UNSPEC_FMVH_X_D = 15,
  UNSPEC_RINT = 16,
  UNSPEC_ROUND = 17,
  UNSPEC_FLOOR = 18,
  UNSPEC_CEIL = 19,
  UNSPEC_BTRUNC = 20,
  UNSPEC_ROUNDEVEN = 21,
  UNSPEC_NEARBYINT = 22,
  UNSPEC_LRINT = 23,
  UNSPEC_FMIN = 24,
  UNSPEC_FMAX = 25,
  UNSPEC_FMINM = 26,
  UNSPEC_FMAXM = 27,
  UNSPEC_FCLASS = 28,
  UNSPEC_TIE = 29,
  UNSPEC_ORC_B = 30,
  UNSPEC_CLMUL = 31,
  UNSPEC_CLMULH = 32,
  UNSPEC_CLMULR = 33,
  UNSPEC_CALLEE_CC = 34,
  UNSPEC_STRLEN = 35,
  UNSPEC_FMV_FP16_X = 36,
  UNSPEC_XTHEADFMV = 37,
  UNSPEC_XTHEADFMV_HW = 38,
  UNSPEC_CRC = 39,
  UNSPEC_CRC_REV = 40,
  UNSPEC_SSP_SET = 41,
  UNSPEC_SSP_TEST = 42,
  UNSPEC_BREV8 = 43,
  UNSPEC_ZIP = 44,
  UNSPEC_UNZIP = 45,
  UNSPEC_PACK = 46,
  UNSPEC_PACKH = 47,
  UNSPEC_PACKW = 48,
  UNSPEC_XPERM8 = 49,
  UNSPEC_XPERM4 = 50,
  UNSPEC_AES_DSI = 51,
  UNSPEC_AES_DSMI = 52,
  UNSPEC_AES_DS = 53,
  UNSPEC_AES_DSM = 54,
  UNSPEC_AES_IM = 55,
  UNSPEC_AES_KS1I = 56,
  UNSPEC_AES_KS2 = 57,
  UNSPEC_AES_ES = 58,
  UNSPEC_AES_ESM = 59,
  UNSPEC_AES_ESI = 60,
  UNSPEC_AES_ESMI = 61,
  UNSPEC_SHA_256_SIG0 = 62,
  UNSPEC_SHA_256_SIG1 = 63,
  UNSPEC_SHA_256_SUM0 = 64,
  UNSPEC_SHA_256_SUM1 = 65,
  UNSPEC_SHA_512_SIG0 = 66,
  UNSPEC_SHA_512_SIG0H = 67,
  UNSPEC_SHA_512_SIG0L = 68,
  UNSPEC_SHA_512_SIG1 = 69,
  UNSPEC_SHA_512_SIG1H = 70,
  UNSPEC_SHA_512_SIG1L = 71,
  UNSPEC_SHA_512_SUM0 = 72,
  UNSPEC_SHA_512_SUM0R = 73,
  UNSPEC_SHA_512_SUM1 = 74,
  UNSPEC_SHA_512_SUM1R = 75,
  UNSPEC_SM3_P0 = 76,
  UNSPEC_SM3_P1 = 77,
  UNSPEC_SM4_ED = 78,
  UNSPEC_SM4_KS = 79,
  UNSPEC_COMPARE_AND_SWAP = 80,
  UNSPEC_COMPARE_AND_SWAP_SUBWORD = 81,
  UNSPEC_SYNC_OLD_OP = 82,
  UNSPEC_SYNC_OLD_OP_SUBWORD = 83,
  UNSPEC_SYNC_OLD_OP_ZABHA = 84,
  UNSPEC_SYNC_EXCHANGE = 85,
  UNSPEC_SYNC_EXCHANGE_SUBWORD = 86,
  UNSPEC_SYNC_EXCHANGE_ZABHA = 87,
  UNSPEC_ATOMIC_LOAD = 88,
  UNSPEC_ATOMIC_STORE = 89,
  UNSPEC_MEMORY_BARRIER = 90,
  UNSPEC_VSETVL = 91,
  UNSPEC_VUNDEF = 92,
  UNSPEC_VPREDICATE = 93,
  UNSPEC_VLMAX = 94,
  UNSPEC_UNIT_STRIDED = 95,
  UNSPEC_STRIDED = 96,
  UNSPEC_ORDERED = 97,
  UNSPEC_UNORDERED = 98,
  UNSPEC_VMULHS = 99,
  UNSPEC_VMULHU = 100,
  UNSPEC_VMULHSU = 101,
  UNSPEC_VADC = 102,
  UNSPEC_VSBC = 103,
  UNSPEC_VMADC = 104,
  UNSPEC_VMSBC = 105,
  UNSPEC_OVERFLOW = 106,
  UNSPEC_VNCLIP = 107,
  UNSPEC_VNCLIPU = 108,
  UNSPEC_VSSRL = 109,
  UNSPEC_VSSRA = 110,
  UNSPEC_VAADDU = 111,
  UNSPEC_VAADD = 112,
  UNSPEC_VASUBU = 113,
  UNSPEC_VASUB = 114,
  UNSPEC_VSMUL = 115,
  UNSPEC_VMSBF = 116,
  UNSPEC_VMSIF = 117,
  UNSPEC_VMSOF = 118,
  UNSPEC_VIOTA = 119,
  UNSPEC_VFRSQRT7 = 120,
  UNSPEC_VFREC7 = 121,
  UNSPEC_VFCLASS = 122,
  UNSPEC_VCOPYSIGN = 123,
  UNSPEC_VXORSIGN = 124,
  UNSPEC_VFCVT = 125,
  UNSPEC_UNSIGNED_VFCVT = 126,
  UNSPEC_ROD = 127,
  UNSPEC_VSLIDEUP = 128,
  UNSPEC_VSLIDEDOWN = 129,
  UNSPEC_VSLIDE1UP = 130,
  UNSPEC_VSLIDE1DOWN = 131,
  UNSPEC_VFSLIDE1UP = 132,
  UNSPEC_VFSLIDE1DOWN = 133,
  UNSPEC_VRGATHER = 134,
  UNSPEC_VRGATHEREI16 = 135,
  UNSPEC_VCOMPRESS = 136,
  UNSPEC_VLEFF = 137,
  UNSPEC_MODIFY_VL = 138,
  UNSPEC_VFFMA = 139,
  UNSPEC_VFMAX = 140,
  UNSPEC_VFMIN = 141,
  UNSPEC_REDUC = 142,
  UNSPEC_REDUC_SUM = 143,
  UNSPEC_REDUC_SUM_VL0_SAFE = 144,
  UNSPEC_REDUC_SUM_ORDERED = 145,
  UNSPEC_REDUC_SUM_UNORDERED = 146,
  UNSPEC_REDUC_SUM_ORDERED_VL0_SAFE = 147,
  UNSPEC_REDUC_SUM_UNORDERED_VL0_SAFE = 148,
  UNSPEC_REDUC_MAXU = 149,
  UNSPEC_REDUC_MAX = 150,
  UNSPEC_REDUC_MINU = 151,
  UNSPEC_REDUC_MIN = 152,
  UNSPEC_REDUC_AND = 153,
  UNSPEC_REDUC_OR = 154,
  UNSPEC_REDUC_XOR = 155,
  UNSPEC_REDUC_MAXU_VL0_SAFE = 156,
  UNSPEC_REDUC_MAX_VL0_SAFE = 157,
  UNSPEC_REDUC_MINU_VL0_SAFE = 158,
  UNSPEC_REDUC_MIN_VL0_SAFE = 159,
  UNSPEC_REDUC_AND_VL0_SAFE = 160,
  UNSPEC_REDUC_OR_VL0_SAFE = 161,
  UNSPEC_REDUC_XOR_VL0_SAFE = 162,
  UNSPEC_WREDUC_SUM = 163,
  UNSPEC_WREDUC_SUMU = 164,
  UNSPEC_WREDUC_SUM_VL0_SAFE = 165,
  UNSPEC_WREDUC_SUMU_VL0_SAFE = 166,
  UNSPEC_WREDUC_SUM_ORDERED = 167,
  UNSPEC_WREDUC_SUM_UNORDERED = 168,
  UNSPEC_WREDUC_SUM_ORDERED_VL0_SAFE = 169,
  UNSPEC_WREDUC_SUM_UNORDERED_VL0_SAFE = 170,
  UNSPEC_SELECT_MASK = 171,
  UNSPEC_SF_VFNRCLIP = 172,
  UNSPEC_SF_VFNRCLIPU = 173,
  UNSPEC_TH_VLB = 174,
  UNSPEC_TH_VLBU = 175,
  UNSPEC_TH_VLH = 176,
  UNSPEC_TH_VLHU = 177,
  UNSPEC_TH_VLW = 178,
  UNSPEC_TH_VLWU = 179,
  UNSPEC_TH_VLSB = 180,
  UNSPEC_TH_VLSBU = 181,
  UNSPEC_TH_VLSH = 182,
  UNSPEC_TH_VLSHU = 183,
  UNSPEC_TH_VLSW = 184,
  UNSPEC_TH_VLSWU = 185,
  UNSPEC_TH_VLXB = 186,
  UNSPEC_TH_VLXBU = 187,
  UNSPEC_TH_VLXH = 188,
  UNSPEC_TH_VLXHU = 189,
  UNSPEC_TH_VLXW = 190,
  UNSPEC_TH_VLXWU = 191,
  UNSPEC_TH_VSUXB = 192,
  UNSPEC_TH_VSUXH = 193,
  UNSPEC_TH_VSUXW = 194,
  UNSPEC_TH_VWLDST = 195,
  UNSPEC_VBREV = 196,
  UNSPEC_VBREV8 = 197,
  UNSPEC_VREV8 = 198,
  UNSPEC_VCLMUL = 199,
  UNSPEC_VCLMULH = 200,
  UNSPEC_VGHSH = 201,
  UNSPEC_VGMUL = 202,
  UNSPEC_VAESEF = 203,
  UNSPEC_VAESEFVV = 204,
  UNSPEC_VAESEFVS = 205,
  UNSPEC_VAESEM = 206,
  UNSPEC_VAESEMVV = 207,
  UNSPEC_VAESEMVS = 208,
  UNSPEC_VAESDF = 209,
  UNSPEC_VAESDFVV = 210,
  UNSPEC_VAESDFVS = 211,
  UNSPEC_VAESDM = 212,
  UNSPEC_VAESDMVV = 213,
  UNSPEC_VAESDMVS = 214,
  UNSPEC_VAESZ = 215,
  UNSPEC_VAESZVVNULL = 216,
  UNSPEC_VAESZVS = 217,
  UNSPEC_VAESKF1 = 218,
  UNSPEC_VAESKF2 = 219,
  UNSPEC_VSHA2MS = 220,
  UNSPEC_VSHA2CH = 221,
  UNSPEC_VSHA2CL = 222,
  UNSPEC_VSM4K = 223,
  UNSPEC_VSM4R = 224,
  UNSPEC_VSM4RVV = 225,
  UNSPEC_VSM4RVS = 226,
  UNSPEC_VSM3ME = 227,
  UNSPEC_VSM3C = 228,
  UNSPEC_CV_ALU_CLIP = 229,
  UNSPEC_CV_ALU_CLIPR = 230,
  UNSPEC_CV_ALU_CLIPU = 231,
  UNSPEC_CV_ALU_CLIPUR = 232,
  UNSPECV_CV_ELW = 233,
  UNSPEC_CV_ADD_H = 234,
  UNSPEC_CV_ADD_B = 235,
  UNSPEC_CV_ADD_SC_H = 236,
  UNSPEC_CV_ADD_SC_B = 237,
  UNSPEC_CV_SUB_H = 238,
  UNSPEC_CV_SUB_B = 239,
  UNSPEC_CV_SUB_SC_H = 240,
  UNSPEC_CV_SUB_SC_B = 241,
  UNSPEC_CV_AVG_H = 242,
  UNSPEC_CV_AVG_B = 243,
  UNSPEC_CV_AVG_SC_H = 244,
  UNSPEC_CV_AVG_SC_B = 245,
  UNSPEC_CV_AVGU_H = 246,
  UNSPEC_CV_AVGU_B = 247,
  UNSPEC_CV_AVGU_SC_H = 248,
  UNSPEC_CV_AVGU_SC_B = 249,
  UNSPEC_CV_MIN_H = 250,
  UNSPEC_CV_MIN_B = 251,
  UNSPEC_CV_MIN_SC_H = 252,
  UNSPEC_CV_MIN_SC_B = 253,
  UNSPEC_CV_MINU_H = 254,
  UNSPEC_CV_MINU_B = 255,
  UNSPEC_CV_MINU_SC_H = 256,
  UNSPEC_CV_MINU_SC_B = 257,
  UNSPEC_CV_MAX_H = 258,
  UNSPEC_CV_MAX_B = 259,
  UNSPEC_CV_MAX_SC_H = 260,
  UNSPEC_CV_MAX_SC_B = 261,
  UNSPEC_CV_MAXU_H = 262,
  UNSPEC_CV_MAXU_B = 263,
  UNSPEC_CV_MAXU_SC_H = 264,
  UNSPEC_CV_MAXU_SC_B = 265,
  UNSPEC_CV_SRL_H = 266,
  UNSPEC_CV_SRL_B = 267,
  UNSPEC_CV_SRL_SC_H = 268,
  UNSPEC_CV_SRL_SC_B = 269,
  UNSPEC_CV_SRA_H = 270,
  UNSPEC_CV_SRA_B = 271,
  UNSPEC_CV_SRA_SC_H = 272,
  UNSPEC_CV_SRA_SC_B = 273,
  UNSPEC_CV_SLL_H = 274,
  UNSPEC_CV_SLL_B = 275,
  UNSPEC_CV_SLL_SC_H = 276,
  UNSPEC_CV_SLL_SC_B = 277,
  UNSPEC_CV_OR_H = 278,
  UNSPEC_CV_OR_B = 279,
  UNSPEC_CV_OR_SC_H = 280,
  UNSPEC_CV_OR_SC_B = 281,
  UNSPEC_CV_XOR_H = 282,
  UNSPEC_CV_XOR_B = 283,
  UNSPEC_CV_XOR_SC_H = 284,
  UNSPEC_CV_XOR_SC_B = 285,
  UNSPEC_CV_AND_H = 286,
  UNSPEC_CV_AND_B = 287,
  UNSPEC_CV_AND_SC_H = 288,
  UNSPEC_CV_AND_SC_B = 289,
  UNSPEC_CV_ABS_H = 290,
  UNSPEC_CV_ABS_B = 291,
  UNSPEC_CV_NEG_H = 292,
  UNSPEC_CV_NEG_B = 293,
  UNSPEC_CV_EXTRACT_H = 294,
  UNSPEC_CV_EXTRACT_B = 295,
  UNSPEC_CV_EXTRACTU_H = 296,
  UNSPEC_CV_EXTRACTU_B = 297,
  UNSPEC_CV_INSERT_H = 298,
  UNSPEC_CV_INSERT_B = 299,
  UNSPEC_CV_DOTUP_H = 300,
  UNSPEC_CV_DOTUP_B = 301,
  UNSPEC_CV_DOTUP_SC_H = 302,
  UNSPEC_CV_DOTUP_SC_B = 303,
  UNSPEC_CV_DOTUSP_H = 304,
  UNSPEC_CV_DOTUSP_B = 305,
  UNSPEC_CV_DOTUSP_SC_H = 306,
  UNSPEC_CV_DOTUSP_SC_B = 307,
  UNSPEC_CV_DOTSP_H = 308,
  UNSPEC_CV_DOTSP_B = 309,
  UNSPEC_CV_DOTSP_SC_H = 310,
  UNSPEC_CV_DOTSP_SC_B = 311,
  UNSPEC_CV_SDOTUP_H = 312,
  UNSPEC_CV_SDOTUP_B = 313,
  UNSPEC_CV_SDOTUP_SC_H = 314,
  UNSPEC_CV_SDOTUP_SC_B = 315,
  UNSPEC_CV_SDOTUSP_H = 316,
  UNSPEC_CV_SDOTUSP_B = 317,
  UNSPEC_CV_SDOTUSP_SC_H = 318,
  UNSPEC_CV_SDOTUSP_SC_B = 319,
  UNSPEC_CV_SDOTSP_H = 320,
  UNSPEC_CV_SDOTSP_B = 321,
  UNSPEC_CV_SDOTSP_SC_H = 322,
  UNSPEC_CV_SDOTSP_SC_B = 323,
  UNSPEC_CV_SHUFFLE_H = 324,
  UNSPEC_CV_SHUFFLE_SCI_H = 325,
  UNSPEC_CV_SHUFFLE_B = 326,
  UNSPEC_CV_SHUFFLE_SCI_B = 327,
  UNSPEC_CV_SHUFFLE2_H = 328,
  UNSPEC_CV_SHUFFLE2_B = 329,
  UNSPEC_CV_PACKHI_H = 330,
  UNSPEC_CV_PACKLO_H = 331,
  UNSPEC_CV_PACKHI_B = 332,
  UNSPEC_CV_PACKLO_B = 333,
  UNSPEC_CV_CMPEQ_H = 334,
  UNSPEC_CV_CMPEQ_B = 335,
  UNSPEC_CV_CMPEQ_SC_H = 336,
  UNSPEC_CV_CMPEQ_SC_B = 337,
  UNSPEC_CV_CMPNE_H = 338,
  UNSPEC_CV_CMPNE_B = 339,
  UNSPEC_CV_CMPNE_SC_H = 340,
  UNSPEC_CV_CMPNE_SC_B = 341,
  UNSPEC_CV_CMPGT_H = 342,
  UNSPEC_CV_CMPGT_B = 343,
  UNSPEC_CV_CMPGT_SC_H = 344,
  UNSPEC_CV_CMPGT_SC_B = 345,
  UNSPEC_CV_CMPGE_H = 346,
  UNSPEC_CV_CMPGE_B = 347,
  UNSPEC_CV_CMPGE_SC_H = 348,
  UNSPEC_CV_CMPGE_SC_B = 349,
  UNSPEC_CV_CMPLT_H = 350,
  UNSPEC_CV_CMPLT_B = 351,
  UNSPEC_CV_CMPLT_SC_H = 352,
  UNSPEC_CV_CMPLT_SC_B = 353,
  UNSPEC_CV_CMPLE_H = 354,
  UNSPEC_CV_CMPLE_B = 355,
  UNSPEC_CV_CMPLE_SC_H = 356,
  UNSPEC_CV_CMPLE_SC_B = 357,
  UNSPEC_CV_CMPGTU_H = 358,
  UNSPEC_CV_CMPGTU_B = 359,
  UNSPEC_CV_CMPGTU_SC_H = 360,
  UNSPEC_CV_CMPGTU_SC_B = 361,
  UNSPEC_CV_CMPGEU_H = 362,
  UNSPEC_CV_CMPGEU_B = 363,
  UNSPEC_CV_CMPGEU_SC_H = 364,
  UNSPEC_CV_CMPGEU_SC_B = 365,
  UNSPEC_CV_CMPLTU_H = 366,
  UNSPEC_CV_CMPLTU_B = 367,
  UNSPEC_CV_CMPLTU_SC_H = 368,
  UNSPEC_CV_CMPLTU_SC_B = 369,
  UNSPEC_CV_CMPLEU_H = 370,
  UNSPEC_CV_CMPLEU_B = 371,
  UNSPEC_CV_CMPLEU_SC_H = 372,
  UNSPEC_CV_CMPLEU_SC_B = 373,
  UNSPEC_CV_CPLXMUL_R = 374,
  UNSPEC_CV_CPLXMUL_I = 375,
  UNSPEC_CV_CPLXCONJ = 376,
  UNSPEC_CV_SUBROTMJ = 377
};
#define NUM_UNSPEC_VALUES 378
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_GPR_SAVE = 0,
  UNSPECV_GPR_RESTORE = 1,
  UNSPECV_FRCSR = 2,
  UNSPECV_FSCSR = 3,
  UNSPECV_FRFLAGS = 4,
  UNSPECV_FSFLAGS = 5,
  UNSPECV_FSNVSNAN = 6,
  UNSPECV_MRET = 7,
  UNSPECV_SRET = 8,
  UNSPECV_URET = 9,
  UNSPECV_BLOCKAGE = 10,
  UNSPECV_FENCE = 11,
  UNSPECV_FENCE_I = 12,
  UNSPECV_CLEAN = 13,
  UNSPECV_FLUSH = 14,
  UNSPECV_INVAL = 15,
  UNSPECV_ZERO = 16,
  UNSPECV_PREI = 17,
  UNSPECV_PAUSE = 18,
  UNSPECV_SSPUSH = 19,
  UNSPECV_SSPOPCHK = 20,
  UNSPECV_SSRDP = 21,
  UNSPECV_SSP = 22,
  UNSPECV_LPAD = 23,
  UNSPECV_SETLPL = 24,
  UNSPECV_LPAD_ALIGN = 25,
  UNSPECV_SET_GUARDED = 26,
  UNSPECV_XTHEADINT_PUSH = 27,
  UNSPECV_XTHEADINT_POP = 28,
  UNSPECV_FRM_RESTORE_EXIT = 29
};
#define NUM_UNSPECV_VALUES 30
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
