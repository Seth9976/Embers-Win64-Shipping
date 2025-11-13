// 函数: sub_14207c380
// 地址: 0x14207c380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t arg_8 = 0
int64_t var_14 = 0
int64_t rax = sx.q(*(arg1 + 0x78))

if (rax.d s> 0)
    int64_t rdx_1 = 0
    int32_t* rax_1 = *(arg1 + 0x70)
    
    while (not(arg2 f<= *rax_1))
        rdi += 1
        rdx_1 += 1
        rax_1 = &rax_1[3]
        
        if (rdx_1 s>= rax)
            break

sub_142075310(arg1 + 0x70, rdi, 1)
int64_t rdx_3 = *(arg1 + 0x70)
int64_t r8_2 = sx.q(rdi) * 3
*(rdx_3 + (r8_2 << 2)) = arg2.q
*(rdx_3 + (r8_2 << 2) + 8) = 0
return zx.q(rdi)
