// 函数: sub_141e42040
// 地址: 0x141e42040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r8 = sub_140b5b8a0(*(arg1 + 0x40), 0) == 0
int64_t rax_5

if ((*(arg1 + 0x44) != 0 | r8) == 0)
    rax_5 = 0
else
    if (*(arg1 + 0x40) != *(arg1 + 0xb0))
        int64_t var_18
        int64_t* rax_2 = sub_140b63b70(arg1 + 0x40, &var_18)
        int16_t* const rbp_1 = &data_142d40450
        int16_t* const r8_1
        
        if (rax_2[1].d == 0)
            r8_1 = &data_142d40450
        else
            r8_1 = *rax_2
        
        int16_t* var_28
        sub_140a2e390(&var_28, u"AnimNotify_%s", r8_1)
        int64_t rcx_3 = var_18
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int32_t var_20
        
        if (var_20 != 0)
            rbp_1 = var_28
        
        *(arg1 + 0xb0) = *(arg1 + 0x40)
        void arg_8
        *(arg1 + 0xa8) = *sub_140b58260(&arg_8, rbp_1, 1)
        int16_t* rcx_6 = var_28
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
    
    rax_5 = *(arg1 + 0xa8)

*arg2 = rax_5
return arg2
