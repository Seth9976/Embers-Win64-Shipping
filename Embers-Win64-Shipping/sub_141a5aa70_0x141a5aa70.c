// 函数: sub_141a5aa70
// 地址: 0x141a5aa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_4 = arg1[1].d
int64_t* rax = arg3
int32_t arg_c
char arg_20
int32_t arg_24

if (i_4 == 0)
    arg_c = 0
    *arg2 = 0.q
    arg_20 = 0
    arg_24 = 0
    arg2[1] = arg_20.q
    return arg2

int64_t rsi = *arg1
int64_t rcx = *arg3
int32_t rdi = 0
char arg_8
int32_t* r9

if (i_4 s> 0)
    int32_t i = i_4
    arg_8.q = rcx
    
    do
        int32_t r8_1 = i & 0x80000001
        
        if (r8_1 s< 0)
            r8_1 = ((r8_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_2 = (temp1_1 - temp0_1) s>> 1
        i = i_2
        int32_t rax_7 = i_2 + rdi
        uint64_t rax_10 = *(rsi + sx.q(rax_7) * 0x10)
        arg_20.q = rax_10
        char rdx_1
        char r8_4
        
        if (rcx.b != 2)
            if (rax_10.b != 2)
                uint32_t rdx_3 = (rcx u>> 0x20).d
                uint32_t r8_6 = (rax_10 u>> 0x20).d
                
                if (rdx_3 s< r8_6)
                    rdx_1 = rcx.b
                    r9 = &arg_c
                    r8_4 = rax_10.b
                    goto label_141a5ab7e
                
                if (rdx_3 s> r8_6 || rcx.b != 1)
                    rdx_1 = rax_10.b
                    goto label_141a5ab72
                
                rdx_1 = rcx.b
                r9 = &arg_c
                goto label_141a5ab76
            
            rdx_1 = rax_10.b
        label_141a5ab72:
            r9 = &arg_24
        label_141a5ab76:
            
            if (rdx_1 != rcx.b || (rdx_1 != 2 && *r9 != (rcx u>> 0x20).d) ||
                    (rcx.b == rax_10.b && (rcx.b == 2 || (rcx u>> 0x20).d == (rax_10 u>> 0x20).d)))
                rax_10.b = 0
            else
                rax_10.b = 1
        else
            rdx_1 = rcx.b
            r9 = &arg_c
            r8_4 = rax_10.b
        label_141a5ab7e:
            
            if ((rdx_1 == 2 || *r9 == (rcx u>> 0x20).d)
                    && (rcx.b != r8_4 || (rcx.b != 2 && (rcx u>> 0x20).d != (rax_10 u>> 0x20).d)))
                rax_10.b = 1
            else
                rax_10.b = 0
        
        if (rax_10.b == 0)
            rdi = rax_7 + r8_1
    while (i s> 0)
    
    rax = arg3

if (rdi s> 0)
    char rax_11
    rax_11, r9 = sub_141a5adc0((sx.q(rdi - 1) << 4) + rsi, rax)
    
    if (rax_11 != 0)
        rdi -= 1

if (rdi != i_4)
    int64_t* rax_14 = arg3
    int32_t i_5 = i_4 - rdi
    int64_t rcx_4 = rax_14[1]
    int64_t r14_3 = (sx.q(rdi) << 4) + rsi
    arg_8.d = i_5
    uint64_t var_48
    int32_t i_6
    
    if (rcx_4.b != 2)
        i_6 = 0
        
        if (i_5 s> 0)
            arg_20.q = rcx_4
            int32_t i_1 = i_5
            
            do
                int32_t r8_8 = i_1 & 0x80000001
                
                if (r8_8 s< 0)
                    r8_8 = ((r8_8 - 1) | 0xfffffffe) + 1
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(i_1)
                int32_t i_3 = (temp3_1 - temp2_1) s>> 1
                i_1 = i_3
                int32_t rax_18 = i_3 + i_6
                uint64_t rax_21 = *(r14_3 + sx.q(rax_18) * 0x10 + 8)
                var_48 = rax_21
                
                if (rcx_4.b == 2)
                label_141a5acd4:
                    
                    if (rax_21.b != rcx_4.b || (rax_21.b != 2 && var_48:4.d != (rcx_4 u>> 0x20).d)
                            || (rcx_4.b == rax_21.b
                            && (rcx_4.b == 2 || (rcx_4 u>> 0x20).d == (rax_21 u>> 0x20).d)))
                        rax_21.b = 0
                    else
                        rax_21.b = 1
                else
                    char rdx_10
                    char r8_11
                    int32_t* r10_1
                    
                    if (rax_21.b != 2)
                        uint32_t rdx_12 = (rcx_4 u>> 0x20).d
                        uint32_t r8_13 = (rax_21 u>> 0x20).d
                        
                        if (rdx_12 s< r8_13)
                            rdx_10 = rcx_4.b
                            r10_1 = &arg_24
                            r9 = zx.q(rcx_4.b)
                            r8_11 = rax_21.b
                            goto label_141a5aceb
                        
                        if (rdx_12 s> r8_13 || rcx_4.b != 0)
                            goto label_141a5acd4
                        
                        r9.b = 0
                        
                        if (arg_24 != (rcx_4 u>> 0x20).d || (rcx_4.b == rax_21.b
                                && (r9.b == 2 || (rcx_4 u>> 0x20).d == (rax_21 u>> 0x20).d)))
                            rax_21.b = 0
                        else
                            rax_21.b = 1
                    else
                        rdx_10 = rcx_4.b
                        r10_1 = &arg_24
                        r9 = zx.q(rcx_4.b)
                        r8_11 = rax_21.b
                    label_141a5aceb:
                        
                        if ((rdx_10 == 2 || *r10_1 == (rcx_4 u>> 0x20).d) && (rcx_4.b != r8_11
                                || (r9.b != 2 && (rcx_4 u>> 0x20).d != (rax_21 u>> 0x20).d)))
                            rax_21.b = 1
                        else
                            rax_21.b = 0
                
                if (rax_21.b == 0)
                    i_6 = rax_18 + r8_8
            while (i_1 s> 0)
            
            i_5 = arg_8.d
            rax_14 = arg3
    else
        i_6 = i_5
    
    if (i_6 s< i_5 && sub_141a5adc0((sx.q(i_6) << 4) + r14_3, rax_14) != 0)
        i_6 += 1
    
    if (i_6 s<= 0)
        arg_c = 0
        var_48 = 0.q
        arg_20 = 0
        arg_24 = 0
        int64_t var_40_1 = arg_20.q
    else
        var_48.b = 1
        int64_t var_40
        var_40:4.d = i_6 + rdi
        var_48:4.d = rdi
        var_40.b = 0
    
    *arg2 = var_48.o
else
    arg_c = 0
    *arg2 = 0.q
    arg_20 = 0
    arg_24 = 0
    arg2[1] = arg_20.q

return arg2
