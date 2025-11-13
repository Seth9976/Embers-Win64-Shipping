// 函数: sub_142087420
// 地址: 0x142087420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x78))
    return 0xffffffff

if (arg4 == 0)
    arg4 = arg1

int32_t rdi = 0
int64_t rdx = sx.q(arg2) * 3
int64_t rax_1 = *(arg1 + 0x70)
int32_t rsi = *(rax_1 + (rdx << 2) + 8)
int64_t rax_2 = sx.q(*(arg4 + 0x78))
int64_t var_18 = *(rax_1 + (rdx << 2))
var_18.d = arg3

if (rax_2.d s> 0)
    int64_t rcx = 0
    int32_t* rax_3 = *(arg4 + 0x70)
    
    while (not(arg3 f<= *rax_3))
        rdi += 1
        rcx += 1
        rax_3 = &rax_3[3]
        
        if (rcx s>= rax_2)
            break

sub_142075310(arg4 + 0x70, rdi, 1)
int64_t rdx_3 = sx.q(rdi) * 3
int64_t rcx_3 = *(arg4 + 0x70)
*(rcx_3 + (rdx_3 << 2)) = 0
*(rcx_3 + (rdx_3 << 2) + 8) = 0
int64_t rcx_4 = *(arg4 + 0x70)
*(rcx_4 + (rdx_3 << 2)) = var_18
*(rcx_4 + (rdx_3 << 2) + 8) = rsi
return zx.q(rdi)
