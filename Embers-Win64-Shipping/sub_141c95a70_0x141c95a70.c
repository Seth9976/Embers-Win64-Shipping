// 函数: sub_141c95a70
// 地址: 0x141c95a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdx_5

if (arg1[0x19].d == *(arg1 + 0xf4))
label_141c95aed:
    rdx_5 = nullptr
else
    int32_t rbx_1 = *arg2
    int32_t rax_1 = sub_140b5ead0(rbx_1)
    void* rcx_1 = arg1[0x20]
    void* r8_1 = &arg1[0x1f]
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_3 = *(r8_1 + (((sx.q(arg1[0x21].d) - 1) & sx.q(rax_1)) << 2))
    
    if (rax_3 == 0xffffffff)
    label_141c95aed_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_3) << 4) + arg1[0x18]
            
            if (*rdx_5 == rbx_1)
                break
            
            rax_3 = rdx_5[2]
            
            if (rax_3 == 0xffffffff)
                goto label_141c95aed_2
        
        if (rax_3 == 0xffffffff)
        label_141c95aed_2:
            rdx_5 = nullptr

void* rax_4 = &rdx_5[1]

if (rdx_5 == 0)
    rax_4 = nullptr

int32_t rcx_2

if (rax_4 == 0)
    rcx_2 = -1
else
    rcx_2 = *rax_4

int32_t arg_8 = rcx_2
int32_t arg_10

if (rcx_2 == 0xffffffff)
    arg_8 = arg1[0x19].d - *(arg1 + 0xf4)
    arg_10 = *arg2
    arg3 = sub_141c8fba0(&arg1[0x18], &arg_10, &arg_8)

int64_t* rcx_4 = arg1[1]
int32_t* rdx_7 = *rcx_4

if (&rdx_7[1] u> rcx_4[1])
    int32_t* rdx_8 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_8, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_8, 4)
else
    arg_8 = *rdx_7
    *rcx_4 += 4

int32_t rcx_6
rcx_6.b = arg2[1] == 0
bool cond:2 = (rcx_6.b & sub_140b5b8a0(*arg2, 0)) == 0
int64_t* rcx_7 = arg1[1]

if (cond:2)
    arg_10 = arg2[1]
else
    arg_10 = 0

int32_t* rdx_9 = *rcx_7

if (&rdx_9[1] u> rcx_7[1])
    int32_t* rdx_10 = &arg_10
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_10, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_10, 4)
else
    arg_10 = *rdx_9
    *rcx_7 += 4

return arg1
