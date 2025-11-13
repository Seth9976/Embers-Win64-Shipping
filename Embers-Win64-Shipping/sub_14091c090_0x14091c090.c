// 函数: sub_14091c090
// 地址: 0x14091c090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbp = 0
int32_t r14 = 0
int64_t var_28 = 0
int64_t var_20 = 0
int64_t rax
int32_t r8_1

if (*(arg1 + 0x10) == 0)
    rax = sx.q(*(arg1 + 0xc))
    r8_1 = (rax + 4).d

if (*(arg1 + 0x10) != 0 || r8_1 s> *(arg1 + 8))
    *(arg1 + 0x10) = 1
    rax.b = 1
else
    char* rdx_1 = rax + *arg1
    r14 = ((zx.d(rdx_1[1]) | zx.d(*rdx_1) << 8) << 8 | zx.d(rdx_1[2])) << 8 | zx.d(rdx_1[3])
    *(arg1 + 0xc) = r8_1
    rax.b = 0

if (r14 s> 0)
    sub_1405c5510(&var_28, r14)
    rax = zx.q(*(arg1 + 0x10))

if (rax.b != 0 || *(arg1 + 0xc) + r14 s> *(arg1 + 8))
    *(arg1 + 0x10) = 1
else
    int32_t rdi_1 = 0
    
    if (r14 != 0)
        do
            int64_t rsi_1 = sx.q(var_20.d)
            char* r15_3 = zx.q(*(arg1 + 0xc) + rdi_1) + *arg1
            int32_t rax_4 = (rsi_1 + 1).d
            var_20.d = rax_4
            
            if (rax_4 s> var_20:4.d)
                sub_1405daba0(&var_28)
            
            rdi_1 += 1
            *(rsi_1 + var_28) = *r15_3
        while (rdi_1 u< r14)
    
    *(arg1 + 0xc) += r14

(*(*arg2 + 0x50))(arg2, &var_28)
int64_t rax_7
int32_t r8_2

if (*(arg1 + 0x10) == 0)
    rax_7 = sx.q(*(arg1 + 0xc))
    r8_2 = (rax_7 + 4).d

if (*(arg1 + 0x10) != 0 || r8_2 s> *(arg1 + 8))
    *(arg1 + 0x10) = 1
else
    char* rdx_6 = rax_7 + *arg1
    rbp = ((zx.d(rdx_6[1]) | zx.d(*rdx_6) << 8) << 8 | zx.d(rdx_6[2])) << 8 | zx.d(rdx_6[3])
    *(arg1 + 0xc) = r8_2

(*(*arg2 + 0x28))(arg2, zx.q(rbp))
int64_t rcx_7 = var_28

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return arg1
