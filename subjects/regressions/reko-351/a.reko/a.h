// a.h
// Generated by decompiling a.out
// using Reko decompiler version 0.11.5.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (8000270C (ptr32 code) ptr8000270C) (80002714 (arr (ptr32 code)) a80002714) (8000271C word32 dw8000271C) (80002724 byte b80002724) (80002726 uint32 dtor_idx.3228) (FFFFFFFF code tFFFFFFFF))
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_6: (fn word32 ((ptr32 byte)))
	T_6 (in fn00000000 @ 800000A6 : ptr32)
Eq_21: (fn word32 ((ptr32 byte), int32))
	T_21 (in fn00000000 @ 800000DC : ptr32)
Eq_40: (fn void ())
	T_40 (in deregister_tm_clones @ 8000012C : ptr32)
	T_41 (in signature of deregister_tm_clones @ 80000080 : void)
Eq_58: (fn word32 (ptr32))
	T_58 (in fn00000000 @ 80000140 : ptr32)
Eq_68: (fn void (ptr32, ptr32))
	T_68 (in fn00000000 @ 8000017A : ptr32)
Eq_74: (fn void ((ptr32 word32)))
	T_74 (in fn00000000 @ 8000019A : ptr32)
Eq_77: (fn void ())
	T_77 (in register_tm_clones @ 8000018A : ptr32)
	T_78 (in signature of register_tm_clones @ 800000AE : void)
	T_80 (in register_tm_clones @ 800001A0 : ptr32)
Eq_102: (fn void (real64, int32))
	T_102 (in pow_int @ 800003EC : ptr32)
	T_103 (in signature of pow_int @ 80000372 : void)
Eq_107: (fn void (int32))
	T_107 (in factorial @ 800003FC : ptr32)
	T_108 (in signature of factorial @ 8000033C : void)
Eq_114: (fn void (real64, int32))
	T_114 (in pow_int @ 80000444 : ptr32)
	T_115 (in signature of pow_int @ 80000372 : void)
Eq_119: (fn void (int32))
	T_119 (in factorial @ 80000454 : ptr32)
	T_120 (in signature of factorial @ 8000033C : void)
Eq_127: (fn void (real64))
	T_127 (in sine_taylor @ 800004AA : ptr32)
	T_128 (in signature of sine_taylor @ 800001AC : void)
Eq_132: (fn void (real64, real64, Eq_136))
	T_132 (in _sin @ 800004CE : ptr32)
	T_133 (in signature of _sin @ 800004DE : void)
Eq_136: (union "Eq_136" (ptr32 u0) ((ref int32) u1))
	T_136 (in tArg14 @ 800004CE : (ref int32))
	T_140 (in fp - 8<32> @ 800004CE : word32)
Eq_144: (union "Eq_144" ((ptr32 word32) u0) ((ref int32) u1))
	T_144 (in tArg14 @ 800004DC : Eq_144)
Eq_155: (ref int32)
	T_155 (in tArg14 + 0<32> @ 80000608 : word32)
Eq_160: (union "Eq_160" ((ptr32 word32) u0) ((ref int32) u1))
	T_160 (in tArg14 + 0<32> @ 80000608 : word32)
Eq_204: (struct "Eq_204" (FFFFFFFC (ptr32 code) ptrFFFFFFFC))
	T_204 (in a2_24 @ 8000063C : (ptr32 Eq_204))
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in true @ 80000094 : bool)
  Class: Eq_2
  DataType: bool
  OrigDataType: bool
T_3: (in 00000000 @ 8000009E : ptr32)
  Class: Eq_3
  DataType: ptr32
  OrigDataType: ptr32
T_4: (in 0<32> @ 8000009E : word32)
  Class: Eq_3
  DataType: ptr32
  OrigDataType: word32
T_5: (in 0<u32> == 0<32> @ 8000009E : bool)
  Class: Eq_5
  DataType: bool
  OrigDataType: bool
T_6: (in fn00000000 @ 800000A6 : ptr32)
  Class: Eq_6
  DataType: (ptr32 Eq_6)
  OrigDataType: (ptr32 (fn T_9 (T_8)))
T_7: (in signature of fn00000000 : void)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: 
T_8: (in 80002724 @ 800000A6 : ptr32)
  Class: Eq_8
  DataType: (ptr32 byte)
  OrigDataType: (ptr32 (struct (0 T_28 t0000)))
T_9: (in fn00000000(&g_b80002724) @ 800000A6 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_10: (in d0_12 @ 800000C0 : int32)
  Class: Eq_10
  DataType: int32
  OrigDataType: int32
T_11: (in 0<32> @ 800000C0 : word32)
  Class: Eq_10
  DataType: int32
  OrigDataType: word32
T_12: (in false @ 800000C2 : bool)
  Class: Eq_12
  DataType: bool
  OrigDataType: bool
T_13: (in 1<32> @ 800000C4 : word32)
  Class: Eq_10
  DataType: int32
  OrigDataType: word32
T_14: (in d0_20 @ 800000C6 : int32)
  Class: Eq_14
  DataType: int32
  OrigDataType: int32
T_15: (in 1<32> @ 800000C6 : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_16: (in d0_12 >> 1<32> @ 800000C6 : word32)
  Class: Eq_14
  DataType: int32
  OrigDataType: int32
T_17: (in 0<32> @ 800000C8 : word32)
  Class: Eq_14
  DataType: int32
  OrigDataType: word32
T_18: (in d0_20 == 0<32> @ 800000C8 : bool)
  Class: Eq_18
  DataType: bool
  OrigDataType: bool
T_19: (in 0<32> @ 800000D2 : word32)
  Class: Eq_3
  DataType: ptr32
  OrigDataType: word32
T_20: (in 0<u32> == 0<32> @ 800000D2 : bool)
  Class: Eq_20
  DataType: bool
  OrigDataType: bool
T_21: (in fn00000000 @ 800000DC : ptr32)
  Class: Eq_21
  DataType: (ptr32 Eq_21)
  OrigDataType: (ptr32 (fn T_23 (T_8, T_14)))
T_22: (in signature of fn00000000 : void)
  Class: Eq_22
  DataType: Eq_22
  OrigDataType: 
T_23: (in fn00000000(&g_b80002724, d0_20) @ 800000DC : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_24: (in fp @ 800000E4 : ptr32)
  Class: Eq_24
  DataType: ptr32
  OrigDataType: ptr32
T_25: (in a6_37 @ 800000E4 : ptr32)
  Class: Eq_25
  DataType: ptr32
  OrigDataType: ptr32
T_26: (in 4<32> @ 800000E4 : word32)
  Class: Eq_26
  DataType: ui32
  OrigDataType: ui32
T_27: (in fp - 4<32> @ 800000E4 : word32)
  Class: Eq_25
  DataType: ptr32
  OrigDataType: ptr32
T_28: (in Mem13[0x80002724<p32>:byte] @ 800000F2 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in 0<8> @ 800000F2 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_30: (in g_b80002724 != 0<8> @ 800000F2 : bool)
  Class: Eq_30
  DataType: bool
  OrigDataType: bool
T_31: (in d0_19 @ 800000FA : uint32)
  Class: Eq_31
  DataType: uint32
  OrigDataType: up32
T_32: (in 80002726 @ 800000FA : ptr32)
  Class: Eq_32
  DataType: (ptr32 uint32)
  OrigDataType: (ptr32 (struct (0 T_31 t0000)))
T_33: (in Mem13[0x80002726<p32>:word32] @ 800000FA : word32)
  Class: Eq_31
  DataType: uint32
  OrigDataType: word32
T_34: (in a2_18 @ 800000F4 : (arr (ptr32 code)))
  Class: Eq_34
  DataType: (ptr32 (arr (ptr32 code)))
  OrigDataType: (ptr32 (struct (0 (arr T_213) a0000)))
T_35: (in 80002714 @ 800000F4 : ptr32)
  Class: Eq_34
  DataType: (ptr32 (arr (ptr32 code)))
  OrigDataType: ptr32
T_36: (in d2_23 @ 8000010E : uint32)
  Class: Eq_31
  DataType: uint32
  OrigDataType: up32
T_37: (in 0<32> @ 8000010E : word32)
  Class: Eq_31
  DataType: uint32
  OrigDataType: word32
T_38: (in 0<32> @ 80000112 : word32)
  Class: Eq_31
  DataType: uint32
  OrigDataType: up32
T_39: (in d0_19 >= 0<32> @ 80000112 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in deregister_tm_clones @ 8000012C : ptr32)
  Class: Eq_40
  DataType: (ptr32 Eq_40)
  OrigDataType: (ptr32 (fn T_42 ()))
T_41: (in signature of deregister_tm_clones @ 80000080 : void)
  Class: Eq_40
  DataType: (ptr32 Eq_40)
  OrigDataType: 
T_42: (in deregister_tm_clones() @ 8000012C : void)
  Class: Eq_42
  DataType: void
  OrigDataType: void
T_43: (in 0<32> @ 80000138 : word32)
  Class: Eq_3
  DataType: ptr32
  OrigDataType: word32
T_44: (in 0<u32> == 0<32> @ 80000138 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in d0_29 @ 80000114 : uint32)
  Class: Eq_31
  DataType: uint32
  OrigDataType: uint32
T_46: (in 1<32> @ 80000114 : word32)
  Class: Eq_46
  DataType: up32
  OrigDataType: up32
T_47: (in d0_19 + 1<32> @ 80000114 : word32)
  Class: Eq_31
  DataType: uint32
  OrigDataType: up32
T_48: (in Mem31[0x80002726<p32>:word32] @ 80000116 : word32)
  Class: Eq_31
  DataType: uint32
  OrigDataType: word32
T_49: (in a0_45 @ 80000120 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in d1_97 @ 80000120 : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_51: (in 4<i32> @ 80000120 : int32)
  Class: Eq_51
  DataType: int32
  OrigDataType: int32
T_52: (in d0_29 * 4<i32> @ 80000120 : word32)
  Class: Eq_52
  DataType: ui32
  OrigDataType: ui32
T_53: (in a2_18[d0_29 * 4<i32>] @ 80000120 : word32)
  Class: Eq_53
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_54: (in Mem31[0x80002726<p32>:word32] @ 80000122 : word32)
  Class: Eq_31
  DataType: uint32
  OrigDataType: up32
T_55: (in d2_23 > d0_19 @ 8000012A : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in 1<8> @ 80000144 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_57: (in Mem79[0x80002724<p32>:byte] @ 80000144 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_58: (in fn00000000 @ 80000140 : ptr32)
  Class: Eq_58
  DataType: (ptr32 Eq_58)
  OrigDataType: (ptr32 (fn T_61 (T_60)))
T_59: (in signature of fn00000000 : void)
  Class: Eq_59
  DataType: Eq_59
  OrigDataType: 
T_60: (in 8000065C @ 80000140 : ptr32)
  Class: Eq_60
  DataType: ptr32
  OrigDataType: ptr32
T_61: (in fn00000000(0x8000065C<u32>) @ 80000140 : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_62: (in 0<32> @ 8000016C : word32)
  Class: Eq_3
  DataType: ptr32
  OrigDataType: word32
T_63: (in 0<u32> == 0<32> @ 8000016C : bool)
  Class: Eq_63
  DataType: bool
  OrigDataType: bool
T_64: (in 8000271C @ 80000186 : ptr32)
  Class: Eq_64
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct (0 T_65 t0000)))
T_65: (in Mem25[0x8000271C<p32>:word32] @ 80000186 : word32)
  Class: Eq_65
  DataType: word32
  OrigDataType: word32
T_66: (in 0<32> @ 80000186 : word32)
  Class: Eq_65
  DataType: word32
  OrigDataType: word32
T_67: (in g_dw8000271C != 0<32> @ 80000186 : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in fn00000000 @ 8000017A : ptr32)
  Class: Eq_68
  DataType: (ptr32 Eq_68)
  OrigDataType: (ptr32 (fn T_71 (T_60, T_70)))
T_69: (in signature of fn00000000 : void)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: 
T_70: (in 8000272A @ 8000017A : ptr32)
  Class: Eq_70
  DataType: ptr32
  OrigDataType: ptr32
T_71: (in fn00000000(0x8000065C<u32>, 0x8000272A<u32>) @ 8000017A : void)
  Class: Eq_71
  DataType: void
  OrigDataType: void
T_72: (in 0<32> @ 80000196 : word32)
  Class: Eq_3
  DataType: ptr32
  OrigDataType: word32
T_73: (in 0<u32> == 0<32> @ 80000196 : bool)
  Class: Eq_73
  DataType: bool
  OrigDataType: bool
T_74: (in fn00000000 @ 8000019A : ptr32)
  Class: Eq_74
  DataType: (ptr32 Eq_74)
  OrigDataType: (ptr32 (fn T_76 (T_64)))
T_75: (in signature of fn00000000 : void)
  Class: Eq_75
  DataType: Eq_75
  OrigDataType: 
T_76: (in fn00000000(&g_dw8000271C) @ 8000019A : void)
  Class: Eq_76
  DataType: void
  OrigDataType: void
T_77: (in register_tm_clones @ 8000018A : ptr32)
  Class: Eq_77
  DataType: (ptr32 Eq_77)
  OrigDataType: (ptr32 (fn T_79 ()))
T_78: (in signature of register_tm_clones @ 800000AE : void)
  Class: Eq_77
  DataType: (ptr32 Eq_77)
  OrigDataType: 
T_79: (in register_tm_clones() @ 8000018A : void)
  Class: Eq_79
  DataType: void
  OrigDataType: void
T_80: (in register_tm_clones @ 800001A0 : ptr32)
  Class: Eq_77
  DataType: (ptr32 Eq_77)
  OrigDataType: (ptr32 (fn T_81 ()))
T_81: (in register_tm_clones() @ 800001A0 : void)
  Class: Eq_79
  DataType: void
  OrigDataType: void
T_82: (in rArg04 @ 800001AA : real64)
  Class: Eq_82
  DataType: real64
  OrigDataType: real64
T_83: (in dwArg04 @ 8000033A : int32)
  Class: Eq_83
  DataType: int32
  OrigDataType: int32
T_84: (in dwLoc08_36 @ 80000348 : int32)
  Class: Eq_83
  DataType: int32
  OrigDataType: int32
T_85: (in 2<i32> @ 80000348 : int32)
  Class: Eq_83
  DataType: int32
  OrigDataType: int32
T_86: (in 1<32> @ 80000364 : word32)
  Class: Eq_86
  DataType: word32
  OrigDataType: word32
T_87: (in dwLoc08_36 + 1<32> @ 80000364 : word32)
  Class: Eq_83
  DataType: int32
  OrigDataType: int32
T_88: (in dwLoc08_36 > dwArg04 @ 80000354 : bool)
  Class: Eq_88
  DataType: bool
  OrigDataType: bool
T_89: (in rArg04 @ 80000354 : real64)
  Class: Eq_89
  DataType: real64
  OrigDataType: real64
T_90: (in dwArg0C @ 80000354 : int32)
  Class: Eq_90
  DataType: int32
  OrigDataType: int32
T_91: (in dwLoc08_48 @ 80000382 : int32)
  Class: Eq_90
  DataType: int32
  OrigDataType: int32
T_92: (in 0<32> @ 80000382 : word32)
  Class: Eq_90
  DataType: int32
  OrigDataType: word32
T_93: (in 1<32> @ 800003A2 : word32)
  Class: Eq_93
  DataType: word32
  OrigDataType: word32
T_94: (in dwLoc08_48 + 1<32> @ 800003A2 : word32)
  Class: Eq_90
  DataType: int32
  OrigDataType: word32
T_95: (in dwLoc08_48 >= dwArg0C @ 8000038E : bool)
  Class: Eq_95
  DataType: bool
  OrigDataType: bool
T_96: (in rArg04 @ 8000038E : real64)
  Class: Eq_96
  DataType: real64
  OrigDataType: real64
T_97: (in dwArg0C @ 8000038E : int32)
  Class: Eq_97
  DataType: int32
  OrigDataType: int32
T_98: (in dwLoc08_121 @ 800003D2 : int32)
  Class: Eq_97
  DataType: int32
  OrigDataType: int32
T_99: (in 3<i32> @ 800003D2 : int32)
  Class: Eq_97
  DataType: int32
  OrigDataType: int32
T_100: (in dwLoc08_124 @ 8000042A : int32)
  Class: Eq_97
  DataType: int32
  OrigDataType: int32
T_101: (in 5<i32> @ 8000042A : int32)
  Class: Eq_97
  DataType: int32
  OrigDataType: int32
T_102: (in pow_int @ 800003EC : ptr32)
  Class: Eq_102
  DataType: (ptr32 Eq_102)
  OrigDataType: (ptr32 (fn T_106 (T_96, T_98)))
T_103: (in signature of pow_int @ 80000372 : void)
  Class: Eq_102
  DataType: (ptr32 Eq_102)
  OrigDataType: 
T_104: (in rArg04 @ 800003EC : real64)
  Class: Eq_96
  DataType: real64
  OrigDataType: 
T_105: (in dwArg0C @ 800003EC : int32)
  Class: Eq_97
  DataType: int32
  OrigDataType: 
T_106: (in pow_int(rArg04, dwLoc08_121) @ 800003EC : void)
  Class: Eq_106
  DataType: void
  OrigDataType: void
T_107: (in factorial @ 800003FC : ptr32)
  Class: Eq_107
  DataType: (ptr32 Eq_107)
  OrigDataType: (ptr32 (fn T_110 (T_98)))
T_108: (in signature of factorial @ 8000033C : void)
  Class: Eq_107
  DataType: (ptr32 Eq_107)
  OrigDataType: 
T_109: (in dwArg04 @ 800003FC : int32)
  Class: Eq_97
  DataType: int32
  OrigDataType: 
T_110: (in factorial(dwLoc08_121) @ 800003FC : void)
  Class: Eq_110
  DataType: void
  OrigDataType: void
T_111: (in 4<32> @ 80000422 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_112: (in dwLoc08_121 + 4<32> @ 80000422 : word32)
  Class: Eq_97
  DataType: int32
  OrigDataType: int32
T_113: (in dwLoc08_121 > dwArg0C @ 800003DE : bool)
  Class: Eq_113
  DataType: bool
  OrigDataType: bool
T_114: (in pow_int @ 80000444 : ptr32)
  Class: Eq_114
  DataType: (ptr32 Eq_114)
  OrigDataType: (ptr32 (fn T_118 (T_96, T_100)))
T_115: (in signature of pow_int @ 80000372 : void)
  Class: Eq_114
  DataType: (ptr32 Eq_114)
  OrigDataType: 
T_116: (in rArg04 @ 80000444 : real64)
  Class: Eq_96
  DataType: real64
  OrigDataType: 
T_117: (in dwArg0C @ 80000444 : int32)
  Class: Eq_97
  DataType: int32
  OrigDataType: 
T_118: (in pow_int(rArg04, dwLoc08_124) @ 80000444 : void)
  Class: Eq_118
  DataType: void
  OrigDataType: void
T_119: (in factorial @ 80000454 : ptr32)
  Class: Eq_119
  DataType: (ptr32 Eq_119)
  OrigDataType: (ptr32 (fn T_122 (T_100)))
T_120: (in signature of factorial @ 8000033C : void)
  Class: Eq_119
  DataType: (ptr32 Eq_119)
  OrigDataType: 
T_121: (in dwArg04 @ 80000454 : int32)
  Class: Eq_97
  DataType: int32
  OrigDataType: 
T_122: (in factorial(dwLoc08_124) @ 80000454 : void)
  Class: Eq_122
  DataType: void
  OrigDataType: void
T_123: (in 4<32> @ 8000047A : word32)
  Class: Eq_123
  DataType: word32
  OrigDataType: word32
T_124: (in dwLoc08_124 + 4<32> @ 8000047A : word32)
  Class: Eq_97
  DataType: int32
  OrigDataType: int32
T_125: (in dwLoc08_124 > dwArg0C @ 80000436 : bool)
  Class: Eq_125
  DataType: bool
  OrigDataType: bool
T_126: (in fp @ 8000049A : ptr32)
  Class: Eq_126
  DataType: ptr32
  OrigDataType: ptr32
T_127: (in sine_taylor @ 800004AA : ptr32)
  Class: Eq_127
  DataType: (ptr32 Eq_127)
  OrigDataType: (ptr32 (fn T_131 (T_130)))
T_128: (in signature of sine_taylor @ 800001AC : void)
  Class: Eq_127
  DataType: (ptr32 Eq_127)
  OrigDataType: 
T_129: (in rArg04 @ 800004AA : real64)
  Class: Eq_129
  DataType: real64
  OrigDataType: 
T_130: (in 3.14 @ 800004AA : real64)
  Class: Eq_129
  DataType: real64
  OrigDataType: real64
T_131: (in sine_taylor(3.14) @ 800004AA : void)
  Class: Eq_131
  DataType: void
  OrigDataType: void
T_132: (in _sin @ 800004CE : ptr32)
  Class: Eq_132
  DataType: (ptr32 Eq_132)
  OrigDataType: (ptr32 (fn T_141 (T_137, T_138, T_140)))
T_133: (in signature of _sin @ 800004DE : void)
  Class: Eq_132
  DataType: (ptr32 Eq_132)
  OrigDataType: 
T_134: (in rArg04 @ 800004CE : real64)
  Class: Eq_134
  DataType: real64
  OrigDataType: 
T_135: (in rArg0C @ 800004CE : real64)
  Class: Eq_135
  DataType: real64
  OrigDataType: 
T_136: (in tArg14 @ 800004CE : (ref int32))
  Class: Eq_136
  DataType: Eq_136
  OrigDataType: 
T_137: (in 3.14 @ 800004CE : real64)
  Class: Eq_134
  DataType: real64
  OrigDataType: real64
T_138: (in 0.003 @ 800004CE : real64)
  Class: Eq_135
  DataType: real64
  OrigDataType: real64
T_139: (in 8<32> @ 800004CE : word32)
  Class: Eq_139
  DataType: ui32
  OrigDataType: ui32
T_140: (in fp - 8<32> @ 800004CE : word32)
  Class: Eq_136
  DataType: Eq_136
  OrigDataType: (union (ptr32 u0) ((ref int32) u1))
T_141: (in _sin(3.14, 0.003, fp - 8<32>) @ 800004CE : void)
  Class: Eq_141
  DataType: void
  OrigDataType: void
T_142: (in rArg04 @ 800004DC : real64)
  Class: Eq_142
  DataType: real64
  OrigDataType: real64
T_143: (in rArg0C @ 800004DC : real64)
  Class: Eq_143
  DataType: real64
  OrigDataType: real64
T_144: (in tArg14 @ 800004DC : Eq_144)
  Class: Eq_144
  DataType: Eq_144
  OrigDataType: (union ((ptr32 word32) u1) ((ref int32) u0))
T_145: (in rLoc0C_115 @ 800004EE : real64)
  Class: Eq_142
  DataType: real64
  OrigDataType: real64
T_146: (in v12_14 @ 800004FA : real64)
  Class: Eq_146
  DataType: real64
  OrigDataType: real64
T_147: (in CONVERT(rArg04, real64, real96) @ 800004FA : real96)
  Class: Eq_147
  DataType: real96
  OrigDataType: real96
T_148: (in (real96) rArg04 *96 rArg04 @ 800004FA : real96)
  Class: Eq_148
  DataType: real96
  OrigDataType: real96
T_149: (in CONVERT(CONVERT(rArg04, real64, real96) *96 rArg04, real96, real64) @ 800004FA : real64)
  Class: Eq_146
  DataType: real64
  OrigDataType: real64
T_150: (in dwLoc20_121 @ 80000516 : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_151: (in 2<32> @ 80000516 : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_152: (in rLoc14_123 @ 80000516 : real64)
  Class: Eq_152
  DataType: real64
  OrigDataType: real64
T_153: (in 0x3FF0000000000000<64> @ 80000516 : word64)
  Class: Eq_152
  DataType: real64
  OrigDataType: word64
T_154: (in 0<32> @ 80000608 : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_155: (in tArg14 + 0<32> @ 80000608 : word32)
  Class: Eq_155
  DataType: Eq_155
  OrigDataType: (ref int32)
T_156: (in Mem98[tArg14 + 0<32>:word32] @ 80000608 : word32)
  Class: Eq_156
  DataType: word32
  OrigDataType: word32
T_157: (in 1<32> @ 80000608 : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_158: (in *tArg14.u0 + 1<32> @ 80000608 : word32)
  Class: Eq_156
  DataType: word32
  OrigDataType: word32
T_159: (in 0<32> @ 80000608 : word32)
  Class: Eq_159
  DataType: word32
  OrigDataType: word32
T_160: (in tArg14 + 0<32> @ 80000608 : word32)
  Class: Eq_160
  DataType: Eq_160
  OrigDataType: (union ((ptr32 word32) u1) ((ref int32) u0))
T_161: (in Mem105[tArg14 + 0<32>:word32] @ 80000608 : word32)
  Class: Eq_156
  DataType: word32
  OrigDataType: word32
T_162: (in v19_57 @ 8000055E : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_163: (in 0<32> @ 8000055E : word32)
  Class: Eq_163
  DataType: word32
  OrigDataType: word32
T_164: (in dwLoc20_121 + 0<32> @ 8000055E : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_165: (in CONVERT(rLoc0C_115, real64, real96) @ 800005BE : real96)
  Class: Eq_165
  DataType: real96
  OrigDataType: real96
T_166: (in (real96) rLoc0C_115 *96 v12_14 @ 800005BE : real96)
  Class: Eq_166
  DataType: real96
  OrigDataType: real96
T_167: (in (real96) rLoc0C_115 *96 v12_14 *96 v12_14 @ 800005BE : real96)
  Class: Eq_167
  DataType: real96
  OrigDataType: real96
T_168: (in CONVERT(CONVERT(rLoc0C_115, real64, real96) *96 v12_14 *96 v12_14, real96, real64) @ 800005BE : real64)
  Class: Eq_142
  DataType: real64
  OrigDataType: real64
T_169: (in 3<32> @ 800005E0 : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_170: (in v19_57 + 3<32> @ 800005E0 : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_171: (in CONVERT(rLoc14_123, real64, real96) @ 800005F6 : real96)
  Class: Eq_171
  DataType: real96
  OrigDataType: real96
T_172: (in CONVERT(v19_57, word32, real96) @ 800005F6 : real96)
  Class: Eq_172
  DataType: real96
  OrigDataType: real96
T_173: (in CONVERT(CONVERT(v19_57, word32, real96), real96, real80) @ 800005F6 : real80)
  Class: Eq_173
  DataType: real80
  OrigDataType: real80
T_174: (in (real96) rLoc14_123 *96 (real80) ((real96) v19_57) @ 800005F6 : real96)
  Class: Eq_174
  DataType: real96
  OrigDataType: real96
T_175: (in 1<32> @ 800005F6 : word32)
  Class: Eq_175
  DataType: word32
  OrigDataType: word32
T_176: (in v19_57 + 1<32> @ 800005F6 : word32)
  Class: Eq_176
  DataType: word32
  OrigDataType: word32
T_177: (in CONVERT(v19_57 + 1<32>, word32, real96) @ 800005F6 : real96)
  Class: Eq_177
  DataType: real96
  OrigDataType: real96
T_178: (in CONVERT(CONVERT(v19_57 + 1<32>, word32, real96), real96, real80) @ 800005F6 : real80)
  Class: Eq_178
  DataType: real80
  OrigDataType: real80
T_179: (in (real96) rLoc14_123 *96 (real80) ((real96) v19_57) *96 (real80) ((real96) (v19_57 + 1<32>)) @ 800005F6 : real96)
  Class: Eq_179
  DataType: real96
  OrigDataType: real96
T_180: (in 2<32> @ 800005F6 : word32)
  Class: Eq_180
  DataType: word32
  OrigDataType: word32
T_181: (in v19_57 + 2<32> @ 800005F6 : word32)
  Class: Eq_181
  DataType: word32
  OrigDataType: word32
T_182: (in CONVERT(v19_57 + 2<32>, word32, real96) @ 800005F6 : real96)
  Class: Eq_182
  DataType: real96
  OrigDataType: real96
T_183: (in CONVERT(CONVERT(v19_57 + 2<32>, word32, real96), real96, real80) @ 800005F6 : real80)
  Class: Eq_183
  DataType: real80
  OrigDataType: real80
T_184: (in (real96) rLoc14_123 *96 (real80) ((real96) v19_57) *96 (real80) ((real96) (v19_57 + 1<32>)) *96 (real80) ((real96) (v19_57 + 2<32>)) @ 800005F6 : real96)
  Class: Eq_184
  DataType: real96
  OrigDataType: real96
T_185: (in v19_57 + 3<32> @ 800005F6 : word32)
  Class: Eq_185
  DataType: word32
  OrigDataType: word32
T_186: (in CONVERT(v19_57 + 3<32>, word32, real96) @ 800005F6 : real96)
  Class: Eq_186
  DataType: real96
  OrigDataType: real96
T_187: (in CONVERT(CONVERT(v19_57 + 3<32>, word32, real96), real96, real80) @ 800005F6 : real80)
  Class: Eq_187
  DataType: real80
  OrigDataType: real80
T_188: (in (real96) rLoc14_123 *96 (real80) ((real96) v19_57) *96 (real80) ((real96) (v19_57 + 1<32>)) *96 (real80) ((real96) (v19_57 + 2<32>)) *96 (real80) ((real96) (v19_57 + 3<32>)) @ 800005F6 : real96)
  Class: Eq_188
  DataType: real96
  OrigDataType: real96
T_189: (in CONVERT(CONVERT(rLoc14_123, real64, real96) *96 CONVERT(CONVERT(v19_57, word32, real96), real96, real80) *96 CONVERT(CONVERT(v19_57 + 1<32>, word32, real96), real96, real80) *96 CONVERT(CONVERT(v19_57 + 2<32>, word32, real96), real96, real80) *96 CONVERT(CONVERT(v19_57 + 3<32>, word32, real96), real96, real80), real96, real64) @ 800005F6 : real64)
  Class: Eq_152
  DataType: real64
  OrigDataType: real64
T_190: (in CONVERT(rLoc0C_115, real64, real96) @ 8000052C : real96)
  Class: Eq_190
  DataType: real96
  OrigDataType: real96
T_191: (in (real96) rLoc0C_115 /96 rLoc14_123 @ 8000052C : real96)
  Class: Eq_191
  DataType: real96
  OrigDataType: real96
T_192: (in CONVERT(CONVERT(rLoc0C_115, real64, real96) /96 rLoc14_123, real96, real64) @ 8000052C : real64)
  Class: Eq_143
  DataType: real64
  OrigDataType: real64
T_193: (in (real64) ((real96) rLoc0C_115 /96 rLoc14_123) < rArg0C @ 8000052C : bool)
  Class: Eq_193
  DataType: bool
  OrigDataType: bool
T_194: (in fp @ 80000624 : ptr32)
  Class: Eq_194
  DataType: ptr32
  OrigDataType: ptr32
T_195: (in a0_11 @ 8000062A : (ptr32 code))
  Class: Eq_195
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_196: (in 8000270C @ 8000062A : ptr32)
  Class: Eq_196
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_197 t0000)))
T_197: (in Mem10[0x8000270C<p32>:word32] @ 8000062A : word32)
  Class: Eq_195
  DataType: (ptr32 code)
  OrigDataType: word32
T_198: (in a6_18 @ 80000624 : ptr32)
  Class: Eq_198
  DataType: ptr32
  OrigDataType: ptr32
T_199: (in 4<32> @ 80000624 : word32)
  Class: Eq_199
  DataType: ui32
  OrigDataType: ui32
T_200: (in fp - 4<32> @ 80000624 : word32)
  Class: Eq_198
  DataType: ptr32
  OrigDataType: ptr32
T_201: (in a2_12 @ 80000630 : (ptr32 (ptr32 code)))
  Class: Eq_196
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_197 t0000)))
T_202: (in -1<i32> @ 8000063A : int32)
  Class: Eq_195
  DataType: (ptr32 code)
  OrigDataType: int32
T_203: (in a0_11 == (<anonymous> *) -1<i32> @ 8000063A : bool)
  Class: Eq_203
  DataType: bool
  OrigDataType: bool
T_204: (in a2_24 @ 8000063C : (ptr32 Eq_204))
  Class: Eq_204
  DataType: (ptr32 Eq_204)
  OrigDataType: (ptr32 (struct (FFFFFFFC T_207 tFFFFFFFC)))
T_205: (in -4<i32> @ 8000063E : int32)
  Class: Eq_205
  DataType: int32
  OrigDataType: int32
T_206: (in a2_24 + -4<i32> @ 8000063E : word32)
  Class: Eq_206
  DataType: word32
  OrigDataType: word32
T_207: (in Mem10[a2_24 + -4<i32>:word32] @ 8000063E : word32)
  Class: Eq_195
  DataType: (ptr32 code)
  OrigDataType: word32
T_208: (in 4<i32> @ 8000063E : int32)
  Class: Eq_208
  DataType: int32
  OrigDataType: int32
T_209: (in a2_24 - 4<i32> @ 8000063E : word32)
  Class: Eq_196
  DataType: (ptr32 (ptr32 code))
  OrigDataType: ptr32
T_210: (in -1<i32> @ 80000644 : int32)
  Class: Eq_195
  DataType: (ptr32 code)
  OrigDataType: int32
T_211: (in a0_11 != (<anonymous> *) -1<i32> @ 80000644 : bool)
  Class: Eq_211
  DataType: bool
  OrigDataType: bool
T_212:
  Class: Eq_31
  DataType: uint32
  OrigDataType: word32
T_213:
  Class: Eq_213
  DataType: (ptr32 code)
  OrigDataType: (struct 0004 (0 T_53 t0000))
T_214:
  Class: Eq_214
  DataType: (arr (ptr32 code))
  OrigDataType: (arr T_213)
*/
typedef struct Globals {
	<anonymous> * ptr8000270C;	// 8000270C
	<anonymous> * a80002714[];	// 80002714
	word32 dw8000271C;	// 8000271C
	byte b80002724;	// 80002724
	uint32 dtor_idx.3228;	// 80002726
	<anonymous> tFFFFFFFF;	// FFFFFFFF
} Eq_1;

typedef word32 (Eq_6)(byte *);

typedef word32 (Eq_21)(byte *, int32);

typedef void (Eq_40)();

typedef word32 (Eq_58)(ptr32);

typedef void (Eq_68)(ptr32, ptr32);

typedef void (Eq_74)(word32 *);

typedef void (Eq_77)();

typedef void (Eq_102)(real64, int32);

typedef void (Eq_107)(int32);

typedef void (Eq_114)(real64, int32);

typedef void (Eq_119)(int32);

typedef void (Eq_127)(real64);

typedef void (Eq_132)(real64, real64, Eq_136);

typedef union Eq_136 {
	ptr32 u0;
	int32 & u1;
} Eq_136;

typedef union Eq_144 {
	word32 * u0;
	int32 & u1;
} Eq_144;

typedef int32 & Eq_155;

typedef union Eq_160 {
	word32 * u0;
	int32 & u1;
} Eq_160;

typedef struct Eq_204 {
	<anonymous> * ptrFFFFFFFC;	// FFFFFFFC
} Eq_204;

