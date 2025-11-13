// 函数: sub_1428f4100
// 地址: 0x1428f4100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x78)
int32_t* rax_1 = sub_1428f35e0(arg2, sub_14060aa60(arg1))
int32_t* rdi = rax_1

if (rax_1 == 0)
    sub_1428a5670((rax_1 + 0xd).d, 0xdf, 0xac, "crypto\asn1\asn_mstbl.c", 0x1d)
    return 0

int32_t rbx_1 = 0
int32_t var_58 = 0

if (sub_142898c70(rax_1) s> 0)
    int32_t rax_19
    
    do
        void* rax_4 = sub_142898ea0(rdi, rbx_1)
        uint32_t r14_1 = -1
        int32_t arg_20 = 0
        uint32_t r15_1 = -1
        int32_t arg_18 = 0
        int32_t rbx_2 = 0
        int32_t* rbp_1 = nullptr
        char* r13_1 = *(rax_4 + 8)
        void* rdi_1 = nullptr
        char* rsi_1 = *(rax_4 + 0x10)
        int32_t rax_5 = sub_1428a9c80(r13_1)
        int32_t r12_1 = rax_5
        int32_t rax_6
        
        if (rax_5 == 0)
            rax_6 = sub_1428a9380(r13_1)
            r12_1 = rax_6
        
        int32_t* rax_7
        
        if (rax_5 != 0 || rax_6 != 0)
            rax_7 = sub_1428e91e0(rsi_1)
            rbp_1 = rax_7
        
        if ((rax_5 == 0 && rax_6 == 0) || rax_7 == 0)
        label_1428f4271:
            int32_t var_68_1 = 0x63
            sub_1428a5670(0xd, 0xde, 0xda, "crypto\asn1\asn_mstbl.c", 0x63)
            
            if (rdi_1 != 0)
                *(rdi_1 + 8)
                rsi_1 = *(rdi_1 + 0x10)
            
            var_68_1.q = rsi_1
            sub_1428a4880(4)
        else
            int32_t rsi_2 = 0
            
            if (sub_142898c70(rax_7) s> 0)
                int32_t rax_17
                
                do
                    void* rax_9 = sub_142898ea0(rbp_1, rsi_2)
                    rdi_1 = rax_9
                    int64_t rdx_3 = 0
                    char* r8_1 = *(rax_9 + 8)
                    char* _EndPtr
                    
                    while (true)
                        char rcx_9 = r8_1[rdx_3]
                        rdx_3 += 1
                        
                        if (rcx_9 != *(rdx_3 + &data_143514c78:7))
                            break
                        
                        if (rdx_3 == 4)
                            r14_1 = strtoul(*(rdi_1 + 0x10), &_EndPtr, 0)
                            
                            if (*_EndPtr == 0)
                                goto label_1428f43d0
                            
                            goto label_1428f4271
                    
                    int64_t rcx_12 = 0
                    
                    while (true)
                        char rax_11 = r8_1[rcx_12]
                        rcx_12 += 1
                        
                        if (rax_11 != *(rcx_12 + 0x142d9173b))
                            int64_t rcx_15 = 0
                            
                            while (true)
                                char rax_13 = r8_1[rcx_15]
                                rcx_15 += 1
                                
                                if (rax_13 != *(rcx_15 + 0x1435179f7))
                                    int64_t rcx_17 = 0
                                    
                                    while (true)
                                        char rax_15 = r8_1[rcx_17]
                                        rcx_17 += 1
                                        
                                        if (rax_15 != *(rcx_17 + 0x1434e7c4f))
                                            goto label_1428f4271
                                        
                                        if (rcx_17 == 6)
                                            char* rdx_8 = *(rdi_1 + 0x10)
                                            int64_t rcx_18 = 0
                                            
                                            while (true)
                                                char rax_16 = rdx_8[rcx_18]
                                                rcx_18 += 1
                                                
                                                if (rax_16 != *(rcx_18 + 0x1435179ff))
                                                    int64_t i
                                                    
                                                    for (i = 0; i != 5; )
                                                        char rcx_19 = rdx_8[i]
                                                        i += 1
                                                        
                                                        if (rcx_19 != *(i + 0x143517a07))
                                                            goto label_1428f4271
                                                    
                                                    rbx_2 = (i - 4).d
                                                    break
                                                
                                                if (rcx_18 == 7)
                                                    rbx_2 = (rcx_18 - 5).d
                                                    break
                                            
                                            break
                                    
                                    break
                                
                                if (rcx_15 == 5)
                                    if (sub_142932a80(*(rdi_1 + 0x10), &arg_18) == 0)
                                        goto label_1428f4271
                                    
                                    if (arg_18 == 0)
                                        goto label_1428f4271
                                    
                                    goto label_1428f43d0
                            
                            break
                        
                        if (rcx_12 == 4)
                            r15_1 = strtoul(*(rdi_1 + 0x10), &_EndPtr, 0)
                            
                            if (*_EndPtr != 0)
                                goto label_1428f4271
                            
                            goto label_1428f43d0
                    
                label_1428f43d0:
                    rsi_2 += 1
                    rax_17 = sub_142898c70(rbp_1)
                while (rsi_2 s< rax_17)
            
            int32_t rax_18 = sub_14292bb60(r12_1, r14_1, r15_1, arg_18, rbx_2)
            arg_20 = rax_18
            
            if (rax_18 == 0)
                sub_1428a5670(rax_18 + 0xd, 0xde, rax_18 + 0x41, "crypto\asn1\asn_mstbl.c", 0x6d)
        
        sub_142898cb0(rbp_1, sub_1428e8d70)
        
        if (arg_20 == 0)
            sub_1428a5670(0xd, 0xdf, 0xdb, "crypto\asn1\asn_mstbl.c", 0x23)
            return 0
        
        rdi = rax_1
        rbx_1 = var_58 + 1
        var_58 = rbx_1
        rax_19 = sub_142898c70(rdi)
    while (rbx_1 s< rax_19)

return 1
