// retpoline.h
// Generated by decompiling retpoline.elf
// using Reko decompiler version 0.11.5.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals"
		(400456 code t400456)
		(400466 code t400466)
		(400476 code t400476)
		(400660 Eq_20 t400660)
		(400710 Eq_23 t400710)
		(400780 Eq_24 t400780)
		(600E10 (arr (ptr64 code)) a600E10)
		(600FF0 (ptr64 code) __libc_start_main_GOT)
		(600FF8 (ptr64 code) __gmon_start___GOT)
		(601018 (ptr64 code) free_GOT)
		(601020 (ptr64 code) puts_GOT)
		(601028 (ptr64 code) calloc_GOT)
		(601040 byte b601040))
	globals_t (in globals : (ptr64 (struct "Globals")))
Eq_6: (fn word64 ())
	T_6 (in __gmon_start__ @ 0000000000400438 : ptr64)
Eq_8: (fn void ())
	T_8 (in rdx @ 0000000000400438 : (ptr64 Eq_8))
	T_25 (in rtld_fini @ 00000000004004A4 : (ptr64 (fn void ())))
Eq_13: (fn void ((ptr64 (ptr64 char))))
	T_13 (in __align_stack<word64> @ 0000000000400489 : ptr32)
	T_14 (in signature of __align_stack : void)
Eq_18: (fn int32 ((ptr64 Eq_20), int32, (ptr64 (ptr64 char)), (ptr64 Eq_23), (ptr64 Eq_24), (ptr64 Eq_8), (ptr64 void)))
	T_18 (in __libc_start_main @ 00000000004004A4 : ptr64)
	T_19 (in signature of __libc_start_main : void)
Eq_20: (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))
	T_20 (in main @ 00000000004004A4 : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
	T_27 (in 0x400660<64> @ 00000000004004A4 : word64)
Eq_23: (fn void ())
	T_23 (in init @ 00000000004004A4 : (ptr64 (fn void ())))
	T_30 (in 0x400710<64> @ 00000000004004A4 : word64)
Eq_24: (fn void ())
	T_24 (in fini @ 00000000004004A4 : (ptr64 (fn void ())))
	T_31 (in 0x400780<64> @ 00000000004004A4 : word64)
Eq_33: (fn void ())
	T_33 (in __halt @ 00000000004004AA : ptr32)
	T_34 (in signature of __halt : void)
Eq_46: (fn void ())
	T_46 (in deregister_tm_clones @ 000000000040052D : ptr64)
	T_47 (in signature of deregister_tm_clones @ 00000000004004B0 : void)
Eq_51: (fn void ())
	T_51 (in register_tm_clones @ 0000000000400555 : ptr64)
	T_52 (in signature of register_tm_clones @ 00000000004004E0 : void)
Eq_103: (fn void (int32, int32))
	T_103 (in my1 @ 0000000000400631 : ptr64)
	T_104 (in signature of my1 @ 0000000000400560 : void)
Eq_106: (fn void ((ptr64 void)))
	T_106 (in free @ 000000000040063E : ptr64)
	T_107 (in signature of free : void)
Eq_110: (fn void ())
	T_110 (in __llvm_retpoline_r11 @ 00000000004006A7 : ptr64)
	T_111 (in signature of __llvm_retpoline_r11 @ 00000000004006F0 : void)
Eq_113: (fn void ())
	T_113 (in fn0000000000400700 @ 00000000004006F0 : ptr64)
	T_114 (in signature of fn0000000000400700 @ 0000000000400700 : void)
Eq_116: (fn void ())
	T_116 (in __pause @ 00000000004006F5 : ptr32)
	T_117 (in signature of __pause : void)
Eq_124: (fn void ())
	T_124 (in _init @ 000000000040073C : ptr64)
	T_125 (in signature of _init @ 0000000000400428 : void)
Eq_128: (union "Eq_128" (int64 u0) (ptr64 u1))
	T_128 (in 0000000000600E18 @ 0000000000400731 : ptr64)
Eq_135: (union "Eq_135" (int64 u0) (uint64 u1))
	T_135 (in rbx_46 @ 0000000000400746 : Eq_135)
	T_136 (in 0<u64> @ 0000000000400746 : uint64)
	T_141 (in rbx_46 + 1<64> @ 000000000040075D : word64)
	T_142 (in rbp_31 >> 3<64> @ 0000000000400764 : word64)
// Type Variables ////////////
globals_t: (in globals : (ptr64 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr64 Eq_1)
  OrigDataType: (ptr64 (struct "Globals"))
T_2: (in __gmon_start__ @ 0000000000400436 : ptr64)
  Class: Eq_2
  DataType: word64
  OrigDataType: 
T_3: (in signature of __gmon_start__ : void)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: 
T_4: (in 0<64> @ 0000000000400436 : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_5: (in __gmon_start__ == 0<64> @ 0000000000400436 : bool)
  Class: Eq_5
  DataType: bool
  OrigDataType: bool
T_6: (in __gmon_start__ @ 0000000000400438 : ptr64)
  Class: Eq_6
  DataType: (ptr64 Eq_6)
  OrigDataType: (ptr64 (fn T_7 ()))
T_7: (in __gmon_start__() @ 0000000000400438 : word64)
  Class: Eq_7
  DataType: word64
  OrigDataType: word64
T_8: (in rdx @ 0000000000400438 : (ptr64 Eq_8))
  Class: Eq_8
  DataType: (ptr64 Eq_8)
  OrigDataType: (ptr64 (fn void ()))
T_9: (in dwArg00 @ 0000000000400438 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_10: (in ptrArg08 @ 0000000000400438 : (ptr64 char))
  Class: Eq_10
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_11: (in fp @ 0000000000400480 : (ptr64 void))
  Class: Eq_11
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_12: (in qwArg00 @ 0000000000400480 : word64)
  Class: Eq_12
  DataType: word64
  OrigDataType: word64
T_13: (in __align_stack<word64> @ 0000000000400489 : ptr32)
  Class: Eq_13
  DataType: (ptr32 Eq_13)
  OrigDataType: (ptr32 (fn T_17 (T_16)))
T_14: (in signature of __align_stack : void)
  Class: Eq_13
  DataType: (ptr32 Eq_13)
  OrigDataType: 
T_15: (in p1 @ 0000000000400489 : word64)
  Class: Eq_15
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_16: (in &ptrArg08 @ 0000000000400489 : (ptr64 (ptr64 char)))
  Class: Eq_15
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_17: (in __align_stack<word64>(&ptrArg08) @ 0000000000400489 : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in __libc_start_main @ 00000000004004A4 : ptr64)
  Class: Eq_18
  DataType: (ptr64 Eq_18)
  OrigDataType: (ptr64 (fn T_32 (T_27, T_28, T_29, T_30, T_31, T_8, T_11)))
T_19: (in signature of __libc_start_main : void)
  Class: Eq_18
  DataType: (ptr64 Eq_18)
  OrigDataType: 
T_20: (in main @ 00000000004004A4 : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
  Class: Eq_20
  DataType: (ptr64 Eq_20)
  OrigDataType: 
T_21: (in argc @ 00000000004004A4 : int32)
  Class: Eq_21
  DataType: int32
  OrigDataType: 
T_22: (in ubp_av @ 00000000004004A4 : (ptr64 (ptr64 char)))
  Class: Eq_22
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_23: (in init @ 00000000004004A4 : (ptr64 (fn void ())))
  Class: Eq_23
  DataType: (ptr64 Eq_23)
  OrigDataType: 
T_24: (in fini @ 00000000004004A4 : (ptr64 (fn void ())))
  Class: Eq_24
  DataType: (ptr64 Eq_24)
  OrigDataType: 
T_25: (in rtld_fini @ 00000000004004A4 : (ptr64 (fn void ())))
  Class: Eq_8
  DataType: (ptr64 Eq_8)
  OrigDataType: 
T_26: (in stack_end @ 00000000004004A4 : (ptr64 void))
  Class: Eq_11
  DataType: (ptr64 void)
  OrigDataType: 
T_27: (in 0x400660<64> @ 00000000004004A4 : word64)
  Class: Eq_20
  DataType: (ptr64 Eq_20)
  OrigDataType: (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))))
T_28: (in SLICE(qwArg00, int32, 0) @ 00000000004004A4 : int32)
  Class: Eq_21
  DataType: int32
  OrigDataType: int32
T_29: (in &ptrArg08 @ 00000000004004A4 : (ptr64 (ptr64 char)))
  Class: Eq_22
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_30: (in 0x400710<64> @ 00000000004004A4 : word64)
  Class: Eq_23
  DataType: (ptr64 Eq_23)
  OrigDataType: (ptr64 (fn void ()))
T_31: (in 0x400780<64> @ 00000000004004A4 : word64)
  Class: Eq_24
  DataType: (ptr64 Eq_24)
  OrigDataType: (ptr64 (fn void ()))
T_32: (in __libc_start_main(&g_t400660, (int32) qwArg00, &ptrArg08, &g_t400710, &g_t400780, rdx, fp) @ 00000000004004A4 : int32)
  Class: Eq_32
  DataType: int32
  OrigDataType: int32
T_33: (in __halt @ 00000000004004AA : ptr32)
  Class: Eq_33
  DataType: (ptr32 Eq_33)
  OrigDataType: (ptr32 (fn T_35 ()))
T_34: (in signature of __halt : void)
  Class: Eq_33
  DataType: (ptr32 Eq_33)
  OrigDataType: 
T_35: (in __halt() @ 00000000004004AA : void)
  Class: Eq_35
  DataType: void
  OrigDataType: void
T_36: (in true @ 00000000004004BF : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in true @ 00000000004004C9 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in 0<u64> @ 00000000004004D1 : uint64)
  Class: Eq_38
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_39: (in true @ 0000000000400501 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in true @ 000000000040050B : bool)
  Class: Eq_40
  DataType: bool
  OrigDataType: bool
T_41: (in 0<u64> @ 0000000000400513 : uint64)
  Class: Eq_41
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_42: (in 0000000000601040 @ 0000000000400527 : ptr64)
  Class: Eq_42
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_43 t0000)))
T_43: (in Mem0[0x0000000000601040<p64>:byte] @ 0000000000400527 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in 0<8> @ 0000000000400527 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_45: (in g_b601040 != 0<8> @ 0000000000400527 : bool)
  Class: Eq_45
  DataType: bool
  OrigDataType: bool
T_46: (in deregister_tm_clones @ 000000000040052D : ptr64)
  Class: Eq_46
  DataType: (ptr64 Eq_46)
  OrigDataType: (ptr64 (fn T_48 ()))
T_47: (in signature of deregister_tm_clones @ 00000000004004B0 : void)
  Class: Eq_46
  DataType: (ptr64 Eq_46)
  OrigDataType: 
T_48: (in deregister_tm_clones() @ 000000000040052D : void)
  Class: Eq_48
  DataType: void
  OrigDataType: void
T_49: (in 1<8> @ 0000000000400532 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_50: (in Mem18[0x0000000000601040<p64>:byte] @ 0000000000400532 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_51: (in register_tm_clones @ 0000000000400555 : ptr64)
  Class: Eq_51
  DataType: (ptr64 Eq_51)
  OrigDataType: (ptr64 (fn T_53 ()))
T_52: (in signature of register_tm_clones @ 00000000004004E0 : void)
  Class: Eq_51
  DataType: (ptr64 Eq_51)
  OrigDataType: 
T_53: (in register_tm_clones() @ 0000000000400555 : void)
  Class: Eq_53
  DataType: void
  OrigDataType: void
T_54: (in esi @ 0000000000400555 : int32)
  Class: Eq_54
  DataType: int32
  OrigDataType: word32
T_55: (in edi @ 0000000000400555 : int32)
  Class: Eq_54
  DataType: int32
  OrigDataType: word32
T_56: (in calloc @ 0000000000400576 : ptr64)
  Class: Eq_56
  DataType: ptr64
  OrigDataType: ptr64
T_57: (in signature of calloc : void)
  Class: Eq_56
  DataType: ptr64
  OrigDataType: 
T_58: (in num @ 0000000000400576 : size_t)
  Class: Eq_58
  DataType: int64
  OrigDataType: 
T_59: (in size @ 0000000000400576 : size_t)
  Class: Eq_58
  DataType: int64
  OrigDataType: 
T_60: (in CONVERT(edi, word32, int64) @ 0000000000400576 : int64)
  Class: Eq_58
  DataType: int64
  OrigDataType: int64
T_61: (in CONVERT(esi, word32, int64) @ 0000000000400576 : int64)
  Class: Eq_58
  DataType: int64
  OrigDataType: int64
T_62: (in calloc((int64) edi, (int64) esi) @ 0000000000400576 : (ptr64 void))
  Class: Eq_62
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_63: (in sil @ 0000000000400588 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in rdi @ 0000000000400588 : (ptr64 byte))
  Class: Eq_64
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_67 t0000)))
T_65: (in 0<64> @ 00000000004005AA : word64)
  Class: Eq_65
  DataType: word64
  OrigDataType: word64
T_66: (in rdi + 0<64> @ 00000000004005AA : word64)
  Class: Eq_66
  DataType: word64
  OrigDataType: word64
T_67: (in Mem17[rdi + 0<64>:byte] @ 00000000004005AA : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_68: (in esi @ 00000000004005AF : int32)
  Class: Eq_54
  DataType: int32
  OrigDataType: int32
T_69: (in edi @ 00000000004005AF : int32)
  Class: Eq_54
  DataType: int32
  OrigDataType: int32
T_70: (in rdi @ 00000000004005B0 : word64)
  Class: Eq_70
  DataType: word64
  OrigDataType: word64
T_71: (in SLICE(rdi, word32, 0) @ 00000000004005B0 : word32)
  Class: Eq_54
  DataType: int32
  OrigDataType: word32
T_72: (in edi >= esi @ 00000000004005C4 : bool)
  Class: Eq_72
  DataType: bool
  OrigDataType: bool
T_73: (in 1<32> @ 00000000004005D8 : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_74: (in edi << 1<32> @ 00000000004005D8 : word32)
  Class: Eq_74
  DataType: int32
  OrigDataType: int32
T_75: (in 1<32> @ 00000000004005D8 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in esi << 1<32> @ 00000000004005D8 : word32)
  Class: Eq_74
  DataType: int32
  OrigDataType: int32
T_77: (in edi << 1<32> >= esi << 1<32> @ 00000000004005D8 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in 3<32> @ 00000000004005E8 : word32)
  Class: Eq_78
  DataType: int32
  OrigDataType: int32
T_79: (in edi *s 3<32> @ 00000000004005E8 : int32)
  Class: Eq_79
  DataType: int32
  OrigDataType: int32
T_80: (in 3<32> @ 00000000004005E8 : word32)
  Class: Eq_80
  DataType: int32
  OrigDataType: int32
T_81: (in esi *s 3<32> @ 00000000004005E8 : int32)
  Class: Eq_79
  DataType: int32
  OrigDataType: int32
T_82: (in edi *s 3<32> >= esi *s 3<32> @ 00000000004005E8 : bool)
  Class: Eq_82
  DataType: bool
  OrigDataType: bool
T_83: (in 2<32> @ 00000000004005FC : word32)
  Class: Eq_83
  DataType: word32
  OrigDataType: word32
T_84: (in edi << 2<32> @ 00000000004005FC : word32)
  Class: Eq_84
  DataType: int32
  OrigDataType: int32
T_85: (in 2<32> @ 00000000004005FC : word32)
  Class: Eq_85
  DataType: word32
  OrigDataType: word32
T_86: (in esi << 2<32> @ 00000000004005FC : word32)
  Class: Eq_84
  DataType: int32
  OrigDataType: int32
T_87: (in edi << 2<32> >= esi << 2<32> @ 00000000004005FC : bool)
  Class: Eq_87
  DataType: bool
  OrigDataType: bool
T_88: (in rax_77 @ 000000000040061B : uint64)
  Class: Eq_88
  DataType: uint64
  OrigDataType: uint64
T_89: (in CONVERT(esi, word32, uint64) @ 000000000040061B : uint64)
  Class: Eq_88
  DataType: uint64
  OrigDataType: uint64
T_90: (in edx_eax_79 @ 000000000040061D : int64)
  Class: Eq_90
  DataType: int64
  OrigDataType: int64
T_91: (in SLICE(rax_77, word32, 0) @ 000000000040061D : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_92: (in CONVERT(SLICE(rax_77, word32, 0), word32, int64) @ 000000000040061D : int64)
  Class: Eq_90
  DataType: int64
  OrigDataType: int64
T_93: (in rax_105 @ 0000000000400623 : (ptr64 void))
  Class: Eq_93
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_94: (in SLICE(rax_77, word32, 32) @ 0000000000400623 : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_95: (in 2<32> @ 0000000000400623 : word32)
  Class: Eq_95
  DataType: int32
  OrigDataType: int32
T_96: (in edx_eax_79 /32 2<32> @ 0000000000400623 : int32)
  Class: Eq_96
  DataType: int32
  OrigDataType: int32
T_97: (in SEQ(SLICE(rax_77, word32, 32), edx_eax_79 /32 2<32>) @ 0000000000400623 : word64)
  Class: Eq_93
  DataType: (ptr64 void)
  OrigDataType: word64
T_98: (in CONVERT(edi, word32, int64) @ 0000000000400625 : int64)
  Class: Eq_98
  DataType: int64
  OrigDataType: int64
T_99: (in 2<32> @ 0000000000400625 : word32)
  Class: Eq_99
  DataType: int32
  OrigDataType: int32
T_100: (in (int64) edi /32 2<32> @ 0000000000400625 : int32)
  Class: Eq_100
  DataType: int32
  OrigDataType: int32
T_101: (in edx_eax_79 /32 2<32> @ 0000000000400625 : int32)
  Class: Eq_100
  DataType: int32
  OrigDataType: int32
T_102: (in (int64) edi /32 2<32> >= edx_eax_79 /32 2<32> @ 0000000000400625 : bool)
  Class: Eq_102
  DataType: bool
  OrigDataType: bool
T_103: (in my1 @ 0000000000400631 : ptr64)
  Class: Eq_103
  DataType: (ptr64 Eq_103)
  OrigDataType: (ptr64 (fn T_105 (T_68, T_69)))
T_104: (in signature of my1 @ 0000000000400560 : void)
  Class: Eq_103
  DataType: (ptr64 Eq_103)
  OrigDataType: 
T_105: (in my1(esi, edi) @ 0000000000400631 : void)
  Class: Eq_105
  DataType: void
  OrigDataType: void
T_106: (in free @ 000000000040063E : ptr64)
  Class: Eq_106
  DataType: (ptr64 Eq_106)
  OrigDataType: (ptr64 (fn T_109 (T_93)))
T_107: (in signature of free : void)
  Class: Eq_106
  DataType: (ptr64 Eq_106)
  OrigDataType: 
T_108: (in p @ 000000000040063E : (ptr64 void))
  Class: Eq_93
  DataType: (ptr64 void)
  OrigDataType: 
T_109: (in free(rax_105) @ 000000000040063E : void)
  Class: Eq_109
  DataType: void
  OrigDataType: void
T_110: (in __llvm_retpoline_r11 @ 00000000004006A7 : ptr64)
  Class: Eq_110
  DataType: (ptr64 Eq_110)
  OrigDataType: (ptr64 (fn T_112 ()))
T_111: (in signature of __llvm_retpoline_r11 @ 00000000004006F0 : void)
  Class: Eq_110
  DataType: (ptr64 Eq_110)
  OrigDataType: 
T_112: (in __llvm_retpoline_r11() @ 00000000004006A7 : void)
  Class: Eq_112
  DataType: void
  OrigDataType: void
T_113: (in fn0000000000400700 @ 00000000004006F0 : ptr64)
  Class: Eq_113
  DataType: (ptr64 Eq_113)
  OrigDataType: (ptr64 (fn T_115 ()))
T_114: (in signature of fn0000000000400700 @ 0000000000400700 : void)
  Class: Eq_113
  DataType: (ptr64 Eq_113)
  OrigDataType: 
T_115: (in fn0000000000400700() @ 00000000004006F0 : void)
  Class: Eq_115
  DataType: void
  OrigDataType: void
T_116: (in __pause @ 00000000004006F5 : ptr32)
  Class: Eq_116
  DataType: (ptr32 Eq_116)
  OrigDataType: (ptr32 (fn T_118 ()))
T_117: (in signature of __pause : void)
  Class: Eq_116
  DataType: (ptr32 Eq_116)
  OrigDataType: 
T_118: (in __pause() @ 00000000004006F5 : void)
  Class: Eq_118
  DataType: void
  OrigDataType: void
T_119: (in rdx @ 0000000000400704 : word64)
  Class: Eq_119
  DataType: word64
  OrigDataType: word64
T_120: (in rsi @ 0000000000400704 : word64)
  Class: Eq_120
  DataType: word64
  OrigDataType: word64
T_121: (in edi @ 0000000000400704 : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_122: (in rdi @ 0000000000400710 : word64)
  Class: Eq_122
  DataType: word64
  OrigDataType: word64
T_123: (in SLICE(rdi, word32, 0) @ 0000000000400710 : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_124: (in _init @ 000000000040073C : ptr64)
  Class: Eq_124
  DataType: (ptr64 Eq_124)
  OrigDataType: (ptr64 (fn T_126 ()))
T_125: (in signature of _init @ 0000000000400428 : void)
  Class: Eq_124
  DataType: (ptr64 Eq_124)
  OrigDataType: 
T_126: (in _init() @ 000000000040073C : void)
  Class: Eq_126
  DataType: void
  OrigDataType: void
T_127: (in rbp_31 @ 0000000000400731 : int64)
  Class: Eq_127
  DataType: int64
  OrigDataType: int64
T_128: (in 0000000000600E18 @ 0000000000400731 : ptr64)
  Class: Eq_128
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_129: (in 0000000000600E10 @ 0000000000400731 : ptr64)
  Class: Eq_129
  DataType: (ptr64 (arr (ptr64 code)))
  OrigDataType: (union ((ptr64 (arr Eq_144)) u1) ((ptr64 (arr Eq_144)) u0))
T_130: (in 0x600E18<u64> - g_a600E10 @ 0000000000400731 : word64)
  Class: Eq_127
  DataType: int64
  OrigDataType: int64
T_131: (in 3<64> @ 0000000000400744 : word64)
  Class: Eq_131
  DataType: word64
  OrigDataType: word64
T_132: (in rbp_31 >> 3<64> @ 0000000000400744 : word64)
  Class: Eq_132
  DataType: int64
  OrigDataType: int64
T_133: (in 0<64> @ 0000000000400744 : word64)
  Class: Eq_132
  DataType: int64
  OrigDataType: word64
T_134: (in rbp_31 >> 3<64> == 0<64> @ 0000000000400744 : bool)
  Class: Eq_134
  DataType: bool
  OrigDataType: bool
T_135: (in rbx_46 @ 0000000000400746 : Eq_135)
  Class: Eq_135
  DataType: Eq_135
  OrigDataType: word64
T_136: (in 0<u64> @ 0000000000400746 : uint64)
  Class: Eq_135
  DataType: uint64
  OrigDataType: uint64
T_137: (in 8<64> @ 0000000000400759 : word64)
  Class: Eq_137
  DataType: ui64
  OrigDataType: ui64
T_138: (in rbx_46 * 8<64> @ 0000000000400759 : word64)
  Class: Eq_138
  DataType: ui64
  OrigDataType: ui64
T_139: (in 0x0000000000600E10<p64>[rbx_46 * 8<64>] @ 0000000000400759 : word64)
  Class: Eq_139
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_140: (in 1<64> @ 000000000040075D : word64)
  Class: Eq_140
  DataType: word64
  OrigDataType: word64
T_141: (in rbx_46 + 1<64> @ 000000000040075D : word64)
  Class: Eq_135
  DataType: Eq_135
  OrigDataType: uint64
T_142: (in rbp_31 >> 3<64> @ 0000000000400764 : word64)
  Class: Eq_135
  DataType: Eq_135
  OrigDataType: int64
T_143: (in rbp_31 >> 3<64> != rbx_46 @ 0000000000400764 : bool)
  Class: Eq_143
  DataType: bool
  OrigDataType: bool
T_144:
  Class: Eq_144
  DataType: (ptr64 code)
  OrigDataType: (struct 0008 (0 T_139 t0000))
T_145:
  Class: Eq_145
  DataType: (arr (ptr64 code))
  OrigDataType: (arr T_144)
*/
typedef struct Globals {
	<anonymous> t400456;	// 400456
	<anonymous> t400466;	// 400466
	<anonymous> t400476;	// 400476
	Eq_20 t400660;	// 400660
	Eq_23 t400710;	// 400710
	Eq_24 t400780;	// 400780
	<anonymous> * a600E10[];	// 600E10
	<anonymous> * __libc_start_main_GOT;	// 600FF0
	<anonymous> * __gmon_start___GOT;	// 600FF8
	<anonymous> * free_GOT;	// 601018
	<anonymous> * puts_GOT;	// 601020
	<anonymous> * calloc_GOT;	// 601028
	byte b601040;	// 601040
} Eq_1;

typedef word64 (Eq_6)();

typedef void (Eq_8)();

typedef void (Eq_13)(char * *);

typedef int32 (Eq_18)( *, int32, char * *,  *,  *,  *, void);

typedef int32 (Eq_20)(int32 rdi, char * * rsi, char * * rdx);

typedef void (Eq_23)();

typedef void (Eq_24)();

typedef void (Eq_33)();

typedef void (Eq_46)();

typedef void (Eq_51)();

typedef void (Eq_103)(int32, int32);

typedef void (Eq_106)(void);

typedef void (Eq_110)();

typedef void (Eq_113)();

typedef void (Eq_116)();

typedef void (Eq_124)();

typedef union Eq_128 {
	int64 u0;
	ptr64 u1;
} Eq_128;

typedef union Eq_135 {
	int64 u0;
	uint64 u1;
} Eq_135;

