// 函数: sub_142329420
// 地址: 0x142329420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143328318
arg1[1] = &data_142d5a090
arg1[2] = &data_142d44d70
arg1[3].b = 0

if (data_143de5432 == 0)
    void* rcx = data_143e1a338
    
    if (rcx == 0)
        void* rax_1 = sub_140cde0b0()
        sub_140d19010(rax_1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        void* rbp_1 = nullptr
        int64_t arg_8 = 0
        void* rax_3 = sub_140d2dfc0(sub_140baa6d0(), rax_1, 0, 0, 0, 0, 0, 0, 0)
        data_143e1a338 = rax_3
        int32_t rax_4 = *(rax_3 + 0xc)
        
        if (rax_4 s< data_143e1d9b4)
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_4)
            uint32_t rdx_2 = zx.d(temp0_1)
            int32_t rax_6 = temp1_1 + rdx_2
            rbp_1 =
                *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_2) * 0x18
        
        *(rbp_1 + 8) |= 0x40000000
        rcx = data_143e1a338
    
    sub_140b9aa70(rcx, &arg1[2])
    arg1[3].b = 1

*arg1 = &data_143329ab0
arg1[1] = &data_143329ab8
arg1[2] = &data_143329ac8
arg1[4] = &data_142d8ad18
arg1[5] = *(arg2 + 8)
*(arg1 + 0x30) = *(arg2 + 0x10)
*(arg1 + 0x40) = *(arg2 + 0x20)
arg1[0xa].b = *(arg2 + 0x30)
arg1[0xb] = *(arg2 + 0x38)
void* rax_13 = *(arg2 + 0x40)
arg1[0xc] = rax_13

if (rax_13 != 0)
    *(rax_13 + 8) += 1

arg1[0xd] = *(arg2 + 0x48)
arg1[0xe] = *(arg2 + 0x50)
*(arg1 + 0x78) = *(arg2 + 0x58)
arg1[0x11].d = *(arg2 + 0x68)
*(arg1 + 0x8c) = *(arg2 + 0x6c)
*(arg1 + 0x8d) = *(arg2 + 0x6d)
*(arg1 + 0x8e) = *(arg2 + 0x6e)
*(arg1 + 0x8f) = *(arg2 + 0x6f)
arg1[0x12] = *(arg2 + 0x70)
void* rax_22 = *(arg2 + 0x78)
arg1[0x13] = rax_22

if (rax_22 != 0)
    *(rax_22 + 8) += 1

arg1[0x14].b ^= (arg1[0x14].b ^ *(arg2 + 0x80)) & 1
char rax_24 = arg1[0x14].b
arg1[0x14].b = ((rax_24 ^ *(arg2 + 0x80)) & 2) ^ rax_24
return arg1
