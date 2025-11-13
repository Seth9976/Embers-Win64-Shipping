// 函数: sub_14088f910
// 地址: 0x14088f910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x158) = *arg2
*(arg1 + 0x168) = arg2[1]
*(arg1 + 0x178) = arg2[2]

if (&arg1[0x31] != &arg2[3])
    int32_t r8_1 = *(arg1 + 0x1cc)
    int64_t rbp_1 = sx.q(arg2[7].d)
    arg1[0x39].d = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_14088f7d0(&arg1[0x31], rbp_1.d, r8_1)
        memcpy(&arg1[0x31], &arg2[3], (rbp_1 << 4).d)
    else
        *(arg1 + 0x1cc) = 4

*(arg1 + 0x1d0) = *(arg2 + 0x78)
*(arg1 + 0x1e0) = *(arg2 + 0x88)
arg1[0x3e] = *(arg2 + 0x98)
arg1[0x3f] = arg2[0xa].q
arg1[0x40] = *(arg2 + 0xa8)
arg1[0x41] = arg2[0xb].q
arg1[0x42].d = *(arg2 + 0xb8)
*(arg1 + 0x214) = *(arg2 + 0xbc)
arg1[0x43].d = arg2[0xc].d
*(arg1 + 0x21c) = *(arg2 + 0xc4)
return sub_1419ba620(arg1) __tailcall
