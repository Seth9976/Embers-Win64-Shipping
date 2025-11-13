// 函数: sub_1409dbe50
// 地址: 0x1409dbe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_143990df0)
int64_t* result = sub_141ce12f0(arg1 + 0x30, arg2, zmm1)

if ((arg2[5].b & 1) != 0)
    int64_t rcx_2 = sx.q(*(arg1 + 0x3c0))
    
    if (rcx_2.d != 0)
        result = *(arg1 + 0x3b8)
        int32_t rdi_1 = 0
        int32_t r15_1 = 0
        int64_t r14
        r14.b = *result != 0
        int64_t rbx_1 = 0
        
        do
            int64_t r9_1 = sx.q(rdi_1)
            rbx_1 += 1
            rdi_1 += 1
            
            if (rbx_1 s< rcx_2)
                int64_t* rcx_3 = *(arg1 + 0x3b8) + (rbx_1 << 3)
                
                do
                    result.b = *rcx_3 != 0
                    
                    if (zx.d(r14.b) != result.d)
                        break
                    
                    rdi_1 += 1
                    rbx_1 += 1
                    rcx_3 = &rcx_3[1]
                while (rbx_1 s< rcx_2)
            
            int32_t rbp_2 = rdi_1 - r9_1.d
            
            if (r14.b != 0)
                if (r15_1 != r9_1.d)
                    int64_t rcx_4 = *(arg1 + 0x3b8)
                    result = memmove(rcx_4 + (sx.q(r15_1) << 3), rcx_4 + (r9_1 << 3), rbp_2 << 3)
                
                r15_1 += rbp_2
            
            r14.b ^= 1
        while (rbx_1 s< rcx_2)
        
        *(arg1 + 0x3c0) = r15_1

return result
