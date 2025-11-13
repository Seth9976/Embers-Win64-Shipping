// 函数: sub_1403ae0fc
// 地址: 0x1403ae0fc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* i = arg5
int16_t st1[0x4] = *((sx.q(arg3) << 5) + &data_143608a90)
int16_t st2[0x4] = *((sx.q(arg3) << 5) + 0x143608aa0)
int64_t rdx_1 = sx.q(arg2)
int16_t st7[0x4] = _m_packuswb(
    _m_psrawi(
        __paddw_mmxq_memq(
            _m_paddw(_m_pmullw(_m_punpckhwd(zx.q(*arg1), 0), st1), 
                _m_pmullw(_m_punpckhwd(zx.q(*(arg1 + 1)), 0), st2)), 
            0x40004000400040), 
        7), 
    0)
void* rsi_1 = arg1 + rdx_1

do
    int16_t st3[0x4] = _m_paddw(_m_pmullw(_m_punpckhwd(zx.q(*rsi_1), 0), st1), 
        _m_pmullw(_m_punpckhwd(zx.q(*(rsi_1 + 1)), 0), st2))
    uint64_t st5 = __pmullw_mmxq_memq(_m_punpckhwd(st7, 0), *((sx.q(arg4) << 5) + &data_143608a90))
    int16_t temp0_16[0x4] = _m_psrawi(__paddw_mmxq_memq(st3, 0x40004000400040), 7)
    st7 = _m_packuswb(temp0_16, 0)
    *i = _m_packuswb(
        _m_psrawi(
            __paddw_mmxq_memq(
                _m_paddw(__pmullw_mmxq_memq(temp0_16, *((sx.q(arg4) << 5) + 0x143608aa0)), st5), 
                0x40004000400040), 
            7), 
        0)[0].d
    rsi_1 += rdx_1
    i += sx.q(arg6)
while (i != &i[sx.q(arg6)])

return (sx.q(arg4) << 5) + &data_143608a90
