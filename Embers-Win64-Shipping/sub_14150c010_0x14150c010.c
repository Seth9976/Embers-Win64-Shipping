// 函数: sub_14150c010
// 地址: 0x14150c010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg3 + 0x10)
int64_t rax_1 = *(arg3 + 0x20)
uint64_t result_1 = *(arg3 + 0x28)
uint64_t rcx = zx.q(*(arg2 + 0xb028))
void* var_68 = arg3 + 0x10
char var_50 = 0
*(arg3 + 0x28) = &var_68
*(arg3 + 0x30) += 1
int32_t rax_2 = 2 * rcx

if (mulu.dp.q(2, rcx) u>> 0x40 != zx.o(0))
    rax_2 = -1

int64_t rax_3 = sub_14081d830(rax_2, arg3 + 0x10, 1, 0)
int64_t rcx_2 = rax_3
int32_t rax_4 = *(arg2 + 0xb028)
int32_t r10_1 = 0

if (rax_4 != 0)
    int32_t rcx_3 = *(arg2 + 0xb02c)
    int64_t rbp_1 = 0
    int64_t r12_1 = 0
    int16_t* r15_1 = nullptr
    int32_t arg_18 = rcx_3
    
    do
        int64_t* r14_2 = *(arg2 + 0xb000) + r12_1
        uint64_t r8
        
        if (r10_1 u>= rcx_3)
            int64_t r9_2 = *r14_2
            int16_t r11_2 = *(r15_1 + *(arg2 + 0xb018))
            char rdi_1 = (*(arg2 + 0xb020))[rbp_1]
            int64_t rax_27 = (r9_2 u>> 0x21 ^ r9_2) * -0xae502812aa7333
            int64_t rcx_14 = (rax_27 u>> 0x21 ^ rax_27) * -0x3b314601e57a13ad
            uint64_t rax_31 = (zx.q((rcx_14 u>> 0x21).w) ^ zx.q(rcx_14.w)) & 0x3ff
            r8 = zx.q(*(arg1 + (rax_31 << 1)))
            void* rsi_1 = arg1 + (rax_31 << 1)
            
            if (r8.w == 0xffff)
            label_14150c289:
                int32_t rcx_15 = *(arg1 + 0xb028)
                
                if (rcx_15 u>= 0x1000)
                    r8 = 0xffff
                else
                    r8 = zx.q(rcx_15.w)
                    *(arg1 + 0xb028) = rcx_15 + 1
                    uint64_t rdx_4 = zx.q(rcx_15)
                    *(arg1 + (r8 << 1) + 0x800) = *rsi_1
                    *rsi_1 = r8.w
                    *(*(arg1 + 0xb000) + (rdx_4 << 3)) = *r14_2
                    int16_t rcx_17 = -2
                    
                    if (r11_2 u<= 0xfffe)
                        rcx_17 = r11_2
                    
                    *(*(arg1 + 0xb018) + (rdx_4 << 1)) = rcx_17
                    *(rdx_4 + *(arg1 + 0xb020)) = rdi_1
            else
                while (true)
                    uint64_t rdx_3 = zx.q(r8.w)
                    
                    if (r9_2 == *(*(arg1 + 0xb000) + (rdx_3 << 3)))
                        int64_t rax_38 = *(arg1 + 0xb018)
                        uint32_t rax_39 = zx.d(*(rax_38 + (rdx_3 << 1)))
                        
                        if (rax_39 != 0xffff)
                            uint32_t rcx_19 = zx.d(r11_2) + rax_39
                            int16_t rax_40 = -2
                            
                            if (rcx_19 u<= 0xfffe)
                                rax_40 = rcx_19.w
                            
                            *(rax_38 + (rdx_3 << 1)) = rax_40
                        
                        int64_t rax_41 = *(arg1 + 0xb020)
                        *(rax_41 + rdx_3) |= rdi_1
                        break
                    
                    r8 = zx.q(*(arg1 + (rdx_3 << 1) + 0x800))
                    
                    if (r8.w == 0xffff)
                        goto label_14150c289
        else
            int64_t rdx_1 = *r14_2
            char r11_1 = (*(arg2 + 0xb020))[rbp_1]
            int64_t rax_9 = (rdx_1 u>> 0x21 ^ rdx_1) * -0xae502812aa7333
            int64_t rcx_7 = (rax_9 u>> 0x21 ^ rax_9) * -0x3b314601e57a13ad
            uint64_t rax_13 = (zx.q((rcx_7 u>> 0x21).w) ^ zx.q(rcx_7.w)) & 0x3ff
            r8 = zx.q(*(arg1 + (rax_13 << 1)))
            int16_t* r9_1 = arg1 + (rax_13 << 1)
            
            if (r8.w == 0xffff)
            label_14150c179:
                int32_t rcx_9 = *(arg1 + 0xb028)
                
                if (rcx_9 u>= 0x1000)
                    r8 = 0xffff
                else
                    r8 = zx.q(rcx_9.w)
                    *(arg1 + 0xb028) = rcx_9 + 1
                    uint64_t rdx_2 = zx.q(rcx_9)
                    *(arg1 + (r8 << 1) + 0x800) = *r9_1
                    *r9_1 = r8.w
                    *(*(arg1 + 0xb000) + (rdx_2 << 3)) = *r14_2
                    *(*(arg1 + 0xb018) + (rdx_2 << 1)) = 0xffff
                    *(rdx_2 + *(arg1 + 0xb020)) = r11_1
                    *(arg1 + 0xb02c) += 1
            else
                while (true)
                    uint64_t rcx_8 = zx.q(r8.w)
                    
                    if (rdx_1 == *(*(arg1 + 0xb000) + (rcx_8 << 3)))
                        int64_t rax_20 = *(arg1 + 0xb018)
                        
                        if (*(rax_20 + (rcx_8 << 1)) != 0xffff)
                            *(rax_20 + (rcx_8 << 1)) = 0xffff
                            *(arg1 + 0xb02c) += 1
                        
                        int64_t rax_21 = *(arg1 + 0xb020)
                        *(rax_21 + rcx_8) |= r11_1
                        break
                    
                    r8 = zx.q(*(arg1 + (rcx_8 << 1) + 0x800))
                    
                    if (r8.w == 0xffff)
                        goto label_14150c179
        
        r10_1 += 1
        rcx_3 = arg_18
        rbp_1 += 1
        r12_1 += 8
        *(r15_1 + rax_3) = r8.w
        r15_1 = &r15_1[1]
    while (r10_1 u< rax_4)
    
    rcx_2 = rax_3

int32_t i_4 = *(arg2 + 0xb030)

if (i_4 != 0)
    int32_t* r9_4 = *(arg2 + 0xb008)
    uint64_t i_2 = zx.q(i_4)
    uint64_t i
    
    do
        int32_t rdx_5 = r9_4[1]
        int16_t r8_1 = *(rcx_2 + (zx.q(rdx_5.w) << 1))
        
        if (r8_1 != 0xffff)
            int32_t arg_14 = ((rdx_5 u>> 0x14 & 0xf) << 4 | (rdx_5 u>> 0x10 & 0xf)) << 0x10
                | (rdx_5 & 0xf000000) | zx.d(r8_1)
            int64_t rax_49 = (*r9_4).q
            int64_t rcx_31 = (rax_49 u>> 0x21 ^ rax_49) * -0xae502812aa7333
            int64_t rdx_10 = (rcx_31 u>> 0x21 ^ rcx_31) * -0x3b314601e57a13ad
            uint64_t r11_4 = (zx.q((rdx_10 u>> 0x21).w) ^ zx.q(rdx_10.w)) & 0x3ff
            int16_t rcx_34 = *(arg1 + (r11_4 << 1) + 0x2800)
            
            if (rcx_34 == 0xffff)
            label_14150c476:
                uint64_t r8_3 = zx.q(*(arg1 + 0xb030))
                
                if (r8_3.d u< 0x1f00)
                    uint64_t rdx_12 = zx.q(r8_3.w)
                    *(arg1 + 0xb030) = (r8_3 + 1).d
                    *(arg1 + (rdx_12 << 1) + 0x3000) = *(arg1 + (r11_4 << 1) + 0x2800)
                    *(arg1 + (r11_4 << 1) + 0x2800) = rdx_12.w
                    *(*(arg1 + 0xb008) + (r8_3 << 3)) = rax_49
            else
                while (true)
                    uint64_t rdx_11 = zx.q(rcx_34)
                    
                    if (rax_49 == *(*(arg1 + 0xb008) + (rdx_11 << 3)))
                        break
                    
                    rcx_34 = *(arg1 + (rdx_11 << 1) + 0x3000)
                    
                    if (rcx_34 == 0xffff)
                        goto label_14150c476
            
            rcx_2 = rax_3
        
        r9_4 = &r9_4[2]
        i = i_2
        i_2 -= 1
    while (i != 1)

uint64_t result = zx.q(*(arg2 + 0xb034))

if (result.d != 0)
    int64_t* r9_5 = *(arg2 + 0xb010)
    uint64_t i_3 = zx.q(result.d)
    uint64_t i_1
    
    do
        int64_t rdx_13 = *r9_5
        int64_t rax_53 = (rdx_13 u>> 0x21 ^ rdx_13) * -0xae502812aa7333
        int64_t rcx_41 = (rax_53 u>> 0x21 ^ rax_53) * -0x3b314601e57a13ad
        uint64_t r10_3 = (zx.q((rcx_41 u>> 0x21).w) ^ zx.q(rcx_41.w)) & 0x1ff
        result = zx.q(*(arg1 + (r10_3 << 1) + 0x6e00))
        
        if (result.w == 0xffff)
        label_14150c556:
            uint64_t rdx_14 = zx.q(*(arg1 + 0xb034))
            
            if (rdx_14.d u< 0x1f00)
                uint64_t rcx_43 = zx.q(rdx_14.w)
                *(arg1 + 0xb034) = (rdx_14 + 1).d
                *(arg1 + (rcx_43 << 1) + 0x7200) = *(arg1 + (r10_3 << 1) + 0x6e00)
                *(arg1 + (r10_3 << 1) + 0x6e00) = rcx_43.w
                result = *r9_5
                *(*(arg1 + 0xb010) + (rdx_14 << 3)) = result
        else
            while (true)
                uint64_t rcx_42 = zx.q(result.w)
                
                if (rdx_13 == *(*(arg1 + 0xb010) + (rcx_42 << 3)))
                    break
                
                result = zx.q(*(arg1 + (rcx_42 << 1) + 0x7200))
                
                if (result.w == 0xffff)
                    goto label_14150c556
        
        r9_5 = &r9_5[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (var_50 == 0)
    void* rax_58 = var_68
    char var_50_1 = 1
    *(rax_58 + 0x20) -= 1
    void* rcx_45 = var_68
    
    if (rax_1 != *(rcx_45 + 0x10))
        sub_140b16b40(rcx_45, rax_1)
        rcx_45 = var_68
    
    *rcx_45 = rax
    result = result_1
    *(var_68 + 0x18) = result

return result
