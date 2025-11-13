// 函数: sub_142555d10
// 地址: 0x142555d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
char* r15 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0xc
    int32_t i
    
    do
        char* r8 = r15
        r15 = &r15[0x28]
        *r8 = rbx_1[-3].b
        *(r8 + 4) = rbx_1[-2]
        *(r8 + 8) = rbx_1[-1]
        *(r8 + 0xc) ^= (*(r8 + 0xc) ^ *rbx_1) & 1
        int32_t rcx_3 = ((*rbx_1 ^ *(r8 + 0xc)) & 2) ^ *(r8 + 0xc)
        *(r8 + 0xc) = rcx_3
        int32_t rdx_3 = ((rcx_3 ^ *rbx_1) & 4) ^ rcx_3
        *(r8 + 0xc) = rdx_3
        *(r8 + 0xc) = ((rdx_3 ^ *rbx_1) & 8) ^ rdx_3
        *(r8 + 0x10) = *(rbx_1 + 4)
        
        if (&r8[0x18] != &rbx_1[3])
            int64_t rsi_1 = sx.q(rbx_1[5])
            int64_t r14_2 = *(rbx_1 + 0xc)
            int32_t r8_1 = *(r8 + 0x24)
            *(r8 + 0x20) = rsi_1.d
            
            if (rsi_1.d != 0 || r8_1 != 0)
                sub_1405c4a00(&r8[0x18], rsi_1.d, r8_1)
                memcpy(*(r8 + 0x18), r14_2, (rsi_1 << 3).d)
            else
                *(r8 + 0x24) = 0
        
        rbx_1 = &rbx_1[0xa]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
