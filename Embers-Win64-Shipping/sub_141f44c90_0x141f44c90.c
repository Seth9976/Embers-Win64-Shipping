// 函数: sub_141f44c90
// 地址: 0x141f44c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x14e) & 1) != 0)
    int64_t rcx = arg1[0x1f]
    arg1[0x1f] = arg1[0x18]
    arg1[0x18] = rcx
    
    if (&arg1[0x1e] != &arg1[0x19])
        int64_t zmm1 = arg1[0x1e]
        arg1[0x1e] = arg1[0x19]
        arg1[0x19] = zmm1
    
    uint8_t rsi_1 = *(arg1 + 0x14c)
    
    if (rsi_1 s< 0)
        *(arg1 + 0x11c) = data_143dbb1f8.q
        *(arg1 + 0x124) = data_143dbb200
    
    char rbp_1 = *(arg1 + 0x14d) & 1
    
    if (rbp_1 != 0)
        arg1[0x25] = data_143dbb208
        arg1[0x26].d = data_143dbb210
    
    uint8_t rdi_1 = rsi_1 u>> 6 & 1
    
    if (arg1[0x18] == 0 || rdi_1 != 0)
        sub_141f32b40(arg1, arg1[0x1f], &data_143f3f280, arg1[0x1e])
        char rax = *(arg1 + 0x14c)
        *(arg1 + 0x14d) &= 0xfe
        *(arg1 + 0x14d) |= rbp_1
        *(arg1 + 0x14c) = ((((rax & 0x3f) | rdi_1 << 6) ^ rsi_1) & 0x7f) ^ rsi_1
    else
        (*(*arg1 + 0x400))(arg1, &data_143a2de54)
    
    *(arg1 + 0x14e) &= 0xfe

if (*(arg1 + 0x14d) s< 0)
    sub_1405c6ac0(arg1, 1, 0)
    *(arg1 + 0x14d) &= 0x7f
