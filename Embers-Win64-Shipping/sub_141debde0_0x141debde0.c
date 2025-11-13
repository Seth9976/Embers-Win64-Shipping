// 函数: sub_141debde0
// 地址: 0x141debde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3

if (data_143f38ee4 s> 0)
    return 0

EnterCriticalSection(arg1 + 0x60)
int32_t var_38
sub_140865c40(arg1 + 0x10, &var_38, arg2)
int64_t rax_1 = sx.q(var_38)
int64_t result

if (rax_1.d == 0xffffffff)
labelid_5:
    result = 0
else
    void* rbp_1 = *(arg1 + 0x10) + rax_1 * 0x18
    
    if (rbp_1 == 0)
    labelid_5:
        result = 0
    else
        void* rbp_2 = *(rbp_1 + 8)
        
        if (rbp_2 == 0)
        labelid_5:
            result = 0
        else
            if (arg4 != 0)
                sub_1408d92c0(rbp_2 + 0x50, &arg_18)
                int32_t* r8_1 = *(rbp_2 + 0x50)
                uint32_t i = modu.dp.d(0:(arg3 + 1), *(arg2 + 0xc0))
                int32_t* rax_4 = r8_1
                int64_t rdx_4 = sx.q(*(rbp_2 + 0x58))
                void* rcx_3 = &r8_1[rdx_4]
                
                if (r8_1 != rcx_3)
                    while (*rax_4 != i)
                        rax_4 = &rax_4[1]
                        
                        if (rax_4 == rcx_3)
                            goto label_141debecc
                
                if (r8_1 == rcx_3 || ((rax_4 - r8_1) s>> 2).d == 0xffffffff)
                label_141debecc:
                    int32_t rax_7 = (rdx_4 + 1).d
                    *(rbp_2 + 0x58) = rax_7
                    
                    if (rax_7 s> *(rbp_2 + 0x5c))
                        sub_1405a4cf0(rbp_2 + 0x50)
                    
                    *(*(rbp_2 + 0x50) + (rdx_4 << 2)) = i
            
            int32_t* rcx_5 = *(rbp_2 + 0x40)
            void* rdx_5 = &rcx_5[sx.q(*(rbp_2 + 0x48))]
            
            if (rcx_5 == rdx_5)
            label_141debf0d:
                result = 0
            else
                while (*rcx_5 != arg3)
                    rcx_5 = &rcx_5[1]
                    
                    if (rcx_5 == rdx_5)
                        goto label_141debf0d_2
                
                int64_t* rdi_1 = *(rbp_2 + 8)
                void* rax_13 = &rdi_1[sx.q(*(rbp_2 + 0x10)) * 4]
                
                if (rdi_1 == rax_13)
                label_141debf0d_1:
                    result = 0
                else
                    while (rdi_1[3].d != arg3)
                        rdi_1 = &rdi_1[4]
                        
                        if (rdi_1 == rax_13)
                            goto label_141debf0d_2
                    
                    if (rdi_1 == 0)
                    label_141debf0d_2:
                        result = 0
                    else
                        bool z_1
                        
                        if (0 == *rdi_1)
                            *rdi_1 = 0
                            z_1 = true
                        else
                            *rdi_1
                            z_1 = false
                        
                        int64_t performanceCount[0x2]
                        
                        if (z_1 && not((zx.o(0)).q f> rdi_1[2]))
                            QueryPerformanceCounter(&performanceCount)
                        int64_t result_1 = 0
                        
                        if (0 == *rdi_1)
                            *rdi_1 = 0
                        else
                            result_1 = *rdi_1
                        
                        result = result_1

if (arg1 != -0x60)
    LeaveCriticalSection(arg1 + 0x60)

return result
