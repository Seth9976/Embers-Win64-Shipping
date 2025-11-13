// 函数: sub_142bde950
// 地址: 0x142bde950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg3
int32_t rcx = arg1[0x22]
int32_t rbp = arg2
char rax
int32_t rdx_2
bool cond:5_1

if (rcx == 0)
    int32_t rdx_3 = arg1[0x17]
    
    if (rsi s> rdx_3)
        int32_t rax_11 = arg1[1]
        arg3.b = ((rdx_3 - 1 + rax_11) & neg.d(rax_11)) - rdx_3 s>= arg1[2]
        
        if (sub_142bdece0(arg1, 1, arg3.b) != 0)
            return 1
        
        goto label_142bdea6f
    
    if (rsi s>= rdx_3)
    label_142bdea6f:
        int32_t rcx_22 = arg1[0x22]
        
        if (rcx_22 == 1)
            if (sub_142bdeb30(arg1, arg1[0x16], arg1[0x17], rbp, rsi, arg1[0x18], arg1[0x19]) == 0)
            label_142bdeb17:
                arg1[0x16] = rbp
                arg1[0x17] = rsi
                return 0
        else
            if (rcx_22 != 2)
                goto label_142bdeb17
            
            char rbx_1 = *(arg1 + 0x6a)
            rax = sub_142bdeb30(arg1, arg1[0x16], neg.d(arg1[0x17]), rbp, neg.d(rsi), 
                neg.d(arg1[0x19]), neg.d(arg1[0x18]))
            
            if (rbx_1 != 0 && *(arg1 + 0x6a) == 0)
                void* rdx_6 = *(arg1 + 0x70)
                *(rdx_6 + 0x20) = neg.d(*(rdx_6 + 0x20))
            
            if (rax == 0)
                goto label_142bdeb17
    else
        cond:5_1 = rdx_3 - (neg.d(arg1[1]) & rdx_3) s>= arg1[2]
    label_142bdea5a:
        rdx_2 = 2
    label_142bdea5f:
        arg3.b = cond:5_1
        
        if (sub_142bdece0(arg1, rdx_2, arg3.b) == 0)
            goto label_142bdea6f
else if (rcx == 1)
    int32_t rcx_11 = arg1[0x17]
    
    if (rsi s>= rcx_11)
        goto label_142bdea6f
    
    arg2.b = rcx_11 - (neg.d(arg1[1]) & rcx_11) s>= arg1[2]
    rax, arg3 = sub_142bde490(arg1, arg2.b)
    
    if (rax == 0)
        int32_t rcx_14 = arg1[0x17]
        cond:5_1 = rcx_14 - (neg.d(arg1[1]) & rcx_14) s>= arg1[2]
        goto label_142bdea5a
else
    if (rcx != 2)
        goto label_142bdea6f
    
    int32_t rdx = arg1[0x17]
    
    if (arg3 s<= rdx)
        goto label_142bdea6f
    
    int32_t rax_1 = arg1[1]
    rdx.b = ((rdx - 1 + rax_1) & neg.d(rax_1)) - rdx s>= arg1[2]
    rax, arg3 = sub_142bde490(arg1, rdx.b)
    
    if (rax == 0)
        int32_t rdx_1 = arg1[0x17]
        int32_t rax_3 = arg1[1]
        rdx_2 = 1
        cond:5_1 = ((rdx_1 - 1 + rax_3) & neg.d(rax_3)) - rdx_1 s>= arg1[2]
        goto label_142bdea5f
return 1
