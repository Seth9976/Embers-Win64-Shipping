// 函数: sub_140844190
// 地址: 0x140844190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2] = 0
arg1[3] = 0
*arg1 = &data_142d44d70
arg1[1].b = 0

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

*arg1 = &data_142ddb490
arg1[4].d = 0xffffffff
*(arg1 + 0x24) = 0
arg1[5] = 0
arg1[6].d = 8
arg1[7] = 0
sub_1407e2f70(&arg1[8])
sub_1407e2f70(&arg1[0x22])
sub_1407e2f70(&arg1[0x3c])
sub_1407e2f70(&arg1[0x56])
sub_1407e2f70(&arg1[0x70])
sub_140843230(&arg1[0x8a])
sub_140843230(&arg1[0xf7])
__builtin_memset(&arg1[0x164], 0, 0x208)
arg1[0x1a5] = data_14396f0d8
arg1[0x1a6].w = data_14396f0e0
*(arg1 + 0xd32) = 0xffffffff
arg1[0x1a7] = 0
arg1[0x1a8] = 0
arg1[0x1ab] = 0
arg1[0x1ac] = 0
arg1[0x1ad].d &= 0xfffffff0
sub_14081a4a0(&arg1[0x1ae])
*(arg1 + 0xe2c) = 0
arg1[0x1ca] = 0
arg1[0x1cb].d = 0
*(arg1 + 0xe5c) = 4
__builtin_memset(&arg1[0x1cc], 0, 0x18)
return arg1
