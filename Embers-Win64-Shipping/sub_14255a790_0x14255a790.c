// 函数: sub_14255a790
// 地址: 0x14255a790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]

if (&arg1[3] != &arg2[3])
    int64_t rdi_1 = sx.q(arg2[4].d)
    int32_t r8_1 = *(arg1 + 0x24)
    int64_t rbp_1 = arg2[3]
    arg1[4].d = rdi_1.d
    
    if (rdi_1.d != 0 || r8_1 != 0)
        sub_1405c4a00(&arg1[3], rdi_1.d, r8_1)
        memcpy(arg1[3], rbp_1, (rdi_1 << 3).d)
    else
        *(arg1 + 0x24) = rdi_1.d

sub_14255aad0(&arg1[6], &arg2[6])
sub_141fd8460(&arg1[0x14], &arg2[0x14])
sub_141fd8460(&arg1[0x18], &arg2[0x18])
sub_141fd8460(&arg1[0x1c], &arg2[0x1c])
sub_141fd8460(&arg1[0x20], &arg2[0x20])
arg1[0x24] = arg2[0x24]
arg1[0x25].d = arg2[0x25].d
*(arg1 + 0x12c) = *(arg2 + 0x12c)
*(arg1 + 0x134) = *(arg2 + 0x134)
arg1[0x27].d = arg2[0x27].d
*(arg1 + 0x13c) = *(arg2 + 0x13c)
*(arg1 + 0x144) = *(arg2 + 0x144)
arg1[0x29] = arg2[0x29]
arg1[0x2a].d = arg2[0x2a].d
*(arg1 + 0x154) = *(arg2 + 0x154)
*(arg1 + 0x15c) = *(arg2 + 0x15c)
arg1[0x2c].d = arg2[0x2c].d
*(arg1 + 0x164) = *(arg2 + 0x164)
arg1[0x2d].b = arg2[0x2d].b
*(arg1 + 0x169) = *(arg2 + 0x169)
*(arg1 + 0x16c) ^= (*(arg2 + 0x16c) ^ *(arg1 + 0x16c)) & 1
arg1[0x2e].b = arg2[0x2e].b
*(arg1 + 0x174) ^= (*(arg2 + 0x174) ^ *(arg1 + 0x174)) & 1
arg1[0x2f].d = arg2[0x2f].d
*(arg1 + 0x17c) = *(arg2 + 0x17c)
sub_141fd8460(&arg1[0x30], &arg2[0x30])
arg1[0x34].d = arg2[0x34].d
*(arg1 + 0x1a4) = *(arg2 + 0x1a4)
arg1[0x35] = arg2[0x35]
arg1[0x36].d = arg2[0x36].d
*(arg1 + 0x1b4) = *(arg2 + 0x1b4)
*(arg1 + 0x1bc) = *(arg2 + 0x1bc)
arg1[0x38] = arg2[0x38]
sub_141fd8460(&arg1[0x39], &arg2[0x39])
arg1[0x3d].d = arg2[0x3d].d
*(arg1 + 0x1ec) = *(arg2 + 0x1ec)
arg1[0x3e] = arg2[0x3e]
sub_141fd8460(&arg1[0x3f], &arg2[0x3f])
arg1[0x43].d = arg2[0x43].d
*(arg1 + 0x21c) = *(arg2 + 0x21c)
arg1[0x44] = arg2[0x44]
arg1[0x45].d = arg2[0x45].d
*(arg1 + 0x22c) = *(arg2 + 0x22c)
*(arg1 + 0x234) = *(arg2 + 0x234)
arg1[0x47] = arg2[0x47]
sub_141fd8460(&arg1[0x48], &arg2[0x48])
arg1[0x4c].d = arg2[0x4c].d
*(arg1 + 0x264) = *(arg2 + 0x264)
arg1[0x4d] = arg2[0x4d]
arg1[0x4e] = arg2[0x4e]
return arg1
