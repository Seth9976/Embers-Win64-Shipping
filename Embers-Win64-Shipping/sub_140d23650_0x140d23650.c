// 函数: sub_140d23650
// 地址: 0x140d23650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_2 = arg5
int64_t* rsi = arg3
wchar16* r14 = arg2
int16_t* var_78 = nullptr
int32_t var_70 = 0
int16_t* const r8_5

if (i_2 != 0 && test_bit(zx.q(*(arg1 + 0x40)), 0xe))
    int16_t* var_48
    
    if (sub_140cec0b0(i_2) == 0)
        void* rax_11
        
        if (not(test_bit(zx.q(*(arg1 + 0x40)), 0x12)))
            rax_11 = i_2[2]
        else
            rax_11 = sub_140cbd010(arg1)
        
        var_48 = nullptr
        int64_t var_40_2 = 0
        sub_140d21e40(rax_11, 0, &var_48)
        int16_t* rcx_20 = var_78
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        var_78 = var_48
        var_70 = var_40_2.d
        var_70 = var_40_2:4.d
    else
        int64_t* i = i_2[4]
        int64_t* i_1 = i_2
        
        for (; i != 0; i = i[4])
            i_1 = i
        
        int64_t var_40
        
        if (i_1 != sub_140cde0b0())
            var_48 = nullptr
            var_40 = 0
            sub_140d21e40(i_2, i_1, &var_48)
        else
            arg5 = i_2[3]
            sub_140b63b70(&arg5, &var_48)
        
        int32_t rdi_1 = var_40.d
        int16_t* rsi_1 = var_48
        arg5 = *(i_2[2] + 0x18)
        int32_t rcx_5 = sub_140b63b70(&arg5, &var_48)
        int16_t* var_68 = nullptr
        sub_1405a4c70(&var_68, sbb.d(rcx_5, rcx_5, rdi_1 != 0) + 2 + rdi_1, 0)
        memcpy(var_68, rsi_1, rdi_1 * 2)
        int32_t r12_1 = 1
        sub_140a20ba0(&var_68, &data_142d404d4, 1)
        int16_t* r14_1 = var_68
        var_68 = nullptr
        int32_t var_60_1
        var_60_1.q = 0
        int16_t* rdi_2
        int32_t r12_2
        int32_t r13_1
        
        if (rdi_1 s> 1)
            int32_t rdi_3 = var_40.d
            int32_t rdi_4
            
            if (rdi_3 == 0)
                rdi_4 = 0
            else
                rdi_4 = rdi_3 - 1
            
            if (rdi_1 != 0 || rdi_4 == 0)
                r12_1 = 0
            
            int16_t* var_58 = r14_1
            int32_t rdx_7 = r12_1 + rdi_1 + rdi_4
            int32_t var_5c
            
            if (rdx_7 s> var_5c)
                sub_1405947f0(&var_58, rdx_7)
            
            sub_140a20ba0(&var_58, var_48, rdi_4)
            rdi_2 = var_58
            r12_2 = rdi_1
            r14_1 = nullptr
            var_58 = nullptr
            r13_1 = var_5c
            int32_t var_50_1
            var_50_1.q = 0
        else
            rdi_2 = var_48
            r12_2 = var_40.d
            var_48 = nullptr
            r13_1 = var_40:4.d
            int64_t var_40_1 = 0
        
        int16_t* rcx_13 = var_78
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        var_70 = r12_2
        var_78 = rdi_2
        var_70 = r13_1
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        int16_t* rcx_15 = var_48
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        (*(*i_2 + 0x208))(i_2, &var_78)
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
        
        rsi = arg3
        r14 = arg2
    r8_5 = var_78

if (i_2 == 0 || not(test_bit(zx.q(*(arg1 + 0x40)), 0xe)) || var_70 == 0)
    r8_5 = &data_142d40450

wchar16* result = sub_140abc1e0(r14, rsi, r8_5, &data_142d40450, (arg4 u>> 1).b & 1)
int16_t* rcx_22 = var_78

if (rcx_22 == 0)
    return result

sub_140a74f90(rcx_22)
return result
