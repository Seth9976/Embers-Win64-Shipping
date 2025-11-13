// 函数: sub_141df60d0
// 地址: 0x141df60d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
*arg3 = 0
int64_t rcx_3
void* rbx_3
void* rbx_4

if (arg2 s>= 0)
    void* rbx_2 = arg1 + 0x158 + (sx.q(*(arg1 + 0x208)) << 4)
    
    for (int32_t i = *(rbx_2 + 8); i s<= rsi.d; i = *(rbx_2 + 8))
        *(rbx_2 + 8) = i + 1
        
        if (i + 1 s> *(rbx_2 + 0xc))
            sub_1405fdd60(rbx_2)
        
        int64_t rcx_1 = sx.q(i) * 0x70
        int64_t* rcx_2 = rcx_1 + *rbx_2
        
        if (rcx_1 != neg.q(*rbx_2))
            *rcx_2 = 0
            rcx_2[1] = 0
            rcx_2[2].d = 0xffffffff
            __builtin_memset(&rcx_2[3], 0, 0x11)
            __builtin_memset(rcx_2 + 0x2c, 0, 0x3c)
            rcx_2[0xd] = &data_143f39940
    
    rbx_3 = *rbx_2
    rcx_3 = rsi * 0x70
    rbx_4 = rbx_3 + rcx_3
    *arg3 = rbx_4

if (arg2 s< 0 || rbx_3 == neg.q(rcx_3))
    rbx_4 = arg1 + 0x138 + (sx.q(*(arg1 + 0x208)) << 4)

int64_t rdi_1 = sx.q(*(rbx_4 + 8))
int32_t rax_7 = (rdi_1 + 1).d
*(rbx_4 + 8) = rax_7

if (rax_7 s> *(rbx_4 + 0xc))
    sub_140775520(rbx_4)

int64_t* result = *rbx_4 + rdi_1 * 0x48

if (result == 0)
    return 0

*result = 0
result[1] = 0
result[2] = 0x3f800000
result[3].d = 0x3f800000
*(result + 0x1c) = 0
result[7] = 0
result[8].b = 0
*(result + 0x44) = 0
return result
