// 函数: sub_141d13cc0
// 地址: 0x141d13cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8

if (data_143a21038 != 0)
    sub_141d13ed0(data_143f36250, *sub_140b58260(&arg_8, arg2, 1))

EnterCriticalSection(arg1 + 0x38)
int32_t i = 0
int32_t result

if (*(arg1 + 0x18) s> 0)
    int64_t rdi_1 = 0
    int16_t* const r15_1 = &data_142d40450
    
    do
        void* rcx_3 = *(rdi_1 + *(arg1 + 0x10) + 8)
        int16_t* const rcx_4
        
        if (*(rcx_3 + 0x10) == 0)
            rcx_4 = &data_142d40450
        else
            rcx_4 = *(rcx_3 + 8)
        
        if (sub_140a54510(rcx_4, arg2) == 0)
            int64_t rbp_1 = *(arg1 + 0x10)
            int64_t r12_2 = sx.q(i) * 2
            void* rax_3 = *(rbp_1 + (r12_2 << 3) + 8)
            
            if (*(rax_3 + 0x10) != 0)
                r15_1 = *(rax_3 + 8)
            
            EnterCriticalSection(&data_143f365e0)
            sub_140b58260(&arg_8, r15_1, 1)
            int64_t rdi_2 = arg_8
            
            if (data_143a21068 != data_143a21094)
                int32_t rax_6 = sub_140b5ead0(rdi_2.d) + rdi_2:4.d
                void* rcx_8 = data_143a210a0
                void* rax_8 = &data_143a21098
                
                if (rcx_8 != 0)
                    rax_8 = rcx_8
                
                int32_t j = *(rax_8 + (((sx.q(data_143a210a8) - 1) & sx.q(rax_6)) << 2))
                
                if (j != 0xffffffff)
                    int64_t rdx_6 = data_143a21060
                    
                    do
                        int64_t rcx_10 = sx.q(j) << 5
                        
                        if (*(rcx_10 + rdx_6) == rdi_2)
                            if (j != 0xffffffff)
                                sub_140abfd30(&data_143a21060, arg_8)
                            
                            break
                        
                        j = *(rcx_10 + rdx_6 + 0x18)
                    while (j != 0xffffffff)
            
            LeaveCriticalSection(&data_143f365e0)
            char** rcx_11 = *(rbp_1 + (r12_2 << 3) + 8)
            
            if (rcx_11 != 0)
                sub_141cfa620(rcx_11, 1)
            
            int32_t rcx_13 = *(arg1 + 0x18)
            int32_t rax_10 = rcx_13 - i
            
            if (rax_10 != 1)
                int64_t r9_1 = *(arg1 + 0x10)
                memmove(r9_1 + (r12_2 << 3), (sx.q(i + 1) << 4) + r9_1, (rax_10 - 1) << 4)
                rcx_13 = *(arg1 + 0x18)
            
            *(arg1 + 0x18) = rcx_13 - 1
            sub_1405a5010(arg1 + 0x10)
            
            if (arg1 != -0x38)
                LeaveCriticalSection(arg1 + 0x38)
            
            result.b = 1
            goto label_141d13d86
        
        i += 1
        rdi_1 += 0x10
    while (i s< *(arg1 + 0x18))

if (arg1 != -0x38)
    LeaveCriticalSection(arg1 + 0x38)

result.b = 0
label_141d13d86:
return result
