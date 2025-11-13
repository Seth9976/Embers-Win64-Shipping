// 函数: sub_1420ee710
// 地址: 0x1420ee710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x240) == arg2)
    return 

int64_t* rdx = *(arg1 + 0x98)
int64_t* rbx_1 = &rdx[sx.q(*(arg1 + 0xa0))]
int64_t* r8
int32_t rbx_2

if (rbx_1 == rdx)
label_1420ee75e:
    rbx_2 = -1
label_1420ee763:
    void* rcx = *rdx
    char rax_1
    
    if (rcx != 0)
        rax_1 = sub_1420d7a20(rcx)
    
    if (rcx == 0 || rax_1 != 0)
        r8 = *(arg1 + 0x98)
        int64_t rax_4 = sx.q(rbx_2)
        int64_t rcx_4 = *r8
        *r8 = r8[rax_4]
        r8[rax_4] = rcx_4
    else
        *(*(arg1 + 0x98) + (sx.q(rbx_2) << 3)) = 0
        int64_t rbx_3 = sx.q(*(arg1 + 0xa0))
        int32_t rax_3 = (rbx_3 + 1).d
        *(arg1 + 0xa0) = rax_3
        
        if (rax_3 s> *(arg1 + 0xa4))
            sub_1405a4d70(arg1 + 0x98)
        
        int64_t rdx_2 = *(arg1 + 0x98)
        memmove(rdx_2 + 8, rdx_2, (rbx_3 << 3).d)
        **(arg1 + 0x98) = arg2
else
    while (true)
        rbx_1 -= 8
        
        if (*rbx_1 == arg2)
            break
        
        if (rbx_1 == rdx)
            goto label_1420ee75e
    
    rbx_2 = ((rbx_1 - rdx) s>> 3).d
    
    if (rbx_2 != 0)
        goto label_1420ee763
int64_t* rcx_5 = *(arg1 + 0x240)

if (rcx_5 != 0)
    r8.b = 1
    sub_141dbe590(rcx_5, 0, r8.b)

*(arg1 + 0x240) = arg2
