// 函数: sub_1403abb3e
// 地址: 0x1403abb3e
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg3)
uint64_t st5 = _m_psrawi(__paddw_mmxq_memq(zx.q(arg1), 0x4000400040004), 3)
st5 = _m_punpcklwd(st5, st5.d)
st5 = _m_punpckldq(st5, st5.d)
uint64_t st2 = zx.q(*(arg2 + rdx))
uint64_t st3 = zx.q(*(arg2 + (rdx << 1)))
int64_t st4 = zx.q(*(arg2 + rdx * 3))
int64_t rdx_1 = sx.q(arg5)
uint64_t st1 = _m_packuswb(_m_paddsw(_m_punpckhwd(zx.q(*arg2), 0), st5), 0)
st2 = _m_packuswb(_m_paddsw(_m_punpckhwd(st2, 0), st5), 0)
st3 = _m_packuswb(_m_paddsw(_m_punpckhwd(st3, 0), st5), 0)
st4 = _m_packuswb(_m_paddsw(_m_punpckhwd(st4, 0), st5), 0)
*arg4 = st1.d
*(arg4 + rdx_1) = st2.d
*(arg4 + (rdx_1 << 1)) = st3.d
*(arg4 + rdx_1 * 3) = st4.d
return arg4
