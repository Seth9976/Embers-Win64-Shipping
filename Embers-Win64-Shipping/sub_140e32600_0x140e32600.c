// 函数: sub_140e32600
// 地址: 0x140e32600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x2508)
char* result = *(arg1 + 0x3570)
void* r14_1 = sx.q((*(arg1 + 0x278) - *(arg1 + 0x2b8)) << 3) + *(arg1 + 0x2568)
char* rdi = r14_1 + 0x80

if (i s> 0)
    int32_t r15_1 = data_143e29b34
    
    do
        int64_t j_1 = 2
        int64_t j
        
        do
            int32_t k = 0
            char* rbx_1 = r14_1 + 1
            
            do
                uint64_t rdx_3 = zx.q(*rdi)
                uint64_t rcx = zx.q(rdi[0x40])
                int32_t r10_1 = *(arg1 + (rcx << 2) + 0x2570)
                int32_t r11_1 = *(arg1 + (rdx_3 << 2) + 0x2970)
                int32_t r9_3 =
                    (*(arg1 + (rdx_3 << 2) + 0x3170) + *(arg1 + (rcx << 2) + 0x2d70)) s>> 0x10
                uint32_t r8_1 = zx.d(*(sx.q(k * 2) + r14_1))
                uint32_t rcx_17
                
                if (r15_1 != 1)
                    uint32_t rcx_18 = r8_1 + r10_1
                    
                    if (rcx_18 u> 0xff)
                        rcx_18 = zx.d((not.d(rcx_18) s>> 0x1f).b)
                    
                    *result = rcx_18.b
                    int32_t rcx_21 = r8_1 + r9_3
                    
                    if (rcx_21 u> 0xff)
                        rcx_21 = zx.d((not.d(rcx_21) s>> 0x1f).b)
                    
                    result[1] = rcx_21.b
                    uint32_t rcx_24 = r8_1 + r11_1
                    
                    if (rcx_24 u> 0xff)
                        rcx_24 = zx.d((not.d(rcx_24) s>> 0x1f).b)
                    
                    result[2] = rcx_24.b
                    result[3] = 0xff
                    uint32_t rdx_6 = zx.d(*rbx_1)
                    uint32_t rcx_27 = rdx_6 + r10_1
                    
                    if (rcx_27 u> 0xff)
                        rcx_27 = zx.d((not.d(rcx_27) s>> 0x1f).b)
                    
                    result[4] = rcx_27.b
                    int32_t rcx_30 = rdx_6 + r9_3
                    
                    if (rcx_30 u> 0xff)
                        rcx_30 = zx.d((not.d(rcx_30) s>> 0x1f).b)
                    
                    result[5] = rcx_30.b
                    rcx_17 = rdx_6 + r11_1
                else
                    uint32_t rcx_2 = r8_1 + r11_1
                    
                    if (rcx_2 u> 0xff)
                        rcx_2 = zx.d((not.d(rcx_2) s>> 0x1f).b)
                    
                    *result = rcx_2.b
                    int32_t rcx_5 = r8_1 + r9_3
                    
                    if (rcx_5 u> 0xff)
                        rcx_5 = zx.d((not.d(rcx_5) s>> 0x1f).b)
                    
                    result[1] = rcx_5.b
                    uint32_t rcx_8 = r8_1 + r10_1
                    
                    if (rcx_8 u> 0xff)
                        rcx_8 = zx.d((not.d(rcx_8) s>> 0x1f).b)
                    
                    result[2] = rcx_8.b
                    result[3] = 0xff
                    uint32_t rdx_5 = zx.d(*rbx_1)
                    uint32_t rcx_11 = rdx_5 + r11_1
                    
                    if (rcx_11 u> 0xff)
                        rcx_11 = zx.d((not.d(rcx_11) s>> 0x1f).b)
                    
                    result[4] = rcx_11.b
                    int32_t rcx_14 = rdx_5 + r9_3
                    
                    if (rcx_14 u> 0xff)
                        rcx_14 = zx.d((not.d(rcx_14) s>> 0x1f).b)
                    
                    result[5] = rcx_14.b
                    rcx_17 = rdx_5 + r10_1
                
                if (rcx_17 u> 0xff)
                    rcx_17 = zx.d((not.d(rcx_17) s>> 0x1f).b)
                
                result[6] = rcx_17.b
                result[7] = 0xff
                uint64_t rdx_7 = zx.q(rdi[1])
                uint64_t rcx_35 = zx.q(rdi[0x41])
                int32_t r10_2 = *(arg1 + (rdx_7 << 2) + 0x2970)
                int32_t r9_4 = *(arg1 + (rcx_35 << 2) + 0x2570)
                uint32_t rdx_8 = zx.d(rbx_1[1])
                int32_t r8_4 =
                    (*(arg1 + (rdx_7 << 2) + 0x3170) + *(arg1 + (rcx_35 << 2) + 0x2d70)) s>> 0x10
                uint32_t rcx_51
                
                if (r15_1 != 1)
                    uint32_t rcx_52 = rdx_8 + r9_4
                    
                    if (rcx_52 u> 0xff)
                        rcx_52 = zx.d((not.d(rcx_52) s>> 0x1f).b)
                    
                    result[8] = rcx_52.b
                    int32_t rcx_55 = rdx_8 + r8_4
                    
                    if (rcx_55 u> 0xff)
                        rcx_55 = zx.d((not.d(rcx_55) s>> 0x1f).b)
                    
                    result[9] = rcx_55.b
                    uint32_t rcx_58 = rdx_8 + r10_2
                    
                    if (rcx_58 u> 0xff)
                        rcx_58 = zx.d((not.d(rcx_58) s>> 0x1f).b)
                    
                    result[0xa] = rcx_58.b
                    result[0xb] = 0xff
                    uint32_t rdx_10 = zx.d(rbx_1[2])
                    uint32_t rcx_61 = rdx_10 + r9_4
                    
                    if (rcx_61 u> 0xff)
                        rcx_61 = zx.d((not.d(rcx_61) s>> 0x1f).b)
                    
                    result[0xc] = rcx_61.b
                    int32_t rcx_64 = rdx_10 + r8_4
                    
                    if (rcx_64 u> 0xff)
                        rcx_64 = zx.d((not.d(rcx_64) s>> 0x1f).b)
                    
                    result[0xd] = rcx_64.b
                    rcx_51 = rdx_10 + r10_2
                else
                    uint32_t rcx_36 = rdx_8 + r10_2
                    
                    if (rcx_36 u> 0xff)
                        rcx_36 = zx.d((not.d(rcx_36) s>> 0x1f).b)
                    
                    result[8] = rcx_36.b
                    int32_t rcx_39 = rdx_8 + r8_4
                    
                    if (rcx_39 u> 0xff)
                        rcx_39 = zx.d((not.d(rcx_39) s>> 0x1f).b)
                    
                    result[9] = rcx_39.b
                    uint32_t rcx_42 = rdx_8 + r9_4
                    
                    if (rcx_42 u> 0xff)
                        rcx_42 = zx.d((not.d(rcx_42) s>> 0x1f).b)
                    
                    result[0xa] = rcx_42.b
                    result[0xb] = 0xff
                    uint32_t rdx_9 = zx.d(rbx_1[2])
                    uint32_t rcx_45 = rdx_9 + r10_2
                    
                    if (rcx_45 u> 0xff)
                        rcx_45 = zx.d((not.d(rcx_45) s>> 0x1f).b)
                    
                    result[0xc] = rcx_45.b
                    int32_t rcx_48 = rdx_9 + r8_4
                    
                    if (rcx_48 u> 0xff)
                        rcx_48 = zx.d((not.d(rcx_48) s>> 0x1f).b)
                    
                    result[0xd] = rcx_48.b
                    rcx_51 = rdx_9 + r9_4
                
                if (rcx_51 u> 0xff)
                    rcx_51 = zx.d((not.d(rcx_51) s>> 0x1f).b)
                
                result[0xe] = rcx_51.b
                rdi = &rdi[2]
                result[0xf] = 0xff
                k += 2
                result = &result[0x10]
                rbx_1 = &rbx_1[4]
            while (k s< 4)
            
            r14_1 += 0x40
            j = j_1
            j_1 -= 1
        while (j != 1)
        r14_1 -= -0x80
        rdi = &rdi[0xf8]
        i -= 1
    while (i s> 0)

return result
