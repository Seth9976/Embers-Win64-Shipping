// 函数: sub_1422ef530
// 地址: 0x1422ef530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0xf]
uint32_t rsi_1
rsi_1.b = (*((*(*rcx + 0x40))(rcx) + 0x28) u>> 6).b & 1
uint32_t arg_20 = rsi_1
int64_t result = sub_1411a4ac0(data_143f0f1a0, arg3)
int32_t i = 0
char r8 = result.b
char arg_8 = result.b
char rdx_1 = *(arg1[0xf] + 0xa2)
char arg_18 = rdx_1

if (arg1[0xe].d s> 0)
    int64_t r14_1 = 0
    
    do
        result = arg1[0xd]
        int64_t* result_1 = arg1
        
        if (result != 0)
            result_1 = result
        
        if (r8 == 0 && *(result_1 + r14_1 + 8) == 0 && rsi_1.b != 0)
            result = *(arg2 + 0x140)
            *(result_1 + r14_1) = result
        
        if (rdx_1 s< 0)
            result = arg1[0xd]
            int64_t* result_2 = arg1
            
            if (result != 0)
                result_2 = result
            
            if (*(result_2 + r14_1) == 0 && *(result_2 + r14_1 + 8) == 0)
                int64_t var_98 = *(arg2 + 0x120)
                int64_t var_48
                int64_t* rax_3 = sub_140b63b70(&var_98, &var_48)
                int16_t* const rbp_1
                
                if (rax_3[1].d == 0)
                    rbp_1 = &data_142d40450
                else
                    rbp_1 = *rax_3
                
                int64_t var_90 = *(arg2 + 0x118)
                int64_t var_58
                int64_t* rax_5 = sub_140b63b70(&var_90, &var_58)
                int16_t* const rsi_2
                
                if (rax_5[1].d == 0)
                    rsi_2 = &data_142d40450
                else
                    rsi_2 = *rax_5
                
                int64_t var_88 = *(arg2 + 0x128)
                int64_t var_68
                int64_t* rax_7 = sub_140b63b70(&var_88, &var_68)
                int16_t* const rbx_1
                
                if (rax_7[1].d == 0)
                    rbx_1 = &data_142d40450
                else
                    rbx_1 = *rax_7
                
                int64_t* rcx_6 = arg1[0xf]
                int32_t r15_1 = rcx_6[1].d
                int64_t var_80 = *((*(*rcx_6 + 0x40))(rcx_6) + 0x18)
                int64_t var_78
                int64_t* rax_10 = sub_140b63b70(&var_80, &var_78)
                int16_t* const r9_1
                
                if (rax_10[1].d == 0)
                    r9_1 = &data_142d40450
                else
                    r9_1 = *rax_10
                
                int16_t* const var_a0_1 = rbp_1
                int16_t* const var_a8_1 = rsi_2
                int16_t* const var_b0_1 = rbx_1
                int32_t rax_11
                rax_11.b = r15_1 != 0xffffffff
                int32_t var_b8_1 = rax_11
                sub_140af98a0("Unknown", 0x46b, 
                    FMeshBatch was not properly setup. No primitive uniform buffer was specified and the "
                "vertex factory does not have a val", r9_1)
                int64_t rcx_9 = var_78
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                int64_t rcx_10 = var_68
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                int64_t rcx_11 = var_58
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                int64_t rcx_12 = var_48
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
                result = sub_140afbb40()
                rdx_1 = arg_18
                r8 = arg_8
                rsi_1 = arg_20
        
        i += 1
        r14_1 += 0x68
    while (i s< arg1[0xe].d)

return result
