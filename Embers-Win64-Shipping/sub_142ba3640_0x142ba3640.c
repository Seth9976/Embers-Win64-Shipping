// 函数: sub_142ba3640
// 地址: 0x142ba3640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)
uint64_t rsi
rsi.b = 0
int64_t r8 = r11 * 0x898
void* r10 = arg1
char arg_18 = 0
void* rbp = *(r8 + arg1 + 0x50)
int64_t rax_1 = sx.q(*(r8 + arg1 + 0x48)) * 0x48
void* i = rax_1 + rbp
int32_t rax_2 = 0
void* r14 = nullptr
int32_t arg_20 = 0

if (r11.d == 1)
    rsi = zx.q(*((&data_1436800f0)[sx.q(*(**(arg1 + 0x1170) + 8))] + 0x18))
    arg_18 = rsi.b
    
    if (rbp u>= i)
        rax_2 = 0
    else
        char* rsi_1 = rbp + 0xc
        
        do
            char rax_6 = *rsi_1
            
            if ((rax_6 & 4) == 0)
                void* rdi_1 = *(rsi_1 + 0x14)
                
                if (*(rsi_1 + 0xc) != 0 && rdi_1 != 0 && *(rdi_1 + 0x18) != 0)
                    char rcx_1 = *(rdi_1 + 0xc)
                    
                    if ((rcx_1 & 8) != 0)
                        *(rdi_1 + 0x18) = 0
                        *(rdi_1 + 0xc) = rcx_1 & 0xf7
                    else if ((rax_6 & 8) != 0)
                        *(rsi_1 + 0xc) = 0
                        *rsi_1 = rax_6 & 0xf7
                
                void* rcx_2 = *(rsi_1 + 0xc)
                void* rax_7
                void* r12_1
                
                if (rcx_2 != 0)
                    r12_1 = &rsi_1[-0xc]
                    rax_7 = r12_1
                label_142ba3763:
                    
                    if (rax_7 != 0)
                        int32_t r13_1 = *(rcx_2 + 8)
                        *(rax_7 + 0xc) |= 4
                        char rcx_3 = *(rax_7 + 0xc)
                        *(rax_7 + 8) = r13_1
                        
                        if (rdi_1 != 0 && *(rdi_1 + 0x18) == 0)
                            int32_t rax_8 = *(rax_7 + 4)
                            char rbx_1 = *(rdi_1 + 0xc)
                            *(rdi_1 + 8) = sub_142ba3400(arg1, 1, *(rdi_1 + 4) - rax_8, 
                                r13_1 - rax_8, rcx_3, rbx_1) + r13_1
                            *(rdi_1 + 0xc) = rbx_1 | 4
                        
                        if (r14 == 0)
                            r14 = r12_1
                else if (rdi_1 != 0)
                    rcx_2 = *(rdi_1 + 0x18)
                    
                    if (rcx_2 != 0)
                        r12_1 = &rsi_1[-0xc]
                        rax_7 = rdi_1
                        rdi_1 = r12_1
                        goto label_142ba3763
            
            rsi_1 = &rsi_1[0x48]
        while (&rsi_1[-0xc] u< i)
        
        r10 = arg1
        r11 = zx.q(arg2)
        rax_2 = 0
        rsi = zx.q(arg_18)

int32_t r12_2

if (rbp u>= i)
    r12_2 = arg2
else
    char* rdi_2 = rbp + 0xc
    
    while (true)
        char r12_3 = *rdi_2
        
        if ((r12_3 & 4) != 0)
            r12_2 = arg2
        else
            void* rsi_2 = *(rdi_2 + 0x14)
            
            if (rsi_2 == 0)
                arg_20 = rax_2 + 1
                r12_2 = arg2
                rsi = zx.q(arg_18)
            else if (*(rsi_2 + 0x18) == 0)
                char rax_16 = *(rsi_2 + 0xc)
                
                if (r14 != 0)
                    int32_t rdx_11 = *(r14 + 8) - *(r14 + 4) + *(rdi_2 - 8)
                    int32_t r13_3 = *(rsi_2 + 4) - *(rdi_2 - 8)
                    void* var_60
                    var_60.d = rdx_11
                    int32_t rbx_10 = (r13_3 s>> 1) + rdx_11
                    int32_t rax_30 = sub_142ba3400(r10, r11.d, r13_3, 0, r12_3, rax_16)
                    char rax_31 = *(rsi_2 + 0xc)
                    
                    if ((rax_31 & 4) != 0)
                        r12_2 = arg2
                        *(rdi_2 - 4) = *(rsi_2 + 8) - rax_30
                    else if (rax_30 s>= 0x60)
                        r12_2 = arg2
                        int32_t rax_40 = sub_142ba3400(arg1, r12_2, r13_3, 0, r12_3, rax_31)
                        int32_t rax_41 = var_60.d
                        int32_t rdx_20 = (rax_40 s>> 1) - (r13_3 s>> 1) - rax_41
                        int32_t r10_4 = (rax_41 + 0x20) & 0xffffffc0
                        int32_t r9_12 = ((rax_41 + 0x20 + r13_3) & 0xffffffc0) - rax_40
                        int32_t r8_18 = rdx_20 + r10_4
                        int32_t rax_42 = rdx_20 + r9_12
                        int32_t rcx_24 = neg.d(rax_42)
                        
                        if (rax_42 s>= 0)
                            rcx_24 = rax_42
                        
                        int32_t rax_44 = neg.d(r8_18)
                        
                        if (r8_18 s>= 0)
                            rax_44 = r8_18
                        
                        if (rax_44 s< rcx_24)
                            r9_12 = r10_4
                        
                        *(rdi_2 - 4) = r9_12
                        *(rsi_2 + 8) = r9_12 + rax_40
                    else
                        int32_t r11_3 = (rbx_10 + 0x20) & 0xffffffc0
                        int32_t r9_8 = 0x20
                        int32_t r10_2 = 0x20
                        
                        if (rax_30 s> 0x40)
                            r9_8 = 0x26
                        
                        if (rax_30 s> 0x40)
                            r10_2 = 0x1a
                        
                        int32_t r8_16 = r9_8 - r11_3 + rbx_10
                        int32_t rbx_12 = rbx_10 - r10_2 - r11_3
                        int32_t rdx_14 = neg.d(rbx_12)
                        
                        if (rbx_12 s>= 0)
                            rdx_14 = rbx_12
                        
                        int32_t rcx_17 = neg.d(r8_16)
                        
                        if (r8_16 s>= 0)
                            rcx_17 = r8_16
                        
                        int32_t r11_4 = r11_3 + r10_2
                        
                        if (rcx_17 s< rdx_14)
                            r11_4 = r11_3 - r9_8
                        
                        r12_2 = arg2
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = sx.q(rax_30)
                        int32_t rax_37 = (temp4_1 - temp3_1) s>> 1
                        *(rdi_2 - 4) = r11_4 - rax_37
                        *(rsi_2 + 8) = rax_37 + r11_4
                    
                    *rdi_2 |= 4
                    *(rsi_2 + 0xc) |= 4
                    
                    if (&rdi_2[-0xc] u<= rbp)
                        rsi = zx.q(arg_18)
                    else
                        rsi = zx.q(arg_18)
                        int32_t rdx_21 = *(rdi_2 - 0x4c)
                        int32_t rax_47
                        
                        if (rsi.b == 0)
                            rax_47.b = *(rdi_2 - 4) s< rdx_21
                        else
                            rax_47.b = *(rdi_2 - 4) s> rdx_21
                        
                        if (rax_47 != 0)
                            void* rax_48 = *(rdi_2 + 0x14)
                            
                            if (rax_48 != 0)
                                int32_t r8_19 = *(rax_48 + 8)
                                int32_t rcx_26 = r8_19 - rdx_21
                                
                                if (r8_19 - rdx_21 s< 0)
                                    rcx_26 = rdx_21 - r8_19
                                
                                int32_t rax_49 = *(rdi_2 - 4)
                                
                                if (rcx_26 s> 0x10)
                                    rax_49 = rdx_21
                                
                                *(rdi_2 - 4) = rax_49
                else
                    int32_t r14_1 = *(rdi_2 - 8)
                    int32_t rbx_3 = *(rsi_2 + 4) - r14_1
                    int32_t rax_17 = sub_142ba3400(r10, r11.d, rbx_3, 0, r12_3, rax_16)
                    int32_t r10_1 = 0x20
                    int32_t r11_1 = 0x20
                    
                    if (rax_17 s> 0x40)
                        r10_1 = 0x1a
                    
                    if (rax_17 s> 0x40)
                        r11_1 = 0x26
                    
                    if (rax_17 s>= 0x60)
                        *(rdi_2 - 4) = (r14_1 + 0x20) & 0xffffffc0
                    else
                        int32_t rbx_5 = (rbx_3 s>> 1) + r14_1
                        int32_t r8_8 = (rbx_5 + 0x20) & 0xffffffc0
                        int32_t rbx_6 = rbx_5 - r8_8
                        int32_t rax_18 = r11_1 + rbx_6
                        int32_t rbx_7 = rbx_6 - r10_1
                        int32_t rdx_5 = neg.d(rbx_7)
                        
                        if (rbx_7 s>= 0)
                            rdx_5 = rbx_7
                        
                        int32_t rcx_10 = neg.d(rax_18)
                        
                        if (rax_18 s>= 0)
                            rcx_10 = rax_18
                        
                        int32_t r8_9 = r8_8 + r10_1
                        
                        if (rcx_10 s< rdx_5)
                            r8_9 = r8_8 - r11_1
                        
                        int32_t temp1_1
                        int32_t temp2_1
                        temp1_1:temp2_1 = sx.q(rax_17)
                        int32_t r8_10 = r8_9 - ((temp2_1 - temp1_1) s>> 1)
                        *(rdi_2 - 4) = r8_10
                        *(rsi_2 + 8) = r8_10 + rax_17
                    
                    *rdi_2 |= 4
                    r14 = &rdi_2[-0xc]
                    r12_2 = arg2
                    int32_t rax_29 = sub_142ba3400(arg1, r12_2, *(rsi_2 + 4) - *(rdi_2 - 8), 
                        *(rdi_2 - 4) - *(rdi_2 - 8), *rdi_2, *(rsi_2 + 0xc)) + *(rdi_2 - 4)
                    *(rsi_2 + 8) = rax_29
                    rsi = zx.q(arg_18)
            else
                int32_t rax_15 = sub_142ba3400(r10, r11.d, *(rdi_2 - 8) - *(rsi_2 + 4), 
                    *(rsi_2 + 8) - *(rsi_2 + 4), *(rsi_2 + 0xc), r12_3) + *(rsi_2 + 8)
                *(rdi_2 - 4) = rax_15
                *rdi_2 = r12_3 | 4
                r12_2 = arg2
                rsi = zx.q(arg_18)
        
        r10 = arg1
        rdi_2 = &rdi_2[0x48]
        rax_2 = arg_20
        
        if (&rdi_2[-0xc] u>= i)
            break
        
        r11 = zx.q(arg2)

int64_t rax_50
int64_t rdx_22
rdx_22:rax_50 = muls.dp.q(0xe38e38e38e38e39, rax_1)
void* result = rdx_22 s>> 2 u>> 0x3f
void* rdx_24 = rax_1 s/ 0x48

if (r12_2 == 0)
    void* const rax_52
    void* r8_20
    int64_t r9_13
    
    if (rdx_24 == 6)
        r8_20 = rbp
        rax_52 = 0x90
        r9_13 = 0x120
    label_142ba3bf5:
        int32_t result_1 = *(rax_52 + rbp + 4) * 2 - *(r9_13 + rbp + 4) - *(r8_20 + 4)
        result = zx.q(neg.d(result_1))
        
        if (result_1 s>= 0)
            result = zx.q(result_1)
        
        if (result.d s< 8)
            int32_t rcx_31 = *(r9_13 + rbp + 8)
            void* rax_56 = *(r9_13 + rbp + 0x20)
            int32_t r8_23 = *(r8_20 + 8) - *(rax_52 + rbp + 8) * 2 + rcx_31
            *(r9_13 + rbp + 8) = rcx_31 - r8_23
            
            if (rax_56 != 0)
                *(rax_56 + 8) -= r8_23
            
            if (rdx_24 == 0xc)
                *(rbp + 0x248) -= r8_23
                *(rbp + 0x320) -= r8_23
            
            *(r9_13 + rbp + 0xc) |= 4
            result = *(r9_13 + rbp + 0x20)
            
            if (result != 0)
                *(result + 0xc) |= 4
    else if (rdx_24 == 0xc)
        r8_20 = rbp + 0x48
        rax_52 = 0x168
        r9_13 = 0x288
        goto label_142ba3bf5

if ((arg_20 != 0 || r14 == 0) && rbp u< i)
    void* rbx_13 = rbp + 4
    
    do
        if ((*(rbx_13 + 8) & 4) == 0)
            void* rcx_33 = *(rbx_13 + 0x24)
            int32_t rax_58
            int32_t rdx_25
            
            if (rcx_33 != 0)
                int32_t rax_57 = *(rcx_33 + 4)
                rdx_25 = *rbx_13
                rax_58 = rax_57 - rdx_25
                
                if (rax_57 - rdx_25 s< 0)
                    rax_58 = neg.d(rax_58)
            
            int32_t rax_61
            
            if (rcx_33 != 0 && rax_58 s< 0x50)
                rax_61 = *(rcx_33 + 8) - *(rcx_33 + 4) + rdx_25
            else if (r14 != 0)
                void* rdi_3 = rbx_13 - 0x4c
                
                if (rdi_3 u>= rbp)
                    while ((*(rdi_3 + 0xc) & 4) == 0)
                        rdi_3 -= 0x48
                        
                        if (rdi_3 u< rbp)
                            break
                
                void* rax_64 = rbx_13 + 0x44
                
                if (rax_64 u< i)
                    while ((*(rax_64 + 0xc) & 4) == 0)
                        rax_64 += 0x48
                        
                        if (rax_64 u>= i)
                            break
                
                if (rdi_3 u< rbp || rdi_3 u>= rbx_13 - 4 || rax_64 u>= i || rax_64 u<= rbx_13 - 4)
                    rax_61 = ((*rbx_13 - *(r14 + 4) + 0x10) & 0xffffffe0) + *(r14 + 8)
                else
                    int32_t r8_24 = *(rax_64 + 4)
                    int32_t r9_14 = *(rdi_3 + 4)
                    
                    if (r8_24 != r9_14)
                        rax_61 = sub_142b93dd0(*rbx_13 - r9_14, *(rax_64 + 8) - *(rdi_3 + 8), 
                            r8_24 - r9_14) + *(rdi_3 + 8)
                    else
                        rax_61 = *(rdi_3 + 8)
            else
                r14 = rbx_13 - 4
                rax_61 = (*rbx_13 + 0x20) & 0xffffffc0
            
            *(rbx_13 + 8) |= 4
            *(rbx_13 + 4) = rax_61
            
            if (rbx_13 - 4 u> rbp)
                int32_t rcx_37 = *(rbx_13 - 0x44)
                int32_t rax_71
                
                if (rsi.b == 0)
                    rax_71.b = *(rbx_13 + 4) s< rcx_37
                else
                    rax_71.b = *(rbx_13 + 4) s> rcx_37
                
                if (rax_71 != 0)
                    void* rax_72 = *(rbx_13 + 0x1c)
                    
                    if (rax_72 != 0)
                        int32_t r8_26 = *(rax_72 + 8)
                        int32_t rdx_29 = r8_26 - rcx_37
                        
                        if (r8_26 - rcx_37 s< 0)
                            rdx_29 = rcx_37 - r8_26
                        
                        int32_t rax_73 = *(rbx_13 + 4)
                        
                        if (rdx_29 s> 0x10)
                            rax_73 = rcx_37
                        
                        *(rbx_13 + 4) = rax_73
            
            if (rbx_13 + 0x44 u< i && (*(rbx_13 + 0x50) & 4) != 0)
                int32_t rdx_31 = *(rbx_13 + 0x4c)
                int32_t rax_75
                
                if (rsi.b == 0)
                    rax_75.b = *(rbx_13 + 4) s> rdx_31
                else
                    rax_75.b = *(rbx_13 + 4) s< rdx_31
                
                if (rax_75 != 0)
                    void* rax_76 = *(rbx_13 + 0x1c)
                    
                    if (rax_76 != 0)
                        int32_t r8_27 = *(rax_76 + 8)
                        int32_t rcx_38 = *(rbx_13 - 0x44)
                        int32_t rcx_39
                        
                        if (r8_27 - rcx_38 s>= 0)
                            rcx_39 = r8_27 - rcx_38
                        else
                            rcx_39 = rcx_38 - r8_27
                        
                        int32_t rax_79 = *(rbx_13 + 4)
                        
                        if (rcx_39 s> 0x10)
                            rax_79 = rdx_31
                        
                        *(rbx_13 + 4) = rax_79
        
        rbx_13 += 0x48
        result = rbx_13 - 4
    while (result u< i)

return result
