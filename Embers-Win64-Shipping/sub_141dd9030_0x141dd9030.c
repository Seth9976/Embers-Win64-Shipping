// 函数: sub_141dd9030
// 地址: 0x141dd9030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (&arg1[6] != arg2)
    int64_t rbx_1 = sx.q(arg2[1].d)
    int64_t rbp_1 = *arg2
    int32_t r8_1 = arg1[9]
    arg1[8] = rbx_1.d
    
    if (rbx_1.d != 0 || r8_1 != 0)
        sub_1409da0d0(&arg1[6], rbx_1.d, r8_1)
        memcpy(*(arg1 + 0x18), rbp_1, (rbx_1 * 0x60).d)
    else
        arg1[9] = rbx_1.d

arg1[0x19] &= 0xfffffffb
int32_t i = 0
int32_t rcx_2 = arg1[0x19]

if (arg1[8] s> 0)
    int64_t r14_1 = 0
    
    do
        void* rbx_4 = r14_1 * 0x60 + *(arg1 + 0x18)
        *(rbx_4 + 8) = arg1[0x18]
        char rax_2 = sub_141dcd090(rbx_4)
        int32_t rcx_4 = arg1[0x19]
        r14_1 += 1
        int32_t rax = (((zx.d(rax_2) << 2 | rcx_4) ^ rcx_4) & 4) ^ rcx_4
        arg1[0x19] = rax
        float temp0_1 = *(rbx_4 + 4)
        0f - temp0_1
        int32_t rcx_5
        rcx_5.b = 0f < temp0_1
        i += 1
        rcx_2 = (((rcx_5 | rax) ^ rax) & 1) ^ rax
        arg1[0x19] = rcx_2
    while (i s< arg1[8])

if ((rcx_2.b & 4) == 0 && (rcx_2.b & 2) == 0)
    *arg1 &= 0xfffffffe
    return 

*arg1 &= 0xfffffffe
*arg1 |= 1
