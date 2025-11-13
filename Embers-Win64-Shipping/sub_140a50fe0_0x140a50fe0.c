// 函数: sub_140a50fe0
// 地址: 0x140a50fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x15] += arg3
int64_t rbp = arg3
int64_t rsi = arg1[0x1a]
int64_t r15 = arg2

if (arg3 s< rsi)
    for (int64_t i = rsi - arg1[0x18]; rbp s> i; i = arg1[0x1a] - arg1[0x18])
        int64_t r14_1 = arg1[0x18]
        int64_t rax_3 = r14_1 + i
        arg1[0x18] = rax_3
        
        if (rax_3 s> arg1[0x19])
            sub_140a4f990(&arg1[0x17])
        
        int512_t zmm0 = memcpy(arg1[0x17] + r14_1, r15, i.d)
        rbp -= i
        r15 += i
        sub_140a45450(arg1, zmm0)
    
    if (rbp != 0)
        sub_140a3f290(&arg1[0x17], r15, rbp)
else
    sub_140a45450(arg1, arg4)
    uint8_t rax = (*(*arg1 + 0x218))(arg1, r15, rbp)
    
    if (rax == 0)
        *(arg1 + 0x29) |= 1
        
        if (arg1[0x1b].b == rax && ((arg1[0x14].d u>> 5).b & 1) == 0)
            arg1[0x1b].b = 0
