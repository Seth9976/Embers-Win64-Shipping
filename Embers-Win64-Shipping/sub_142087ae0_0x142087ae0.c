// 函数: sub_142087ae0
// 地址: 0x142087ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x98))
    return 0xffffffff

if (arg4 == 0)
    arg4 = arg1

int32_t rdi = 0
int64_t rdx = sx.q(arg2) * 3
int64_t rax_1 = *(arg1 + 0x90)
uint128_t zmm6 = zx.o(*(rax_1 + (rdx << 3) + 0x10))
int64_t rax_2 = sx.q(*(arg4 + 0x98))
int128_t var_38 = *(rax_1 + (rdx << 3))
var_38.d = arg3

if (rax_2.d s> 0)
    int64_t rcx = 0
    int32_t* rax_3 = *(arg4 + 0x90)
    
    while (not(arg3 f<= *rax_3))
        rdi += 1
        rcx += 1
        rax_3 = &rax_3[6]
        
        if (rcx s>= rax_2)
            break

sub_142075390(arg4 + 0x90, rdi, 1)
int64_t rdx_3 = sx.q(rdi) * 3
int64_t rcx_3 = *(arg4 + 0x90)
*(rcx_3 + (rdx_3 << 3)) = 0
*(rcx_3 + (rdx_3 << 3) + 8) = 0
*(rcx_3 + (rdx_3 << 3) + 0x10) = 0
int64_t rcx_4 = *(arg4 + 0x90)
*(rcx_4 + (rdx_3 << 3)) = var_38
*(rcx_4 + (rdx_3 << 3) + 0x10) = zmm6.q
return zx.q(rdi)
