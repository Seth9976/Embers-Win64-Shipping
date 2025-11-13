// 函数: sub_141869430
// 地址: 0x141869430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
int32_t rax = arg1[0x16].d
int64_t arg_8 = rbx

if (rax == *(arg1 + 0xdc))
label_1418694c4:
    arg_8.d = arg1[0x16].d - *(arg1 + 0xdc)
    int64_t* var_28 = arg2
    int64_t* var_20_1 = &arg_8
    void arg_10
    arg3 = sub_140a5c330(&arg1[0x15], &arg_10, &var_28, nullptr)
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + arg_8:4.d
    void* r8_1 = &arg1[0x1c]
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_4 = *(r8_1 + (((sx.q(arg1[0x1e].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
        goto label_1418694c4
    
    int64_t r8_2 = arg1[0x15]
    
    while (true)
        int64_t rdx_3 = sx.q(rax_4) * 5
        
        if (*(r8_2 + (rdx_3 << 2)) == rbx)
            break
        
        rax_4 = *(r8_2 + (rdx_3 << 2) + 0xc)
        
        if (rax_4 == 0xffffffff)
            goto label_1418694c4
    
    if (rax_4 == 0xffffffff)
        goto label_1418694c4

int64_t rbx_1 = *arg2
int32_t rax_7 = arg1[0x16].d
arg_8 = rbx_1
void* const rcx_7

if (rax_7 == *(arg1 + 0xdc))
label_141869550:
    rcx_7 = nullptr
else
    int32_t rax_9 = sub_140b5ead0(rbx_1.d) + arg_8:4.d
    void* r8_4 = &arg1[0x1c]
    void* rcx_5 = *(r8_4 + 8)
    
    if (rcx_5 != 0)
        r8_4 = rcx_5
    
    int32_t rax_11 = *(r8_4 + (((sx.q(arg1[0x1e].d) - 1) & sx.q(rax_9)) << 2))
    
    if (rax_11 == 0xffffffff)
    label_141869550_1:
        rcx_7 = nullptr
    else
        int64_t r8_5 = arg1[0x15]
        
        while (true)
            int64_t rdx_8 = sx.q(rax_11) * 5
            rcx_7 = r8_5 + (rdx_8 << 2)
            
            if (*(r8_5 + (rdx_8 << 2)) == rbx_1)
                break
            
            rax_11 = *(rcx_7 + 0xc)
            
            if (rax_11 == 0xffffffff)
                goto label_141869550_2
        
        if (rax_11 == 0xffffffff)
        label_141869550_2:
            rcx_7 = nullptr

int64_t* rcx_8 = arg1[1]
int32_t* r8_6 = *rcx_8

if (&r8_6[1] u<= rcx_8[1])
    *(rcx_7 + 8) = *r8_6
    int64_t* rax_14 = arg1[1]
    *rax_14 += 4
    return arg1

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, rcx_7 + 8, arg3)
    return arg1

(*(*arg1 + 0x150))(arg1, rcx_7 + 8, 4)
return arg1
