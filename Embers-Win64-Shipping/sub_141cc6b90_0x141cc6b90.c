// 函数: sub_141cc6b90
// 地址: 0x141cc6b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x14)

if (*(arg1 + 0x14) s<= 0xffffffff)
    sub_1405c5570(arg1 + 8, 0)

int32_t rax = *(arg1 + 0x24)
*(arg1 + 0x20) = 0

if (rax s< 0 && rax != 0)
    sub_1405c5570(arg1 + 0x18, 0)

int32_t i = 0
*(arg1 + 0x48) = 0xffff

if (*(arg1 + 0x30) s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        sub_141cc6b90(*(rbx_1 + *(arg1 + 0x28)))
        i += 1
        rbx_1 = &rbx_1[2]
    while (i s< *(arg1 + 0x30))

sub_14095cd40(arg1 + 0x28, 0)
void var_28
void* result = &var_28

if (arg1 + 0x38 != &var_28)
    *(arg1 + 0x38) = 0
    int64_t* rbx_2 = *(arg1 + 0x40)
    
    if (rbx_2 != 0)
        *(arg1 + 0x40) = 0
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                return (*(*rbx_2 + 8))(rbx_2, 1)

return result
