// 函数: sub_1427c6580
// 地址: 0x1427c6580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t count = 0
int64_t r12 = arg4
int32_t rax_4 = arg3 & 0xf
uint64_t count_1 = 0
int32_t result
int32_t rax_8

if (rax_4 == 1)
    rax_8 = 0x8dbb
label_1427c662b:
    *arg9 = rax_8
    
    if (rax_8 != 0)
        goto label_1427c6635
    
    result = 3
else
    if (rax_4 != 0xb)
        if (rax_4 == 0xe)
            *arg9 = 0x83f3
            goto label_1427c6635
        
        if (rax_4 == 0xf)
            *arg9 = 1
            goto label_1427c6635
        
        rax_8 = 0
        goto label_1427c662b
    
    *arg9 = 0x83f0
label_1427c6635:
    int32_t r8 = arg3 & 0xf0
    
    if (r8 == 0xc0)
        int32_t var_98 = 0
        int64_t var_78
        int64_t* var_a8_1 = &var_78
        int64_t var_90
        __builtin_memset(&var_90, 0, 0x20)
        int64_t var_88
        int64_t var_80
        result = sub_1427c63c0(arg1, arg2, &var_98, &var_90, &var_88, &var_80, var_a8_1)
        int32_t result_1 = result
        
        if (result == 0)
            int64_t rbp_1 = sx.q(var_98)
            
            if (rbp_1.d s<= 0)
                goto label_1427c6918
            
            uint64_t _Size = 0x28 * rbp_1
            
            if (mulu.dp.q(0x28, rbp_1) u>> 0x40 != zx.o(0))
                _Size = -1
            
            void* rax_9 = malloc(_Size)
            int64_t r8_2 = 0
            uint64_t count_2 = 0
            
            if (rax_9 == 0)
                result = 4
            else
                int32_t r14_1 = 0
                
                if (rbp_1.d s<= 0)
                label_1427c681e:
                    
                    if (count_2 u<= zx.q(arg7))
                        count_1 = count_2
                        
                        if (rbp_1.d != 1)
                            r12(sub_1427c6330, rax_9, zx.q(rbp_1.d), arg5)
                            
                            if (rbp_1.d s> 0)
                                goto label_1427c685c
                        else
                            sub_1427c6330(rax_9, 0)
                        label_1427c685c:
                            void* rax_25 = rax_9
                            
                            do
                                int32_t result_2 = *rax_25
                                
                                if (result_2 != 0)
                                    result_1 = result_2
                                    break
                                
                                count += 1
                                rax_25 += 0x28
                            while (count s< rbp_1.d)
                    else
                        result_1 = 2
                else
                    int64_t rdx = var_80
                    uint32_t* rdi_1 = rax_9 + 4
                    int64_t rax_10 = var_90
                    void* r12_1 = nullptr
                    int64_t r10_1 = var_88
                    int64_t r9_1 = var_78
                    var_98.q = rax_10
                    var_88 = r10_1
                    var_90 = rdx
                    var_80 = r9_1
                    
                    while (true)
                        *rdi_1 = zx.d(*(r12_1 + rax_10))
                        uint64_t rcx_7 = (((zx.q(*(r10_1 + (r12_1 << 2) + 3)) << 8)
                            + zx.q(*(r10_1 + (r12_1 << 2) + 2))) << 8)
                            + zx.q(*(r10_1 + (r12_1 << 2) + 1))
                        *(rdi_1 + 0xc) = (rcx_7 << 8) + zx.q(*(r10_1 + (r12_1 << 2)))
                        int64_t rdx_2
                        
                        if (rdx == 0)
                            rdx_2 = r8_2 + r9_1
                        else
                            uint64_t rax_17 = zx.q(*(rdx + (r12_1 << 2) + 1)) + (((
                                zx.q(*(rdx + (r12_1 << 2) + 3)) << 8) + zx.q(*(rdx + (r12_1 << 2) + 2)))
                                << 8)
                            rdx_2 = zx.q(*(rdx + (r12_1 << 2))) + (rax_17 << 8) + r9_1
                        
                        *(rdi_1 + 4) = rdx_2
                        int64_t rdx_3 = *(rdi_1 + 0xc)
                        r8_2 += rdx_3
                        bool cond:0_1 = *rdi_1 != 0xb
                        var_78 = r8_2
                        
                        if (cond:0_1)
                            *(rdi_1 + 0x1c) = rdx_3
                        else
                            int64_t rax_20 = sx.q(r14_1)
                            int32_t rax_21 = initialize_multibyte(*(rdi_1 + 4), rdx_3, 
                                ((rax_20 + ((rax_20 + 1) << 2)) << 3) + rax_9)
                            
                            if (rax_21 != 0)
                                result_1 = rax_21 == 1 ? 3 : 4
                                
                                break
                            
                            rdx_3 = *(rdi_1 + 0x1c)
                            r8_2 = var_78
                            r9_1 = var_80
                            r10_1 = var_88
                        
                        r14_1 += 1
                        r12_1 += 1
                        *(rdi_1 + 0x14) = arg6 + count_2
                        count_2 += rdx_3
                        rdi_1 = &rdi_1[0xa]
                        
                        if (r14_1 s>= rbp_1.d)
                            r12 = arg4
                            goto label_1427c681e
                        
                        rdx = var_90
                        rax_10 = var_98.q
                
                free(rax_9)
                
                if (result_1 == 0)
                    goto label_1427c68e2
                
                result = result_1
    else if (r8 == 0xb0)
        if (initialize_multibyte(arg1, zx.q(arg2), &count_1) != 0)
            result = 4
        else if (count_1 u> zx.q(arg7))
            result = 2
        else
            if (sub_1427c6b10(arg1, zx.q(arg2), arg6, &count_1) == 0)
            label_1427c68e2:
                count = count_1.d
                goto label_1427c6918
            
            result = 4
    else if (r8 != 0xa0)
        result = 3
    else
        count = arg2
        
        if (arg2 u<= arg7)
            memcpy(arg6, arg1, count)
        label_1427c6918:
            
            if (arg8 != 0)
                *arg8 = count
            
            result = 0
        else
            result = 2
__security_check_cookie(rax_1 ^ &var_d8)
return result
