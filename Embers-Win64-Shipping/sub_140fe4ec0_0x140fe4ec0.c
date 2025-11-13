// 函数: sub_140fe4ec0
// 地址: 0x140fe4ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_1419767e0()

if (result.b == 0)
labelid_1:
    data_143e2b8c0 = 0
else
    int64_t r8_1 = data_143f024d8
    result = sx.q(data_143f024e0)
    int16_t* rdx_1 = r8_1 + (result << 1)
    
    if (rdx_1 == r8_1)
    label_140fe4f0f:
        data_143e2b8c0 = 0
    else
        while (true)
            rdx_1 -= 2
            
            if (*rdx_1 == 0x2e)
                break
            
            if (rdx_1 == r8_1)
                goto label_140fe4f0f_2
        
        int32_t rdx_3 = ((rdx_1 - r8_1) s>> 1).d
        
        if (rdx_3 == 0xffffffff)
        label_140fe4f0f_1:
            data_143e2b8c0 = 0
        else
            int64_t rsi_1 = sx.q(rdx_3 + 1) * 2
            result = zx.q(*(rsi_1 + r8_1))
            void* rbx_1 = rsi_1 + r8_1
            
            if (result.w == 0x2d || result.w == 0x2b)
                result = zx.q(*(rbx_1 + 2))
                rbx_1 += 2
            
            int64_t rdi
            rdi.b = 0
            
            if (result.w != 0)
                do
                    if (result.w != 0x2e)
                        result = iswdigit(result.w)
                        
                        if (result.d == 0)
                            goto label_140fe4f0f_2
                    else
                        if (rdi.b != 0)
                            goto label_140fe4f0f_2
                        
                        rdi.b = 1
                    
                    result = zx.q(*(rbx_1 + 2))
                    rbx_1 += 2
                while (result.w != 0)
                
                r8_1 = data_143f024d8
            
            result = _wtoi(rsi_1 + r8_1)
            
            if (result.d s<= 0x18b3)
            label_140fe4f0f_2:
                data_143e2b8c0 = 0
            else
                int64_t* rax_1 = j_sub_140a82f30(0x80)
                int64_t* rbx_2 = rax_1
                
                if (rax_1 == 0)
                    rbx_2 = nullptr
                else
                    __builtin_memset(rax_1, 0, 0x52)
                    rax_1[0xb] = 0
                    rax_1[0xc] = 0
                    *(rax_1 + 0x6c) = 1
                    rax_1[0xe] = 0
                    rax_1[0xf].b = 0
                
                void arg_10
                
                if (arg1 + 0x160 != &arg_10)
                    int64_t* rcx_3 = *(arg1 + 0x160)
                    *(arg1 + 0x160) = rbx_2
                    rbx_2 = nullptr
                    j_sub_140a74f90(rcx_3)
                
                j_sub_140a74f90(rbx_2)
                result = sub_1427c7790(*(arg1 + 0x160))
                
                if (result.d != 0)
                    data_143e2b8c0 = 0
                    int64_t* rcx_6 = *(arg1 + 0x160)
                    *(arg1 + 0x160) = nullptr
                    return j_sub_140a74f90(rcx_6)
                
                data_143e2b8c0 = 1

return result
