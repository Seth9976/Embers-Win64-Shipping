// 函数: sub_1421ce920
// 地址: 0x1421ce920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (*(*arg2 + 0x150))(arg2)

if (result != 0)
    int32_t r8_1 = arg2[0x23].d
    int64_t r12_1 = arg2[0x1f]
    int64_t r14_1 = arg2[0x1e]
    int32_t r15_1 = *(arg2 + 0x114)
    int64_t rdi_1 = sx.q(r8_1 - 1)
    
    if (r8_1 - 1 s>= 0)
        int64_t result_1 = sx.q(result)
        int64_t temp1_1
        
        do
            void* rbx_3 = zx.q(zx.d(*(r12_1 + (rdi_1 << 1))) * r15_1) + r14_1
            
            if ((*(rbx_3 + 0x5c) & 0x4000000) == 0)
                int64_t var_40_1 = 0
                float var_38
                result =
                    sub_141fe56b0(arg1 + 0x30, &var_38, *(rbx_3 + 0xc), arg3, (arg2[3]).d, nullptr)
                int32_t var_34
                arg3.d = var_34.d f* *(rbx_3 + result_1 + 0x34)
                *(rbx_3 + result_1 + 0x30) = var_38 f* *(rbx_3 + result_1 + 0x30)
                float var_30
                float zmm0_1 = var_30 f* *(rbx_3 + result_1 + 0x38)
                *(rbx_3 + result_1 + 0x34) = arg3.d
                *(rbx_3 + result_1 + 0x38) = zmm0_1
            
            temp1_1 = rdi_1
            rdi_1 -= 1
        while (temp1_1 - 1 s>= 0)

return result
