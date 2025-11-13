// 函数: sub_141bb9f00
// 地址: 0x141bb9f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x39]

if (rax != 0)
    int32_t rbx_1 = *(rax + 0x118)
    int32_t rbx_2 = rbx_1 - 1
    
    if (rbx_1 - 1 s>= 0)
        int32_t temp1_1
        
        do
            sub_141f22280(arg1[0x39], rbx_2)
            temp1_1 = rbx_2
            rbx_2 -= 1
        while (temp1_1 - 1 s>= 0)
        rax = arg1[0x39]
    
    if (rax != 0)
        int64_t* rax_2 = (*(*arg1 + 0x288))(arg1)
        
        if (rax_2 != 0)
            int64_t r8_1 = *rax_2
            (*(r8_1 + 0xbe0))(rax_2, arg1[0x39], r8_1)
    
    sub_141f09c00(arg1[0x39])
    int32_t rax_4 = *(arg1[0x39] + 0xc)
    void* const rax_11
    
    if (rax_4 s>= data_143e1d9b4)
        rax_11 = nullptr
    else
        int16_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_4)
        uint32_t rdx_4 = zx.d(temp2_1)
        int32_t rax_6 = temp3_1 + rdx_4
        rax_11 =
            *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_4) * 0x18
    
    *(rax_11 + 8) |= 0x20000000
    arg1[0x39] = 0

return sub_141c12540(arg1) __tailcall
