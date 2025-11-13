// 函数: sub_14066acc0
// 地址: 0x14066acc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2[1].d
int64_t rdi = *arg2
int64_t var_28 = 0
int32_t var_20 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_28, rbx, 0)
    memcpy(var_28, rdi, rbx * 2)
else
    int32_t var_1c_1 = rbx

sub_140a360c0(&var_28)
sub_140a35cd0(&var_28)
int64_t* rcx_4 = arg1[0x36]
(*(*rcx_4 + 0x50))(rcx_4, &var_28)
void* rax_1 = sub_1423de540(data_143f5b298, arg4, 2)

if (rax_1 != 0)
    void* rdi_1 = *(rax_1 + 0x188)
    void* rdi_2
    
    if (rdi_1 == 0)
        rdi_2 = rax_1 + 0x308
    else
        rdi_2 = *(rdi_1 + 0xc8)
    
    void* rbp_1 = *(arg5 + 0x10)
    void* rax_2 = sub_140665ff0(rdi_2, rbp_1, arg5[1])
    int64_t arg_8
    
    if (rax_2 != 0)
        void* rax_3 = sub_140d3c6e0(rax_2 + 0xc)
        
        if (rax_3 != 0)
            *(rax_3 + 0xa8) = 0
            sub_1406797b0(rax_3)
        
        sub_140d3a3a0(&arg_8, rbp_1)
        sub_1420eb770(rdi_2, arg_8)
    
    void*** rax_4 = j_sub_140a82f30(0x30)
    void*** rbx_1 = rax_4
    
    if (rax_4 == 0)
        rbx_1 = nullptr
    else
        sub_140d3a3a0(&arg_8, arg1)
        *(rbx_1 + 0xc) = arg_8
        *(rbx_1 + 0x14) = *(arg5 + 8)
        *(rbx_1 + 0x1c) = *arg5
        *rbx_1 = &data_142d85f68
        rbx_1[1].b = 0
        sub_140d3a3a0(&rbx_1[4], rbp_1)
        rbx_1[5] = arg3
    
    int32_t r8_3 = arg5[1]
    arg1[0x15] = rbx_1
    sub_1420dc280(rdi_2, rbp_1, r8_3, rbx_1)

int64_t result = sub_140671b40(arg1)
int64_t rcx_18 = var_28

if (rcx_18 == 0)
    return result

return sub_140a74f90(rcx_18)
