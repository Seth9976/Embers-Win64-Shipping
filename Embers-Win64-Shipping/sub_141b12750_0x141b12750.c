// 函数: sub_141b12750
// 地址: 0x141b12750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = &sub_141af0440(arg3)[1]
void* result = sub_140d3c6e0(rbp)

if (result != 0)
    result.b = result != 0
else if (*(arg1 + 0x20) != result)
    void* rax_1 = sub_140cde0b0()
    sub_140d19010(rax_1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    void* rdi_1 = nullptr
    void** const var_38 = nullptr
    int64_t var_50_1 = 0
    char var_58_1 = 0
    void* rax_3 = sub_140d2dfc0(sub_142484ee0(), rax_1, 0, 0, 0, 0, 0, 0, 0)
    
    if (rax_3 != 0)
        int32_t rax_4 = *(rax_3 + 0xc)
        
        if (rax_4 s< data_143e1d9b4)
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_4)
            uint32_t rdx_2 = zx.d(temp0_1)
            int32_t rax_6 = temp1_1 + rdx_2
            rdi_1 =
                *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_2) * 0x18
        
        *(rdi_1 + 8) |= 0x40000000
        *(rax_3 + 0x3c) &= 0xfffffffd
        int64_t rax_11 = data_143f2c6b8
        
        if (rax_11 == 0)
            rax_11 = sub_141a54240(&data_143f2c6b8, 0)
        
        int64_t zmm0_1 = *(arg3 + 0x24)
        var_38 = &data_143053398
        int32_t var_20_1 = *(arg3 + 0x2c)
        int64_t var_28 = zmm0_1
        sub_1405c5900(&arg4[0x1f], rax_11, &var_38, rax_3, 2, &var_28)
        void* rax_13 = sub_141b258c0(sub_141b20eb0(arg2, arg3), arg4)
        var_50_1.b = *(arg1 + 0x38)
        var_58_1.d = *(arg1 + 0x34)
        int64_t* var_60_1
        var_60_1.d = *(arg1 + 0x30)
        sub_141ea7d40(rax_3, *(arg1 + 0x20), rax_13, *(arg1 + 0x28), *(arg1 + 0x2c), var_60_1.d, 
            var_58_1, 0, *(arg1 + 0x39), 0)
    
    sub_140d3a3a0(rbp, rax_3)
    result.b = rax_3 != 0

return result
