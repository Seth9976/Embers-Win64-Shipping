// 函数: sub_141ed3ff0
// 地址: 0x141ed3ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t result = sub_140d3e110(&arg1[1])

if (result != 0)
    int64_t rax = sub_140d3c6e0(&arg1[2])
    int64_t* rax_1 = sub_140d3c6e0(&arg1[1])
    int32_t rax_2 = *(rax_1 + 0xc)
    void* const rax_9
    
    if (rax_2 s>= data_143e1d9b4)
        rax_9 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_2)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_4 = temp1_1 + rdx_2
        rax_9 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_2) * 0x18
    
    result = (*(rax_9 + 8) u>> 0x1d).b
    
    if ((result & 1) == 0)
        if ((rax_1[0x11].b & 1) != 0)
            sub_141ee0b60(rax_1)
        
        rax_1[0x15] = rax
        int64_t var_18_1 = rax
        char var_f
        char var_f_1 = (var_f & 0xfd) | 1
        char var_10_1 = 1
        sub_141ee0740(rax_1, 0)
        result = sub_141efe1c0(rax_1, *arg1)

return result
