// 函数: sub_1403abc22
// 地址: 0x1403abc22
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t temp0[0x4] = __pmullw_mmxq_memq(*arg1, *arg2)
int64_t st1 = __pmullw_mmxq_memq(arg1[1], arg2[1])
int16_t temp0_2[0x4] = __pmullw_mmxq_memq(arg1[2], arg2[2])
int16_t temp0_3[0x4] = __pmullw_mmxq_memq(arg1[3], arg2[3])
__builtin_memset(arg1, 0, 0x20)
int64_t rdi = sx.q(arg4)
int16_t st0[0x4] = _m_psubw(temp0, temp0_2)
int16_t st2[0x4] = _m_paddw(_m_paddw(temp0_2, temp0_2), st0)
int64_t temp0_8 = _m_paddw(__pmulhw_mmxq_memq(st1, -0x7573757375737574), st1)
int16_t st7[0x4] =
    _m_psubw(_m_paddw(__pmulhw_mmxq_memq(temp0_3, 0x4e7b4e7b4e7b4e7b), temp0_3), temp0_8)
int64_t temp0_13 = _m_paddw(__pmulhw_mmxq_memq(st1, 0x4e7b4e7b4e7b4e7b), st1)
int16_t st3[0x4] =
    _m_paddw(_m_paddw(__pmulhw_mmxq_memq(temp0_3, -0x7573757375737574), temp0_3), temp0_13)
int16_t st6[0x4] = st2
st2 = _m_paddw(st2, st3)
int64_t temp0_18 = _m_paddw(st0, st7)
st0 = _m_psubw(st0, st7)
st6 = _m_psubw(st6, st3)
st1 = _m_punpcklwd(st2, st0[0].d)
st2 = __punpckhwd_mmxq_mmxd(st2, st0[0].d)
st3 = _m_punpcklwd(temp0_18, st6[0].d)
int64_t temp0_24 = __punpckhwd_mmxq_mmxd(temp0_18, st6[0].d)
int64_t st5 = st2
st0 = _m_punpckldq(st1, st3[0].d)
int64_t temp0_26 = _m_punpckhdq(st1, st3[0].d)
st2 = _m_punpckldq(st2, temp0_24.d)
st3 = _m_punpckhdq(st5, temp0_24.d)
st0 = _m_psubw(st0, st2)
st2 = _m_paddw(_m_paddw(st2, st2), st0)
int64_t temp0_33 = _m_paddw(__pmulhw_mmxq_memq(temp0_26, -0x7573757375737574), temp0_26)
st7 = _m_psubw(_m_paddw(__pmulhw_mmxq_memq(st3, 0x4e7b4e7b4e7b4e7b), st3), temp0_33)
int64_t temp0_38 = _m_paddw(__pmulhw_mmxq_memq(temp0_26, 0x4e7b4e7b4e7b4e7b), temp0_26)
st3 = _m_paddw(_m_paddw(__pmulhw_mmxq_memq(st3, -0x7573757375737574), st3), temp0_38)
st0 = __paddw_mmxq_memq(st0, 0x4000400040004)
st2 = __paddw_mmxq_memq(st2, 0x4000400040004)
st6 = st2
st2 = _m_paddw(st2, st3)
int64_t temp0_45 = _m_paddw(st0, st7)
st0 = _m_psubw(st0, st7)
st6 = _m_psubw(st6, st3)
int16_t temp0_48[0x4] = _m_psrawi(st2, 3)
int16_t temp0_49[0x4] = _m_psrawi(st0, 3)
int64_t st4 = _m_psrawi(temp0_45, 3)
int16_t temp0_51[0x4] = _m_psrawi(st6, 3)
st1 = _m_punpcklwd(temp0_48, temp0_49[0].d)
st2 = __punpckhwd_mmxq_mmxd(temp0_48, temp0_49[0].d)
st3 = _m_punpcklwd(st4, temp0_51[0].d)
int64_t temp0_55 = __punpckhwd_mmxq_mmxd(st4, temp0_51[0].d)
st5 = st2
st0 = _m_punpckldq(st1, st3[0].d)
int64_t temp0_57 = _m_punpckhdq(st1, st3[0].d)
st2 = _m_punpckldq(st2, temp0_55.d)
int64_t temp0_59 = _m_punpckhdq(st5, temp0_55.d)
*arg3 = _m_packuswb(_m_paddsw(st0, _m_punpckhwd(zx.q(*arg3), 0)), 0)[0].d
*(arg3 + rdi) = _m_packuswb(_m_paddsw(temp0_57, _m_punpckhwd(zx.q(*(arg3 + rdi)), 0)), 0).d
*(arg3 + (rdi << 1)) =
    _m_packuswb(_m_paddsw(st2, _m_punpckhwd(zx.q(*(arg3 + (rdi << 1))), 0)), 0)[0].d
void* rdx_2 = arg3 + rdi
*(rdx_2 + (rdi << 1)) =
    _m_packuswb(_m_paddsw(temp0_59, _m_punpckhwd(zx.q(*(rdx_2 + (rdi << 1))), 0)), 0).d
return arg1
