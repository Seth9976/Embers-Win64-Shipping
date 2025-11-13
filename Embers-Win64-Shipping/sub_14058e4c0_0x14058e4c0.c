// 函数: sub_14058e4c0
// 地址: 0x14058e4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = arg2
char* rcx = *arg1
void* result = arg1[1] - rcx

if (result u>= 2 && *rcx == 0xff)
    sub_14058a370(arg1, 2)
    result = zx.q(*(i + 0x10))
    char arg_8
    
    if (result.d s>= 0x80)
        char r14_2 = (result.d s>> 0x15).b & 0x7f
        char r15_1 = result.b & 0x7f
        char rsi_2 = (result.d s>> 7).b & 0x7f
        char rbp_2 = (result.d s>> 0xe).b & 0x7f
        char var_37 = r15_1
        result.b = (result.d s>> 0x1c).b & 0x7f
        char arg_20 = rsi_2
        char var_38 = result.b
        char rcx_3 = r14_2
        char arg_18 = rbp_2
        arg_8 = r14_2
        
        if (result.b != 0)
            rcx_3 |= 0x80
            r14_2 = rcx_3
            arg_8 = rcx_3
        
        char rdx_1 = rbp_2
        
        if (rcx_3 != 0)
            rcx_3 |= 0x80
            rdx_1 |= 0x80
            arg_8 = rcx_3
            rbp_2 = rdx_1
            arg_18 = rdx_1
            r14_2 = rcx_3
        
        char rcx_4 = rsi_2
        
        if (rdx_1 != 0)
            rdx_1 |= 0x80
            rcx_4 |= 0x80
            arg_18 = rdx_1
            rsi_2 = rcx_4
            arg_20 = rcx_4
            rbp_2 = rdx_1
        
        if (rcx_4 != 0)
            rcx_4 |= 0x80
            rsi_2 = rcx_4
            arg_20 = rcx_4
        
        if (result.b != 0)
            char* rdx_2 = arg1[1]
            
            if (rdx_2 == arg1[2])
                result = sub_14058b5e0(arg1, rdx_2, &var_38)
            else
                *rdx_2 = result.b
                arg1[1] += 1
        
        if (r14_2 != 0)
            char* rdx_3 = arg1[1]
            
            if (rdx_3 == arg1[2])
                result = sub_14058b5e0(arg1, rdx_3, &arg_8)
            else
                *rdx_3 = r14_2
                arg1[1] += 1
        
        if (rbp_2 != 0)
            char* rdx_4 = arg1[1]
            
            if (rdx_4 == arg1[2])
                result = sub_14058b5e0(arg1, rdx_4, &arg_18)
            else
                *rdx_4 = rbp_2
                arg1[1] += 1
        
        if (rsi_2 != 0)
            char* rdx_5 = arg1[1]
            
            if (rdx_5 == arg1[2])
                result = sub_14058b5e0(arg1, rdx_5, &arg_20)
            else
                *rdx_5 = rsi_2
                arg1[1] += 1
        
        char* rdx_6 = arg1[1]
        
        if (rdx_6 == arg1[2])
            result = sub_14058b5e0(arg1, rdx_6, &var_37)
        else
            *rdx_6 = r15_1
            arg1[1] += 1
    else
        char* rdx = arg1[1]
        arg_8 = result.b
        
        if (rdx == arg1[2])
            result = sub_14058b5e0(arg1, rdx, &arg_8)
        else
            *rdx = result.b
            arg1[1] += 1
    
    int64_t rdx_7 = *(i + 0x18)
    void* i_1 = i
    
    if (rdx_7 u>= 0x10)
        i_1 = *i
    
    void* rsi_4 = *(i + 0x10) + i_1
    
    if (rdx_7 u>= 0x10)
        i = *i
    
    for (; i != rsi_4; i += 1)
        char* rdx_8 = arg1[1]
        result = zx.q(*i)
        arg_8 = result.b
        
        if (rdx_8 == arg1[2])
            result = sub_14058b5e0(arg1, rdx_8, &arg_8)
        else
            *rdx_8 = result.b
            arg1[1] += 1

return result
