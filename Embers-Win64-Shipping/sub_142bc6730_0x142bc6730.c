// 函数: sub_142bc6730
// 地址: 0x142bc6730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* i_3 = &arg2[1]
int32_t result_1 = 0
int32_t result

if (i_3 u> arg3)
labelid_2:
    result = 8
else
    char r14_1 = *arg2
    
    if (r14_1 s< 0)
    labelid_2:
        result = 8
    else
        uint32_t r11_1 = 0
        uint32_t r12_1 = 0
        uint32_t var_64_1 = 0
        void* i_4
        
        if ((r14_1 & 4) == 0)
            if ((r14_1 & 2) == 0)
                goto label_142bc67d3
            
            if (i_3 + 1 u> arg3)
            labelid_2:
                result = 8
            else
                r11_1 = zx.d(*i_3)
                i_3 += 1
                var_64_1 = r11_1
            label_142bc67d3:
                
                if ((r14_1 & 1) == 0)
                    goto label_142bc67ed
                
                i_4 = i_3 + 1
                
                if (i_4 u<= arg3)
                    r12_1 = zx.d(*i_3)
                    goto label_142bc67ea
                
            label_142bc6cc5:
                result = 8
        else
            i_4 = i_3 + 1
            
            if (i_4 u> arg3)
            label_142bc6cc5_1:
                result = 8
            else
                uint32_t r12_2 = zx.d(*i_3)
                r11_1 = r12_2 & 0xf
                var_64_1 = r11_1
                r12_1 = r12_2 u>> 4
            label_142bc67ea:
                i_3 = i_4
            label_142bc67ed:
                int32_t r8 = *(arg1 + 4)
                uint32_t rsi_1 = r12_1 + r11_1
                
                if (rsi_1 u<= r8)
                    goto label_142bc683a
                
                int32_t rbx_2 = (rsi_1 + 7) & 0xfffffff8
                *(arg1 + 8) = sub_142b99a90(**(arg1 + 0x28), 4, r8, rbx_2, *(arg1 + 8), &result_1)
                result = result_1
                
                if (result == 0)
                    r11_1 = var_64_1
                    *(arg1 + 4) = rbx_2
                label_142bc683a:
                    uint32_t r9_2 = 0
                    int32_t r8_1 = 0
                    int32_t r10_1 = 0
                    *(arg1 + 0x10) = *(arg1 + 8) + (zx.q(r11_1) << 2)
                    
                    if (rsi_1 != 0)
                        int32_t* r11_3 = nullptr
                        void* rcx_3 = i_3 + 1
                        void* rdx = i_3 + 2
                        
                        do
                            if ((r10_1.b & 7) == 0)
                                if (rcx_3 u> arg3)
                                    goto label_142bc6cc5_2
                                
                                r9_2 = zx.d(*i_3)
                                rdx += 1
                                i_3 += 1
                                rcx_3 += 1
                            
                            if ((r9_2.b & 1) == 0)
                                if (rcx_3 u> arg3)
                                    goto label_142bc6cc5_2
                                
                                rdx += 1
                                r8_1 += zx.d(*i_3)
                                i_3 += 1
                                rcx_3 += 1
                            else
                                if (rdx u> arg3)
                                    goto label_142bc6cc5_2
                                
                                uint16_t rax_7 = zx.w(*i_3)
                                i_3 += 2
                                rdx += 2
                                rcx_3 += 2
                                r8_1 = sx.d(rax_7 << 8) | zx.d(*(i_3 - 1))
                            
                            r10_1 += 1
                            r9_2 u>>= 1
                            *(r11_3 + *(arg1 + 8)) = r8_1
                            r11_3 = &r11_3[1]
                        while (r10_1 u< rsi_1)
                        
                        r11_1 = var_64_1
                    
                    if ((r14_1 & 8) == 0)
                    label_142bc6938:
                        int64_t var_60 = 0
                        void* i = i_3 + 1
                        int64_t rbx_3 = var_60
                        int64_t var_48_1 = rbx_3
                        *(arg1 + 0x30) = 0
                        
                        for (; i u<= arg3; i = i_3 + 1)
                            uint32_t rsi_2 = zx.d(*i_3)
                            i_3 = i
                            uint64_t rsi_3 = zx.q(rsi_2 u>> 4)
                            uint64_t r10_3 = zx.q(rsi_2) & 0xf
                            int32_t rbx_4
                            
                            if (rsi_3.d u> 7)
                                rbx_4 = 4
                            label_142bc6a09:
                                int64_t* r9_3 = &var_60
                                int32_t r11_4 = 0
                                void* rdx_1 = i + 1
                                void* r8_3 = i + 2
                                
                                do
                                    int32_t rax_18 = r10_3.d & 3
                                    
                                    if (rax_18 == 0)
                                        if (rdx_1 u> arg3)
                                            goto label_142bc6cc5_2
                                        
                                        uint32_t rax_23 = zx.d(*i_3)
                                        r8_3 += 1
                                        i_3 += 1
                                        rdx_1 += 1
                                        
                                        if (rax_23 u>= var_64_1)
                                            goto label_142bc6cc5_2
                                        
                                        *r9_3 = *(*(arg1 + 8) + (zx.q(rax_23) << 2))
                                    else if (rax_18 == 1)
                                        if (r8_3 u> arg3)
                                            goto label_142bc6cc5_2
                                        
                                        uint16_t rax_21 = zx.w(*i_3)
                                        i_3 += 2
                                        r8_3 += 2
                                        rdx_1 += 2
                                        *r9_3 = sx.d(rax_21 << 8) | zx.d(*(i_3 - 1))
                                    else if (rax_18 == 2)
                                        if (rdx_1 u> arg3)
                                            goto label_142bc6cc5_2
                                        
                                        int32_t rcx_8 = sx.d(*i_3)
                                        r8_3 += 1
                                        i_3 += 1
                                        rdx_1 += 1
                                        *r9_3 = rcx_8 + var_48_1.d
                                    else
                                        *r9_3 = var_48_1.d
                                    
                                    int32_t rax_27 = r10_3.d u>> 2 & 3
                                    
                                    if (rax_27 == 0)
                                        if (rdx_1 u> arg3)
                                            goto label_142bc6cc5_2
                                        
                                        uint32_t rax_32 = zx.d(*i_3)
                                        r8_3 += 1
                                        i_3 += 1
                                        rdx_1 += 1
                                        
                                        if (rax_32 u>= r12_1)
                                            goto label_142bc6cc5_2
                                        
                                        *(r9_3 + 4) = *(*(arg1 + 0x10) + (zx.q(rax_32) << 2))
                                    else if (rax_27 == 1)
                                        if (r8_3 u> arg3)
                                            goto label_142bc6cc5_2
                                        
                                        uint16_t rax_30 = zx.w(*i_3)
                                        i_3 += 2
                                        r8_3 += 2
                                        rdx_1 += 2
                                        *(r9_3 + 4) = sx.d(rax_30 << 8) | zx.d(*(i_3 - 1))
                                    else if (rax_27 == 2)
                                        if (rdx_1 u> arg3)
                                            goto label_142bc6cc5_2
                                        
                                        int32_t rcx_12 = sx.d(*i_3)
                                        r8_3 += 1
                                        i_3 += 1
                                        rdx_1 += 1
                                        *(r9_3 + 4) = rcx_12 + var_48_1:4.d
                                    else
                                        *(r9_3 + 4) = var_48_1:4.d
                                    
                                    if (r11_4 != 0 || rbx_4 != 4)
                                        r10_3 = zx.q(r10_3.d u>> 4)
                                    else
                                        if (rdx_1 u> arg3)
                                            goto label_142bc6cc5_2
                                        
                                        r10_3 = zx.q(*i_3)
                                        rbx_4 = r11_4 + 3
                                        i_3 += 1
                                        r8_3 += 1
                                        rdx_1 += 1
                                    
                                    int64_t rax_34 = *r9_3
                                    r11_4 += 1
                                    r9_3 = &r9_3[1]
                                    var_48_1 = rax_34
                                while (r11_4 u< rbx_4)
                                
                                rbx_3 = var_60
                            else
                                switch (rsi_3)
                                    case 1, 4, 5
                                        rbx_4 = 1
                                        goto label_142bc6a09
                                    case 2
                                        if (r10_3.d u>= r11_1)
                                            break
                                        
                                        var_60:4.d = var_48_1:4.d
                                        var_60.d = *(*(arg1 + 8) + (r10_3 << 2))
                                        rbx_3 = var_60
                                        var_48_1 = rbx_3
                                    case 3
                                        if (r10_3.d u>= r12_1)
                                            break
                                        
                                        var_60.d = var_48_1.d
                                        var_60:4.d = *(*(arg1 + 0x10) + (r10_3 << 2))
                                        rbx_3 = var_60
                                        var_48_1 = rbx_3
                                    case 6
                                        rbx_4 = 3
                                        r10_3 = 0xb8e
                                        goto label_142bc6a09
                                    case 7
                                        rbx_4 = 3
                                        r10_3 = 0xe2b
                                        goto label_142bc6a09
                            
                            if (rsi_3.d == 0)
                                sub_142bc6180(arg1)
                                sub_142b924a0(*(arg1 + 0x28))
                                result = result_1
                                goto label_142bc6cd1
                            
                            int32_t result_3
                            
                            if (rsi_3.d u<= 3)
                            label_142bc6bd5:
                                int64_t* rsi_5 = *(arg1 + 0x28)
                                
                                if (*(arg1 + 0x30) == 0)
                                    result_3 = 8
                                else if (sx.d(*(rsi_5 + 0x62)) + 1 + sx.d(*(rsi_5 + 0x1a))
                                        u> rsi_5[1].d)
                                    int32_t result_5 = sub_142b92690(rsi_5, 1, 0)
                                    result_3 = result_5
                                    
                                    if (result_5 == 0)
                                        goto label_142bc6c1a
                                else
                                    result_3 = 0
                                label_142bc6c1a:
                                    int64_t rcx_22 = sx.q(*(rsi_5 + 0x62))
                                    *(rsi_5[0xd] + (rcx_22 << 3)) = rbx_3
                                    *(rcx_22 + rsi_5[0xe]) = 1
                                    *(rsi_5 + 0x62) += 1
                            else
                                int64_t* rsi_4 = *(arg1 + 0x28)
                                
                                if (rsi_3.d u<= 5)
                                    sub_142bc6180(arg1)
                                    *(arg1 + 0x30) = 1
                                    
                                    if (sx.d(*(rsi_4 + 0x62)) + 1 + sx.d(*(rsi_4 + 0x1a))
                                            u<= rsi_4[1].d && sx.d(rsi_4[0xc].w) + 1 + sx.d(rsi_4[3].w)
                                            u<= *(rsi_4 + 0xc))
                                        goto label_142bc6bd5
                                    
                                    int32_t result_4 = sub_142b92690(rsi_4, 1, 1)
                                    result_3 = result_4
                                    
                                    if (result_4 == 0)
                                        goto label_142bc6bd5
                                else if (*(arg1 + 0x30) == 0)
                                    result_3 = 8
                                else if (sx.d(*(rsi_4 + 0x62)) + 3 + sx.d(*(rsi_4 + 0x1a))
                                        u> rsi_4[1].d)
                                    int32_t result_6 = sub_142b92690(rsi_4, 3, 0)
                                    result_3 = result_6
                                    
                                    if (result_6 == 0)
                                        goto label_142bc6c6d
                                else
                                    result_3 = 0
                                label_142bc6c6d:
                                    int64_t rcx_27 = sx.q(*(rsi_4 + 0x62))
                                    int64_t rax_41 = rsi_4[0xd]
                                    int16_t* r8_4 = rsi_4[0xe]
                                    *(rax_41 + (rcx_27 << 3)) = rbx_3
                                    void* rdx_8 = rax_41 + (rcx_27 << 3)
                                    int64_t var_58
                                    *(rdx_8 + 8) = var_58
                                    int64_t var_50
                                    *(rdx_8 + 0x10) = var_50
                                    *(r8_4 + rcx_27) = 0x202
                                    *(r8_4 + rcx_27 + 2) = 1
                                    *(rsi_4 + 0x62) += 3
                            
                            result_1 = result_3
                            
                            if (result_3 != 0)
                                result = result_3
                                goto label_142bc6cd1
                            
                            r11_1 = var_64_1
                        
                    label_142bc6cc5_2:
                        result = 8
                    else
                        int32_t result_2 = 0
                        
                        if (i_3 + 1 u> arg3)
                        label_142bc6921:
                            result_2 = 8
                        else
                            uint32_t i_2 = zx.d(*i_3)
                            i_3 += 1
                            
                            if (i_2 != 0)
                                uint32_t i_1
                                
                                do
                                    void* i_5 = i_3 + 2
                                    
                                    if (i_5 u> arg3)
                                        goto label_142bc6921
                                    
                                    uint64_t rax_12 = zx.q(*i_3)
                                    i_3 = i_5
                                    void* i_6 = i_5 + rax_12
                                    
                                    if (i_6 u> arg3)
                                        goto label_142bc6921
                                    
                                    i_3 = i_6
                                    i_1 = i_2
                                    i_2 -= 1
                                while (i_1 != 1)
                        
                        result_1 = result_2
                        
                        if (result_2 == 0)
                            goto label_142bc6938
                        
                        result = result_2

label_142bc6cd1:
__security_check_cookie(rax_1 ^ &var_98)
return result
