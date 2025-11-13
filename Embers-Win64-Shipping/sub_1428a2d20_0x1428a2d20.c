// 函数: sub_1428a2d20
// 地址: 0x1428a2d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rbp = 0
int64_t arg_8 = *arg2

if (arg1 == 0 || *arg1 == 0)
    rbp = 1

void* result = sub_1428c41c0(arg1, &arg_8, arg3, &data_1434ead10)

if (result != 0)
    int64_t rcx = arg_8
    int32_t rdi_1 = arg3 + *arg2 - rcx.d
    
    if (rdi_1 s<= 0)
        *arg2 = rcx
        return result
    
    if (sub_1428f1590(result + 0x138, &arg_8, rdi_1) != 0)
        *arg2 = arg_8
        return result
    
    if (rbp != 0)
        sub_1428c3d60(result, &data_1434ead10)
        
        if (arg1 != 0)
            *arg1 = 0

return nullptr
