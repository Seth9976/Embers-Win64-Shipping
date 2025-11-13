// 函数: sub_140d3e090
// 地址: 0x140d3e090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1[1]
uint64_t rax

if (r9 != 0)
    rax = zx.q(*arg1)
    
    if (rax.d s< 0 || rax.d s>= data_143e1d9b4)
        rax.b = 1
        return rax
    
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax.d)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_1
    rax = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18
    
    if (rax == 0 || *(rax + 0x10) != r9)
        rax.b = 1
        return rax
    
    if (arg3 == 0)
        int32_t rax_7 = *(rax + 8)
        
        if (arg2 == 0)
            return zx.q(rax_7 u>> 0x1c) & 1
        
        int64_t rax_8
        rax_8.b = (rax_7 & 0x30000000) != 0
        return rax_8

rax.b = 0
return rax
