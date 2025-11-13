// 函数: sub_1403ade60
// 地址: 0x1403ade60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9
int64_t arg_20 = r9
int16_t st1[0x4] = arg6[2]
int16_t st2[0x4] = arg6[4]
int16_t st6[0x4] = arg6[6]
int16_t st7[0x4] = arg6[8]
int64_t* rdi = arg2
void* rsi = arg1
int64_t i_1 = sx.q(arg4)
int64_t result = sx.q(arg5)
int64_t i

do
    int64_t st3 = *(rsi - 2)
    int16_t st4[0x4] = st3
    *rdi = _m_punpckhwd(
        _m_packuswb(
            _m_psrawi(
                __paddsw_mmxq_memq(
                    _m_paddsw(
                        _m_paddsw(
                            _m_paddsw(
                                _m_paddsw(
                                    _m_paddsw(_m_pmullw(_m_punpckhwd(_m_psrlqi(st3, 8), 0), st1), 
                                        _m_pmullw(_m_punpckhbw(st4, 0), st7)), 
                                    _m_pmullw(_m_punpckhwd(_m_psrlqi(st4, 0x10), 0), st2)), 
                                _m_pmullw(_m_punpckhwd(_m_psrlqi(st4, 0x18), 0), st6)), 
                            __pmullw_mmxq_memq(_m_punpckhwd(zx.q(*(rsi + 3)), 0), arg6[0xa])), 
                        __pmullw_mmxq_memq(_m_punpckhwd(st4, 0), *arg6)), 
                    0x40004000400040), 
                7), 
            0), 
        0)
    rdi += result
    rsi += sx.q(arg3)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
