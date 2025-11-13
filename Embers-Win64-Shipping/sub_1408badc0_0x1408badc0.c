// 函数: sub_1408badc0
// 地址: 0x1408badc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t* rbx = arg1[2]
int64_t rsi = sx.q(arg2)
void var_28
int64_t* rax = sub_1408bdbb0(&var_28, nullptr, 0xff)
int32_t r8 = int.d(fconvert.t(*(arg1 + 0x24)))
int64_t rcx_1 = arg1[3]
void* r9 = *rax
int32_t rdx = int.d(fconvert.t(arg1[4].d))
uint128_t zmm1 = *rbx
uint128_t zmm0 = zx.o(rbx[3].q)
int128_t zmm2 = rbx[1]
int128_t zmm3 = rbx[2]
*(r9 + 0x10) = arg1[1].d
*(r9 + 0x14) = zmm1
*(r9 + 0x50) = rcx_1
*(r9 + 0x24) = zmm2
*(r9 + 0x58) = rsi.d
*(r9 + 0x34) = zmm3
*(r9 + 0x44) = zmm0.q
zmm0 = _mm_cvtepi32_ps(zx.o(rdx))
zmm1 = _mm_cvtepi32_ps(zx.o(r8))
*(r9 + 0x5c) = zmm0.d
*(r9 + 0x60) = zmm1.d
void* rcx_2 = *rax
int64_t* rbx_1 = *(rcx_2 + 0x70)

if (rbx_1 != 0)
    rbx_1[9].d += 1

r9.b = 1
sub_1408c3da0(rcx_2, rax[1], rax[2].d, r9.b)
void* rcx_3 = *arg1
void* rax_2 = *(rcx_3 + 0x20)

if (rax_2 != 0)
    rcx_3 = rax_2

void arg_8
int32_t result = &arg_8
void* rdx_2 = rcx_3 + (rsi << 3)

if (rdx_2 != &arg_8)
    int64_t* rcx_4 = *rdx_2
    *rdx_2 = rbx_1
    
    if (rcx_4 != 0)
        result = rcx_4[9].d
        rcx_4[9].d -= 1
        
        if (result == 1)
            return sub_140a2f6e0(rcx_4)
else if (rbx_1 != 0)
    result = rbx_1[9].d
    rbx_1[9].d -= 1
    
    if (result == 1)
        return sub_140a2f6e0(rbx_1)

return result
