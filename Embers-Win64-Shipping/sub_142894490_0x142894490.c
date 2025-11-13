// 函数: sub_142894490
// 地址: 0x142894490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rdi = sx.q(arg3)
int64_t r14 = sx.q(arg2)
void* rax = sub_142890ec0(arg1)

if (r14.d u<= 0x18)
    switch (r14)
        case 0
            *(rax + 0xf8) = 0
            int32_t rcx = *(*arg1 + 0xc)
            *(rax + 0x2b8) = &arg1[5]
            *(rax + 0x2c0) = rcx
            *(rax + 0x2c4) = 0xffffffff
            *(rax + 0x2c8) = 0
            *(rax + 0x2cc) = 0xffffffff
            return 1
        case 8
            void* rax_17 = sub_142890ec0(arg4)
            int64_t rax_18 = *(rax + 0x280)
            
            if (rax_18 != 0)
                if (rax_18 != rax)
                    return 0
                
                *(rax_17 + 0x280) = rax_17
            
            if (*(rax + 0x2b8) == &arg1[5])
                *(rax_17 + 0x2b8) = &arg4[5]
                return 1
            
            int64_t rax_21 = sub_1428a6730(sx.q(*(rax + 0x2c0)))
            *(rax_17 + 0x2b8) = rax_21
            
            if (rax_21 != 0)
                memcpy(rax_21, *(rax + 0x2b8), *(rax + 0x2c0))
                return 1
            
            sub_1428a5670(6, 0xc4, 0x41, "crypto\evp\e_aes.c", 0xb77)
            return 0
        case 9
            if (rdi.d s<= 0)
                return 0
            
            int64_t rax_5
            
            if (rdi.d s> 0x10 && rdi.d s> *(rax + 0x2c0))
                int64_t rcx_1 = *(rax + 0x2b8)
                
                if (rcx_1 != &arg1[5])
                    sub_1428a6780(rcx_1)
                
                rax_5 = sub_1428a6730(rdi)
                *(rax + 0x2b8) = rax_5
            
            if (rdi.d s<= 0x10 || rdi.d s<= *(rax + 0x2c0) || rax_5 != 0)
                *(rax + 0x2c0) = rdi.d
                return 1
            
            sub_1428a5670(6, 0xc4, 0x41, "crypto\evp\e_aes.c", 0xb12)
            return 0
        case 0x10
            if ((rdi - 1).d u> 0xf || arg1[2].d == 0 || *(rax + 0x2c4) s< 0)
                return 0
            
            memcpy(arg4, &arg1[7], rdi.d)
            return 1
        case 0x11
            if ((rdi - 1).d u> 0xf || arg1[2].d != 0)
                return 0
            
            memcpy(&arg1[7], arg4, rdi.d)
            *(rax + 0x2c4) = rdi.d
            return 1
        case 0x12
            if (rdi.d == 0xffffffff)
                memcpy(*(rax + 0x2b8), arg4, *(rax + 0x2c0))
                *(rax + 0x2c8) = 1
                return zx.q((rdi + 2).d)
            
            if (rdi.d s>= 4 && *(rax + 0x2c0) - rdi.d s>= 8)
                memcpy(*(rax + 0x2b8), arg4, rdi.d)
                int32_t rax_10
                
                if (arg1[2].d != 0)
                    rax_10 = sub_142897af0(*(rax + 0x2b8) + rdi, zx.q(*(rax + 0x2c0) - rdi.d))
                
                if (arg1[2].d == 0 || rax_10 s> 0)
                    *(rax + 0x2c8) = 1
                    return 1
            
            return 0
        case 0x13
            if (*(rax + 0x2c8) == 0 || *(rax + 0xf8) == 0)
                return 0
            
            sub_1428d27f0(rax + 0x100, *(rax + 0x2b8), sx.q(*(rax + 0x2c0)))
            int32_t rax_11 = *(rax + 0x2c0)
            
            if (rdi.d s<= 0 || rdi.d s> rax_11)
                rdi = zx.q(rax_11)
            
            int64_t r8_7 = sx.q(rdi.d)
            memcpy(arg4, sx.q(rax_11) - r8_7 + *(rax + 0x2b8), r8_7.d)
            int64_t i = 8
            int64_t r8_9 = sx.q(*(rax + 0x2c0)) + *(rax + 0x2b8)
            
            do
                i -= 1
                char temp0_1 = *(r8_9 + i - 8)
                *(r8_9 + i - 8) += 1
                
                if (temp0_1 != 0xff)
                    break
            while (i != 0)
            
            *(rax + 0xfc) = 1
            return 1
        case 0x16
            if (rdi.d == 0xd)
                arg1[7] = *arg4
                arg1[8].d = arg4[1].d
                *(arg1 + 0x44) = *(arg4 + 0xc)
                *(rax + 0x2cc) = rdi.d
                uint32_t rcx_17 = zx.d(*(arg1 + 0x43)) << 8 | zx.d(*(arg1 + 0x44))
                
                if (rcx_17 u>= 8)
                    int32_t rcx_18 = rcx_17 - 8
                    
                    if (arg1[2].d != 0)
                        goto label_1428947f8
                    
                    if (rcx_18 u>= 0x10)
                        rcx_18 -= 0x10
                    label_1428947f8:
                        *(arg1 + 0x44) = rcx_18.b
                        *(arg1 + 0x43) = (rcx_18 u>> 8).b
                        return 0x10
            
            return 0
        case 0x18
            if (*(rax + 0x2c8) == 0 || *(rax + 0xf8) == 0 || arg1[2].d != 0)
                return 0
            
            memcpy(sx.q(*(rax + 0x2c0)) - rdi + *(rax + 0x2b8), arg4, rdi.d)
            sub_1428d27f0(rax + 0x100, *(rax + 0x2b8), sx.q(*(rax + 0x2c0)))
            *(rax + 0xfc) = 1
            return 1

return 0xffffffff
