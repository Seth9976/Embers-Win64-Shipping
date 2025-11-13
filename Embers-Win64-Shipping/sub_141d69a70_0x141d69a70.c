// 函数: sub_141d69a70
// 地址: 0x141d69a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (-1.17549435e-38f f== arg1[0x47].d || arg1[0x45] == 0)
    return 

int128_t zmm6 = zx.o(0)
void* rax_1 = (*(*arg1 + 0x150))()
int64_t* rcx

if (rax_1 == 0)
    rcx = nullptr
else
    rcx = *(rax_1 + 0x130)

if (rcx != 0)
    (*(*rcx + 0x630))(rcx)
    zmm6.d = -1.17549435e-38f f- arg1[0x47].d

int64_t* r9 = *(arg1[0x45] + 0x248)
int64_t* r8

if (r9 == 0 || r9[0x8c] == 0)
    r8 = nullptr
else
    r8 = r9

int64_t rdx = sx.q(r8[0x8d].d)
int64_t r8_1 = r8[0xf8]
uint32_t rcx_2 = (r8_1 u>> 0x20).d
int32_t arg_8
arg_8.q = rdx.d.q
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_2)).d f* 0f
uint128_t zmm1 = _mm_cvtepi32_pd(zx.q(r8_1.d))
double temp0_2[0x2] = _mm_cvtps_pd(zmm0.q)
zmm0.q = float.d(sx.q(rcx_2) * rdx)
temp0_2[0] = temp0_2[0] f+ zmm0.q
zmm0.q = fconvert.d(zmm6.d)
temp0_2[0] = temp0_2[0] f/ zmm1.q
temp0_2[0] = temp0_2[0] f+ zmm0.q
zmm1 = _mm_cvtpd_ps(temp0_2)

if (r9 == 0 || r9[0x8c] == 0)
    r9 = nullptr

uint128_t zmm0_1 = sub_141a58560(r9, zmm1)
int64_t* rcx_6 = *(arg1[0x45] + 0x248)

if (rcx_6 == 0 || rcx_6[0x8c] == 0)
    rcx_6 = nullptr

return sub_141a5b2f0(rcx_6, zmm0_1) __tailcall
