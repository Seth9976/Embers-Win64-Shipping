// 函数: sub_1422f0360
// 地址: 0x1422f0360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t arg_18 = arg3
int64_t* rbx = *(arg2 + 0x68)
int64_t result = sx.q(*(arg2 + 0x70))
void* r12_2 = &rbx[result * 6]

if (rbx != r12_2)
    int32_t rdi_1 = 0
    
    do
        result = zx.q(*(rbx + 0x14))
        int16_t result_1 = rbx[2].w + arg3
        int32_t r14_1 = *(rbx + 0x24)
        int32_t var_98
        
        if (result.b == 0x12)
            result = sub_1422f0360(arg1, rbx[5], zx.q(result_1), arg4, var_98)
            arg3 = arg_18
        else if (result.b != 0x11)
            result.b -= 2
            
            if (result.b u<= 2)
                bool cond:0_1 = arg4[1].d == 0
                int64_t var_48 = 0
                int64_t var_40_1 = 0
                int16_t* const r8_5
                
                if (cond:0_1)
                    r8_5 = &data_142d40450
                else
                    r8_5 = *arg4
                
                *rbx
                int64_t var_88
                sub_140a2e390(&var_88, u"%s%s", r8_5)
                int64_t var_58 = var_88
                int32_t var_80
                int32_t var_50_1 = var_80
                int32_t var_7c
                int32_t var_4c_1 = var_7c
                var_80.q = 0
                var_88 = 0
                sub_1422e42b0(&var_48, rbx)
                int64_t r14_2 = sx.q(*(arg1 + 0x3a0))
                int32_t rax_3 = (r14_2 + 1).d
                *(arg1 + 0x3a0) = rax_3
                
                if (rax_3 s> *(arg1 + 0x3a4))
                    sub_1405c4ec0(arg1 + 0x398)
                
                int64_t* rdi_2 = *(arg1 + 0x398) + r14_2 * 0x28
                sub_140596d10(rdi_2, &var_58)
                sub_140596d10(&rdi_2[2], &var_48)
                int64_t rcx_13 = var_48
                result = zx.q(result_1)
                rdi_2[4].w = result.w
                
                if (rcx_13 != 0)
                    result = sub_140a74f90(rcx_13)
                
                int64_t rcx_14 = var_58
                
                if (rcx_14 != 0)
                    result = sub_140a74f90(rcx_14)
                
                rdi_1 = 0
                arg3 = arg_18
        else if (r14_1 != 0)
            do
                int16_t* const r8_3
                
                if (arg4[1].d == 0)
                    r8_3 = &data_142d40450
                else
                    r8_3 = *arg4
                
                *rbx
                var_98 = rdi_1
                int64_t var_68
                sub_140a2e390(&var_68, u"%s%s_%u_", r8_3)
                result = sub_1422f0360(arg1, rbx[5], zx.q(result_1), &var_68, var_98)
                int64_t rcx_6 = var_68
                
                if (rcx_6 != 0)
                    result = sub_140a74f90(rcx_6)
                
                rdi_1 += 1
            while (rdi_1 u< r14_1)
            
            rdi_1 = 0
            arg3 = arg_18
        else
            int16_t* const r8_1
            
            if (arg4[1].d == r14_1)
                r8_1 = &data_142d40450
            else
                r8_1 = *arg4
            
            *rbx
            int64_t var_78
            sub_140a2e390(&var_78, u"%s%s_", r8_1)
            result = sub_1422f0360(arg1, rbx[5], zx.q(result_1), &var_78, var_98)
            int64_t rcx_3 = var_78
            
            if (rcx_3 != 0)
                result = sub_140a74f90(rcx_3)
            
            arg3 = arg_18
        rbx = &rbx[6]
    while (rbx != r12_2)

return result
