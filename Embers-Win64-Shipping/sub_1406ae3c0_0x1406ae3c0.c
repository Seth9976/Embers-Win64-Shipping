// 函数: sub_1406ae3c0
// 地址: 0x1406ae3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi = arg2
int32_t rcx = arg1[0x1c].d

if (rcx s> 0)
    rcx -= 1
    arg1[0x1c].d = rcx
    
    if (rcx s<= 0)
        std::_Xregex_error(error_stack)
        noreturn

uint64_t result = zx.q(*(arg1 + 0xdc))

if (result.d s> 0)
    result = zx.q(result.d - 1)
    *(arg1 + 0xdc) = result.d
    
    if (result.d s<= 0)
        std::_Xregex_error(error_complexity)
        noreturn

uint64_t r14
r14.b = 0

if (arg2 != 0)
    while (true)
        int64_t rsi_1 = sx.q(*(rdi + 8))
        void* const rdx_23
        uint8_t r8_8
        int32_t r9_9
        
        if (rsi_1.d u<= 0x15)
            switch (rsi_1)
                case 1, 8, 9, 0x11, 0x14
                    goto label_1406ae9f4
                case 2
                    r14 = zx.q(*(arg1 + 0xbc))
                    
                    if (test_bit(r14.d, 8) || *arg1 != arg1[0x13])
                        r14.b = *(*arg1 - 1) != 0xa
                    else
                        r14.b &= 1
                    
                    goto label_1406ae9f4
                case 3
                    result = *arg1
                    
                    if (result != arg1[0x14])
                        r14.b = *result != 0xa
                    else
                        r14.b = (*(arg1 + 0xbc) u>> 1).b & 1
                    
                    goto label_1406ae9f4
                case 4
                    int32_t rax = *(arg1 + 0xbc)
                    uint64_t rcx_3
                    
                    if (not(test_bit(rax, 8)))
                        rcx_3 = *arg1
                    
                    uint64_t rax_2
                    
                    if (test_bit(rax, 8) || rcx_3 != arg1[0x13])
                        char* rdx_1 = *arg1
                        
                        if (rdx_1 != arg1[0x14])
                            int32_t rdx_2
                            rdx_2.b =
                                *(zx.q(rdx_1[-1]) + 0x142d8b490) != *(zx.q(*rdx_1) + 0x142d8b490)
                            r14.b = rdx_2 == (*(rdi + 0xc) & 1)
                        else if ((rax.b & 8) != 0)
                            r14.b = 0 == (*(rdi + 0xc) & 1)
                        else
                            rax_2 = zx.q(rdx_1[-1])
                        label_1406ae4fa:
                            
                            if (*(rax_2 + 0x142d8b490) == 0)
                                r14.b = 0 == (*(rdi + 0xc) & 1)
                            else
                                r14.b = 1 == (*(rdi + 0xc) & 1)
                    else if (rcx_3 != arg1[0x14])
                        if ((rax.b & 4) == 0)
                            rax_2 = zx.q(*rcx_3)
                            goto label_1406ae4fa
                        
                        r14.b = 0 == (*(rdi + 0xc) & 1)
                    else
                        int32_t rdx
                        rdx.b = (rax.b & 0xc) == 0
                        r14.b = rdx == (*(rdi + 0xc) & 1)
                    goto label_1406ae9f4
                case 5
                    result = *arg1
                    
                    if (result == arg1[0x14])
                        r14 = 1
                        break
                    
                    char rcx_5 = *result
                    
                    if (rcx_5 == 0xa || rcx_5 == 0xd)
                        r14 = 1
                        break
                    
                    *arg1 = result + 1
                    goto label_1406ae9f4
                case 6
                    char* r8_1 = *(rdi + 0x28)
                    result = sub_140688e10(*arg1, arg1[0x14], r8_1, &r8_1[zx.q(*(rdi + 0x24))], 
                        arg1[0x1a], arg1[0x17].d)
                    
                    if (result == *arg1)
                        r14 = 1
                        break
                    
                    *arg1 = result
                    goto label_1406ae9f4
                case 7
                    char* rsi_2 = *arg1
                    
                    if (rsi_2 == arg1[0x14])
                        r14 = 1
                        break
                    
                    char i_3 = *rsi_2
                    void* rcx_2
                    
                    if ((arg1[0x17].d & 0x100) != 0)
                        char i_4
                        i_4, rcx_2 = std::ctype<char>::tolower(*(arg1[0x1a] + 8))
                        rsi_2 = *arg1
                        i_3 = i_4
                    
                    int32_t* r8_2 = *(rdi + 0x20)
                    r14 = &rsi_2[1]
                    char* rax_10
                    
                    if (r8_2 != 0)
                        rax_10, rcx_2 = sub_140689bc0(rsi_2, arg1[0x14], r8_2)
                    
                    if (r8_2 == 0 || rax_10 == rsi_2)
                        void* r9_3 = *(rdi + 0x38)
                        
                        if (r9_3 == 0)
                        label_1406ae6a7:
                            int64_t r8_3 = *(rdi + 0x28)
                            
                            if (r8_3 == 0
                                    || ((zx.q(i_3) u>> 3)[r8_3] & (1 << (zx.d(i_3) & 7).b).b) == 0)
                                rcx_2.b = 0
                            else
                                rcx_2 = 1
                        else
                            char i
                            
                            if ((arg1[0x17].d & 0x800) == 0)
                                i = i_3
                            else
                                char i_2
                                i_2, rcx_2 = sub_1406b15f0(arg1[0x1a], i_3)
                                r9_3 = *(rdi + 0x38)
                                i = i_2
                            
                            int32_t r10_1 = *(r9_3 + 4)
                            char* rdx_6 = nullptr
                            
                            if (r10_1 == 0)
                                goto label_1406ae6a7
                            
                            int64_t r9_4 = *(r9_3 + 8)
                            
                            while (rdx_6[r9_4] u> i || i u> *(zx.q((&rdx_6[1]).d) + r9_4))
                                rdx_6 = zx.q(rdx_6.d + 2)
                                
                                if (rdx_6.d u>= r10_1)
                                    goto label_1406ae6a7
                            
                            rcx_2 = 1
                    else
                        r14 = rax_10
                        rcx_2 = 1
                    
                    result.b = *(rdi + 0xc) & 1
                    
                    if (rcx_2.b == result.b)
                        r14 = 1
                        break
                    
                    *arg1 = r14
                    r14.b = 0
                label_1406ae9f9:
                    
                    if (rdi == 0)
                        break
                    
                    rdi = *(rdi + 0x10)
                    
                    if (rdi == 0)
                        break
                    
                    continue
                case 0xa, 0xb
                    uint64_t rbp_1 = *arg1
                    uint64_t var_58
                    sub_14068c240(&var_58, arg1)
                    void* var_50
                    
                    if (sub_1406ae3c0(arg1, *(rdi + 0x20)).b != rsi_1.d == 0xb)
                        *arg1 = rbp_1
                    else
                        *arg1 = var_58
                        sub_140693140(&arg1[1], &var_50)
                        r14 = 1
                    
                    void* rcx_15 = var_50
                    
                    if (rcx_15 != 0)
                        void* rax_17 = rcx_15
                        int64_t var_40
                        
                        if (((var_40 - rcx_15) & 0xfffffffffffffffc) u>= 0x1000)
                            rcx_15 = *(rcx_15 - 8)
                            
                            if (rax_17 - rcx_15 - 8 u> 0x1f)
                                _invalid_parameter_noinfo_noreturn()
                                noreturn
                        
                        j_sub_140a74f90(rcx_15)
                    
                    goto label_1406ae9f4
                case 0xc
                label_1406ae9f2:
                    rdi = nullptr
                label_1406ae9f4:
                    
                    if (r14.b != 0)
                        break
                    
                    goto label_1406ae9f9
                case 0xd
                    *(arg1[5] + zx.q(*(rdi + 0x20)) * 0x10) = *arg1
                    int64_t i_1 = arg1[4]
                    
                    while (zx.q(*(rdi + 0x20)) u< i_1)
                        i_1 -= 1
                        int32_t* rdx_16 = arg1[1] + (i_1 u>> 5 << 2)
                        *rdx_16 &= not.d(1 << ((i_1.d & 0x1f) u% 0x20))
                    
                    goto label_1406ae9f4
                case 0xe
                    void* r9_5 = *(rdi + 0x20)
                    
                    if (*(arg1 + 0xc1) != 0 || *(r9_5 + 0x20) != 0)
                        int64_t rax_24 = arg1[1]
                        int32_t r8_4 = *(r9_5 + 0x20)
                        uint64_t rcx_22 = zx.q(r8_4) u>> 5
                        *(rax_24 + (rcx_22 << 2)) |= 1 << ((r8_4 & 0x1f) u% 0x20)
                        *(arg1[5] + zx.q(*(r9_5 + 0x20)) * 0x10 + 8) = *arg1
                    
                    goto label_1406ae9f4
                case 0xf
                    uint64_t r9_6 = zx.q(*(rdi + 0x20))
                    
                    if (not(test_bit(*(arg1[1] + (zx.q(r9_6.d) u>> 5 << 2)), zx.d(r9_6.b) & 0x1f)))
                        goto label_1406ae9f4
                    
                    result = arg1[5]
                    uint64_t r9_7 = r9_6 * 2
                    uint64_t result_1 = *arg1
                    char* r8_6 = *(result + (r9_7 << 3))
                    int64_t r9_8 = *(result + (r9_7 << 3) + 8)
                    
                    if (r8_6 != r9_8)
                        result = sub_140688e10(result_1, arg1[0x14], r8_6, r9_8, arg1[0x1a], 
                            arg1[0x17].d)
                        result_1 = result
                    
                    if (r8_6 != r9_8 && result == *arg1)
                        r14 = 1
                        break
                    
                    *arg1 = result_1
                    goto label_1406ae9f4
                case 0x10
                    r14 = zx.q(r14.b)
                    
                    if (sub_1406ac7b0(arg1, rdi).b == 0)
                        r14 = 1
                    
                    goto label_1406ae9f2
                case 0x12
                    rdx_23 = rdi
                    r8_8 = (*(rdi + 0xc) u>> 1).b & 1
                    r9_9 = 0
                label_1406ae8c0:
                    r14 = zx.q(r14.b)
                    
                    if (sub_1406ad410(arg1, rdx_23, r8_8, r9_9).b == 0)
                        r14 = 1
                    
                    goto label_1406ae9f2
                case 0x13
                    rdx_23 = *(rdi + 0x20)
                    
                    if (*(rdx_23 + 0x34) != 0)
                        goto label_1406ae9f2
                    
                    r8_8 = (*(rdx_23 + 0xc) u>> 1).b & 1
                    r9_9 = *((zx.q(*(rdx_23 + 0x30)) << 4) + arg1[0x10])
                    goto label_1406ae8c0
                case 0x15
                    if (((*(arg1 + 0xbc) & 0x2020) != 0 && arg1[0x13] == *arg1)
                            || (arg1[0x1b].b != 0 && *arg1 != arg1[0x14]))
                        r14 = 1
                    else if (arg1[0x18].b == 0)
                        sub_140693000(&arg1[8], arg1)
                        arg1[0x18].b = 1
                    else
                        int32_t rdi_1 = *(arg1 + 0xc4)
                        int32_t rdx_24 = 0
                        
                        if (rdi_1 != 0)
                            int64_t rcx_35
                            int64_t r10_2
                            
                            while (true)
                                uint64_t r8_11 = zx.q(rdx_24) u>> 5
                                uint64_t r11_1 = zx.q(rdx_24)
                                int32_t r9_10 = 1 << (rdx_24.b & 0x1f)
                                
                                if ((*(arg1[9] + (r8_11 << 2)) & r9_10) != 0
                                        && (*(arg1[1] + (r8_11 << 2)) & r9_10) != 0)
                                    int64_t r9_11 = arg1[5]
                                    int64_t r8_12 = arg1[0xd]
                                    uint64_t rcx_34 = zx.q(r11_1.d) * 2
                                    r10_2 = *(r9_11 + (rcx_34 << 3))
                                    
                                    if (*(r8_12 + (rcx_34 << 3)) != r10_2)
                                        rcx_35 = *(arg1[0xd] + (rcx_34 << 3))
                                        break
                                    
                                    r10_2 = *(r9_11 + (rcx_34 << 3) + 8)
                                    
                                    if (*(r8_12 + (rcx_34 << 3) + 8) != r10_2)
                                        rcx_35 = *(arg1[0xd] + r11_1 * 0x10 + 8)
                                        break
                                
                                rdx_24 += 1
                                
                                if (rdx_24 u>= rdi_1)
                                    goto label_1406ae9f2
                            
                            int64_t rdx_25 = arg1[0x13]
                            result.b = rcx_35 - rdx_25 s< r10_2 - rdx_25
                            
                            if (result.b != 0)
                                sub_140693000(&arg1[8], arg1)
                                arg1[0x18].b = 1
                    
                    goto label_1406ae9f2
        std::_Xregex_error(error_parse)
        noreturn
    
    rcx = arg1[0x1c].d

if (rcx s> 0)
    arg1[0x1c].d = rcx + 1

result.b = r14.b == 0
return result
