// 函数: sub_1425f63c0
// 地址: 0x1425f63c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = EnterCriticalSection(&arg1[3])
int32_t r9 = arg1[2].d

if (r9 != 0)
    int32_t r10_1 = *arg2
    uint64_t rbp
    
    if (r10_1 != 1 || arg2[0xe].b == 0)
        rbp.b = 0
    else
        rbp = zx.q(r10_1.b)
    
    int64_t r11_1 = arg1[1]
    int32_t r9_1 = r9 - 1
    int64_t rdx_1 = sx.q(r9_1)
    int32_t* r8_3 = rdx_1 * 0x50 + r11_1
    int32_t r8_6
    
    if (*r8_3 == r10_1)
    label_1425f64e1:
        r8_6 = r9_1 + 1
    label_1425f64ec:
        sub_1425f5af0(&arg1[1], arg2, r8_6)
    else
        while (true)
            if (*(arg2 + 8) s>= *(r8_3 + 8))
                goto label_1425f64e1
            
            if (rdx_1 == 0)
                if (r10_1 != 1)
                    break
                
                r8_6 = 0
                goto label_1425f64ec
            
            rdx_1 -= 1
            r9_1 -= 1
            r8_3 = rdx_1 * 0x50 + r11_1
            
            if (*r8_3 == r10_1)
                goto label_1425f64e1
    result = 0
    bool z_1
    
    if (0 == arg1[8].d)
        arg1[8].d = 0
        z_1 = true
    else
        result = zx.q(arg1[8].d)
        z_1 = false
    
    if (z_1 && rbp.b != 0)
        while (true)
            if (arg1[2].d != 0)
                void* rdx_3 = arg1[1]
                int64_t rcx_8 = sx.q(arg1[2].d) * 0xa
                result =
                    *(rdx_3 + (rcx_8 << 3) - 0x40) - *(rdx_3 + 8) + *(rdx_3 + (rcx_8 << 3) - 0x48)
            else
                result = 0
            
            if (result s<= *arg1)
                break
            
            EnterCriticalSection(&arg1[3])
            int64_t rax_11 = sx.q(arg1[2].d)
            int64_t rcx_10 = 1
            int32_t r8_7 = 1
            
            if (rax_11.d != 1)
                int32_t* rax_13 = arg1[1] + 0x50
                
                while (*rax_13 != 1 || rax_13[0xe].b == 0)
                    r8_7 += 1
                    rcx_10 += 1
                    rax_13 = &rax_13[0x14]
                    
                    if (rcx_10 == rax_11)
                        break
            
            sub_1425f65f0(&arg1[1], 0, r8_7, 0)
            
            if (arg1 != -0x18)
                LeaveCriticalSection(&arg1[3])
else if (*arg2 != r9)
    int64_t rbp_1 = sx.q(arg1[2].d)
    int32_t rax = (rbp_1 + 1).d
    arg1[2].d = rax
    
    if (rax s> *(arg1 + 0x14))
        sub_1405c5060(&arg1[1])
    
    int32_t* rcx_5 = rbp_1 * 0x50 + arg1[1]
    *rcx_5 = *arg2
    *(rcx_5 + 8) = *(arg2 + 8)
    *(rcx_5 + 0x10) = *(arg2 + 0x10)
    *(rcx_5 + 0x18) = *(arg2 + 0x18)
    *(rcx_5 + 0x28) = 0
    *(rcx_5 + 0x28) = *(arg2 + 0x28)
    *(arg2 + 0x28) = 0
    rcx_5[0xc] = arg2[0xc]
    rcx_5[0xd] = arg2[0xd]
    *(arg2 + 0x30) = 0
    *(rcx_5 + 0x38) = *(arg2 + 0x38)
    result = zx.q(arg2[0x12])
    rcx_5[0x12] = result.d

if (arg1 == -0x18)
    return result

return LeaveCriticalSection(&arg1[3]) __tailcall
