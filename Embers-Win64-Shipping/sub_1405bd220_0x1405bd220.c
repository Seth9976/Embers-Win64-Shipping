// 函数: sub_1405bd220
// 地址: 0x1405bd220
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
int64_t zmm1

if (rax == rcx_3)
label_1405bd2bb:
    int128_t var_28
    (*(*r10 + 0x28))(r10, &var_28, arg1[2], arg1[3])
    int64_t var_18
    
    if (arg1[3] != 0)
        void* rdi_1 = *arg1
        int64_t rbp_1 = sx.q(*(rdi_1 + 0x20))
        int32_t rax_2 = (rbp_1 + 1).d
        *(rdi_1 + 0x20) = rax_2
        
        if (rax_2 s> *(rdi_1 + 0x24))
            sub_1405c4e40(rdi_1 + 0x18)
        
        int64_t* rax_5 = (rbp_1 << 5) + *(rdi_1 + 0x18)
        *rax_5 = rbx
        *(rax_5 + 8) = var_28
        rax_5[3] = var_18
    
    zmm0 = var_28
    zmm1 = var_18
else
    while (*rax != r8 || rax[1] != r9)
        rax = &rax[8]
        
        if (rax == rcx_3)
            goto label_1405bd2bb
    
    zmm0 = *(rax + 8)
    zmm1 = *(rax + 0x18)

*arg2 = zmm0
arg2[1].q = zmm1
return arg2
