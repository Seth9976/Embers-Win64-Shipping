// 函数: sub_141b226f0
// 地址: 0x141b226f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
void* rdx = arg1[2]
int32_t r8 = -1
int32_t arg_8 = 0xffffffff
int32_t arg_c = 0
int64_t rbx

if (rdx == 0)
    rbx = arg_8.q
else
    sub_140d3a3a0(&arg_8, rdx)
    rbx = arg_8.q
    arg_8.q = rbx
    r9 = arg_c
    r8 = arg_8

int64_t* r10 = *arg1
int32_t* rcx_1 = r10[3]
void* rdx_2 = sx.q(r10[4].d) * 0x2c + rcx_1
int32_t rax_4
int128_t zmm0
int128_t zmm1

if (rcx_1 == rdx_2)
label_141b2278b:
    int128_t var_38
    (*(*r10 + 0x28))(r10, &var_38, arg1[2], arg1[3])
    int128_t var_28
    int32_t var_18
    
    if (arg1[3] != 0)
        void* rsi_1 = *arg1
        int64_t rbp_1 = sx.q(*(rsi_1 + 0x20))
        int32_t rax_2 = (rbp_1 + 1).d
        *(rsi_1 + 0x20) = rax_2
        
        if (rax_2 s> *(rsi_1 + 0x24))
            sub_140ac0cd0(rsi_1 + 0x18)
        
        int64_t* rcx_5 = rbp_1 * 0x2c + *(rsi_1 + 0x18)
        *rcx_5 = rbx
        *(rcx_5 + 8) = var_38
        *(rcx_5 + 0x18) = var_28
        rcx_5[5].d = var_18
    
    zmm0 = var_38
    rax_4 = var_18
    zmm1 = var_28
else
    while (*rcx_1 != r8 || rcx_1[1] != r9)
        rcx_1 = &rcx_1[0xb]
        
        if (rcx_1 == rdx_2)
            goto label_141b2278b
    
    zmm0 = *(rcx_1 + 8)
    rax_4 = rcx_1[0xa]
    zmm1 = *(rcx_1 + 0x18)

*arg2 = zmm0
arg2[1] = zmm1
arg2[2].d = rax_4
return arg2
