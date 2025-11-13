// 函数: sub_141be90f0
// 地址: 0x141be90f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const result = arg1[0x39]

if (result != 0)
    int32_t rbx_1 = *(result + 0x118)
    int32_t rbx_2 = rbx_1 - 1
    
    if (rbx_1 - 1 s>= 0)
        int32_t temp1_1
        
        do
            sub_141f22280(arg1[0x39], rbx_2)
            temp1_1 = rbx_2
            rbx_2 -= 1
        while (temp1_1 - 1 s>= 0)
        result = arg1[0x39]
    
    if (result != 0)
        int64_t* rax_1 = (*(*arg1 + 0x288))(arg1)
        
        if (rax_1 != 0)
            int64_t r8_1 = *rax_1
            (*(r8_1 + 0xbe0))(rax_1, arg1[0x39], r8_1)
    
    sub_141f09c00(arg1[0x39])
    int32_t rax_3 = *(arg1[0x39] + 0xc)
    
    if (rax_3 s>= data_143e1d9b4)
        result = nullptr
    else
        int16_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_3)
        uint32_t rdx_4 = zx.d(temp2_1)
        int32_t rax_5 = temp3_1 + rdx_4
        result =
            *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_4) * 0x18
    
    *(result + 8) |= 0x20000000
    arg1[0x39] = 0

return result
