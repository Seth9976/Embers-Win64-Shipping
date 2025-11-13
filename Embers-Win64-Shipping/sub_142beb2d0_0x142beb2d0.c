// 函数: sub_142beb2d0
// 地址: 0x142beb2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t rdi = arg1[6]
int32_t i_3 = 0
int64_t var_a0 = rdi
int32_t result_1 = 0
int64_t* rbx = nullptr
int32_t* var_90 = nullptr
int32_t r13 = 0
int32_t** _Base = nullptr
void var_78
int32_t result = sub_142b96aa0(arg1, &data_1436986e8, &var_78)
result_1 = result
int32_t var_74
int32_t var_70
uint16_t i_5

if (result == 0)
    if (var_74 == 0x774f4646 || var_74 == 0x74746366 || var_70 != arg1[1].d || i_5 == 0)
        result = 8
    else
        uint64_t i_6 = zx.q(i_5)
        int32_t var_68
        int32_t var_60
        
        if (((zx.q((i_6 * 5).d) << 2) + 0x2c).d u>= var_70 || (i_6.d << 4) + 0xc u>= var_68
                || (var_68.b & 3) != 0)
            result = 8
        else
            int32_t var_5c
            int32_t var_58
            int32_t var_54
            int32_t var_50
            
            if (var_60 == 0)
                if (var_5c == 0 && var_58 == 0 && (var_54 != 0 || var_50 == 0))
                    goto label_142beb3d5
                
                result = 8
            else if ((var_5c == 0 || var_58 != 0) && (var_54 != 0 || var_50 == 0))
            label_142beb3d5:
                uint8_t* rsi_1 = sub_142b99860(rdi, (i_6.d << 4) + 0xc, &result_1)
                int64_t r12_2
                
                if (result_1 != 0)
                    r12_2 = rdi
                else
                    int64_t* rax_8 = sub_142b99860(rdi, 0x48, &result_1)
                    rbx = rax_8
                    
                    if (result_1 != 0)
                        r12_2 = rdi
                    else
                        uint32_t i_4 = zx.d(i_5)
                        int32_t r8_3 = 0
                        uint32_t i = i_4
                        
                        if (i_4 != 0)
                            do
                                r8_3 += 1
                                i u>>= 1
                            while (i != 0)
                        
                        *rsi_1 = (var_74 u>> 0x18).b
                        rsi_1[1] = (var_74 u>> 0x10).b
                        rsi_1[2] = (var_74 u>> 8).b
                        rsi_1[3] = var_74.b
                        rsi_1[4] = (i_5 u>> 8).b
                        rsi_1[5] = i_5.b
                        int32_t rdx_3 = 1 << (r8_3 - 1).b << 4
                        int32_t r9_2 = (i_4 << 4) - rdx_3
                        rsi_1[6] = (rdx_3 u>> 8).b
                        rsi_1[7] = rdx_3.b
                        rsi_1[8] = ((r8_3 - 1) u>> 8).b
                        rsi_1[9] = (r8_3 - 1).b
                        rsi_1[0xa] = (r9_2 u>> 8).b
                        rsi_1[0xb] = r9_2.b
                        var_90 = sub_142b99a90(rdi, 0x18, 0, zx.d(i_5), 0, &result_1)
                        
                        if (result_1 != 0)
                            r12_2 = rdi
                        else
                            _Base = sub_142b99a90(rdi, 8, 0, zx.d(i_5), 0, &result_1)
                            
                            if (result_1 != 0)
                                r12_2 = rdi
                            else
                                int32_t result_2 = sub_142b96500(arg1, (zx.q(i_5) * 5).d << 2)
                                result_1 = result_2
                                
                                if (result_2 != 0)
                                    r12_2 = rdi
                                else
                                    int32_t i_1 = 0
                                    
                                    if (0 u< i_5)
                                        int32_t** _Base_1 = _Base
                                        int32_t* rbx_1 = var_90
                                        
                                        do
                                            *rbx_1 = sub_142b96720(arg1)
                                            rbx_1[1] = sub_142b96720(arg1)
                                            rbx_1[2] = sub_142b96720(arg1)
                                            rbx_1[3] = sub_142b96720(arg1)
                                            rbx_1[4] = sub_142b96720(arg1)
                                            int32_t rax_31 = *rbx_1
                                            
                                            if (rax_31 u<= r13)
                                                sub_142b96620(arg1)
                                                goto label_142beb7bc
                                            
                                            *_Base_1 = rbx_1
                                            r13 = rax_31
                                            rbx_1 = &rbx_1[6]
                                            _Base_1 = &_Base_1[1]
                                            i_1 += 1
                                        while (i_1 s< zx.d(i_5))
                                        
                                        rdi = var_a0
                                    
                                    sub_142b96620(arg1)
                                    qsort(_Base, zx.q(i_5), 8, sub_142be7020)
                                    uint64_t i_7 = zx.q(i_5)
                                    int32_t i_2 = 0
                                    int32_t r10_3 = (i_7.d << 4) + 0xc
                                    int32_t rdx_7 = ((zx.q((i_7 * 5).d) << 2) + 0x2c).d
                                    
                                    if (i_7.d != 0)
                                        int32_t** _Base_2 = _Base
                                        
                                        do
                                            int32_t* r8_5 = *_Base_2
                                            int32_t rcx_17 = r8_5[1]
                                            
                                            if (rcx_17 != rdx_7)
                                                goto label_142beb7bc
                                            
                                            int32_t r9_5 = r8_5[2]
                                            
                                            if (r9_5 u> var_70)
                                                goto label_142beb7bc
                                            
                                            if (rcx_17 u> var_70 - r9_5)
                                                goto label_142beb7bc
                                            
                                            int32_t rcx_18 = r8_5[3]
                                            
                                            if (rcx_18 u> var_68)
                                                goto label_142beb7bc
                                            
                                            if (r10_3 u> var_68 - rcx_18)
                                                goto label_142beb7bc
                                            
                                            if (r9_5 u> rcx_18)
                                                goto label_142beb7bc
                                            
                                            r8_5[5] = r10_3
                                            i_7 = zx.q(i_5)
                                            rdx_7 += (r9_5 + 3) & 0xfffffffc
                                            i_2 += 1
                                            _Base_2 = &_Base_2[1]
                                            r10_3 += (rcx_18 + 3) & 0xfffffffc
                                        while (i_2 s< i_7.d)
                                    
                                    if (var_60 == 0)
                                        goto label_142beb66c
                                    
                                    if (var_60 != rdx_7 || var_60 + var_5c u> var_70)
                                    label_142beb7bc:
                                        result_1 = 8
                                    label_142beb7c3:
                                        r12_2 = var_a0
                                    label_142beb7c7:
                                        rbx = rax_8
                                    else
                                        rdx_7 += var_5c
                                    label_142beb66c:
                                        
                                        if (var_54 != 0)
                                            int32_t rdx_9 = (rdx_7 + 3) & 0xfffffffc
                                            
                                            if (var_54 != rdx_9 || var_54 + var_50 u> var_70)
                                                goto label_142beb7bc
                                            
                                            rdx_7 = rdx_9 + var_50
                                        
                                        if (r10_3 != var_68 || rdx_7 != var_70)
                                            goto label_142beb7bc
                                        
                                        uint8_t* rax_46 = sub_142b99a90(rdi, 1, 
                                            (zx.d(i_7.w) << 4) + 0xc, var_68, rsi_1, &result_1)
                                        rsi_1 = rax_46
                                        
                                        if (result_1 != 0)
                                            goto label_142beb7c3
                                        
                                        void* rdi_1 = &rax_46[0xc]
                                        r12_2 = var_a0
                                        
                                        if (0 u< i_5)
                                            void* rbx_3 = &var_90[4]
                                            
                                            do
                                                *rdi_1 = *(rbx_3 - 0xd)
                                                rdi_1 += 0x10
                                                *(rdi_1 - 0xf) = *(rbx_3 - 0xe)
                                                *(rdi_1 - 0xe) = (*(rbx_3 - 0x10) u>> 8).b
                                                *(rdi_1 - 0xd) = *(rbx_3 - 0x10)
                                                *(rdi_1 - 0xc) = *(rbx_3 + 3)
                                                *(rdi_1 - 0xb) = *(rbx_3 + 2)
                                                *(rdi_1 - 0xa) = (*rbx_3 u>> 8).b
                                                *(rdi_1 - 9) = *rbx_3
                                                *(rdi_1 - 8) = *(rbx_3 + 7)
                                                *(rdi_1 - 7) = *(rbx_3 + 6)
                                                *(rdi_1 - 6) = (*(rbx_3 + 4) u>> 8).b
                                                *(rdi_1 - 5) = *(rbx_3 + 4)
                                                *(rdi_1 - 4) = *(rbx_3 - 1)
                                                *(rdi_1 - 3) = *(rbx_3 - 2)
                                                *(rdi_1 - 2) = (*(rbx_3 - 4) u>> 8).b
                                                *(rdi_1 - 1) = *(rbx_3 - 4)
                                                int32_t result_3 =
                                                    sub_142b97060(arg1, *(rbx_3 - 0xc), arg3)
                                                result_1 = result_3
                                                
                                                if (result_3 != 0)
                                                    goto label_142beb7c7
                                                
                                                int32_t result_4 = sub_142b96500(arg1, *(rbx_3 - 8))
                                                result_1 = result_4
                                                
                                                if (result_4 != 0)
                                                    goto label_142beb7c7
                                                
                                                uint32_t count = *(rbx_3 - 4)
                                                int32_t rcx_23 = *(rbx_3 - 8)
                                                
                                                if (rcx_23 != count)
                                                    uint8_t* var_b8_3
                                                    var_b8_3.d = rcx_23
                                                    var_a0.d = count
                                                    int32_t result_5
                                                    result_5, arg3 = sub_142bf0d50(r12_2, 
                                                        &rsi_1[zx.q(*(rbx_3 + 4))], &var_a0, 
                                                        arg1[7], var_b8_3.d)
                                                    result_1 = result_5
                                                    
                                                    if (result_5 != 0)
                                                        goto label_142beb7c7
                                                    
                                                    if (var_a0.d != *(rbx_3 - 4))
                                                        result_1 = 8
                                                        goto label_142beb7c7
                                                else
                                                    memcpy(&rsi_1[zx.q(*(rbx_3 + 4))], arg1[7], 
                                                        count)
                                                
                                                sub_142b96620(arg1)
                                                char* rax_69 = zx.q(*(rbx_3 + 4) + *(rbx_3 - 4))
                                                
                                                while ((rax_69.b & 3) != 0)
                                                    *(rax_69 + rsi_1) = 0
                                                    rax_69 = zx.q(rax_69.d + 1)
                                                
                                                i_3 += 1
                                                rbx_3 += 0x18
                                            while (i_3 s< zx.d(i_5))
                                        
                                        rbx = rax_8
                                        sub_142b96970(rbx, rsi_1, var_68)
                                        rbx[6] = arg1[6]
                                        rbx[5] = sub_142be86d0
                                        sub_142b966b0(*(arg2 + 0xa0), *(arg2 + 8) u>> 0xa & 1)
                                        *(arg2 + 8) &= 0xfffffbff
                                        *(arg2 + 0xa0) = rbx
                
                sub_142b99980(r12_2, var_90)
                sub_142b99980(r12_2, _Base)
                result = result_1
                
                if (result != 0)
                    sub_142b99980(r12_2, rsi_1)
                    sub_142b964e0(rbx)
                    sub_142b99980(r12_2, rbx)
                    result = result_1
            else
                result = 8
__security_check_cookie(rax_1 ^ &var_d8)
return result
