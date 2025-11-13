// 函数: sub_1403adf1b
// 地址: 0x1403adf1b
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t st1[0x4] = arg6[2]
int16_t st2[0x4] = arg6[4]
int16_t st6[0x4] = arg6[6]
int16_t st7[0x4] = arg6[8]
int64_t rdx = sx.q(arg4)
int32_t* rdi = arg2
int64_t* rsi_2 = arg1 - rdx * 2
int64_t i_1 = sx.q(arg5)
int64_t result = sx.q(arg3)
int64_t i

do
    int64_t temp0_7 = _m_paddsw(
        _m_paddsw(_m_paddsw(_m_pmullw(*(rsi_2 + rdx), st1), _m_pmullw(*(rsi_2 + (rdx << 2)), st7)), 
            _m_pmullw(*(rsi_2 + (rdx << 1)), st2)), 
        __pmullw_mmxq_memq(*rsi_2, *arg6))
    rsi_2 += rdx
    *rdi = _m_packuswb(
        _m_psrawi(
            _m_paddsw(
                _m_paddsw(_m_paddsw(temp0_7, _m_pmullw(*(rsi_2 + (rdx << 1)), st6)), 
                    __pmullw_mmxq_memq(*(rsi_2 + (rdx << 2)), arg6[0xa])), 
                0x40004000400040), 
            7), 
        0).d
    rdi += result
    i = i_1
    i_1 -= 1
while (i != 1)
return result
