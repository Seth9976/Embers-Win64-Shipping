// 函数: sub_140dda4b0
// 地址: 0x140dda4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_18 = zx.o(0)
void arg_8
sub_140dd9c70(arg1, 3, *sub_140b58260(&arg_8, u"None", 1), &var_18, arg6, arg7, arg3, arg5, arg2, 0)
void* r8_1 = nullptr
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x13].b &= 0xfe
arg1[0x13].b |= 2
arg1[0x10].b |= 1
*arg1 = &data_142ec2750
void* rax_1 = arg1[9]

if (rax_1 != 0)
    int32_t r9_1 = *(rax_1 + 0xc)
    int32_t r10_1 = data_143e1d9b4
    int64_t r11_1 = data_143e1d9a0
    void* const rdx_4
    
    if (r9_1 s>= r10_1)
        rdx_4 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r9_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_4 = temp1_1 + rdx_2
        rdx_4 = *(r11_1 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_2) * 0x18
    
    if (((*(rdx_4 + 8) u>> 0x1e).b & 1) == 0)
        if (r9_1 s< r10_1)
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r9_1)
            uint32_t rdx_6 = zx.d(temp2_1)
            int32_t rax_11 = temp3_1 + rdx_6
            r8_1 = *(r11_1 + (sx.q(rax_11 s>> 0x10) << 3)) + sx.q(zx.d(rax_11.w) - rdx_6) * 0x18
        
        *(r8_1 + 8) |= 0x40000000
        arg1[0x13].b |= 1
    
    arg1[0xa] = arg4

return arg1
