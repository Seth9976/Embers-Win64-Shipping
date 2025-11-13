// 函数: sub_140a974b0
// 地址: 0x140a974b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_10 = 0
int64_t var_48 = *arg5
int64_t rax_1 = arg5[1]
arg5[1] = 0
*arg5 = 0
int64_t var_40 = rax_1
int64_t var_30 = *(arg2 + 8)
int32_t var_38 = *arg2

if (arg2[0xa].b != 0)
    int64_t var_28_1 = *(arg2 + 0x10)
    void* rax_4 = *(arg2 + 0x18)
    void* var_20_1 = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    int32_t var_18_1 = arg2[8]
    char var_10_1 = 1

sub_140a97930(arg1, &var_38, arg4, &var_48)
*arg1 = &data_142e63a18
arg1[0xe] = 0
arg1[0xe] = *arg3
*arg3 = 0
arg1[0xf].d = arg3[1].d
*(arg1 + 0x7c) = *(arg3 + 0xc)
arg3[1] = 0

if (arg2[0xa].b != 0)
    arg2[0xa].b = 0
    int64_t* rbx_1 = *(arg2 + 0x18)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_11 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_11 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t rcx_2 = *arg3

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rbx_2 = arg5[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return arg1
