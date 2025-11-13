// 函数: sub_142a8c490
// 地址: 0x142a8c490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
char var_36 = 4
char i_2 = 0
char var_35 = 0
int32_t rcx = *arg2

if (rcx s>= 0 && rcx s< arg3)
    *arg2 = rcx + 1
    int16_t rax_2
    uint32_t rcx_1
    rax_2, rcx_1 = arg1(arg5, arg4)
    uint32_t rbx_1 = zx.d(rax_2)
    char var_37_1
    char i_1
    int32_t rbp_3
    
    if (rbx_1 == 0x55)
        rcx_1.b = 8
    label_142a8c675:
        i_1 = 0
        var_37_1 = rcx_1.b
        rbp_3 = arg3
    else
        if (rbx_1 == 0x75)
            rcx_1.b = 4
            goto label_142a8c675
        
        if (rbx_1 == 0x78)
            rcx_1 = *arg2
            rbp_3 = arg3
            var_37_1 = 1
            
            if (rcx_1 s>= rbp_3)
                rcx_1.b = 2
                i_1 = 0
            else
                int16_t rax_21
                rax_21, rcx_1 = arg1(rcx_1, arg4)
                
                if (rax_21 != 0x7b)
                    rcx_1.b = 2
                    i_1 = 0
                else
                    *arg2 += 1
                    rcx_1.b = 8
                    i_1 = 0
                    var_35 = 1
        else
            char rax_3
            char temp0_1
            
            if ((rbx_1 - 0x30).w u<= 7)
                rax_3 = rbx_1.b
                temp0_1 = rax_3
            
            if ((rbx_1 - 0x30).w u> 7 || temp0_1 - 0x30 s< 0)
                void* const rax_4 = &data_143642130
                
                do
                    int16_t rcx_2 = *rax_4
                    
                    if (rbx_1.w == rcx_2)
                        return zx.q(*(&data_143642130 + (sx.q(i + 1) << 1)))
                    
                    if (rbx_1.w u< rcx_2)
                        break
                    
                    i += 2
                    rax_4 += 4
                while (i s< 0x10)
                
                if (rbx_1.w == 0x63)
                    int32_t rcx_3 = *arg2
                    
                    if (rcx_3 s< arg3)
                        *arg2 = rcx_3 + 1
                        uint32_t rbx_2 = zx.d(arg1(rcx_3, arg4))
                        
                        if ((rbx_2 & 0xfffffc00) == 0xd800)
                            int32_t rcx_6 = *arg2
                            
                            if (rcx_6 s< arg3)
                                int16_t rax_7 = arg1(rcx_6, arg4)
                                
                                if ((zx.d(rax_7) & 0xfffffc00) == 0xdc00)
                                    *arg2 += 1
                                    rbx_2.w += 9
                                    rbx_2.w = rbx_2.w * 0x400 + rax_7
                        
                        return zx.q(rbx_2.w) & 0x1f
                
                if ((rbx_1 & 0xfffffc00) == 0xd800)
                    int32_t rcx_9 = *arg2
                    
                    if (rcx_9 s< arg3)
                        uint32_t rcx_10 = zx.d(arg1(rcx_9, arg4))
                        
                        if ((rcx_10 & 0xfffffc00) == 0xdc00)
                            *arg2 += 1
                            return zx.q(((rbx_1 - 0xd7f7) << 0xa) + rcx_10)
                
                return zx.q(rbx_1)
            
            rcx_1.b = 3
            var_37_1 = 1
            i_1 = 1
            var_36 = 3
            i_2 = 1
            i = sx.d(rax_3 - 0x30)
            rbp_3 = arg3
    
    char arg_10 = rcx_1.b
    
    if (*arg2 s< rbp_3)
        while (i_1 s< rcx_1.b)
            rbx_1 = zx.d(arg1(zx.q(*arg2), arg4))
            int16_t rax_23
            
            if (var_36 != 3)
                if (rbx_1.w - 0x30 u<= 9)
                    rax_23 = rbx_1.w - 0x30
                else if (rbx_1.w - 0x41 u<= 5)
                    rax_23 = rbx_1.w - 0x37
                else if (rbx_1.w - 0x61 u> 5)
                    rax_23.b = 0xff
                else
                    rax_23 = rbx_1.w - 0x57
            else if (rbx_1.w - 0x30 u> 7)
                rax_23.b = 0xff
            else
                rax_23 = rbx_1.w - 0x30
            
            i_1 = i_2
            
            if (rax_23.b s< 0)
                break
            
            *arg2 += 1
            i_1 += 1
            rcx_1 = zx.d(arg_10)
            i = i << var_36 | sx.d(rax_23.b)
            i_2 = i_1
            
            if (*arg2 s>= rbp_3)
                break
    
    if (i_1 s>= var_37_1)
        if (var_35 == 0)
            goto label_142a8c71e
        
        if (rbx_1.w == 0x7d)
            *arg2 += 1
        label_142a8c71e:
            
            if (i u<= 0x10ffff)
                int32_t rcx_14 = *arg2
                
                if (rcx_14 s< rbp_3 && (i & 0xfffffc00) == 0xd800)
                    arg_10.d = rcx_14 + 1
                    int16_t rax_29 = arg1(rcx_14, arg4)
                    
                    if (rax_29 == 0x5c && arg_10.d s< rbp_3)
                        rax_29 = sub_142a8c490(arg1, &arg_10, zx.q(rbp_3), arg4, i_2)
                    
                    uint32_t rdx_8 = zx.d(rax_29)
                    
                    if ((rdx_8 & 0xfffffc00) == 0xdc00)
                        i = ((i - 0xd7f7) << 0xa) + rdx_8
                        *arg2 = arg_10.d
                
                return zx.q(i)

*arg2 = rcx
return 0xffffffff
