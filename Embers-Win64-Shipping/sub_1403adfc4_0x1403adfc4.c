// 函数: sub_1403adfc4
// 地址: 0x1403adfc4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t (* i)[0x4] = arg5
int16_t st1[0x4] = *((sx.q(arg3) << 5) + &data_143608a90)
int16_t st2[0x4] = *((sx.q(arg3) << 5) + 0x143608aa0)
int64_t rdx_1 = sx.q(arg2)
int16_t st3[0x4] = *arg1
int16_t st4[0x4] = st3
st3 = _m_punpckhwd(st3, 0)
st4 = _m_punpckhbw(st4, 0)
int16_t temp0_2[0x4] = _m_pmullw(st3, st1)
int16_t temp0_3[0x4] = _m_pmullw(st4, st1)
uint8_t st5[0x8] = *(arg1 + 1)
uint8_t temp0_4[0x8] = _m_punpckhwd(st5, 0)
int64_t temp0_5 = _m_punpckhbw(st5, 0)
st5 = _m_pmullw(temp0_4, st2)
int64_t st6 = _m_pmullw(temp0_5, st2)
st3 = _m_paddw(temp0_2, st5)
st4 = _m_paddw(temp0_3, st6)
int16_t st7[0x4] = _m_packuswb(_m_psrawi(__paddw_mmxq_memq(st3, 0x40004000400040), 7), 
    _m_psrawi(__paddw_mmxq_memq(st4, 0x40004000400040), 7))
void* rsi_1 = arg1 + rdx_1

do
    st3 = *rsi_1
    st4 = st3
    st3 = _m_punpckhwd(st3, 0)
    st4 = _m_punpckhbw(st4, 0)
    int16_t temp0_17[0x4] = _m_pmullw(st3, st1)
    int16_t temp0_18[0x4] = _m_pmullw(st4, st1)
    st5 = *(rsi_1 + 1)
    uint8_t temp0_19[0x8] = _m_punpckhwd(st5, 0)
    int64_t temp0_20 = _m_punpckhbw(st5, 0)
    st5 = _m_pmullw(temp0_19, st2)
    st6 = _m_pmullw(temp0_20, st2)
    st3 = _m_paddw(temp0_17, st5)
    st4 = _m_paddw(temp0_18, st6)
    uint8_t temp0_25[0x8] = _m_punpckhwd(st7, 0)
    int64_t temp0_26 = _m_punpckhbw(st7, 0)
    st5 = __pmullw_mmxq_memq(temp0_25, *((sx.q(arg4) << 5) + &data_143608a90))
    st6 = __pmullw_mmxq_memq(temp0_26, *((sx.q(arg4) << 5) + &data_143608a90))
    int16_t temp0_30[0x4] = _m_psrawi(__paddw_mmxq_memq(st3, 0x40004000400040), 7)
    int16_t temp0_32[0x4] = _m_psrawi(__paddw_mmxq_memq(st4, 0x40004000400040), 7)
    st7 = _m_packuswb(temp0_30, temp0_32)
    int16_t temp0_34[0x4] = __pmullw_mmxq_memq(temp0_30, *((sx.q(arg4) << 5) + 0x143608aa0))
    int16_t temp0_35[0x4] = __pmullw_mmxq_memq(temp0_32, *((sx.q(arg4) << 5) + 0x143608aa0))
    st3 = _m_paddw(temp0_34, st5)
    st4 = _m_paddw(temp0_35, st6)
    *i = _m_packuswb(_m_psrawi(__paddw_mmxq_memq(st3, 0x40004000400040), 7), 
        _m_psrawi(__paddw_mmxq_memq(st4, 0x40004000400040), 7))
    rsi_1 += rdx_1
    i += sx.q(arg6)
while (i != &(*i)[sx.q(arg6) * 2])

return (sx.q(arg4) << 5) + &data_143608a90
