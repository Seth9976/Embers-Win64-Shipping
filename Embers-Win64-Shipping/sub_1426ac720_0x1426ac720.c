// 函数: sub_1426ac720
// 地址: 0x1426ac720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx = zx.q(*(arg1 + 0x260))
int64_t* r11 = rcx * 0x58
int64_t* result = *(arg1 + 0x110)
int64_t rbp
rbp.b = 1
int64_t* i = *(r11 + result + 8)

if (i != 0)
label_1426ac790:
    
    while (true)
        int64_t* i_1 = i[9]
        
        if (i_1 == 0)
            if (rbp.b != 0)
                sub_1426b86b0(*(zx.q(*(arg1 + 0x260)) * 0x58 + *(arg1 + 0x110)), arg1 + 0x140)
            
            int16_t rax_2 = *(arg1 + 0x260)
            rbp.b = 1
            
            if (rax_2 == 0)
                result = zx.q(*(arg1 + 0x263))
                
                if ((result.b & 0x20) != 0)
                    if ((result.b & 0x10) != 0)
                        *(arg1 + 0x1bc) |= 1
                    else if (*(arg1 + 0x118) != 0)
                        char var_38_1 = 1
                        void* rdx_4 = **(arg1 + 0x110)
                        sub_1426bcb00(arg1, rdx_4, 0, rdx_4, 0xffffffff, 2)
                else if (*(arg1 + 0x1b0) != 0)
                    *(arg1 + 0x1bc) |= 1
                    sub_1426baf10(arg1)
                
                result.b = 0
                break
            
            int64_t rsi_1 = sx.q(*(arg1 + 0x160))
            char arg_a = *arg4
            int32_t rax_4 = (rsi_1 + 1).d
            *(arg1 + 0x160) = rax_4
            
            if (rax_4 s> *(arg1 + 0x164))
                sub_1405a4cf0(arg1 + 0x158)
            
            *(*(arg1 + 0x158) + (rsi_1 << 2)) = rax_2.d
            *(arg1 + 0x260) -= 1
            i = (*(arg1 + 0x110))[zx.q(*(arg1 + 0x260)) * 0xb + 1]
        else
            int64_t rdx = sx.q(i_1[0xc].d)
            int32_t r8 = 0
            int64_t rcx_1 = 0
            
            if (rdx.d s<= 0)
            label_1426ac7ca:
                r8 = -2
            else
                int64_t* rax = i_1[0xb]
                
                while (*rax != i)
                    if (rax[1] == i)
                        break
                    
                    r8 += 1
                    rcx_1 += 1
                    rax = &rax[6]
                    
                    if (rcx_1 s>= rdx)
                        goto label_1426ac7ca
            
            *arg5 = r8
            sub_1426b7fb0(i_1, arg1 + 0x140, r8, arg4)
            i = i_1
        
        if (i == arg2)
            goto label_1426ac895
        
        if (i == 0)
            goto label_1426ac895
else
    if (rcx.w u> arg3)
        i = *(r11 + result)
        rbp.b = 0
    
    if (rcx.w u> arg3 && i != 0)
        goto label_1426ac790
    
label_1426ac895:
    result.b = 1

return result
