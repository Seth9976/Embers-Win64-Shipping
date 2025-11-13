// 函数: sub_1428b3630
// 地址: 0x1428b3630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rsi = sx.q(arg3)
int64_t rbx = sx.q(arg2)
void* rax = sub_142890ec0(arg1)

if (rbx.d u<= 0x18)
    switch (rbx)
        case 0
            *(rax + 0x118) = 0
            *(rax + 0x2e0) = sub_142890ed0(arg1)
            *(rax + 0x2d8) = sub_1406219d0(arg1)
            *(rax + 0x2e4) = 0xffffffff
            *(rax + 0x2e8) = 0
            *(rax + 0x2ec) = 0xffffffff
            return 1
        case 8
            void* rax_24 = sub_142890ec0(arg4)
            int64_t rax_25 = *(rax + 0x2a0)
            
            if (rax_25 != 0)
                if (rax_25 != rax)
                    return 0
                
                *(rax_24 + 0x2a0) = rax_24
            
            int64_t rax_26 = sub_1406219d0(arg1)
            
            if (*(rax + 0x2d8) == rax_26)
                *(rax_24 + 0x2d8) = sub_1406219d0(arg4)
                return 1
            
            int64_t rax_28 = sub_1428a6730(sx.q(*(rax + 0x2e0)))
            *(rax_24 + 0x2d8) = rax_28
            
            if (rax_28 != 0)
                memcpy(rax_28, *(rax + 0x2d8), *(rax + 0x2e0))
                return 1
            
            sub_1428a5670(6, 0xc5, 0x41, "crypto\evp\e_aria.c", 0x177)
            return 0
        case 9
            if (rsi.d s<= 0)
                return 0
            
            int64_t rax_5
            
            if (rsi.d s> 0x10 && rsi.d s> *(rax + 0x2e0))
                int64_t rbx_1 = *(rax + 0x2d8)
                
                if (rbx_1 != sub_1406219d0(arg1))
                    sub_1428a6780(rbx_1)
                
                rax_5 = sub_1428a6730(rsi)
                *(rax + 0x2d8) = rax_5
            
            if (rsi.d s<= 0x10 || rsi.d s<= *(rax + 0x2e0) || rax_5 != 0)
                *(rax + 0x2e0) = rsi.d
                return 1
            
            sub_1428a5670(6, 0xc5, 0x41, "crypto\evp\e_aria.c", 0x10e)
            return 0
        case 0x10
            if ((rsi - 1).d u<= 0xf && sub_142890eb0(arg1) != 0 && *(rax + 0x2e4) s>= 0)
                memcpy(arg4, sub_142890ea0(arg1), rsi.d)
                return 1
            
            return 0
        case 0x11
            if ((rsi - 1).d u> 0xf)
                return 0
            
            if (sub_142890eb0(arg1) != 0)
                return 0
            
            memcpy(sub_142890ea0(arg1), arg4, rsi.d)
            *(rax + 0x2e4) = rsi.d
            return 1
        case 0x12
            if (rsi.d == 0xffffffff)
                memcpy(*(rax + 0x2d8), arg4, *(rax + 0x2e0))
                *(rax + 0x2e8) = 1
                return zx.q((rsi + 2).d)
            
            if (rsi.d s>= 4 && *(rax + 0x2e0) - rsi.d s>= 8)
                memcpy(*(rax + 0x2d8), arg4, rsi.d)
                int32_t rax_14 = sub_142890eb0(arg1)
                int32_t rax_15
                
                if (rax_14 != 0)
                    rax_15 = sub_142897af0(*(rax + 0x2d8) + rsi, zx.q(*(rax + 0x2e0) - rsi.d))
                
                if (rax_14 == 0 || rax_15 s> 0)
                    *(rax + 0x2e8) = 1
                    return 1
            
            return 0
        case 0x13
            if (*(rax + 0x2e8) == 0 || *(rax + 0x118) == 0)
                return 0
            
            sub_1428d27f0(rax + 0x120, *(rax + 0x2d8), sx.q(*(rax + 0x2e0)))
            int32_t rax_16 = *(rax + 0x2e0)
            
            if (rsi.d s<= 0 || rsi.d s> rax_16)
                rsi = zx.q(rax_16)
            
            int64_t r8_7 = sx.q(rsi.d)
            memcpy(arg4, sx.q(rax_16) - r8_7 + *(rax + 0x2d8), r8_7.d)
            int64_t i = 8
            int64_t r8_9 = sx.q(*(rax + 0x2e0)) + *(rax + 0x2d8)
            
            do
                i -= 1
                char temp0_1 = *(r8_9 + i - 8)
                *(r8_9 + i - 8) += 1
                
                if (temp0_1 != 0xff)
                    break
            while (i != 0)
            
            *(rax + 0x11c) = 1
            return 1
        case 0x16
            if (rsi.d == 0xd)
                int64_t* rax_18 = sub_142890ea0(arg1)
                *rax_18 = *arg4
                rax_18[1].d = arg4[1].d
                *(rax_18 + 0xc) = *(arg4 + 0xc)
                *(rax + 0x2ec) = rsi.d
                uint32_t rbx_3 = zx.d(*(sub_142890ea0(arg1) + 0xb)) << 8
                uint32_t rdi_2 = zx.d(*(sub_142890ea0(arg1) + 0xc)) | rbx_3
                
                if (rdi_2 u>= 8)
                    int32_t rdi_3 = rdi_2 - 8
                    
                    if (sub_142890eb0(arg1) != 0)
                        goto label_1428b39f8
                    
                    if (rdi_3 u>= 0x10)
                        rdi_3 -= 0x10
                    label_1428b39f8:
                        *(sub_142890ea0(arg1) + 0xb) = (rdi_3 u>> 8).b
                        *(sub_142890ea0(arg1) + 0xc) = rdi_3.b
                        return 0x10
            
            return 0
        case 0x18
            if (*(rax + 0x2e8) == 0 || *(rax + 0x118) == 0)
                return 0
            
            if (sub_142890eb0(arg1) != 0)
                return 0
            
            memcpy(sx.q(*(rax + 0x2e0)) - rsi + *(rax + 0x2d8), arg4, rsi.d)
            sub_1428d27f0(rax + 0x120, *(rax + 0x2d8), sx.q(*(rax + 0x2e0)))
            *(rax + 0x11c) = 1
            return 1

return 0xffffffff
