// 函数: sub_14264d150
// 地址: 0x14264d150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x50) & 2) == 0 && sub_14243ac50(arg2) == 3)
    return 0

void* result = sub_141de71e0(arg1, arg2)

if (result != 0)
    void* rax_3 = sub_14269bba0()
    void* rdx_1 = *(result + 0x10)
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
        *(result + 0x68) ^= (*(arg1 + 0x50) u>> 2 ^ *(result + 0x68)) & 1
        *(result + 0x68) ^= (*(arg1 + 0x50) u>> 2 ^ *(result + 0x68)) & 2
        
        if ((*(arg1 + 0x50) & 1) == 0)
            return result
        
        data_143f71424 = 1
        sub_141df0080(0)
        return result

return nullptr
