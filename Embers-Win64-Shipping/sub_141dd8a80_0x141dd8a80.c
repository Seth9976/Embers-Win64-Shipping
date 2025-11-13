// 函数: sub_141dd8a80
// 地址: 0x141dd8a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (&arg1[2] != arg2)
    int64_t rbx_1 = sx.q(arg2[1].d)
    int64_t rbp_1 = *arg2
    int32_t r8_1 = arg1[5]
    arg1[4] = rbx_1.d
    
    if (rbx_1.d != 0 || r8_1 != 0)
        sub_140809010(&arg1[2], rbx_1.d, r8_1)
        memcpy(*(arg1 + 8), rbp_1, (rbx_1 * 0x48).d)
    else
        arg1[5] = rbx_1.d

arg1[0x19] &= 0xfffffffd
int32_t i = 0
int32_t rcx_2 = arg1[0x19]

if (arg1[4] s> 0)
    int64_t r14_1 = 0
    
    do
        void* rbx_2 = *(arg1 + 8) + r14_1 * 0x48
        char rax_2 = sub_141dcd090(rbx_2)
        int32_t rcx_5 = arg1[0x19]
        r14_1 += 1
        int32_t rax = ((((zx.d(rax_2) * 2) | rcx_5) ^ rcx_5) & 2) ^ rcx_5
        arg1[0x19] = rax
        float temp0_1 = *(rbx_2 + 4)
        0f - temp0_1
        int32_t rcx_6
        rcx_6.b = 0f < temp0_1
        i += 1
        rcx_2 = (((rcx_6 | rax) ^ rax) & 1) ^ rax
        arg1[0x19] = rcx_2
    while (i s< arg1[4])

if ((rcx_2.b & 4) == 0 && (rcx_2.b & 2) == 0)
    *arg1 &= 0xfffffffe
    return 

*arg1 &= 0xfffffffe
*arg1 |= 1
