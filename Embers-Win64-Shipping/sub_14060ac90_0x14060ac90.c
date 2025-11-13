// 函数: sub_14060ac90
// 地址: 0x14060ac90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return 

int32_t arg_10 = arg2
int64_t i = 0
uint32_t r10_1 = -1

do
    uint32_t rbx_2 = zx.d(*(arg3 + (i << 1)))
    uint64_t rax
    
    if (rbx_2 - 0xd800 u> 0x3ff)
        if (r10_1 != 0xffffffff)
            if (rbx_2 - 0xdc00 u> 0x3ff)
                if (sub_14060b500(r10_1, arg1, &arg_10).b == 0)
                    break
                
                arg2 = arg_10
            else
                rbx_2 = rbx_2 - 0x35fdc00 + (zx.d(r10_1.w) << 0xa)
            
            r10_1 = -1
        
        uint8_t* rax_13 = *arg1
        
        if (rbx_2 u<= 0xfffd)
            if (rbx_2 - 0xd800 u<= 0x3ff || rbx_2 - 0xdc00 u<= 0x3ff)
                goto label_14060af34
            
            goto label_14060ae8c
        
        int32_t rax_14
        
        if (rbx_2 - 0x10000 u> 0xfffff || rbx_2 - 0xd800 u<= 0x3ff || rbx_2 - 0xdc00 u<= 0x3ff)
        label_14060af34:
            *rax_13 = 0x3f.b
            rax_14 = rax_13.d + 1
        else
        label_14060ae8c:
            
            if (rbx_2 u< 0x80)
                *rax_13 = rbx_2.b
                rax_14 = rax_13.d + 1
            else if (rbx_2 u>= 0x800)
                if (rbx_2 u>= 0x10000)
                    if (arg2 u< 4)
                        *rax_13 = 0x3f
                        rax_14 = rax_13.d + 1
                    else
                        *rax_13 = (rbx_2 u>> 0x12).b | 0xf0
                        rax_13[1] = ((rbx_2 u>> 0xc).b & 0x3f) | 0x80
                        uint8_t rcx_18 = (rbx_2 u>> 6).b
                        rbx_2.b &= 0x3f
                        rbx_2.b |= 0x80
                        rax_13[3] = rbx_2.b
                        rax_13[2] = (rcx_18 & 0x3f) | 0x80
                        rax_14 = rax_13.d + 4
                else if (arg2 u< 3)
                    *rax_13 = 0x3f
                    rax_14 = rax_13.d + 1
                else
                    *rax_13 = (rbx_2 u>> 0xc).b | 0xe0
                    uint8_t rcx_12 = (rbx_2 u>> 6).b
                    rbx_2.b &= 0x3f
                    rbx_2.b |= 0x80
                    rax_13[2] = rbx_2.b
                    rax_13[1] = (rcx_12 & 0x3f) | 0x80
                    rax_14 = rax_13.d + 3
            else if (arg2 u< 2)
                *rax_13 = 0x3f
                rax_14 = rax_13.d + 1
            else
                uint32_t rcx_7 = rbx_2
                rbx_2.b &= 0x3f
                rbx_2.b |= 0x80
                *rax_13 = (rcx_7 u>> 6).b | 0xc0
                rax_13[1] = rbx_2.b
                rax_14 = rax_13.d + 2
        
        rax = zx.q(rax_14 - rax_13.d)
        
        if (rax.d s< 1)
            break
        
        *arg1 += sx.q(rax.d)
        arg2 -= rax.d
        arg_10 = arg2
    else
        if (r10_1 != 0xffffffff)
            char* rcx = *arg1
            
            if (r10_1 u<= 0xfffd)
                if (r10_1 - 0xd800 u<= 0x3ff || r10_1 - 0xdc00 u<= 0x3ff)
                    goto label_14060add6
                
                goto label_14060ad25
            
            int32_t rcx_1
            
            if (r10_1 - 0x10000 u> 0xfffff || r10_1 - 0xd800 u<= 0x3ff || r10_1 - 0xdc00 u<= 0x3ff)
            label_14060add6:
                *rcx = 0x3f.b
                rcx_1 = rcx.d + 1
            else
            label_14060ad25:
                
                if (r10_1 u< 0x80)
                    *rcx = r10_1.b
                    rcx_1 = rcx.d + 1
                else if (r10_1 u>= 0x800)
                    if (r10_1 u>= 0x10000)
                        if (arg2 u< 4)
                            *rcx = 0x3f
                            rcx_1 = rcx.d + 1
                        else
                            *rcx = (r10_1 u>> 0x12).b | 0xf0
                            rcx[1] = ((r10_1 u>> 0xc).b & 0x3f) | 0x80
                            rax = zx.q(r10_1 u>> 6)
                            r10_1.b &= 0x3f
                            rax.b &= 0x3f
                            r10_1.b |= 0x80
                            rax.b |= 0x80
                            rcx[3] = r10_1.b
                            rcx[2] = rax.b
                            rcx_1 = rcx.d + 4
                    else if (arg2 u< 3)
                        *rcx = 0x3f
                        rcx_1 = rcx.d + 1
                    else
                        *rcx = (r10_1 u>> 0xc).b | 0xe0
                        rax = zx.q(r10_1 u>> 6)
                        r10_1.b &= 0x3f
                        rax.b &= 0x3f
                        r10_1.b |= 0x80
                        rax.b |= 0x80
                        rcx[2] = r10_1.b
                        rcx[1] = rax.b
                        rcx_1 = rcx.d + 3
                else if (arg2 u< 2)
                    *rcx = 0x3f
                    rcx_1 = rcx.d + 1
                else
                    uint32_t rax_1 = r10_1
                    r10_1.b &= 0x3f
                    r10_1.b |= 0x80
                    rax.b = (rax_1 u>> 6).b | 0xc0
                    *rcx = rax.b
                    rcx[1] = r10_1.b
                    rcx_1 = rcx.d + 2
            
            int32_t rcx_2 = rcx_1 - rcx.d
            
            if (rcx_2 s< 1)
                break
            
            *arg1 += sx.q(rcx_2)
            arg2 -= rcx_2
            arg_10 = arg2
        
        r10_1 = rbx_2
    i += 1
while (i s< sx.q(arg4))
