// 函数: sub_142bae8c0
// 地址: 0x142bae8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
int32_t rbp = 0

if (*(*(r8 + 0x90) + 0x78) != 0x28 || *(arg1 + 0x371) == 0 || (*(r8 + 8) & 0x2000) != 0)
    *(arg1 + 0x373) = 0
else
    *(arg1 + 0x373) = not.b(*(arg1 + 0x1f4) u>> 2) & 1

uint64_t rdx = zx.q(*(arg1 + 0x104))
uint64_t r9 = zx.q(*(arg1 + 0x224))
*(arg1 + 0x374) = 0
uint32_t rcx_1 = (r9 + rdx).d * 2

if (rcx_1 u< 0x1e)
    rcx_1 = 0x1e

if (zx.d(*(arg1 + 0x144)) u> rcx_1)
    if (rcx_1 u> 0xffff)
        rcx_1 = 0xffff
    
    *(arg1 + 0x144) = rcx_1.w

arg1[0x6f].d = 0
arg1[0x70].d = 0
int32_t rax_4

if (rdx.w == 0)
    rax_4 = ((r9 << 3) + 0x12c).d
else
    uint32_t rcx_3 = (rdx * 5).d * 2
    
    if (rcx_3 u< 0x32)
        rcx_3 = 0x32
    
    uint32_t rdx_2 = r9.d u/ 0xa
    
    if (rdx_2 u< 0x32)
        rdx_2 = 0x32
    
    rax_4 = rdx_2 + rcx_3

*(arg1 + 0x37c) = rax_4
int32_t rax_5 = *(r8 + 0x10) * 0x64
int32_t rcx_4 = *(arg1 + 0x37c)
*(arg1 + 0x1a4) = 0

if (rcx_4 u> rax_5)
    rcx_4 = rax_5

int16_t rax_6 = *(arg1 + 0x17e)
*(arg1 + 0x37c) = rcx_4
*(arg1 + 0x384) = rcx_4
uint32_t (* rax_7)(void* arg1, int32_t arg2, int32_t arg3)

if (*(arg1 + 0x17c) == rax_6)
    arg1[0x6a] = sub_142ba8db0
    arg1[0x6b] = sub_142bac960
    arg1[0x6c] = sub_142bb06a0
    rax_7 = sub_142bac850
else
    arg1[0x6a] = sub_142ba8dc0
    arg1[0x6b] = sub_142bac970
    arg1[0x6c] = sub_142bb06b0
    rax_7 = sub_142bac860

arg1[0x6d] = rax_7
sub_142ba8b80(arg1)
sub_142ba8cf0(arg1, *(arg1 + 0x1dc))

while (true)
    int64_t rdx_4 = sx.q(arg1[0x42].d)
    int64_t r9_1 = arg1[0x41]
    uint64_t rcx_7 = zx.q(*(rdx_4 + r9_1))
    arg1[0x43].b = rcx_7.b
    int32_t r8_1 = sx.d(*(rcx_7 + &data_143684290))
    *(arg1 + 0x21c) = r8_1
    
    if (r8_1 s>= 0)
        goto label_142baeae0
    
    int32_t rax_8 = (rdx_4 + 1).d
    
    if (rax_8 s>= *(arg1 + 0x214))
        arg1[3].d = 0x83
    else
        *(arg1 + 0x21c) = 2 - zx.d(*(sx.q(rax_8) + r9_1)) * r8_1
    label_142baeae0:
        
        if (*(arg1 + 0x21c) + rdx_4.d s> *(arg1 + 0x214))
            arg1[3].d = 0x83
        else
            int32_t rax_12 = *(arg1 + 0x1c)
            uint32_t rcx_13 = zx.d(*(zx.q(arg1[0x43].b) + 0x143684190)) u>> 4
            arg1[6].d = rax_12 - rcx_13
            
            if (rax_12 - rcx_13 s>= 0)
            label_142baeb5d:
                char rax_19 = arg1[0x43].b
                
                if (rax_19 != 0x91)
                    *(arg1 + 0x34) = (zx.d(*(zx.q(rax_19) + 0x143684190)) & 0xf) + arg1[6].d
                else
                    int32_t* rcx_14 = *(*arg1 + 0x410)
                    
                    if (rcx_14 != 0)
                        *(arg1 + 0x34) = *rcx_14 + arg1[6].d
                
                if (*(arg1 + 0x34) s> arg1[4].d)
                    arg1[3].d = 0x82
                else
                    uint64_t rdx_5 = zx.q(arg1[0x43].b)
                    int64_t r8_2 = arg1[5]
                    arg1[0x44].b = 1
                    arg1[3].d = 0
                    int32_t* rdi_1 = r8_2 + (sx.q(arg1[6].d) << 2)
                    
                    if (rdx_5.d u> 0x92)
                        if (rdx_5.b u>= 0xe0)
                            sub_142bab0c0(arg1, rdi_1)
                        else if (rdx_5.b u>= 0xc0)
                            sub_142baac90(arg1, rdi_1)
                        else if (rdx_5.b u>= 0xb8)
                            sub_142bab6b0(arg1, rdi_1)
                        else if (rdx_5.b u< 0xb0)
                            sub_142bac730(arg1)
                        else
                            sub_142bab620(arg1, rdi_1)
                    else
                        switch (rdx_5)
                            case 0, 1, 2, 3, 4, 5
                                int16_t rcx_20 = (zx.w(rdx_5.b) & 1) << 0xe
                                int16_t rax_28 = rcx_20 ^ 0x4000
                                
                                if (rdx_5.b u< 4)
                                    *(arg1 + 0x1ca) = rcx_20
                                    *(arg1 + 0x1cc) = rax_28
                                    *(arg1 + 0x1c6) = rcx_20
                                    arg1[0x39].w = rax_28
                                
                                if ((rdx_5.b & 2) != 0)
                                    sub_142ba8b80(arg1)
                                else
                                    *(arg1 + 0x1ce) = rcx_20
                                    arg1[0x3a].w = rax_28
                                    sub_142ba8b80(arg1)
                            case 6, 7
                                if (sub_142bac650(arg1, rdi_1[1].w, *rdi_1, arg1 + 0x1ca) == 0)
                                    *(arg1 + 0x1c6) = *(arg1 + 0x1ca)
                                    sub_142ba8b80(arg1)
                            case 8, 9
                                if (sub_142bac650(arg1, rdi_1[1].w, *rdi_1, arg1 + 0x1ce) == 0)
                                    sub_142ba8b80(arg1)
                            case 0xa
                                int32_t rcx_27 = sx.d(*rdi_1)
                                int32_t rax_35 = sx.d(rdi_1[1].w)
                                
                                if (rcx_27 != 0 || rax_35 != 0)
                                    int32_t arg_8 = rcx_27
                                    sub_142b97340(&arg_8)
                                    int32_t temp3_1
                                    int32_t temp4_1
                                    temp3_1:temp4_1 = sx.q(arg_8)
                                    *(arg1 + 0x1ca) = ((temp4_1 + (temp3_1 & 3)) s>> 2).w
                                    int32_t temp5_1
                                    int32_t temp6_1
                                    temp5_1:temp6_1 = sx.q(rax_35)
                                    *(arg1 + 0x1cc) = ((temp6_1 + (temp5_1 & 3)) s>> 2).w
                                
                                *(arg1 + 0x1c6) = *(arg1 + 0x1ca)
                                sub_142ba8b80(arg1)
                            case 0xb
                                int32_t rcx_30 = sx.d(*rdi_1)
                                int32_t rax_45 = sx.d(rdi_1[1].w)
                                
                                if (rcx_30 != 0 || rax_45 != 0)
                                    int32_t arg_10 = rcx_30
                                    sub_142b97340(&arg_10)
                                    int32_t temp7_1
                                    int32_t temp8_1
                                    temp7_1:temp8_1 = sx.q(arg_10)
                                    *(arg1 + 0x1ce) = ((temp8_1 + (temp7_1 & 3)) s>> 2).w
                                    int32_t temp9_1
                                    int32_t temp10_1
                                    temp9_1:temp10_1 = sx.q(rax_45)
                                    arg1[0x3a].w = ((temp10_1 + (temp9_1 & 3)) s>> 2).w
                                    sub_142ba8b80(arg1)
                                else
                                    sub_142ba8b80(arg1)
                            case 0xc
                                *rdi_1 = sx.d(*(arg1 + 0x1ca))
                                rdi_1[1] = sx.d(*(arg1 + 0x1cc))
                            case 0xd
                                *rdi_1 = sx.d(*(arg1 + 0x1ce))
                                rdi_1[1] = sx.d(arg1[0x3a].w)
                            case 0xe
                                *(arg1 + 0x1ce) = *(arg1 + 0x1ca)
                                sub_142ba8b80(arg1)
                            case 0xf
                                sub_142baa350(arg1, rdi_1)
                            case 0x10
                                arg1[0x38].w = *rdi_1
                            case 0x11
                                *(arg1 + 0x1c2) = *rdi_1
                            case 0x12
                                *(arg1 + 0x1c4) = *rdi_1
                            case 0x13
                                arg2 = sub_142bac3b0(arg1, rdi_1)
                            case 0x14
                                arg2 = sub_142bac440(arg1, rdi_1)
                            case 0x15
                                arg2 = sub_142bac4d0(arg1, rdi_1)
                            case 0x16
                                arg2 = sub_142bac560(arg1, rdi_1)
                            case 0x17
                                int32_t rax_61 = *rdi_1
                                
                                if (rax_61 s>= 0)
                                    if (rax_61 s> 0xffff)
                                        rax_61 = 0xffff
                                    
                                    *(arg1 + 0x1d4) = rax_61
                                else
                                    arg1[3].d = 0x84
                            case 0x18
                                *(arg1 + 0x1dc) = 1
                                arg1[0x64] = sub_142bacb00
                            case 0x19
                                *(arg1 + 0x1dc) = 0
                                arg1[0x64] = sub_142bacb40
                            case 0x1a
                                arg1[0x3b].d = *rdi_1
                            case 0x1b
                                sub_142ba9770(arg1)
                            case 0x1c
                                sub_142baa8a0(arg1, rdi_1)
                            case 0x1d
                                *(arg1 + 0x1e4) = *rdi_1
                            case 0x1e
                                arg1[0x3d].d = *rdi_1
                            case 0x1f
                                *(arg1 + 0x1ec) = sub_142b93e80(*rdi_1, arg1[0x35].d)
                            case 0x20
                                rdi_1[1] = *rdi_1
                            case 0x22
                                *(arg1 + 0x34) = 0
                            case 0x23
                                int32_t rcx_40 = *rdi_1
                                *rdi_1 = rdi_1[1]
                                rdi_1[1] = rcx_40
                            case 0x24
                                *rdi_1 = *(arg1 + 0x1c)
                            case 0x25
                                int32_t rcx_41 = *rdi_1
                                int32_t rax_69
                                
                                if (rcx_41 s> 0)
                                    rax_69 = arg1[6].d
                                
                                if (rcx_41 s> 0 && rcx_41 s<= rax_69)
                                    *rdi_1 = *(r8_2 + (sx.q(rax_69 - rcx_41) << 2))
                                else if (*(arg1 + 0x315) == 0)
                                    *rdi_1 = 0
                                else
                                    arg1[3].d = 0x86
                                    *rdi_1 = 0
                            case 0x26
                                sub_142bab040(arg1, rdi_1)
                            case 0x27
                                arg2 = sub_142ba9230(arg1, rdi_1, arg2)
                            case 0x28, 0x7b, 0x83, 0x84, 0x8f, 0x90
                                sub_142bac730(arg1)
                            case 0x29
                                int16_t rcx_46 = *rdi_1
                                
                                if (rcx_46 u< *(arg1 + 0x44))
                                    char rax_72 = -9
                                    
                                    if (*(arg1 + 0x1ce) == 0)
                                        rax_72 = -1
                                    
                                    char* rdx_26 = arg1[0xc] + zx.q(rcx_46)
                                    char rcx_48 = rax_72 & 0xef
                                    
                                    if (arg1[0x3a].w == 0)
                                        rcx_48 = rax_72
                                    
                                    *rdx_26 &= rcx_48
                                else if (*(arg1 + 0x315) != 0)
                                    arg1[3].d = 0x86
                            case 0x2a
                                sub_142baa920(arg1, rdi_1)
                            case 0x2b
                                sub_142ba93f0(arg1, rdi_1)
                            case 0x2c
                                sub_142ba9840(arg1, rdi_1)
                            case 0x2d
                                int32_t rax_74 = arg1[0x4d].d
                                
                                if (rax_74 s> 0)
                                    arg1[0x4d].d = rax_74 - 1
                                    int64_t rcx_52 = sx.q(rax_74 - 1) * 3
                                    int64_t rax_77 = arg1[0x4e]
                                    *(rax_77 + (rcx_52 << 3) + 8) -= 1
                                    int32_t* rdx_30 = rax_77 + (rcx_52 << 3)
                                    arg1[0x44].b = 0
                                    
                                    if (rdx_30[2] s<= 0)
                                        sub_142ba9d60(arg1, *rdx_30, rdx_30[1])
                                    else
                                        arg1[0x4d].d += 1
                                        arg1[0x42].d = *(*(rdx_30 + 0x10) + 4)
                                else
                                    arg1[3].d = 0x88
                            case 0x2e, 0x2f
                                sub_142baabe0(arg1, rdi_1)
                            case 0x30, 0x31
                                sub_142baa620(arg1)
                            case 0x32, 0x33
                                arg2 = sub_142babd00(arg1)
                            case 0x34, 0x35
                                arg2 = sub_142baba90(arg1, rdi_1)
                            case 0x36, 0x37
                                arg2 = sub_142bac1a0(arg1, rdi_1)
                            case 0x38
                                sub_142babf00(arg1, rdi_1)
                            case 0x39
                                sub_142baa080(arg1)
                            case 0x3a, 0x3b
                                sub_142bab370(arg1, rdi_1)
                            case 0x3c
                                sub_142ba92f0(arg1)
                            case 0x3d
                                *(arg1 + 0x1dc) = 2
                                arg1[0x64] = sub_142bacac0
                            case 0x3e, 0x3f
                                sub_142baaee0(arg1, rdi_1, arg2)
                            case 0x40
                                sub_142bab4b0(arg1, rdi_1)
                            case 0x41
                                sub_142bab560(arg1, rdi_1)
                            case 0x42
                                uint64_t rcx_67 = zx.q(*rdi_1)
                                
                                if (rcx_67.d u< zx.d(arg1[0x56].w))
                                    *(arg1[0x57] + (rcx_67 << 2)) = rdi_1[1]
                                else if (*(arg1 + 0x315) != 0)
                                    arg1[3].d = 0x86
                            case 0x43
                                uint64_t rcx_69 = zx.q(*rdi_1)
                                
                                if (rcx_69.d u< zx.d(arg1[0x56].w))
                                    *rdi_1 = *(arg1[0x57] + (rcx_69 << 2))
                                else if (*(arg1 + 0x315) == 0)
                                    *rdi_1 = 0
                                else
                                    arg1[3].d = 0x86
                            case 0x44
                                int32_t rdx_41 = *rdi_1
                                
                                if (rdx_41 u< *(arg1 + 0x224))
                                    arg1[0x6c](arg1, rdx_41, zx.q(rdi_1[1]))
                                else if (*(arg1 + 0x315) != 0)
                                    arg1[3].d = 0x86
                            case 0x45
                                int32_t rdx_42 = *rdi_1
                                
                                if (rdx_42 u< *(arg1 + 0x224))
                                    *rdi_1 = arg1[0x6b](arg1, rdx_42)
                                else if (*(arg1 + 0x315) == 0)
                                    *rdi_1 = 0
                                else
                                    arg1[3].d = 0x86
                            case 0x46, 0x47
                                sub_142ba9b00(arg1, rdi_1)
                            case 0x48
                                sub_142bab830(arg1, rdi_1, arg2)
                            case 0x49, 0x4a
                                sub_142baaa40(arg1, rdi_1)
                            case 0x4b
                                *rdi_1 = arg1[0x6a](arg1)
                            case 0x4c
                                if (*(*(*arg1 + 0x90) + 0x78) != 0x23)
                                    *rdi_1 = arg1[0x2f].d
                                else
                                    *rdi_1 = arg1[0x6a](arg1)
                            case 0x4d
                                arg1[0x3c].b = 1
                            case 0x4e
                                arg1[0x3c].b = 0
                            case 0x4f
                                arg1[3].d = 0x87
                            case 0x50
                                int32_t rcx_78
                                rcx_78.b = *rdi_1 s< rdi_1[1]
                                *rdi_1 = rcx_78
                            case 0x51
                                int32_t rcx_79
                                rcx_79.b = *rdi_1 s<= rdi_1[1]
                                *rdi_1 = rcx_79
                            case 0x52
                                int32_t rcx_80
                                rcx_80.b = *rdi_1 s> rdi_1[1]
                                *rdi_1 = rcx_80
                            case 0x53
                                int32_t rcx_81
                                rcx_81.b = *rdi_1 s>= rdi_1[1]
                                *rdi_1 = rcx_81
                            case 0x54
                                int32_t rcx_82
                                rcx_82.b = *rdi_1 == rdi_1[1]
                                *rdi_1 = rcx_82
                            case 0x55
                                int32_t rcx_83
                                rcx_83.b = *rdi_1 != rdi_1[1]
                                *rdi_1 = rcx_83
                            case 0x56
                                int32_t rcx_85
                                rcx_85.b = (arg1[0x64](arg1, zx.q(*rdi_1), 0) & 0x7f) == 0x40
                                *rdi_1 = rcx_85
                            case 0x57
                                int32_t rax_95
                                rax_95.b = (arg1[0x64](arg1, zx.q(*rdi_1), 0) & 0x7f) == 0
                                *rdi_1 = rax_95
                            case 0x58
                                sub_142ba9ef0(arg1, rdi_1)
                            case 0x5a
                                int32_t rax_96
                                
                                if (*rdi_1 != 0)
                                    rax_96 = 1
                                
                                if (*rdi_1 == 0 || rdi_1[1] == 0)
                                    rax_96 = 0
                                
                                *rdi_1 = rax_96
                            case 0x5b
                                int32_t rax_97
                                
                                if (*rdi_1 == 0)
                                    rax_97 = 0
                                
                                if (*rdi_1 != 0 || rdi_1[1] != 0)
                                    rax_97 = 1
                                
                                *rdi_1 = rax_97
                            case 0x5c
                                int32_t rax_98
                                rax_98.b = *rdi_1 == 0
                                *rdi_1 = rax_98
                            case 0x5d, 0x71, 0x72
                                sub_142ba9600(arg1, rdi_1)
                            case 0x5e
                                arg1[0x3e].w = *rdi_1
                            case 0x5f
                                if (*rdi_1 u<= 6)
                                    *(arg1 + 0x1f2) = *rdi_1
                                else
                                    arg1[3].d = 0x84
                            case 0x60
                                *rdi_1 += rdi_1[1]
                            case 0x61
                                *rdi_1 -= rdi_1[1]
                            case 0x62
                                int32_t r8_9 = rdi_1[1]
                                
                                if (r8_9 != 0)
                                    *rdi_1 = sub_142b93e30(*rdi_1, 0x40, r8_9)
                                else
                                    arg1[3].d = 0x85
                            case 0x63
                                *rdi_1 = sub_142b93dd0(*rdi_1, rdi_1[1], 0x40)
                            case 0x64
                                int32_t rax_105 = *rdi_1
                                
                                if (rax_105 s< 0)
                                    *rdi_1 = neg.d(rax_105)
                            case 0x65
                                *rdi_1 = neg.d(*rdi_1)
                            case 0x66
                                *rdi_1 &= 0xffffffc0
                            case 0x67
                                *rdi_1 = (*rdi_1 + 0x3f) & 0xffffffc0
                            case 0x68, 0x69, 0x6a, 0x6b
                                *rdi_1 = arg1[0x64](arg1, zx.q(*rdi_1), 
                                    zx.q(*(arg1 + (sx.q(zx.d(rdx_5.b) - 0x68) << 2) + 0x1ac)))
                            case 0x6c, 0x6d, 0x6e, 0x6f
                                int32_t rcx_92 = *rdi_1
                                int32_t rdx_52 = *(arg1 + (sx.q(zx.d(rdx_5.b) - 0x6c) << 2) + 0x1ac)
                                
                                if (rcx_92 s< 0)
                                    int32_t rcx_94 = rcx_92 - rdx_52
                                    
                                    if (rcx_94 s> 0)
                                        rcx_94 = 0
                                    
                                    *rdi_1 = rcx_94
                                else
                                    int32_t rax_119 = rcx_92 + rdx_52
                                    int32_t rcx_93 = 0
                                    
                                    if (rax_119 s>= 0)
                                        rcx_93 = rax_119
                                    
                                    *rdi_1 = rcx_93
                            case 0x70
                                uint64_t rsi_1 = zx.q(*rdi_1)
                                
                                if (rsi_1.d u< *(arg1 + 0x224))
                                    *(arg1[0x45] + (rsi_1 << 2)) =
                                        sub_142b93e80(rdi_1[1], arg1[0x35].d)
                                else if (*(arg1 + 0x315) != 0)
                                    arg1[3].d = 0x86
                            case 0x73, 0x74, 0x75
                                sub_142ba94e0(arg1, rdi_1)
                            case 0x76
                                sub_142bacbb0(arg1, 0x4000, *rdi_1)
                                *(arg1 + 0x1dc) = 6
                                arg1[0x64] = sub_142bac9f0
                            case 0x77
                                sub_142bacbb0(arg1, 0x2d41, *rdi_1)
                                *(arg1 + 0x1dc) = 7
                                arg1[0x64] = sub_142baca50
                            case 0x78
                                if (rdi_1[1] != 0)
                                    sub_142baa8a0(arg1, rdi_1)
                            case 0x79
                                if (rdi_1[1] == 0)
                                    sub_142baa8a0(arg1, rdi_1)
                            case 0x7a
                                *(arg1 + 0x1dc) = 5
                                arg1[0x64] = sub_142bac9d0
                            case 0x7c
                                *(arg1 + 0x1dc) = 4
                                arg1[0x64] = sub_142bacb70
                            case 0x7d
                                *(arg1 + 0x1dc) = 3
                                arg1[0x64] = sub_142bac9a0
                            case 0x80
                                sub_142ba9950(arg1)
                            case 0x81
                                sub_142ba9a80(arg1, rdi_1)
                            case 0x82
                                sub_142ba9a00(arg1, rdi_1)
                            case 0x85
                                sub_142bab770(arg1, rdi_1)
                            case 0x86, 0x87
                                sub_142bab8f0(arg1, rdi_1)
                            case 0x88
                                sub_142ba9b90(arg1, rdi_1)
                            case 0x89
                                sub_142ba9dd0(arg1, rdi_1)
                            case 0x8a
                                int32_t rdx_63 = rdi_1[2]
                                int32_t rcx_109 = rdi_1[1]
                                rdi_1[2] = *rdi_1
                                rdi_1[1] = rdx_63
                                *rdi_1 = rcx_109
                            case 0x8b
                                int32_t rax_122 = rdi_1[1]
                                
                                if (rax_122 s> *rdi_1)
                                    *rdi_1 = rax_122
                            case 0x8c
                                int32_t rax_123 = rdi_1[1]
                                
                                if (rax_123 s< *rdi_1)
                                    *rdi_1 = rax_123
                            case 0x8d
                                int32_t rax_124 = *rdi_1
                                
                                if (rax_124 s>= 0)
                                    arg1[0x3f].d = zx.d(rax_124.w)
                            case 0x8e
                                sub_142ba9ff0(arg1, rdi_1)
                            case 0x91
                                if (*(*arg1 + 0x410) == 0)
                                    sub_142bac730(arg1)
                                else
                                    arg2 = sub_142ba9c80(arg1, rdi_1)
                            case 0x92
                                if (*(*arg1 + 0x410) == 0)
                                    sub_142bac730(arg1)
                                else
                                    *rdi_1 = 0x11
                    
                    int32_t rax_31 = arg1[3].d
                    
                    if (rax_31 == 0)
                        *(arg1 + 0x1c) = *(arg1 + 0x34)
                        
                        if (arg1[0x44].b != 0)
                            arg1[0x42].d += *(arg1 + 0x21c)
                        
                        rbp += 1
                        
                        if (rbp u> 0xf4240)
                            return 0x8b
                        
                        goto label_142baf92e
                    
                    if (rax_31 == 0x80)
                        int32_t* rdx_7 = arg1[0x4b]
                        
                        while (true)
                            if (rdx_7 u>= &rdx_7[zx.q(arg1[0x4a].d) * 6])
                                arg1[3].d = 0x80
                                goto label_142baf983
                            
                            if (rdx_7[4].b != 0 && arg1[0x43].b == rdx_7[3].b)
                                break
                            
                            rdx_7 = &rdx_7[6]
                        
                        int64_t rax_128 = sx.q(arg1[0x4d].d)
                        
                        if (rax_128.d s>= *(arg1 + 0x26c))
                            arg1[3].d = 0x86
                        else
                            int32_t* r8_13 = arg1[0x4e] + rax_128 * 0x18
                            *r8_13 = *(arg1 + 0x204)
                            int32_t rax_131 = arg1[0x42].d
                            r8_13[2] = 1
                            r8_13[1] = rax_131 + 1
                            *(r8_13 + 0x10) = rdx_7
                            
                            if (sub_142ba9d60(arg1, *rdx_7, rdx_7[1]) != 1)
                            label_142baf92e:
                                
                                if (arg1[0x42].d s>= *(arg1 + 0x214))
                                    if (arg1[0x4d].d s<= 0)
                                        break
                                    
                                    arg1[3].d = 0x83
                                else
                                    if (*(arg1 + 0x2cc) != 0)
                                        break
                                    
                                    continue
            else
                if (*(arg1 + 0x315) == 0)
                    int16_t i = 0
                    
                    if ((*(zx.q(arg1[0x43].b) + 0x143684190) & 0xf0) u> 0)
                        do
                            uint64_t i_1 = zx.q(i)
                            i += 1
                            *(arg1[5] + (i_1 << 2)) = 0
                        while (i u< zx.w(*(zx.q(arg1[0x43].b) + 0x143684190) u>> 4))
                    
                    arg1[6].d = 0
                    goto label_142baeb5d
                
                arg1[3].d = 0x81
    
label_142baf983:
    return zx.q(arg1[3].d)

return 0
