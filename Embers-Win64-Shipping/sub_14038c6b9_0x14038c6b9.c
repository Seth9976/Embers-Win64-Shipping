// 函数: sub_14038c6b9
// 地址: 0x14038c6b9
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = &(*u"@@@@@@@@")[8 + sx.q(arg6) * 8]
int64_t rdx_2 = sx.q(arg2)
int32_t* rdi = arg3
int64_t r8 = sx.q(arg4)
int64_t i_2 = sx.q(arg5)
uint8_t st0[0x4]
uint64_t st2
uint64_t st3
char st6[0x8]
char st7[0x8]

if (0 == *rax)
    st6 = *(rax + 0x100)
    st7 = *(rax + 0x80)
    void* rsi_1 = arg1
    void* rax_4 = rsi_1 + rdx_2
    int64_t i
    
    do
        st3 = zx.q(*(rsi_1 + (rdx_2 << 1)))
        st0 = *(rsi_1 + (rdx_2 << 2))
        st2 = _m_punpckhwd(zx.q(*(rsi_1 + rdx_2)), *(rax_4 + (rdx_2 << 1)))
        st3 = _mm_maddubs_pi16(_m_punpckhwd(st3, st0), st6)
        rsi_1 += rdx_2
        rax_4 += rdx_2
        st2 = _m_psrawi(_m_paddsw(_m_paddsw(_mm_maddubs_pi16(st2, st7), st3), 0x40004000400040), 7)
        *rdi = _m_packuswb(st2, st2).d
        rdi += r8
        i = i_2
        i_2 -= 1
    while (i != 1)
    return rax_4

char st5[0x8] = *rax
st6 = *(rax + 0x100)
st7 = *(rax + 0x80)
int32_t* rsi = arg1
void* rax_2 = rsi + rdx_2
int64_t i_1

do
    uint64_t st1 = zx.q(*rsi)
    st3 = zx.q(*(rsi + (rdx_2 << 1)))
    st0 = rsi[rdx_2]
    st2 = _m_punpckhwd(zx.q(*(rsi + rdx_2)), *(rax_2 + (rdx_2 << 1)))
    st3 = _m_punpckhwd(st3, st0)
    st0 = *(rax_2 + (rdx_2 << 2))
    st3 = _mm_maddubs_pi16(st3, st6)
    st1 = _m_punpckhwd(st1, st0)
    st2 = _mm_maddubs_pi16(st2, st7)
    st1 = _mm_maddubs_pi16(st1, st5)
    rsi += rdx_2
    rax_2 += rdx_2
    st2 = _m_psrawi(_m_paddsw(_m_paddsw(_m_paddsw(st2, st3), st1), 0x40004000400040), 7)
    *rdi = _m_packuswb(st2, st2).d
    rdi += r8
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return rax_2
