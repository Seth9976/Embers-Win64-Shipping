// 函数: sub_1413a9e60
// 地址: 0x1413a9e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x3d4)
int64_t* result

if (rax == 0)
    result = 0x10
else if (rax != 1)
    result = 0x28
else
    int32_t rax_1
    
    if (*(arg1 + 0x3d8) == 0)
        rax_1 = sub_14139d5b0(arg1, *(arg1 + 0x3d0))
    
    if (*(arg1 + 0x3d8) != 0 || rax_1 == 0xa)
        result = 0x20
    else
        result = 0x18

int64_t* rdi = *(result + arg1)
*(result + arg1) = arg2

if (arg2 != 0)
    result = (*(*arg2 + 0x30))(arg2)

if (rdi == 0)
    return result

return (*(*rdi + 0x38))(rdi)
