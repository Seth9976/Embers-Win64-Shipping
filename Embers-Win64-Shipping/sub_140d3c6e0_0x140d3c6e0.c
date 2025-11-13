// 函数: sub_140d3c6e0
// 地址: 0x140d3c6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[1]

if (r8 != 0)
    int32_t rax_1 = *arg1
    
    if (rax_1 s>= 0 && rax_1 s< data_143e1d9b4)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        int64_t* rax_8 =
            *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
        
        if (rax_8 != 0 && rax_8[2].d == r8 && (rax_8[1].d & 0x30000000) == 0)
            return *rax_8

return 0
