// 函数: sub_1408e6bf0
// 地址: 0x1408e6bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result

if (data_143de5480 == 0)
label_1408e6c48:
    int64_t r15
    int64_t var_28_1 = r15
    
    while (true)
        result = *(arg1 + 0xb8)
        void* rdx_1 = *result
        
        if (rdx_1 == 0)
            break
        
        int128_t zmm0 = *(rdx_1 + 8)
        int64_t rcx = *(arg1 + 0xb8)
        *(arg1 + 0xb8) = rdx_1
        int96_t var_48_1 = zmm0.12
        int32_t var_30_1 = 0
        *(rdx_1 + 8) = 0.o
        j_sub_140a74f90(rcx)
        result = zx.q(*(arg1 + 0x30))
        int64_t r14_1 = sx.q(var_48_1:8.d)
        void* const rcx_3
        
        if (result.d == *(arg1 + 0x5c))
        label_1408e6cf0:
            rcx_3 = nullptr
        else
            void* rcx_1 = *(arg1 + 0x68)
            void* r8_1 = arg1 + 0x60
            
            if (rcx_1 != 0)
                r8_1 = rcx_1
            
            result = zx.q(*(r8_1 + (((sx.q(*(arg1 + 0x70)) - 1) & r14_1) << 2)))
            
            if (result.d == 0xffffffff)
            label_1408e6cf0_1:
                rcx_3 = nullptr
            else
                int64_t r8_2 = *(arg1 + 0x28)
                
                while (true)
                    int64_t rdx_6 = sx.q(result.d) * 5
                    rcx_3 = r8_2 + (rdx_6 << 3)
                    
                    if (*(r8_2 + (rdx_6 << 3)) == r14_1.d)
                        break
                    
                    result = zx.q(*(rcx_3 + 0x20))
                    
                    if (result.d == 0xffffffff)
                        goto label_1408e6cf0_2
                
                if (result.d == 0xffffffff)
                label_1408e6cf0_2:
                    rcx_3 = nullptr
        
        void* rsi_1 = rcx_3 + 8
        
        if (rcx_3 == 0)
            rsi_1 = nullptr
        
        if (rsi_1 == 0)
            break
        
        if (*(rsi_1 + 0x10) != 0)
            int64_t* rcx_4 = var_48_1.q
            int64_t rax_3 = (*(*rcx_4 + 0x18))(rcx_4)
            
            if (rax_3 == 0)
                int64_t rcx_10 = sx.q(*(arg1 + 0x80))
                
                if (rcx_10.d != 0)
                    int32_t r12_2 = 0
                    int32_t rdi_3 = 0
                    int64_t rbx_4 = 0
                    r15.b = **(arg1 + 0x78) != r14_1.d
                    
                    do
                        int64_t r9_2 = sx.q(rdi_3)
                        rbx_4 += 1
                        rdi_3 += 1
                        
                        if (rbx_4 s< rcx_10)
                            int64_t rcx_11 = *(arg1 + 0x78) + (rbx_4 << 2)
                            
                            do
                                int32_t rax_13
                                rax_13.b = *rcx_11 != r14_1.d
                                
                                if (zx.d(r15.b) != rax_13)
                                    break
                                
                                rdi_3 += 1
                                rbx_4 += 1
                                rcx_11 += 4
                            while (rbx_4 s< rcx_10)
                        
                        int32_t rsi_5 = rdi_3 - r9_2.d
                        
                        if (r15.b != 0)
                            if (r12_2 != r9_2.d)
                                int64_t rcx_12 = *(arg1 + 0x78)
                                memmove(rcx_12 + (sx.q(r12_2) << 2), rcx_12 + (r9_2 << 2), 
                                    rsi_5 << 2)
                            
                            r12_2 += rsi_5
                        
                        r15.b ^= 1
                    while (rbx_4 s< rcx_10)
                    
                    *(arg1 + 0x80) = r12_2
            else
                *rsi_1 = rax_3
                int64_t rdi_1 = sx.q(*(arg1 + 0x20))
                int32_t rax_4 = (rdi_1 + 1).d
                *(arg1 + 0x20) = rax_4
                
                if (rax_4 s> *(arg1 + 0x24))
                    sub_1405a4cf0(arg1 + 0x18)
                
                *(*(arg1 + 0x18) + (rdi_1 << 2)) = r14_1.d
                int64_t rcx_6 = sx.q(*(arg1 + 0x80))
                
                if (rcx_6.d != 0)
                    int32_t r12_1 = 0
                    int32_t rdi_2 = 0
                    int64_t rbx_1 = 0
                    r15.b = **(arg1 + 0x78) != r14_1.d
                    
                    do
                        int64_t r9_1 = sx.q(rdi_2)
                        rbx_1 += 1
                        rdi_2 += 1
                        
                        if (rbx_1 s< rcx_6)
                            int64_t rcx_7 = *(arg1 + 0x78) + (rbx_1 << 2)
                            
                            do
                                int32_t rax_8
                                rax_8.b = *rcx_7 != r14_1.d
                                
                                if (zx.d(r15.b) != rax_8)
                                    break
                                
                                rdi_2 += 1
                                rbx_1 += 1
                                rcx_7 += 4
                            while (rbx_1 s< rcx_6)
                        
                        int32_t rsi_3 = rdi_2 - r9_1.d
                        
                        if (r15.b != 0)
                            if (r12_1 != r9_1.d)
                                int64_t rcx_8 = *(arg1 + 0x78)
                                memmove(rcx_8 + (sx.q(r12_1) << 2), rcx_8 + (r9_1 << 2), rsi_3 << 2)
                            
                            r12_1 += rsi_3
                        
                        r15.b ^= 1
                    while (rbx_1 s< rcx_6)
                    
                    *(arg1 + 0x80) = r12_1
                
                int32_t rbx_2 = *(rsi_1 + 8)
                void*** rax_10 = sub_1408e4100()
                rax_10[2].d
                rax_10[2].d += rbx_2
            
            *(rsi_1 + 0x10) = 0
        
        int64_t* rcx_14 = var_48_1.q
        
        if (rcx_14 != 0)
            (**rcx_14)(rcx_14, 1)
else
    uint32_t rax_1
    rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_1.b != 0)
        goto label_1408e6c48
    
    result = sub_140a80f40()
    
    if (result.b != 0)
        goto label_1408e6c48

return result
