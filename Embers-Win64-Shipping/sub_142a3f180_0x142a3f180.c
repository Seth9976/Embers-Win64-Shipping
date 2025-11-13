// 函数: sub_142a3f180
// 地址: 0x142a3f180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = data_14400f110
int64_t r15 = 0
int64_t* result
uint64_t r14_1

if (arg2 == 0)
    r14_1 = r14 u>> 3
    
    if (r14_1 u>= 8)
        goto label_142a3f1ad
    
    r14_1 = 8
label_142a3f1d0:
    
    while (true)
        int64_t* result_1 = data_14400f108
        
        if (result_1 == 0)
            break
        
        result = result_1
        
        if (result == data_14400f108)
            data_14400f108 = result_1[4]
        else
            result = data_14400f108
        
        if (result_1 == result)
            data_14400f110
            data_14400f110 -= 1
            int64_t rdi_1 = sx.q(result_1[8].d)
            TEB* gsbase
            result_1[0xc] = gsbase->NtTib.Self
            result_1[4] = 0
            int64_t* rcx_2 = *(arg3 + 0x58)
            
            if (rdi_1.d s< 0)
                sub_142a43f80(rcx_2, 1)
            else
                j_sub_142a44ce0(rcx_2, 1)
            
            *(arg3 + 0x20) += (rdi_1 s>> 0x3f & 0xfffffffffffffffe) + 1
            int64_t rax_5 = *(arg3 + 0x20)
            
            if (rax_5 u> *(arg3 + 0x28))
                *(arg3 + 0x28) = rax_5
            
            *(arg3 + 0x30) += rdi_1
            int64_t rax_6 = *(arg3 + 0x30)
            
            if (rax_6 u> *(arg3 + 0x38))
                *(arg3 + 0x38) = rax_6
            
            sub_142a43f80(*(arg3 + 0x58) + 0xc0, 1)
            result = result_1[7]
            int64_t rbp_1 = 0
            
            if (result != 0)
                void* rdi_2 = &result_1[0x12]
                
                do
                    if ((*(rdi_2 - 0x1f) & 1) != 0)
                        result_1[5] -= 1
                        sub_142a43f80(*(arg3 + 0x58) + 0xe0, 1)
                        
                        if (*(rdi_2 - 0x10) != *rdi_2)
                            sub_142a401f0(arg1, rdi_2 - 0x20)
                        else
                            sub_142a3fab0(result_1, rdi_2 - 0x20, *(arg3 + 0x58))
                    
                    result = result_1[7]
                    rbp_1 += 1
                    rdi_2 += 0x50
                while (rbp_1 u< result)
            
            int64_t rdx_1 = result_1[6]
            
            if (rdx_1 != 0)
                int32_t rcx_11 = result_1[0xd].d
                r15 += 1
                
                if (rcx_11 s<= 1 && rdx_1 u< result)
                    void* rcx_12
                    
                    if (rcx_11 != 0)
                        rcx_12 = arg3 + 0x10
                        
                        if (rcx_11 != 1)
                            rcx_12 = nullptr
                    else
                        rcx_12 = arg3
                    
                    result_1[2] = 0
                    result_1[3] = *(rcx_12 + 8)
                    result = *(rcx_12 + 8)
                    
                    if (result == 0)
                        *rcx_12 = result_1
                    else
                        result[2] = result_1
                    
                    *(rcx_12 + 8) = result_1
            else
                sub_142a3f750(result_1, rdx_1.b, arg3)
            
            if (r14_1 u<= r15)
                break
else
    r14_1 = r14 + 0x10
label_142a3f1ad:
    
    if (r14_1 != 0)
        goto label_142a3f1d0
result.b = r15 != 0
return result
