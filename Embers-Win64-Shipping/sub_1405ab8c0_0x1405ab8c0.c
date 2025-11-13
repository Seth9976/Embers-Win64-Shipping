// 函数: sub_1405ab8c0
// 地址: 0x1405ab8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*arg1 = &data_142d44d70

if (data_143de5432 == 0)
    void* rcx = data_143e1a338
    
    if (rcx == 0)
        void* rax_1 = sub_140cde0b0()
        sub_140d19010(rax_1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        void* rsi_1 = nullptr
        int64_t arg_8 = 0
        void* rax_3 = sub_140d2dfc0(sub_140baa6d0(), rax_1, 0, 0, 0, 0, 0, 0, 0)
        data_143e1a338 = rax_3
        int32_t rax_4 = *(rax_3 + 0xc)
        
        if (rax_4 s< data_143e1d9b4)
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_4)
            uint32_t rdx_3 = zx.d(temp0_1)
            int32_t rax_6 = temp1_1 + rdx_3
            rsi_1 =
                *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_3) * 0x18
        
        *(rsi_1 + 8) |= 0x40000000
        rcx = data_143e1a338
    
    sub_140b9aa70(rcx, arg1)
    arg1[1].b = 1

return arg1
