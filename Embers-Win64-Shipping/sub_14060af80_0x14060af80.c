// 函数: sub_14060af80
// 地址: 0x14060af80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return 

int32_t arg_10 = arg2
int32_t r11_1 = arg2
int64_t i = 0
uint32_t r10_1 = -1

do
    uint32_t rbx_2 = zx.d(*(arg3 + (i << 1)))
    
    if (rbx_2 - 0xd800 u> 0x3ff)
        if (r10_1 != 0xffffffff)
            if (rbx_2 - 0xdc00 u> 0x3ff)
                if (sub_14060b610(r10_1, arg1, &arg_10).b == 0)
                    break
                
                r11_1 = arg_10
            else
                rbx_2 = rbx_2 - 0x35fdc00 + (zx.d(r10_1.w) << 0xa)
            
            r10_1 = -1
        
        int32_t rcx_11
        
        if (rbx_2 u<= 0xfffd)
            if (rbx_2 - 0xd800 u> 0x3ff && rbx_2 - 0xdc00 u> 0x3ff && rbx_2 u>= 0x80)
                goto label_14060b117
            
            rcx_11 = 1
        else if (rbx_2 - 0x10000 u> 0xfffff || rbx_2 - 0xd800 u<= 0x3ff || rbx_2 - 0xdc00 u<= 0x3ff
                || rbx_2 u< 0x80)
            rcx_11 = 1
        else
        label_14060b117:
            
            if (rbx_2 u>= 0x800)
                rcx_11 = 1
                
                if (rbx_2 u>= 0x10000)
                    if (r11_1 u>= 4)
                        rcx_11 = 4
                else if (r11_1 u>= 3)
                    rcx_11 = 3
            else
                rcx_11 = sbb.d(rbx_2 - 0xdc00, rbx_2 - 0xdc00, r11_1 u< 2) + 2
        
        if (rcx_11 s< 1)
            break
        
        r11_1 -= rcx_11
        *arg1 += rcx_11
        arg_10 = r11_1
    else
        if (r10_1 != 0xffffffff)
            int32_t rcx_4
            
            if (r10_1 u<= 0xfffd)
                if (r10_1 - 0xd800 u> 0x3ff && r10_1 - 0xdc00 u> 0x3ff && r10_1 u>= 0x80)
                    goto label_14060b038
                
                rcx_4 = 1
            else if (r10_1 - 0x10000 u> 0xfffff || r10_1 - 0xd800 u<= 0x3ff
                    || r10_1 - 0xdc00 u<= 0x3ff || r10_1 u< 0x80)
                rcx_4 = 1
            else
            label_14060b038:
                
                if (r10_1 u>= 0x800)
                    rcx_4 = 1
                    
                    if (r10_1 u>= 0x10000)
                        if (r11_1 u>= 4)
                            rcx_4 = 4
                    else if (r11_1 u>= 3)
                        rcx_4 = 3
                else
                    rcx_4 = sbb.d(r10_1 - 0xdc00, r10_1 - 0xdc00, r11_1 u< 2) + 2
            
            if (rcx_4 s< 1)
                break
            
            r11_1 -= rcx_4
            *arg1 += rcx_4
            arg_10 = r11_1
        
        r10_1 = rbx_2
    
    i += 1
while (i s< sx.q(arg4))
