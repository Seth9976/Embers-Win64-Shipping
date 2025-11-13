// 函数: sub_141a29170
// 地址: 0x141a29170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x108)
int32_t rbx = 0
void* r10 = *(arg1 + 0x100)

if (i s> 0)
    void* r11_1 = arg1
    
    if (r10 != 0)
        r11_1 = r10
    
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        int32_t rax_4 = i_1 + rbx
        
        if (*((sx.q(rax_4) << 5) + r11_1) u< *arg2)
            rbx = rax_4 + rcx_1
    while (i s> 0)
    
    if (rbx s< 0 || rbx s>= *(arg1 + 0x108))
        goto label_141a29216
    
    goto label_141a291f7

int32_t rax_7
void* rdx_3

if (rbx s>= *(arg1 + 0x108))
label_141a29216:
    sub_141a2bb90(arg1, rbx, 1)
    void* rax_8 = *(arg1 + 0x100)
    void* rdx_5 = arg1
    
    if (rax_8 != 0)
        rdx_5 = rax_8
    
    rdx_3 = rdx_5 + (sx.q(rbx) << 5)
    rax_7 = *arg2
else
label_141a291f7:
    void* rdx_2 = arg1
    
    if (r10 != 0)
        rdx_2 = r10
    
    rdx_3 = rdx_2 + (sx.q(rbx) << 5)
    rax_7 = *arg2
    
    if (rax_7 u< *rdx_3)
        goto label_141a29216

*rdx_3 = rax_7
*(rdx_3 + 8) = *arg3
*(rdx_3 + 0x18) = arg3[1].q
return rdx_3 + 8
