// 函数: sub_14216be20
// 地址: 0x14216be20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 1
int64_t* var_18 = nullptr
sub_1405a4f90(&var_18)
sub_140596d10(var_18, arg2)
int64_t r8
r8.b = 1
int32_t rax_1 = (*(*arg1 + 0x2a8))(arg1, &var_18, r8)
int32_t i_1 = i_2
int64_t* rbx_1 = var_18

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_18

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return zx.q(rax_1)
