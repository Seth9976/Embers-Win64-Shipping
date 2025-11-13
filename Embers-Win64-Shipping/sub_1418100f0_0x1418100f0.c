// 函数: sub_1418100f0
// 地址: 0x1418100f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg3[1].d
void* rdi = *arg3
void* var_28 = nullptr
int32_t i_4 = i_2

if (i_2 != 0)
    sub_1405a4b40(&var_28, i_2, 0)
    void* rbx_2 = var_28 + 0x20
    void* rdi_1 = rdi + 0x20
    int32_t i
    
    do
        sub_140596d10(rbx_2 - 0x20, rdi_1 - 0x20)
        sub_140596d10(rbx_2 - 0x10, rdi_1 - 0x10)
        int64_t rax_1 = *rdi_1
        rdi_1 += 0x30
        *rbx_2 = rax_1
        rbx_2 += 0x30
        *(rbx_2 - 0x28) = *(rdi_1 - 0x28)
        *(rbx_2 - 0x24) = *(rdi_1 - 0x24)
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    int32_t var_1c_1 = 0

void var_18
int64_t result = (*(*arg1 + 0xc8))(arg1, sub_140596d10(&var_18, arg2), &var_28)
int32_t i_3 = i_4
void* rbx_4 = var_28

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_5 = *(rbx_4 + 0x10)
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = *rbx_4
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        rbx_4 += 0x30
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_4 = var_28

if (rbx_4 == 0)
    return result

return sub_140a74f90(rbx_4)
