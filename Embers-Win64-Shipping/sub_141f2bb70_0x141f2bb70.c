// 函数: sub_141f2bb70
// 地址: 0x141f2bb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x408)
uint8_t result

if (rax != 0)
    int32_t rax_1 = *(rax + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
    
    result = (*(rax_8 + 8) u>> 0x1d).b

if (rax == 0 || (result & 1) != 0)
    void* arg_8 = nullptr
    void* rax_10 = sub_1409fa7d0(arg1, 0, 0x40, 0, 0, 0)
    void* rcx_5 = rax_10
    *(arg1 + 0x408) = rax_10
    
    if (*(arg1 + 0xc) s<= data_143e1d994)
        int32_t rax_12 = *(rcx_5 + 0xc)
        void* const rax_19
        
        if (rax_12 s>= data_143e1d9b4)
            rax_19 = nullptr
        else
            int16_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(rax_12)
            uint32_t rdx_5 = zx.d(temp4_1)
            int32_t rax_14 = temp5_1 + rdx_5
            rax_19 = *(data_143e1d9a0 + (sx.q(rax_14 s>> 0x10) << 3))
                + sx.q(zx.d(rax_14.w) - rdx_5) * 0x18
        
        *(rax_19 + 8) |= 0x40000000
        rcx_5 = *(arg1 + 0x408)
    
    sub_140d18150(rcx_5, arg1, 0)
    void* r8_1 = *(arg1 + 0x408)
    int32_t rax_20 = *(r8_1 + 0xc)
    void* const rax_27
    
    if (rax_20 s>= data_143e1d9b4)
        rax_27 = nullptr
    else
        int16_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_20)
        uint32_t rdx_9 = zx.d(temp2_1)
        int32_t rax_22 = temp3_1 + rdx_9
        rax_27 =
            *(data_143e1d9a0 + (sx.q(rax_22 s>> 0x10) << 3)) + sx.q(zx.d(rax_22.w) - rdx_9) * 0x18
    
    if (((*(rax_27 + 8) u>> 0x1a).b & 1) != 0 && sub_140d21cd0(&data_143e1d678, r8_1) != 0)
        int32_t rax_32 = *(*(arg1 + 0x408) + 0xc)
        void* const rax_39
        
        if (rax_32 s>= data_143e1d9b4)
            rax_39 = nullptr
        else
            int16_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(rax_32)
            uint32_t rdx_13 = zx.d(temp6_1)
            int32_t rax_34 = temp7_1 + rdx_13
            rax_39 = *(data_143e1d9a0 + (sx.q(rax_34 s>> 0x10) << 3))
                + sx.q(zx.d(rax_34.w) - rdx_13) * 0x18
        
        *(rax_39 + 8) &= 0xfbffffff
    
    char var_50
    char var_50_1 = var_50 | 1
    int32_t var_60_1 = 0
    int64_t var_5c_1 = 0
    *(*(arg1 + 0x408) + 0x8c) = 2
    void* rdi_1 = *(arg1 + 0x408)
    void** const var_68
    int64_t* var_40_1 = &var_68
    int32_t rax_41 = data_143dbb200
    int32_t rax_42 = data_143dbb210
    int64_t var_38_1 = data_143dbb1f8.q
    int64_t zmm0_1 = data_143dbb208
    int32_t var_54_1 = 2
    int32_t var_48_1 = 6
    var_68 = &data_143273288
    int32_t var_20_1 = 0x3f800000
    int32_t var_1c_1 = 0x3f800000
    int64_t rsi_1 = sx.q(*(rdi_1 + 0x50))
    int32_t rax_43 = (rsi_1 + 1).d
    *(rdi_1 + 0x50) = rax_43
    
    if (rax_43 s> *(rdi_1 + 0x54))
        sub_1405c5060(rdi_1 + 0x48)
    
    void*** rcx_21 = rsi_1 * 0x50 + *(rdi_1 + 0x48)
    *rcx_21 = &data_142e3e610
    rcx_21[1].d = var_60_1.d
    *(rcx_21 + 0xc) = var_5c_1
    *(rcx_21 + 0x14) = var_54_1
    rcx_21[3].b ^= (var_50_1 ^ rcx_21[3].b) & 1
    rcx_21[4].d = 6
    rcx_21[5] = rcx_21
    *rcx_21 = &data_143273288
    rcx_21[6] = var_38_1
    rcx_21[7].d = rax_41
    *(rcx_21 + 0x3c) = zmm0_1
    *(rcx_21 + 0x44) = rax_42
    rcx_21[9].d = var_20_1.d
    *(rcx_21 + 0x4c) = var_1c_1
    void* rax_49 = *(arg1 + 0x408)
    *(rax_49 + 0x8a) |= 8
    void* rdx_16 = *(arg1 + 0x408)
    *(arg1 + 0x41c) &= 0xf7
    sub_140d3a3a0(arg1 + 0x3a8, rdx_16)
    result = sub_14221b2f0(arg1 + 0x2a8)
    
    if (result != 0)
        arg_8 = arg1
        void** var_70_1 = &arg_8
        int64_t (* var_78)(int64_t* arg1) = j_sub_141f2f8b0
        return sub_14226a4e0(sub_142216820(arg1 + 0x2a8), &var_78)

return result
