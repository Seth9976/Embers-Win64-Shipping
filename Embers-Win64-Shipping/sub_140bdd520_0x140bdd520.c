// 函数: sub_140bdd520
// 地址: 0x140bdd520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1
int32_t rbx_1
int64_t rsi_1

if ((*(arg1 + 0xec) == 0 & sub_140b5b8a0(*(arg1 + 0xe8), 0x1f)) == 0)
    int32_t rcx_1
    rcx_1.b = *(arg1 + 0xec) == 0
    
    if ((rcx_1.b & sub_140b5b8a0(*(arg1 + 0xe8), 0x20)) != 0)
        rax_1 = 0
        *arg2 = 0
        rbx_1 = (data_143de5798).d
        rsi_1 = data_143de5790
        goto label_140bdd59b
    
    int32_t rcx_4
    rcx_4.b = *(arg1 + 0xec) == 0
    
    if ((rcx_4.b & sub_140b5b8a0(*(arg1 + 0xe8), 0xce)) == 0)
        int32_t rcx_6
        rcx_6.b = *(arg1 + 0xec) == 0
        
        if ((rcx_6.b & sub_140b5b8a0(*(arg1 + 0xe8), 0xdd)) == 0)
            int32_t rcx_8
            rcx_8.b = *(arg1 + 0xec) == 0
            
            if ((rcx_8.b & sub_140b5b8a0(*(arg1 + 0xe8), 0xfb)) == 0)
                int32_t rcx_10
                rcx_10.b = *(arg1 + 0xec) == 0
                
                if ((rcx_10.b & sub_140b5b8a0(*(arg1 + 0xe8), 0x258)) == 0)
                    int32_t rcx_12
                    rcx_12.b = *(arg1 + 0xec) == 0
                    
                    if ((rcx_12.b & sub_140b5b8a0(*(arg1 + 0xe8), 0x259)) == 0)
                        int32_t rcx_14
                        rcx_14.b = *(arg1 + 0xec) == 0
                        
                        if ((rcx_14.b & sub_140b5b8a0(*(arg1 + 0xe8), 0)) == 0)
                            int32_t rcx_15
                            rcx_15.b = *(arg1 + 0xec) == 0
                            
                            if ((rcx_15.b & sub_140b5b8a0(*(arg1 + 0xe8), 0x25a)) == 0)
                                int64_t var_38 = 0
                                int64_t var_30_1 = 0
                                int64_t var_18
                                int64_t* rax_10 = sub_140b17c60(&var_18)
                                int16_t* const rbx_10 = &data_142d40450
                                int16_t* const rbp_1
                                
                                if (rax_10[1].d == 0)
                                    rbp_1 = &data_142d40450
                                else
                                    rbp_1 = *rax_10
                                
                                int64_t var_28
                                int64_t* rax_11 = sub_140b63b70(arg1 + 0xe8, &var_28)
                                
                                if (rax_11[1].d != 0)
                                    rbx_10 = *rax_11
                                
                                int16_t* const var_48_1 = rbp_1
                                sub_140af8e00(&var_38, rbx_10, nullptr, 0, 0, 1)
                                int64_t rcx_20 = var_28
                                
                                if (rcx_20 != 0)
                                    sub_140a74f90(rcx_20)
                                
                                int64_t rcx_21 = var_18
                                
                                if (rcx_21 != 0)
                                    sub_140a74f90(rcx_21)
                                
                                *arg2 = var_38
                                arg2[1].d = var_30_1.d
                                *(arg2 + 0xc) = var_30_1:4.d
                            else
                                sub_140596d10(arg2, &data_143de5840)
                        else
                            sub_140af98a0("Unknown", 0x147e, 
                                UObject::GetConfigName() called on class with config name 'None'. Class "
                            "flags = 0x%08X", zx.q(*(arg1 + 0xcc)))
                            sub_140afbb40()
                            *arg2 = 0
                            arg2[1] = 0
                    else
                        sub_140596d10(arg2, &data_143de57a0)
                else
                    sub_140596d10(arg2, &data_143de57b0)
            else
                sub_140596d10(arg2, &data_143de57c0)
        else
            sub_140596d10(arg2, &data_143de5830)
    else
        sub_140596d10(arg2, &data_143de5820)
else
    rax_1 = 0
    *arg2 = 0
    rbx_1 = (data_143de5788.q).d
    rsi_1 = data_143de5780
label_140bdd59b:
    arg2[1].d = rbx_1
    
    if (rbx_1 == 0)
        *(arg2 + 0xc) = rax_1
    else
        sub_1405a4c70(arg2, rbx_1, 0)
        memcpy(*arg2, rsi_1, rbx_1 * 2)
return arg2
