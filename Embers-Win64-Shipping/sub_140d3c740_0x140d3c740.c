// 函数: sub_140d3c740
// 地址: 0x140d3c740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1[1]

if (r9 != 0)
    int32_t rax_1 = *arg1
    
    if (rax_1 s>= 0 && rax_1 s< data_143e1d9b4)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        int64_t* r8_1 =
            *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
        
        if (r8_1 != 0 && r8_1[2].d == r9)
            uint32_t rax_8 = r8_1[1].d
            
            if (arg2 == 0)
                rax_8.b = (rax_8 & 0x30000000) == 0
            else
                rax_8.b = not.b((rax_8 u>> 0x1c).b)
                rax_8.b &= 1
            
            if (rax_8.b != 0)
                return *r8_1

return 0
