// 函数: sub_141cb9d40
// 地址: 0x141cb9d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18 = nullptr
int32_t i_2 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rdx_2 = &var_18

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
int64_t result = (*(*arg1 + 0xc0))(arg1, rdx_2)
int32_t i_1 = i_2
int64_t* rbx_1 = var_18

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            result = sub_140a74f90(rcx_2)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_18

if (rbx_1 == 0)
    return result

return sub_140a74f90(rbx_1)
