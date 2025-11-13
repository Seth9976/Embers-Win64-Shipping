// 函数: sub_140a21e00
// 地址: 0x140a21e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg1
int32_t r9 = 0
int16_t* i_3

if (arg1[1].d == 0)
    i_3 = &data_142d40450
else
    i_3 = *arg1

int16_t* i_1 = i_3
int32_t arg_c

if (i_3 != 0)
    int64_t r15
    int64_t var_28_1 = r15
    int16_t* i
    
    do
        int16_t r8_1 = *i_1
        
        if (r8_1 == 0)
            break
        
        int16_t* i_2 = &i_1[1]
        
        if (r8_1 != 0xd || *i_2 != 0xa)
            r15.b = 0
            arg1.b = zx.d(r8_1) - 0xa u<= 3
            int32_t rax_2
            rax_2.b = r8_1 == 0x2029
            arg1.b |= rax_2.b
            char rdx = arg1.b
            
            if (r8_1 == 0x2028)
                rdx = 1
            
            rax_2.b = r8_1 == 0x85
            
            if ((rdx | rax_2.b) != 0)
                goto label_140a21eb5
        else
            r15.b = 1
        label_140a21eb5:
            int64_t rsi_1 = sx.q(arg2[1].d)
            arg_c = ((i_1 - i_3) s>> 1).d
            int32_t rax_6 = (rsi_1 + 1).d
            arg2[1].d = rax_6
            
            if (rax_6 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            if (r15.b == 0)
                i_2 = i_1
            
            i_1 = i_2
            (*arg2)[rsi_1] = r9.q
            r9 = ((i_2 - i_3) s>> 1).d + 1
        
        i = i_1
        i_1 = &i_1[1]
    while (i != -2)

int32_t rdx_2 = r12[1].d
uint64_t result = zx.q(rdx_2 - 1)

if (rdx_2 == 0)
    result = 0xffffffff

int32_t rcx_1 = rdx_2 - 1

if (rdx_2 == 0)
    result = 0

if (rdx_2 == 0)
    rcx_1 = -1

if (r9 s<= result.d)
    int64_t rbx = sx.q(arg2[1].d)
    
    if (rdx_2 == 0)
        rcx_1 = 0
    
    arg_c = rcx_1
    int32_t rax_8 = (rbx + 1).d
    arg2[1].d = rax_8
    
    if (rax_8 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    result = r9.q
    (*arg2)[rbx] = result

return result
