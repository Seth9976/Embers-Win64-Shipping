// 函数: sub_141b22820
// 地址: 0x141b22820
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
void* rax_1 = &rdx_1[sx.q(r10[4].d) * 6]
int128_t zmm0

if (rdx_1 == rax_1)
label_141b228b7:
    int128_t var_18
    (*(*r10 + 0x28))(r10, &var_18, arg1[2], arg1[3])
    
    if (arg1[3] != 0)
        void* rdi_1 = *arg1
        int64_t rsi_1 = sx.q(*(rdi_1 + 0x20))
        int32_t rax_3 = (rsi_1 + 1).d
        *(rdi_1 + 0x20) = rax_3
        
        if (rax_3 s> *(rdi_1 + 0x24))
            sub_1405a4df0(rdi_1 + 0x18)
        
        int64_t rax_4 = *(rdi_1 + 0x18)
        int64_t rcx_4 = rsi_1 * 3
        *(rax_4 + (rcx_4 << 3)) = rbx
        *(rax_4 + (rcx_4 << 3) + 8) = var_18
    
    zmm0 = var_18
else
    while (*rdx_1 != r8 || rdx_1[1] != r9)
        rdx_1 = &rdx_1[6]
        
        if (rdx_1 == rax_1)
            goto label_141b228b7
    
    zmm0 = *(rdx_1 + 8)

*arg2 = zmm0
return arg2
