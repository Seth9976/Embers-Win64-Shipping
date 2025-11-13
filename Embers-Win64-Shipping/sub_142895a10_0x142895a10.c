// 函数: sub_142895a10
// 地址: 0x142895a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rsi = arg4
int32_t r15 = 0
int128_t* r14 = arg3
void* rbp = arg2
void* rax = sub_142890ec0(arg1)

if (*(rax + 0x1f4) != 0 && *(rax + 0x1f0) != 0)
    if (r14 == 0)
        if (*(rax + 0x2e0) s<= 0)
            goto label_142895c80
        
        int32_t rax_12 = sub_142890eb0(arg1)
        int64_t r9_2 = sx.q(*(rax + 0x2e0))
        
        if (rax_12 == 0)
            if (sub_1428d4940(rax + 0x1f8, rax + 0x2c0, rbp, r9_2) != 0)
            label_142895c72:
                r15 = *(rax + 0x2e0)
                *(rax + 0x2e0) = 0
            label_142895c80:
                int64_t rax_15 = sx.q(*(rax + 0x2e4))
                
                if (rax_15.d s<= 0)
                    goto label_142895cb3
                
                if (sub_1428d4650(rax + 0x1f8, rax + 0x2d0, rax_15) != 0)
                    *(rax + 0x2e4) = 0
                label_142895cb3:
                    
                    if (sub_142890eb0(arg1) != 0)
                        if (sub_1428d5170(rax + 0x1f8, rax + 0x2b0, 0x10) == 1)
                            *(rax + 0x1f4) = 0
                            return zx.q(r15)
                    else
                        int64_t rax_18 = sx.q(*(rax + 0x2ec))
                        
                        if (rax_18.d s>= 0 && sub_1428d4dc0(rax + 0x1f8, rax + 0x2b0, rax_18) == 0)
                            *(rax + 0x1f4) = 0
                            return zx.q(r15)
        else if (sub_1428d4b80(rax + 0x1f8, rax + 0x2c0, rbp, r9_2) != 0)
            goto label_142895c72
    else
        void* r12_1
        void* r13_1
        
        if (rbp != 0)
            r12_1 = rax + 0x2e0
            r13_1 = rax + 0x2c0
            
            if (sub_142893020(sx.q(*r12_1) + rbp, r14, rsi.d) != 0)
                sub_1428a5670(6, 0xa9, 0xa2, "crypto\evp\e_aes.c", 0xff1)
                return 0
        else
            r13_1 = rax + 0x2d0
            r12_1 = rax + 0x2e4
        
        int64_t rcx = sx.q(*r12_1)
        
        if (rcx.d s<= 0)
        label_142895b87:
            uint64_t rdi_3 = zx.q(rsi.d) & 0xf
            
            if (rsi == rdi_3)
                goto label_142895c11
            
            int32_t rax_7
            
            if (rbp != 0)
                int64_t r9_1 = rsi - rdi_3
                
                if (sub_142890eb0(arg1) != 0)
                    rax_7 = sub_1428d4b80(rax + 0x1f8, r14, rbp, r9_1)
                    goto label_142895bac
                
                if (sub_1428d4940(rax + 0x1f8, r14, rbp, r9_1) != 0)
                label_142895c06:
                    r15 += rsi.d - rdi_3.d
                    r14 += rsi - rdi_3
                label_142895c11:
                    
                    if (rdi_3 != 0)
                        memcpy(r13_1, r14, rdi_3.d)
                        *r12_1 = rdi_3.d
                    
                    return zx.q(r15)
            else
                rax_7 = sub_1428d4650(rax + 0x1f8, r14, rsi - rdi_3)
            label_142895bac:
                
                if (rax_7 != 0)
                    goto label_142895c06
        else
            uint64_t r15_1 = zx.q(0x10 - rcx.d)
            void* rcx_1 = rcx + r13_1
            
            if (r15_1 u> rsi)
                memcpy(rcx_1, r14, rsi.d)
                *r12_1 += rsi.d
                return 0
            
            memcpy(rcx_1, r14, r15_1.d)
            rsi -= r15_1
            r14 += r15_1
            
            if (rbp != 0)
                int128_t* rdx_3 = r13_1
                
                if (sub_142890eb0(arg1) == 0)
                    if (sub_1428d4940(rax + 0x1f8, rdx_3, rbp, 0x10) != 0)
                        goto label_142895b6d
                else if (sub_1428d4b80(rax + 0x1f8, rdx_3, rbp, 0x10) != 0)
                    goto label_142895b6d
            else if (sub_1428d4650(rax + 0x1f8, r13_1, zx.q((rbp + 0x10).d)) != 0)
            label_142895b6d:
                *r12_1 = 0
                r15 = 0x10
                
                if (rbp != 0)
                    rbp += 0x10
                
                goto label_142895b87

return 0xffffffff
