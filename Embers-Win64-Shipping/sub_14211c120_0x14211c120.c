// 函数: sub_14211c120
// 地址: 0x14211c120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdx_5

if (arg1[0x1a].d == *(arg1 + 0xfc))
label_14211c19e:
    rdx_5 = nullptr
else
    int32_t rbx_1 = *arg2
    int32_t rax_1 = sub_140b5ead0(rbx_1)
    void* rcx_1 = arg1[0x21]
    void* r8_1 = &arg1[0x20]
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_3 = *(r8_1 + (((sx.q(arg1[0x22].d) - 1) & sx.q(rax_1)) << 2))
    
    if (rax_3 == 0xffffffff)
    label_14211c19e_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_3) << 4) + arg1[0x19]
            
            if (*rdx_5 == rbx_1)
                break
            
            rax_3 = rdx_5[2]
            
            if (rax_3 == 0xffffffff)
                goto label_14211c19e_2
        
        if (rax_3 == 0xffffffff)
        label_14211c19e_2:
            rdx_5 = nullptr

void* rax_4 = &rdx_5[1]

if (rdx_5 == 0)
    rax_4 = nullptr

int32_t arg_8

if (rax_4 == 0)
    arg_8 = arg1[0x1a].d - *(arg1 + 0xfc)
    int32_t arg_18 = *arg2
    arg3 = sub_141c8fba0(&arg1[0x19], &arg_18, &arg_8)
else
    arg_8 = *rax_4

int64_t* rcx_3 = arg1[1]
int32_t arg_10 = arg2[1]
int32_t* rdx_7 = *rcx_3

if (&rdx_7[1] u> rcx_3[1])
    int32_t* rdx_8 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_8, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_8, 4)
else
    arg_8 = *rdx_7
    *rcx_3 += 4

int64_t* rcx_5 = arg1[1]
int32_t* rdx_9 = *rcx_5

if (&rdx_9[1] u<= rcx_5[1])
    arg_10 = *rdx_9
    *rcx_5 += 4
    return arg1

int32_t* rdx_10 = &arg_10

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, rdx_10, arg3)
    return arg1

(*(*arg1 + 0x150))(arg1, rdx_10, 4)
return arg1
