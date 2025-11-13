// 函数: sub_14207bf70
// 地址: 0x14207bf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_c
int32_t var_c_1 = var_c & 0xfffffffc
int32_t rdi = 0
int32_t var_10 = 0x3f800000
int64_t var_20 = 0
int64_t rax = sx.q(*(arg1 + 0xa0))

if (rax.d s> 0)
    int64_t rcx = 0
    int32_t* rax_1 = *(arg1 + 0x98)
    
    while (not(arg2.d f<= *rax_1))
        rdi += 1
        rcx += 1
        rax_1 = &rax_1[8]
        
        if (rcx s>= rax)
            break

int32_t rbp = *(arg1 + 0xa0)
*(arg1 + 0xa0) = rbp + 1

if (rbp + 1 s> *(arg1 + 0xa4))
    sub_1405c4e40(arg1 + 0x98)

int64_t rbx_1 = sx.q(rdi) << 5
int64_t rdx_4 = *(arg1 + 0x98) + rbx_1
memmove(rdx_4 + 0x20, rdx_4, (rbp - rdi) << 5)
int64_t rcx_3 = *(arg1 + 0x98)
*(rbx_1 + rcx_3) = arg2.d.o
*(rbx_1 + rcx_3 + 0x10) = 0.o
return zx.q(rdi)
