// 函数: sub_141bae030
// 地址: 0x141bae030
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
int32_t* rdx_1 = r10[3]
void* rax_1 = &rdx_1[sx.q(r10[4].d) * 9]
int32_t rax_6
int128_t zmm0
int64_t zmm1

if (rdx_1 == rax_1)
label_141bae0cb:
    int128_t var_28
    (*(*r10 + 0x28))(r10, &var_28, arg1[2], arg1[3])
    int64_t var_18
    int32_t var_10
    
    if (arg1[3] != 0)
        void* rsi_1 = *arg1
        int64_t rbp_1 = sx.q(*(rsi_1 + 0x20))
        int32_t rax_3 = (rbp_1 + 1).d
        *(rsi_1 + 0x20) = rax_3
        
        if (rax_3 s> *(rsi_1 + 0x24))
            sub_140adefe0(rsi_1 + 0x18)
        
        int64_t rax_4 = *(rsi_1 + 0x18)
        int64_t rcx_5 = rbp_1 * 9
        *(rax_4 + (rcx_5 << 2)) = rbx
        void* rdx_4 = rax_4 + (rcx_5 << 2)
        *(rdx_4 + 8) = var_28
        *(rdx_4 + 0x18) = var_18
        *(rdx_4 + 0x20) = var_10
    
    zmm0 = var_28
    rax_6 = var_10
    zmm1 = var_18
else
    while (*rdx_1 != r8 || rdx_1[1] != r9)
        rdx_1 = &rdx_1[9]
        
        if (rdx_1 == rax_1)
            goto label_141bae0cb
    
    zmm0 = *(rdx_1 + 8)
    rax_6 = rdx_1[8]
    zmm1 = *(rdx_1 + 0x18)

*arg2 = zmm0
arg2[1].q = zmm1
*(arg2 + 0x18) = rax_6
return arg2
