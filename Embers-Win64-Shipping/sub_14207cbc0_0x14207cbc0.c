// 函数: sub_14207cbc0
// 地址: 0x14207cbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x98))
int32_t rdi = 0
int32_t var_24 = 0x3f800000
int32_t var_20 = 0x3f800000

if (rax.d s> 0)
    int64_t rdx_1 = 0
    int32_t* rax_1 = *(arg1 + 0x90)
    
    while (not(arg2.d f<= *rax_1))
        rdi += 1
        rdx_1 += 1
        rax_1 = &rax_1[6]
        
        if (rdx_1 s>= rax)
            break

sub_142075390(arg1 + 0x90, rdi, 1)
int64_t rdx_3 = sx.q(rdi) * 3
int64_t rcx_2 = *(arg1 + 0x90)
*(rcx_2 + (rdx_3 << 3)) = arg2.d.o
*(rcx_2 + (rdx_3 << 3) + 0x10) = 0
return zx.q(rdi)
