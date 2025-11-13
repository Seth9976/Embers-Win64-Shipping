// 函数: sub_14216f0d0
// 地址: 0x14216f0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8
r8.b = 1
void* result = (*(*arg1 + 0x338))(arg1, arg3, r8)

if (arg1[0x11] != 0)
    void arg_8
    sub_140d3a3a0(&arg_8, arg2)
    void* rsi_1 = arg1[0x11]
    result = sub_141fb2e20(rsi_1, &arg_8)
    
    if (result != 0)
        int64_t arg_18
        sub_140d3a3a0(&arg_18, arg2)
        sub_141f96420(rsi_1 + 0x1370, arg_18)
        int64_t* rcx_4 = *(rsi_1 + 0x13c0)
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x268))(rcx_4, arg2)
        
        *(result + 0x30) |= 0x20
        *(result + 0x70) = 0
        return sub_141f83590(result, 0)

return result
