// 函数: sub_1428e5bc0
// 地址: 0x1428e5bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x80)
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t r14 = 0
int64_t rax_2 = 6
int32_t* r8 = arg2
int32_t var_88 = 0
int32_t rdx = arg2[1]
int32_t r15 = 0
int64_t var_80 = 6
int32_t var_8c = 6
int32_t rcx

if (rdx == 0x17)
    int32_t rax_4 = r8[4] & 0x100
    rcx = 0xd
    
    if (rax_4 == 0)
        rcx = 0xb
    
    rax_2 = 5
    r15.b = rax_4 != 0
    var_88 = r15
    goto label_1428e5c6a

int64_t result

if (rdx == 0x18)
    var_8c = 7
    
    if ((r8[4] & 0x100) == 0)
        rcx = 0xd
    label_1428e5c6a:
        var_80 = rax_2
    else
        r15 = 1
        rcx = rdx - 9
        var_88 = 1
    
    int64_t rdx_1 = sx.q(*r8)
    int64_t r12_1 = *(r8 + 8)
    int32_t rbx_1 = 0
    int32_t var_94_1 = rdx_1.d
    int64_t var_68
    __builtin_memset(&var_68, 0, 0x24)
    
    if (rdx_1.d s>= rcx)
        int32_t var_90_1 = 0
        char* rdi_1 = nullptr
        int64_t rsi_1 = 0
        
        while (true)
            char rax_5
            
            if (r15 == 0 && rsi_1 == rax_2)
                rax_5 = rdi_1[r12_1] - 0x2b
            
            int64_t var_58_1
            
            if (r15 != 0 || rsi_1 != rax_2 || rax_5 u> 0x2f
                    || not(test_bit(0x800000000005, sx.q(rax_5))))
                if (sub_1428e4710(sx.d(rdi_1[r12_1]), 4) == 0)
                    goto label_1428e5f78
                
                int32_t r15_1 = sx.d(rdi_1[r12_1])
                
                if (&rdi_1[1] == rdx_1)
                    goto label_1428e5f78
                
                if (sub_1428e4710(sx.d(rdi_1[1 + r12_1]), 4) == 0)
                    goto label_1428e5f78
                
                int32_t rax_9 = sx.d(rdi_1[1 + r12_1])
                rbx_1 += 2
                rdi_1 = &rdi_1[2]
                int32_t r10_3 = rax_9 + ((r15_1 + ((r15_1 - 0x42) << 2)) << 1)
                
                if (rdi_1 == rdx_1)
                    goto label_1428e5f78
                
                r8 = arg2
                int64_t r15_2 = rsi_1 + 1
                int64_t rax_10 = r15_2
                int32_t rdx_2 = r8[1]
                
                if (rdx_2 != 0x17)
                    rax_10 = rsi_1
                
                if (r10_3 s< *((rax_10 << 2) + 0x1435141a0))
                    goto label_1428e5f78
                
                if (r10_3 s> *((rax_10 << 2) + 0x1435141c8))
                    goto label_1428e5f78
                
                int32_t rax_11 = var_90_1 + 1
                
                if (rdx_2 != 0x17)
                    rax_11 = var_90_1
                
                int64_t var_60_1
                
                switch (rax_11)
                    case 0
                        var_58_1:4.d = (r10_3 - 0x13) * 0x64
                    case 1
                        if (rdx_2 != 0x17)
                            var_58_1:4.d += r10_3
                        else if (r10_3 s>= 0x32)
                            var_58_1:4.d = r10_3
                        else
                            var_58_1:4.d = r10_3 + 0x64
                    case 2
                        var_58_1.d = r10_3 - 1
                    case 3
                        int64_t rsi_2 = sx.q(var_58_1.d)
                        int32_t rax_17
                        
                        if (rsi_2.d != 1)
                            rax_17 = *((rsi_2 << 2) + 0x1435141f0)
                        else
                            rax_17 = sub_1428e6120(var_58_1:4.d + 0x76c) + 0x1c
                        
                        if (r10_3 s> rax_17)
                            goto label_1428e5f78
                        
                        int32_t rax_19 = *((rsi_2 << 2) + 0x143514170) + r10_3
                        var_60_1:4.d = r10_3
                        int64_t var_50_1
                        var_50_1:4.d = rax_19 - 1
                        int32_t rcx_14
                        int32_t r8_1
                        
                        if (rsi_2.d s< 2)
                            rcx_14 = var_58_1:4.d + 0x76b
                            r8_1 = 0xe
                        else
                            r8_1 = 2
                            var_50_1:4.d = rax_19 - 1 + sub_1428e6120(var_58_1:4.d + 0x76c)
                            rcx_14 = var_58_1:4.d + 0x76c
                        
                        uint64_t r9_3 = zx.q(rcx_14 s/ 0x64)
                        int32_t rcx_15 = rcx_14 + r9_3.d * 0xffffff9c
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(r9_3.d)
                        int32_t temp6_1
                        int32_t temp7_1
                        temp6_1:temp7_1 = sx.q(rcx_15)
                        r8 = arg2
                        int32_t rcx_23 = (((temp6_1 & 3) + temp7_1) s>> 2) + 6 + r9_3.d + rcx_15
                            + (r9_3 << 2).d + (r8_1 + rsi_2.d) * 0xd s/ 5
                            + ((temp5_1 + (temp4_1 & 3)) s>> 2)
                        var_50_1.d = (rcx_23 + r10_3) s% 7
                    case 4
                        var_60_1.d = r10_3
                    case 5
                        var_68:4.d = r10_3
                    case 6
                        var_68.d = r10_3
                
                rsi_1 = r15_2
                rax_2 = var_80
                r15 = var_88
                var_90_1 += 1
                
                if (r15_2 s< zx.q(var_8c))
                    continue
            
            int32_t rdx_13
            
            if (r8[1] != 0x18 || *(sx.q(rbx_1) + r12_1) != 0x2e)
                rdx_13 = rdx_1.d
            else
                if (r15 != 0)
                    break
                
                rbx_1 += 1
                
                if (rbx_1 == rdx_1.d)
                    break
                
                int64_t rdi_3 = sx.q(rbx_1)
                int32_t rsi_3 = rbx_1
                
                if (rdi_3 s>= rdx_1)
                    break
                
                do
                    if (sub_1428e4710(sx.d(*(rdi_3 + r12_1)), 4) == 0)
                        break
                    
                    rbx_1 += 1
                    rdi_3 += 1
                while (rdi_3 s< rdx_1)
                
                if (rsi_3 == rbx_1)
                    break
                
                rdx_13 = rdx_1.d
                
                if (rbx_1 == rdx_13)
                    break
            
            char rax_38 = *(sx.q(rbx_1) + r12_1)
            int32_t rbx_2
            int128_t* r8_6
            
            if (rax_38 != 0x5a)
                if (r15 != 0)
                    break
                
                if (((rax_38 - 0x2b) & 0xfd) != 0)
                    break
                
                rbx_2 = rbx_1 + 1
                
                if (rbx_2 + 4 != rdx_13)
                    break
                
                int32_t rsi_4 = var_8c
                uint64_t r15_3 = zx.q(var_8c)
                char* rdi_5 = sx.q(rbx_2) + r12_1
                
                while (true)
                    if (sub_1428e4710(sx.d(*rdi_5), 4) == 0)
                        goto label_1428e5f78
                    
                    int32_t r12_2 = sx.d(*rdi_5)
                    
                    if (sub_1428e4710(sx.d(rdi_5[1]), 4) == 0)
                        goto label_1428e5f78
                    
                    int32_t rdx_16 = sx.d(rdi_5[1]) + ((r12_2 + ((r12_2 - 0x42) << 2)) << 1)
                    uint64_t rax_43 = r15_3 + 1
                    
                    if (arg2[1] != 0x17)
                        rax_43 = r15_3
                    
                    if (rdx_16 s< *((rax_43 << 2) + 0x1435141a0))
                        goto label_1428e5f78
                    
                    if (rdx_16 s> *((rax_43 << 2) + 0x1435141c8))
                        goto label_1428e5f78
                    
                    r8_6 = arg1
                    uint64_t r9_7
                    
                    if (r8_6 == 0)
                        r9_7 = zx.q(var_8c)
                    else
                        r9_7 = zx.q(var_8c)
                        
                        if (r15_3 == r9_7)
                            r14 = rdx_16 * 0xe10
                        else if (rsi_4 == (r9_7 + 1).d)
                            r14 += rdx_16 * 0x3c
                    
                    rbx_2 += 2
                    rdi_5 = &rdi_5[2]
                    rsi_4 += 1
                    r15_3 += 1
                    
                    if (rsi_4 s>= (r9_7 + 2).d)
                        if (r14 != 0)
                            int32_t r8_8 = neg.d(r14)
                            
                            if (rax_38 == 0x2d)
                                r8_8 = r14
                            
                            if (sub_14292b100(&var_68, 0, r8_8) == 0)
                                goto label_1428e5f78
                            
                            r8_6 = arg1
                        
                        rdx_13 = var_94_1
                        break
            else
                r8_6 = arg1
                rbx_2 = rbx_1 + 1
            
            if (rbx_2 != rdx_13)
                break
            
            if (r8_6 != 0)
                *r8_6 = var_68.o
                r8_6[1] = var_58_1.o
                int32_t var_48
                r8_6[2].d = var_48
            
            result = 1
            goto label_1428e5f81

label_1428e5f78:
result = 0
label_1428e5f81:
__security_check_cookie(rax_1 ^ &var_b8)
return result
