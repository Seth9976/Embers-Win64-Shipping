// 函数: sub_141b22b70
// 地址: 0x141b22b70
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
int32_t* rax = r10[3]
void* rcx_3 = &rax[sx.q(r10[4].d) * 8]
int128_t zmm0

if (rax == rcx_3)
label_141b22c0b:
    int128_t var_18
    (*(*r10 + 0x28))(r10, &var_18, arg1[2], arg1[3])
    
    if (arg1[3] != 0)
        void* rdi_1 = *arg1
        int64_t rsi_1 = sx.q(*(rdi_1 + 0x20))
        int32_t rax_2 = (rsi_1 + 1).d
        *(rdi_1 + 0x20) = rax_2
        
        if (rax_2 s> *(rdi_1 + 0x24))
            sub_1405c4e40(rdi_1 + 0x18)
        
        int64_t* rax_5 = (rsi_1 << 5) + *(rdi_1 + 0x18)
        *rax_5 = rbx
        *(rax_5 + 0x10) = var_18
    
    zmm0 = var_18
else
    while (*rax != r8 || rax[1] != r9)
        rax = &rax[8]
        
        if (rax == rcx_3)
            goto label_141b22c0b
    
    zmm0 = *(rax + 0x10)

*arg2 = zmm0
return arg2
