// 函数: sub_1425fd700
// 地址: 0x1425fd700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = data_143f711b8
int64_t rbx = **(arg1 + 0x230)
int32_t rax_1 = CreateFX(&data_14344cda0, arg1 + 0x240)

if ((*(rbx + 0xa8))(*(arg1 + 0x230), u"CreateFX (EQ)", zx.q(rax_1)) != 0)
    int64_t var_28 = *(arg1 + 0x240)
    int32_t var_20_1 = 1
    int64_t* var_34_1 = &var_28
    int64_t* rax_4 = *(arg1 + 0x230)
    int32_t var_1c_1 = 6
    int32_t var_38 = 1
    int64_t rbx_1 = *rax_4
    int64_t* rcx_1 = *(rax_4[0xf6] + 8)
    int32_t rax_7 = (*(*rcx_1 + 0x48))(rcx_1, arg1 + 0x258, 6, zx.q(rbp), 0, 4, 0, &var_38, var_38)
    
    if ((*(rbx_1 + 0xa8))(*(arg1 + 0x230), u"CreateSubmixVoice (EQPremaster)", zx.q(rax_7)) != 0)
        int64_t* rax_8 = *(arg1 + 0x230)
        int64_t rbx_2 = *rax_8
        int32_t var_58_1 = 0
        int64_t* rcx_3 = *(rax_8[0xf6] + 8)
        int32_t rax_11 = (*(*rcx_3 + 0x48))(rcx_3, arg1 + 0x250, 6, zx.q(rbp), 0, 4, 0, 0)
        
        if ((*(rbx_2 + 0xa8))(*(arg1 + 0x230), CreateSubmixVoice (DryPremaster)", zx.q(rax_11))
                != 0)
            int16_t rax_12 = data_143f711b6
            uint32_t rsi_1 = 6
            
            if (rax_12 u<= 6)
                rsi_1 = zx.d(rax_12)
            
            int32_t rcx_5 = data_143f711c8
            
            if (rax_12 u> 6)
                rcx_5 = 0x3f
            
            sub_1425ff1f0(rcx_5, rsi_1)
            int64_t* rcx_6 = *(arg1 + 0x258)
            int64_t rbx_3 = **(arg1 + 0x230)
            var_58_1.q = data_143f70da0
            int32_t rax_15 = (*(*rcx_6 + 0x80))(rcx_6, 0, 6, zx.q(rsi_1), 0, 0)
            
            if ((*(rbx_3 + 0xa8))(*(arg1 + 0x230), SetOutputMatrix (EQPremaster)", zx.q(rax_15))
                    != 0)
                int64_t* rcx_8 = *(arg1 + 0x250)
                int64_t rbx_4 = **(arg1 + 0x230)
                var_58_1.q = data_143f70da0
                int32_t rax_18 = (*(*rcx_8 + 0x80))(rcx_8, 0, 6, zx.q(rsi_1), 0, 0)
                
                if ((*(rbx_4 + 0xa8))(*(arg1 + 0x230), SetOutputMatrix (DryPremaster)", 
                        zx.q(rax_18)) != 0)
                    return 1

return 0
