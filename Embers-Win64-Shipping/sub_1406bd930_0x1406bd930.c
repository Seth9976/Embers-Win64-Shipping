// 函数: sub_1406bd930
// 地址: 0x1406bd930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__ld12mul(arg1)
CRITICAL_SECTION* lpCriticalSection = arg1 + 0xa0
void*** result = EnterCriticalSection(lpCriticalSection)
*(arg1 + 0xf0) = 1
*(arg1 + 0x150) = 1

if (arg2 == 0)
label_1406bde35:
    *(arg1 + 0x1c0) = 1
else
    void* r14_1 = arg1 + 0x250
    *(r14_1 + 0xc8) = arg1 + 0x518
    void* r15_1 = r14_1 + 0x8c
    *r15_1 = 3
    *(r14_1 + 0x90) = 1
    int32_t rbp_1 = 0
    
    while (true)
        int64_t* rsi_1 = *r14_1
        int64_t rcx_1 = *rsi_1
        
        if (rcx_1 != 0)
            av_frame_unref(rcx_1)
            avsubtitle_free(&rsi_1[1])
            av_frame_free(rsi_1)
        
        *rsi_1 = 0
        *(rsi_1 + 0x5c) = 0
        int64_t rax_1 = av_frame_alloc()
        *rsi_1 = rax_1
        
        if (rax_1 == 0)
        label_1406bde30:
            result = __ld12mul(arg1)
            goto label_1406bde35
        
        rbp_1 += 1
        r14_1 += 8
        
        if (rbp_1 s>= *r15_1)
            void* rdx = **(arg2 + 8)
            int64_t rcx_4 = 0
            uint32_t rax_3
            
            while (true)
                rax_3 = zx.d(*(rdx + rcx_4))
                rcx_4 += 1
                
                if (rax_3.b != *(rcx_4 + 0x142d8e01f))
                    int64_t rcx_5 = 0
                    
                    while (true)
                        rax_3 = zx.d(*(rdx + rcx_5))
                        rcx_5 += 1
                        
                        if (rax_3.b != *(rcx_5 + 0x142d8e023))
                            int64_t rcx_6 = 0
                            
                            while (true)
                                rax_3 = zx.d(*(rdx + rcx_6))
                                rcx_6 += 1
                                
                                if (rax_3.b != *(rcx_6 + 0x142d8e02b))
                                    if (*(arg2 + 0x20) == 0)
                                        rax_3.b = 0
                                    else if (strncmp(*(arg2 + 0x438), "rtp:", 4) == 0)
                                        rax_3.b = 1
                                    else if (strncmp(*(arg2 + 0x438), "udp:", 4) != 0)
                                        rax_3.b = 0
                                    else
                                        rax_3.b = 1
                                    
                                    break
                                
                                if (rcx_6 == 4)
                                    rax_3.b = 1
                                    break
                            
                            break
                        
                        if (rcx_5 == 5)
                            rax_3.b = 1
                            break
                    
                    break
                
                if (rcx_4 == 4)
                    rax_3.b = 1
                    break
            
            *(arg1 + 0x6f0) = rax_3.b
            void* r14_2 = arg1 + 0x320
            *(r14_2 + 0xc8) = arg1 + 0x570
            void* r15_2 = r14_2 + 0x8c
            *r15_2 = 0x10
            *(r14_2 + 0x90) = 0
            int32_t rbp_2 = 0
            
            while (true)
                int64_t* rsi_2 = *r14_2
                int64_t rcx_9 = *rsi_2
                
                if (rcx_9 != 0)
                    av_frame_unref(rcx_9)
                    avsubtitle_free(&rsi_2[1])
                    av_frame_free(rsi_2)
                
                *rsi_2 = 0
                *(rsi_2 + 0x5c) = 0
                int64_t rax_5 = av_frame_alloc()
                *rsi_2 = rax_5
                
                if (rax_5 == 0)
                    goto label_1406bde30
                
                rbp_2 += 1
                r14_2 += 8
                
                if (rbp_2 s>= *r15_2)
                    void* r14_3 = arg1 + 0x3f0
                    *(r14_3 + 0xc8) = arg1 + 0x4c0
                    void* r15_3 = r14_3 + 0x8c
                    *r15_3 = 9
                    *(r14_3 + 0x90) = 1
                    int32_t i = 0
                    
                    do
                        int64_t* rsi_3 = *r14_3
                        int64_t rcx_12 = *rsi_3
                        
                        if (rcx_12 != 0)
                            av_frame_unref(rcx_12)
                            avsubtitle_free(&rsi_3[1])
                            av_frame_free(rsi_3)
                        
                        *rsi_3 = 0
                        *(rsi_3 + 0x5c) = 0
                        int64_t rax_6 = av_frame_alloc()
                        *rsi_3 = rax_6
                        
                        if (rax_6 == 0)
                            goto label_1406bde30
                        
                        i += 1
                        r14_3 += 8
                    while (i s< *r15_3)
                    
                    sub_1406bcfe0(arg1 + 0x5f8, arg1 + 0x518)
                    sub_1406bcfe0(arg1 + 0x5c8, arg1 + 0x4c0)
                    *(arg1 + 0x640) = 0x3ff0000000000000
                    *(arg1 + 0x64c) = 0
                    *(arg1 + 0x650) = arg1 + 0x648
                    int64_t zmm1_1 = float.d(av_gettime_relative()) f* 9.9999999999999995e-07
                    *(arg1 + 0x628) = -0x8000000000000
                    *(arg1 + 0x638) = zmm1_1
                    *(arg1 + 0x630) = -nan(ind).0 f- zmm1_1
                    *(arg1 + 0x648) = 0xffffffff
                    *(arg1 + 0xe8) = arg2
                    *(arg1 + 0x778) = 0xffffffff
                    *(arg1 + 0x1c0) = 4
                    int32_t i_1 = 0
                    
                    if (*(arg2 + 0x2c) s> 0)
                        int64_t* r14_4 = nullptr
                        
                        do
                            void* rbp_3 = *(r14_4 + *(arg2 + 0x30))
                            
                            if (sub_1406b86f0(arg1, i_1, 0, arg1 + 0xc8) != 0)
                                *(arg1 + 0x7b0) += 1
                            
                            *(rbp_3 + 0x3c) = 0x30
                            i_1 += 1
                            r14_4 = &r14_4[1]
                        while (i_1 s< *(arg2 + 0x2c))
                    
                    int64_t rax_11 = *(arg2 + 0x448)
                    int64_t rcx_18 = 0
                    
                    if (rax_11 s<= 0x7fffffffffffec77)
                        rcx_18 = 0x1388
                    
                    *(arg1 + 0x1d0) = (rcx_18 + rax_11) * 0xa
                    double zmm0_1
                    
                    if ((*(*(arg2 + 8) + 0x10) & 0x200) == 0)
                        zmm0_1 = 3600.0
                    else
                        zmm0_1 = 10.0
                    
                    *(arg1 + 0x6e8) = zmm0_1
                    (*(*(arg1 + 0x10) + 0x50))(arg1 + 0x10, (zx.o(0)).q)
                    int64_t* rax_16 = j_sub_140a82f30(0x10)
                    int64_t* arg_10 = rax_16
                    
                    if (rax_16 != 0)
                        *rax_16 = 0
                        rax_16[1].d = 3
                        int64_t** rcx_21 = *(arg1 + 0x1b0)
                        *(arg1 + 0x1b0) = rax_16
                        *rcx_21 = rax_16
                    
                    *(arg1 + 0x698) = 0
                    int64_t* rax_17 = sub_1406c8bf0()
                    void* rax_18 = rax_17[0x23]
                    
                    if (rax_18 == 0)
                        int64_t rdx_4 = *rax_17
                        (*(rdx_4 + 0x390))(rax_17, rdx_4)
                        rax_18 = rax_17[0x23]
                    
                    *(arg1 + 0x708) = *(rax_18 + 0x38)
                    void** const var_78
                    arg_10 = &var_78
                    var_78 = &data_142d8e0f0
                    void* var_70_1 = arg1
                    void** const* var_40_1 = &var_78
                    int64_t var_88
                    int64_t* arg_20 = &var_88
                    var_88 = 0
                    int32_t var_80_1 = 0
                    sub_1405947f0(&var_88, 0xb)
                    int32_t rax_20 = var_80_1 + 0xb
                    var_80_1 = rax_20
                    
                    if (rax_20 s> 0)
                        sub_140594770(&var_88)
                    
                    UnDecorator::getReferenceType(var_88, u"ReadThread", 0x16)
                    result = sub_1406bfe90(&var_88, &var_78)
                    *(arg1 + 0x1f0) = result
                    break
            
            break

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
