// 函数: ??$AdjustClassnameW@$0BAA@@@YAXPEAGAEAY0BAA@G@Z
// 地址: 0x1408db440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140780bc0(arg1, arg2)

if (&arg1[2] != &arg2[2])
    int64_t rbp_1 = sx.q(arg2[3].d)
    int64_t r14_1 = arg2[2]
    int32_t r8_1 = *(arg1 + 0x1c)
    arg1[3].d = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1406387e0(&arg1[2], rbp_1.d, r8_1)
        memcpy(arg1[2], r14_1, (rbp_1 << 3).d)
    else
        *(arg1 + 0x1c) = rbp_1.d

sub_14086c240(&arg1[4], &arg2[4])
sub_14086c240(&arg1[6], &arg2[6])

if (&arg1[8] != &arg2[8])
    int64_t rbp_2 = sx.q(arg2[9].d)
    int64_t r14_2 = arg2[8]
    int32_t r8_4 = *(arg1 + 0x4c)
    arg1[9].d = rbp_2.d
    
    if (rbp_2.d != 0 || r8_4 != 0)
        sub_1405c4a90(&arg1[8], rbp_2.d, r8_4)
        memcpy(arg1[8], r14_2, (rbp_2 << 2).d)
    else
        *(arg1 + 0x4c) = rbp_2.d

sub_140780bc0(&arg1[0xa], &arg2[0xa])

if (&arg1[0xc] != &arg2[0xc])
    int64_t rbp_3 = sx.q(arg2[0xd].d)
    int64_t r14_3 = arg2[0xc]
    int32_t r8_7 = *(arg1 + 0x6c)
    arg1[0xd].d = rbp_3.d
    
    if (rbp_3.d != 0 || r8_7 != 0)
        sub_1407c3650(&arg1[0xc], rbp_3.d, r8_7)
        memcpy(arg1[0xc], r14_3, (rbp_3 * 0xc).d)
    else
        *(arg1 + 0x6c) = rbp_3.d

*(arg1 + 0x70) = *(arg2 + 0x70)
arg1[0x10] = arg2[0x10]
arg1[0x11].d = arg2[0x11].d
sub_14086c240(&arg1[0x12], &arg2[0x12])
arg1[0x14] = arg2[0x14]
return arg1
