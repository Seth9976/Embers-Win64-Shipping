// 函数: sub_1422b4730
// 地址: 0x1422b4730
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
        int64_t arg_8 = 0
        void* rax_3 = sub_140d2dfc0(sub_140baa6d0(), rax_1, 0, 0, 0, 0, 0, 0, 0)
        data_143e1a338 = rax_3
        int32_t rax_4 = *(rax_3 + 0xc)
        void* const rax_11
        
        if (rax_4 s>= data_143e1d9b4)
            rax_11 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_4)
            uint32_t rdx_3 = zx.d(temp0_1)
            int32_t rax_6 = temp1_1 + rdx_3
            rax_11 =
                *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_3) * 0x18
        
        *(rax_11 + 8) |= 0x40000000
        rcx = data_143e1a338
    
    sub_140b9aa70(rcx, arg1)
    arg1[1].b = 1

arg1[2] = 0
arg1[3] = 0
*arg1 = &data_143317fc8
arg1[4].b = 0
__builtin_memset(&arg1[5], 0, 0x50)
void*** rax_12 = j_sub_140a82f30(0xc0)
void*** rax_13

if (rax_12 == 0)
    rax_13 = nullptr
else
    rax_13 = sub_140bd5be0(rax_12, 0)

arg1[0xf] = rax_13
void* rcx_8 = &arg1[0x11]
arg1[0x10].b = 0
*(rcx_8 + 0x10) = 0
*(rcx_8 + 0x18) = 0
*(rcx_8 + 0x1c) = 0x80
void* rax_14 = *(rcx_8 + 0x10)

if (rax_14 != 0)
    rcx_8 = rax_14

*rcx_8 = 0
*(rcx_8 + 8) = 0
return arg1
