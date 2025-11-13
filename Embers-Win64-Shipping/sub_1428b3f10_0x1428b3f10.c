// 函数: sub_1428b3f10
// 地址: 0x1428b3f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rsi = sx.q(arg3)
int64_t rbx = sx.q(arg2)
void* rax = sub_142890ec0(arg1)

if (rbx.d u<= 0x16)
    switch (rbx)
        case 0
            *(rax + 0x128) = 8
            *(rax + 0x118) = 0
            *(rax + 0x120) = 0
            *(rax + 0x12c) = 0xc
            *(rax + 0x130) = 0xffffffff
            return 1
        case 8
            void* rax_17 = sub_142890ec0(arg4)
            int64_t rcx_17 = *(rax + 0x168)
            
            if (rcx_17 == 0)
                return 1
            
            if (rcx_17 != rax)
                return 0
            
            *(rax_17 + 0x168) = rax_17
            return 1
        case 9
            rsi = zx.q(0xf - rsi.d)
        label_1428b4070:
            
            if ((rsi - 2).d u> 6)
                return 0
            
            *(rax + 0x128) = rsi.d
            return 1
        case 0x10
            if (sub_142890eb0(arg1) != 0 && *(rax + 0x120) != 0
                    && sub_1428d3c40(rax + 0x138, arg4, rsi) != 0)
                *(rax + 0x11c) = 0
                *(rax + 0x124) = 0
                return 1
            
            return 0
        case 0x11
            if ((rsi.b & 1) == 0 && (rsi - 4).d u<= 0xc)
                int32_t rax_13 = sub_142890eb0(arg1)
                
                if (arg4 == 0)
                    *(rax + 0x12c) = rsi.d
                    return 1
                
                if (rax_13 == 0)
                    *(rax + 0x120) = 1
                    memcpy(sub_142890ea0(arg1), arg4, rsi.d)
                    *(rax + 0x12c) = rsi.d
                    return 1
            
            return 0
        case 0x12
            if (rsi.d != 4)
                return 0
            
            int32_t* rax_9 = sub_1406219d0(arg1)
            *rax_9 = *arg4
            return zx.q((rsi - 3).d)
        case 0x14
            goto label_1428b4070
        case 0x16
            if (rsi.d == 0xd)
                int64_t* rax_2 = sub_142890ea0(arg1)
                *rax_2 = *arg4
                rax_2[1].d = arg4[2]
                *(rax_2 + 0xc) = arg4[3].b
                *(rax + 0x130) = rsi.d
                uint16_t rbx_1 = zx.w(*(sub_142890ea0(arg1) + 0xb)) << 8
                uint16_t rsi_1 = zx.w(*(sub_142890ea0(arg1) + 0xc)) | rbx_1
                
                if (rsi_1 u>= 8)
                    rsi_1 -= 8
                    
                    if (sub_142890eb0(arg1) != 0)
                        goto label_1428b402f
                    
                    int32_t rcx_6 = *(rax + 0x12c)
                    
                    if (zx.d(rsi_1) s>= rcx_6)
                        rsi_1 -= rcx_6.w
                    label_1428b402f:
                        *(sub_142890ea0(arg1) + 0xb) = (rsi_1 u>> 8).b
                        *(sub_142890ea0(arg1) + 0xc) = rsi_1.b
                        return zx.q(*(rax + 0x12c))
            
            return 0

return 0xffffffff
