// 函数: sub_1403e2060
// 地址: 0x1403e2060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9

if (arg2 s>= 2)
    if (arg2 s>= 4)
        if (arg2 s< 6)
            *(arg1 + 0x123c) = 1
            *(arg1 + 0x1244) = 0xbd71
            *(arg1 + 0x1240) = 0xa
            *(arg1 + 0x1234) = 0xc
            *(arg1 + 0x122c) = 2
            *(arg1 + 0x1254) = 8
        else if (arg2 s>= 8)
            *(arg1 + 0x123c) = 2
            *(arg1 + 0x1244) = 0xb333
            *(arg1 + 0x1240) = 0x10
            *(arg1 + 0x1234) = 0x10
            *(arg1 + 0x122c) = 4
            *(arg1 + 0x1254) = 0x20
        else
            *(arg1 + 0x123c) = 1
            *(arg1 + 0x1244) = 0xb852
            *(arg1 + 0x1240) = 0xc
            *(arg1 + 0x1234) = 0xe
            *(arg1 + 0x122c) = 3
            *(arg1 + 0x1254) = 0x10
        
        r9 = zx.q(*(arg1 + 0x11f8))
        *(arg1 + 0x1230) = 1
        *(arg1 + 0x1210) = (r9 * 5).d
        *(arg1 + 0x1260) = r9.d * 0x3d7
    else
        r9 = zx.q(*(arg1 + 0x11f8))
        *(arg1 + 0x123c) = 1
        *(arg1 + 0x1244) = 0xc28f
        *(arg1 + 0x1240) = 8
        *(arg1 + 0x1234) = 0xa
        *(arg1 + 0x122c) = 1
        *(arg1 + 0x1210) = (r9 * 5).d
        *(arg1 + 0x1230) = 0
        *(arg1 + 0x1260) = 0
        *(arg1 + 0x1254) = 4
    
    *(arg1 + 0x1248) = 0
else
    r9 = zx.q(*(arg1 + 0x11f8))
    *(arg1 + 0x1244) = 0xcccd
    *(arg1 + 0x123c) = 0
    *(arg1 + 0x1240) = 6
    *(arg1 + 0x1234) = 8
    *(arg1 + 0x122c) = 1
    *(arg1 + 0x1248) = 1
    *(arg1 + 0x1210) = (r9 * 3).d
    *(arg1 + 0x1254) = 2
    *(arg1 + 0x1260) = 0

int32_t rax_5 = *(arg1 + 0x1240)
int32_t rcx = *(arg1 + 0x1238)
*(arg1 + 0x1228) = arg2

if (rax_5 s< rcx)
    rcx = rax_5

*(arg1 + 0x1240) = rcx
*(arg1 + 0x1214) = (r9 * 5).d + (*(arg1 + 0x1210) << 1)
return 0
