// 函数: sub_142b656c0
// 地址: 0x142b656c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
char* r14 = arg3
uint64_t result

if ((arg2 & 0xfffffffd) == 0)
    uint32_t rcx = zx.d(arg1[2].b)
    
    if (rcx == 0)
        char rcx_6 = arg1[3].b
        
        if (rcx_6 == 0)
        label_142b65a74:
            uint16_t r8_7 = zx.w(*(arg1 + 9))
            int32_t result_2 = 0
            int16_t rdx_9 = 0
            
            if (0 u< r8_7)
                do
                    char rcx_7 = *r14
                    r14 = &r14[1]
                    int32_t rcx_9
                    
                    if (rcx_7 - 0x30 u> 9)
                        if (rcx_7 - 0x41 u> 5)
                            goto label_142b65ad8_2
                        
                        rcx_9 = sx.d(rcx_7) - 0x37
                    else
                        rcx_9 = sx.d(rcx_7) - 0x30
                    
                    rdx_9 += 1
                    result_2 = rcx_9 | result_2 << 4
                while (rdx_9 u< r8_7)
            
            if (*r14 != 0 || *arg1 u> result_2)
            labelid_e:
                result = 0xffff
            else
                result = zx.q(result_2)
                
                if (result_2 u> arg1[1])
                labelid_e:
                    result = 0xffff
        else
            while (true)
                char rax_16 = *r14
                r14 = &r14[1]
                
                if (rcx_6 != rax_16)
                    break
                
                rcx_6 = *(&arg1[3] - arg3 + r14)
                
                if (rcx_6 == 0)
                    goto label_142b65a74
            
        label_142b65ad8:
            result = 0xffff
    else if (rcx != 1)
    label_142b65ad8_1:
        result = 0xffff
    else
        uint64_t r10_1 = zx.q(*(arg1 + 9))
        char i = *(&arg1[3] + (r10_1 << 1))
        void* rcx_1 = &arg1[3] + (r10_1 << 1)
        int16_t var_126_1 = r10_1.w
        
        for (; i != 0; i = *rcx_1)
            char rax_2 = *r14
            rcx_1 += 1
            r14 = &r14[1]
            
            if (i != rax_2)
                goto label_142b65ad8_2
        
        int32_t result_1 = *arg1
        void var_78
        void* rdi_1 = &var_78
        int32_t rdx_1 = arg1[1] + 1
        int64_t var_c8[0x8]
        int64_t (* r12_1)[0x8] = &var_c8
        void* rcx_2 = rcx_1 + 1
        int16_t rax_3 = r10_1.w
        int64_t var_108[0x8]
        int64_t (* r13_1)[0x8] = &var_108
        int16_t i_7 = rax_3 - 1
        int16_t rbx_1 = 0x40
        uint32_t r11_1 = 0
        int16_t var_88[0x8]
        
        if (rax_3 != 1)
            void* r9_1 = &var_88[zx.q(rax_3 - 1)]
            int16_t i_1
            
            do
                uint32_t r8_1 = zx.d(*(&arg1[3] - &var_88 + r9_1))
                *r9_1 = (modu.dp.d(0:r11_1, r8_1)).w
                r11_1 = divu.dp.d(0:r11_1, r8_1)
                r9_1 -= 2
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
            r10_1 = zx.q(var_126_1)
        
        var_88[0] = r11_1.w
        int16_t rax_10
        
        while (true)
            if (r12_1 != 0)
                *r12_1 = rcx_2
                r12_1 = &(*r12_1)[1]
            
            int16_t* r8_2 = zx.q(i_7) * 2
            int16_t r9_2 = *(&var_88 + r8_2)
            int16_t rdx_3 = r9_2
            
            if (r9_2 != 0)
                while (true)
                    char rax_8 = *rcx_2
                    rcx_2 += 1
                    
                    if (rax_8 == 0)
                        int16_t temp9_1 = rdx_3
                        rdx_3 -= 1
                        
                        if (temp9_1 == 1)
                            break
            
            if (r13_1 != 0)
                *r13_1 = rcx_2
                r13_1 = &(*r13_1)[1]
            
            for (char i_2 = *rcx_2; i_2 != 0; i_2 = *rcx_2)
                rcx_2 += 1
                
                if (rbx_1 != 0)
                    *rdi_1 = i_2
                    rdi_1 += 1
                    rbx_1 -= 1
            
            rax_10 = rax_3 - 1
            rcx_2 += 1
            
            if (i_7 u>= rax_10)
                break
            
            int16_t rdx_4 = *(r8_2 + &arg1[3]) - r9_2
            int16_t temp10_1 = rdx_4
            rdx_4 -= 1
            
            if (temp10_1 != 1)
                while (true)
                    char rax_9 = *rcx_2
                    rcx_2 += 1
                    
                    if (rax_9 == 0)
                        int16_t temp12_1 = rdx_4
                        rdx_4 -= 1
                        
                        if (temp12_1 == 1)
                            break
            
            i_7 += 1
        
        if (rbx_1 != 0)
            *rdi_1 = 0
        
        char* rcx_3 = r14
        uint32_t i_3
        uint32_t r8_3
        
        do
            r8_3 = zx.d(*rcx_3)
            i_3 = zx.d(rcx_3[&var_78 - r14])
            
            if (r8_3 != i_3)
                break
            
            rcx_3 = &rcx_3[1]
        while (i_3 != 0)
        
        if (r8_3 - i_3 != 0)
            int32_t result_3 = result_1 + 1
            
            if (result_3 s>= rdx_1)
            label_142b65ad8_2:
                result = 0xffff
            else
                while (true)
                    uint64_t rdx_5 = zx.q(rax_10)
                    uint64_t r8_5 = zx.q(rdx_5.d)
                    int16_t* rax_11 = rdx_5 * 2
                    int16_t* r9_4 = &var_88 + rax_11
                    int16_t i_4
                    
                    for (i_4 = *r9_4 + 1; i_4 u>= *(rax_11 + &arg1[3]); i_4 = *r9_4 + 1)
                        if (rax_11 u>= 0x10)
                            __report_rangecheckfailure()
                            noreturn
                        
                        int64_t rax_12 = var_c8[r8_5]
                        rdx_5.w -= 1
                        *r9_4 = 0
                        var_108[r8_5] = rax_12
                        r8_5 = zx.q(rdx_5.w)
                        rax_11 = r8_5 * 2
                        r9_4 = &var_88 + rax_11
                    
                    uint64_t rax_13 = zx.q(rdx_5.w)
                    void* rdx_6 = &var_108[rax_13]
                    var_88[rax_13] = i_4
                    char* rcx_4 = *rdx_6
                    char i_5
                    
                    do
                        i_5 = *rcx_4
                        rcx_4 = &rcx_4[1]
                    while (i_5 != 0)
                    *rdx_6 = rcx_4
                    char* r8_6 = r14
                    int16_t i_6 = 0
                    
                    if (0 u< r10_1.w)
                        do
                            char* rcx_5 = var_108[zx.q(i_6)]
                            
                            for (char j = *rcx_5; j != 0; j = *rcx_5)
                                char rax_15 = *r8_6
                                rcx_5 = &rcx_5[1]
                                r8_6 = &r8_6[1]
                                
                                if (j != rax_15)
                                    rcx_5 = &data_1434cce10
                                    i_6 = 0x63
                            
                            i_6 += 1
                        while (i_6 u< r10_1.w)
                    
                    if ((0 u>= r10_1.w || i_6 u< 0x63) && *r8_6 == 0)
                        result = zx.q(result_3)
                        break
                    
                    result_3 += 1
                    
                    if (result_3 s>= rdx_1)
                        goto label_142b65ad8_2
                    
                    rax_10 = rax_3 - 1
        else
            result = zx.q(result_1)
else
    result = 0xffff

__security_check_cookie(rax_1 ^ &var_148)
return result
