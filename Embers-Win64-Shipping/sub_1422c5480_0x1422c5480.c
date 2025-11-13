// 函数: sub_1422c5480
// 地址: 0x1422c5480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = arg4

if (*(arg1 + 0x30) != 0)
    sub_1422c58e0(arg1, arg2 + 0x20, result, arg5)
    result = *(arg1 + 0x58)
    
    if (result != 0)
        result = zx.q(*(result + 8))
        int64_t rbx_1 = arg3[0xa]
        int32_t rdi_1 = 0
        int32_t arg_8 = result.d
        
        if (result.d != 0)
            do
                int32_t r14_1 = arg3[0x10].d
                uint64_t rax = zx.q(rdi_1.w)
                int64_t* r12_3 = zx.q(*(**(arg1 + 0x58) + rax * 0x18)) * 0x30 + *(arg1 + 0x28)
                void* rax_3 = *r12_3
                int64_t* r15_1 = *(*(rax_3 + 0x78) + 0xb8)
                int64_t var_b8 = *arg3
                int64_t var_b0_1 = arg3[1]
                int64_t var_a8_1 = arg3[2]
                int64_t var_a0_1 = arg3[3]
                int64_t var_98_1 = arg3[4]
                int64_t var_90_1 = arg3[5]
                int64_t var_88_1 = arg3[6]
                int64_t var_80_1 = arg3[7]
                int64_t var_78_1 = arg3[8]
                char var_70_1 = arg3[9].b
                char var_6f_1 = *(arg3 + 0x49)
                char var_6e_1 = *(arg3 + 0x4a)
                char var_6d_1 = *(arg3 + 0x4b)
                char var_6c_1 = *(arg3 + 0x4c)
                char var_6b_1 = *(arg3 + 0x4d)
                char var_6a_1 = *(arg3 + 0x4e)
                char var_69_1 = *(arg3 + 0x4f)
                int64_t var_68_1 = arg3[0xa]
                int64_t var_60_1 = arg3[0xb]
                int64_t var_58_1 = arg3[0xc]
                int64_t var_50_1 = arg3[0xd]
                int16_t var_48_1 = arg3[0xe].w
                int64_t rax_27 = arg3[0xf]
                uint64_t var_40 = 0
                int32_t var_38_1 = r14_1
                
                if (r14_1 != 0)
                    sub_1405a4c70(&var_40, r14_1, 0)
                    memcpy(var_40, rax_27, r14_1 * 2)
                else
                    int32_t var_34_1 = 0
                
                int64_t var_80_2 = *(rax_3 + 0x78)
                int16_t var_48_2 = rax.w
                int64_t var_88_2 = sx.q(*(r12_3 + 0x14)) + rbx_1
                result = (*(*r15_1 + 0x80))(r15_1, &var_b8)
                uint64_t rcx_4 = var_40
                
                if (rcx_4 != 0)
                    result = sub_140a74f90(rcx_4)
                
                rdi_1 += 1
            while (rdi_1 s< arg_8)

return result
