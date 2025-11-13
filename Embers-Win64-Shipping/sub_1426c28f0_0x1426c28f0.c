// 函数: sub_1426c28f0
// 地址: 0x1426c28f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t var_4c
__builtin_memset(&var_4c, 0, 0x14)
int32_t var_38 = 0xffffffff
int64_t var_68 = arg2
int128_t var_60 = zx.o(0)
int16_t rdi

if (arg3 == 0)
    rdi = -1
else
    rdi = *(arg3 + 0x50)

int32_t var_50 = 1
sub_140594770(&var_60:8)
int16_t* buffer2 = var_60:8.q
int64_t r14 = sx.q(arg4 - 1)
*buffer2 = rdi
int32_t rdi_1 = var_50

if (arg4 - 1 s>= 0)
    int64_t r12_1 = r14 * 0x58
    int64_t temp0_1
    
    do
        void* rcx_1 = *(*(arg1 + 0x110) + r12_1 + 8)
        int16_t rbp_1
        
        if (rcx_1 == 0)
            rbp_1 = -1
        else
            rbp_1 = *(rcx_1 + 0x50)
        
        int64_t rsi_1 = sx.q(rdi_1)
        rdi_1 = (rsi_1 + 1).d
        
        if (rdi_1 s> var_4c)
            sub_140594770(&var_60:8)
            buffer2 = var_60:8.q
        
        r12_1 -= 0x58
        buffer2[rsi_1] = rbp_1
        temp0_1 = r14
        r14 -= 1
    while (temp0_1 - 1 s>= 0)

int32_t rsi_2 = *(arg1 + 0x128)

if (rsi_2 s<= 0)
label_1426c2a2a:
    int64_t rdi_2 = sx.q(*(arg1 + 0x128))
    int32_t var_38_1 = *(arg1 + 0x138)
    int32_t rax_6 = (rdi_2 + 1).d
    *(arg1 + 0x128) = rax_6
    
    if (rax_6 s> *(arg1 + 0x12c))
        sub_1407c3b60(arg1 + 0x120)
    
    sub_1426a64a0(rdi_2 * 0x38 + *(arg1 + 0x120), &var_68)
    buffer2 = var_60:8.q
    rbx = rdi_2.d
else
    int64_t rbp_2 = *(arg1 + 0x120)
    int64_t r14_1 = var_68
    
    while (true)
        int64_t* rcx_3 = sx.q(rbx) * 0x38
        
        if (*(rcx_3 + rbp_2) == r14_1)
            int64_t rax_3 = sx.q(*(rcx_3 + rbp_2 + 0x18))
            
            if (rax_3.d == rdi_1 && memcmp(*(rcx_3 + rbp_2 + 0x10), buffer2, rax_3 * 2) == 0)
                break
        
        rbx += 1
        
        if (rbx s>= rsi_2)
            goto label_1426c2a2a

int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

if (buffer2 != 0)
    sub_140a74f90(buffer2)

return zx.q(rbx.b)
