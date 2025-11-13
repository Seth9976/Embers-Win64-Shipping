// 函数: sub_1403ab9a0
// 地址: 0x1403ab9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t st1 = arg1[1]
int64_t st2 = arg1[2]
int64_t st3 = arg1[3]
int64_t result = sx.q(arg3)
int64_t rdi = sx.q(arg5)
int64_t temp0 = _m_psubw(*arg1, st2)
int64_t temp0_2 = _m_paddw(_m_paddw(st2, st2), temp0)
int16_t st5[0x4] = _m_paddw(__pmulhw_mmxq_memq(st1, -0x7573757375737574), st1)
int16_t st7[0x4] = _m_psubw(_m_paddw(__pmulhw_mmxq_memq(st3, 0x4e7b4e7b4e7b4e7b), st3), st5)
st5 = _m_paddw(__pmulhw_mmxq_memq(st1, 0x4e7b4e7b4e7b4e7b), st1)
int64_t temp0_12 = _m_paddw(_m_paddw(__pmulhw_mmxq_memq(st3, -0x7573757375737574), st3), st5)
int64_t temp0_13 = _m_paddw(temp0_2, temp0_12)
int64_t temp0_14 = _m_paddw(temp0, st7)
int64_t temp0_15 = _m_psubw(temp0, st7)
int64_t temp0_16 = _m_psubw(temp0_2, temp0_12)
st1 = _m_punpcklwd(temp0_13, temp0_15.d)
int64_t temp0_18 = __punpckhwd_mmxq_mmxd(temp0_13, temp0_15.d)
st3 = _m_punpcklwd(temp0_14, temp0_16.d)
int64_t temp0_20 = __punpckhwd_mmxq_mmxd(temp0_14, temp0_16.d)
int64_t st0 = _m_punpckldq(st1, st3.d)
int64_t temp0_22 = _m_punpckhdq(st1, st3.d)
st2 = _m_punpckldq(temp0_18, temp0_20.d)
st3 = _m_punpckhdq(temp0_18, temp0_20.d)
int64_t temp0_25 = _m_psubw(st0, st2)
int64_t temp0_27 = _m_paddw(_m_paddw(st2, st2), temp0_25)
st5 = _m_paddw(__pmulhw_mmxq_memq(temp0_22, -0x7573757375737574), temp0_22)
st7 = _m_psubw(_m_paddw(__pmulhw_mmxq_memq(st3, 0x4e7b4e7b4e7b4e7b), st3), st5)
st5 = _m_paddw(__pmulhw_mmxq_memq(temp0_22, 0x4e7b4e7b4e7b4e7b), temp0_22)
int64_t temp0_37 = _m_paddw(_m_paddw(__pmulhw_mmxq_memq(st3, -0x7573757375737574), st3), st5)
int64_t temp0_38 = __paddw_mmxq_memq(temp0_25, 0x4000400040004)
int64_t temp0_39 = __paddw_mmxq_memq(temp0_27, 0x4000400040004)
int64_t temp0_40 = _m_paddw(temp0_39, temp0_37)
int64_t temp0_41 = _m_paddw(temp0_38, st7)
int64_t temp0_42 = _m_psubw(temp0_38, st7)
int64_t temp0_43 = _m_psubw(temp0_39, temp0_37)
st2 = _m_psrawi(temp0_40, 3)
st0 = _m_psrawi(temp0_42, 3)
uint64_t st4 = _m_psrawi(temp0_41, 3)
int64_t st6 = _m_psrawi(temp0_43, 3)
st1 = _m_punpcklwd(st2, st0.d)
int64_t temp0_49 = __punpckhwd_mmxq_mmxd(st2, st0.d)
st3 = _m_punpcklwd(st4, st6.d)
int64_t temp0_51 = __punpckhwd_mmxq_mmxd(st4, st6.d)
st0 = _m_punpckldq(st1, st3.d)
int64_t temp0_53 = _m_punpckhdq(st1, st3.d)
st2 = _m_punpckldq(temp0_49, temp0_51.d)
st5 = _m_punpckhdq(temp0_49, temp0_51.d)
*arg4 = _m_packuswb(_m_paddsw(st0, _m_punpckhwd(zx.q(*arg2), 0)), 0).d
*(arg4 + rdi) = _m_packuswb(_m_paddsw(temp0_53, _m_punpckhwd(zx.q(*(arg2 + result)), 0)), 0).d
*(arg4 + (rdi << 1)) =
    _m_packuswb(_m_paddsw(st2, _m_punpckhwd(zx.q(*(arg2 + (result << 1))), 0)), 0).d
*(rdi * 3 + arg4) = _m_packuswb(_m_paddsw(st5, _m_punpckhwd(zx.q(*(result * 3 + arg2)), 0)), 0)[0].d
return result
