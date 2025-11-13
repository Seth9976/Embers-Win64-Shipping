// 函数: sub_141be6050
// 地址: 0x141be6050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x448)

if (arg2 == 0)
    return sub_141b986a0(rbx) __tailcall

int64_t arg_10 = arg2
int64_t rax = sub_141bca720(rbx, &arg_10)
int32_t result
int64_t r8
result, r8 = sub_1419e1590(rbx + 0x630, 0)

if (*(rbx + 0x490) != 0)
    int64_t* rcx_2 = *(rbx + 0x488)
    
    if (rcx_2 != 0)
        int64_t rdx_1 = *rcx_2
        result, r8 = (*(rdx_1 + 0x28))(rcx_2, rdx_1)
        
        if (result.b != 0)
            int64_t* rcx_3
            
            if (*(rbx + 0x490) == 0)
                rcx_3 = nullptr
            else
                rcx_3 = *(rbx + 0x488)
            
            result, r8 = (*(*rcx_3 + 0x48))(rcx_3)
            *(rbx + 0x480) = result

if (*(rbx + 0x480) == 0)
    return result

r8.b = 1
(*(*(rbx + 0x4f8) + 0x28))(rbx + 0x4f8, rax, r8, 0)
return (*(*(rbx + 0x4f8) + 0x40))(rbx + 0x4f8, 3)
