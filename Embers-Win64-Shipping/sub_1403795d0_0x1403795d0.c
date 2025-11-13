// 函数: sub_1403795d0
// 地址: 0x1403795d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_1 = zx.q(arg2)

if (arg2 != 0)
    int64_t* rdi_1 = arg4
    uint64_t i
    
    do
        if ((*(*(arg1 + 8) + 0x418) & 2) != 0)
            sub_140378d54(*(rdi_1 + arg3 - arg4))
            sub_140378d54(*rdi_1)
        
        rdi_1 += 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t r13 = 0

if (((*(*(arg1 + 8) + 0x418)).b & 2) != 2)
    *(arg1 + 0x28) = 1
else
    uint64_t rbp_3 = zx.q(*(*arg3 + 2))
    uint64_t rsi = zx.q(*(*arg4 + 2))
    int32_t* rax_5 = CoTaskMemAlloc(zx.q(rsi.d * rbp_3.d) << 2)
    *(arg1 + 0x18) = rax_5
    
    if (rax_5 != 0)
        int16_t* rax_7 = *arg3
        int32_t r8 = 0
        int16_t r15_1 = rax_7[7]
        int16_t r14_1 = r15_1
        
        if (*rax_7 == 0xfffe)
            r8 = *(rax_7 + 0x14)
            r14_1 = rax_7[9]
        
        int16_t* rax_8 = *arg4
        int32_t r9_1 = 0
        
        if (*rax_8 == 0xfffe)
            r9_1 = *(rax_8 + 0x14)
        
        if (r8 == 0)
            uint64_t rax_9 = zx.q((rbp_3 - 1).d)
            
            if (rax_9.d u<= 7)
                r8 = *(&data_143cc6f80 + (rax_9 << 2))
        
        if (r9_1 == 0)
            uint64_t rax_10 = zx.q((rsi - 1).d)
            
            if (rax_10.d u<= 7)
                r9_1 = *(&data_143cc6f80 + (rax_10 << 2))
        
        int32_t rax_11 = sub_140378de8(rbp_3.d, rsi.d, r8, r9_1, rax_5)
        r13 = rax_11
        
        if (rax_11 s< 0)
            goto label_140379679
        
        *(arg1 + 0x24) = 0
        int32_t rdi_2 = 4
        
        if (rbp_3.d == rsi.d)
            int64_t rcx_8 = 0
            rdi_2 = 7
            
            if (rsi.d != 0)
                void* r9_2 = nullptr
                
                do
                    int64_t rdx_1 = 0
                    
                    if (rbp_3.d != 0)
                        float* r11_2 = *(arg1 + 0x18)
                        int32_t* rax_12 = r9_2 + r11_2
                        
                        do
                            float zmm0_1 = *rax_12
                            
                            if (rdx_1 == rcx_8)
                                float temp1_1 = *r11_2
                                zmm0_1 - temp1_1
                                
                                if (is_unordered.d(zmm0_1, temp1_1) || not(zmm0_1 == temp1_1))
                                    rdi_2 &= 0xfffffffe
                            else
                                zmm0_1 - 0f
                                
                                if (is_unordered.d(zmm0_1, 0f) || not(zmm0_1 == 0f))
                                    rdi_2 &= 0xfffffffc
                            
                            rdx_1 += 1
                            rax_12 = &rax_12[1]
                        while (rdx_1 u< rbp_3)
                    
                    rcx_8 += 1
                    r9_2 += rbp_3 << 2
                while (rcx_8 u< rsi)
        
        if ((1 & rdi_2.b) != 0)
            CoTaskMemFree(*(arg1 + 0x18))
            *(arg1 + 0x18) = 0
            *(arg1 + 0x24) = 1
        
        char r9_3 = rdi_2.b
        int32_t rdi_3
        
        if (sub_140378d54(*arg3) != 1)
            rdi_3 = 7
        label_140379877:
            uint64_t (* rax_17)(int64_t* arg1) = sub_14037dd18(rdi_3, rbp_3, rsi, r9_3)
            *(arg1 + 0x20) = rdi_3
            *(arg1 + 0x10) = rax_17
        else
            if (r15_1 == 0x20)
                if (r14_1 == r15_1)
                    rdi_3 = 6
                else if (r14_1 != 0x18)
                    rdi_3 = 3
                else
                    rdi_3 = 5
                
                goto label_140379877
            
            if (r15_1 == 0x18)
                if (r14_1 != r15_1)
                    rdi_3 = 2
                    goto label_140379877
                
                uint64_t (* rax_14)(int64_t* arg1) = sub_14037dd18(4, rbp_3, rsi, r9_3)
                *(arg1 + 0x20) = 4
                *(arg1 + 0x10) = rax_14
            else if (r15_1 != 0x10)
                uint64_t (* rax_16)(int64_t* arg1) = sub_14037dd18(0, rbp_3, rsi, r9_3)
                *(arg1 + 0x20) = 0
                *(arg1 + 0x10) = rax_16
            else
                uint64_t (* rax_15)(int64_t* arg1) = sub_14037dd18(1, rbp_3, rsi, r9_3)
                *(arg1 + 0x20) = 1
                *(arg1 + 0x10) = rax_15
        *(arg1 + 0x28) = 1
    else
        r13 = -0x7ff8fff2
    label_140379679:
        int64_t pv = *(arg1 + 0x18)
        
        if (pv != 0)
            CoTaskMemFree(pv)
            *(arg1 + 0x18) = 0
        
        *(arg1 + 0x10) = 0
        *(arg1 + 0x24) = 0
        *(arg1 + 0x20) = 7
        
        if (r13 s>= 0)
            *(arg1 + 0x28) = 1

return zx.q(r13)
