// 函数: sub_141219030
// 地址: 0x141219030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419925c0(arg1, arg2)
int64_t rdi = 0
int16_t* r14 = arg1 + 0x134
__builtin_memset(arg1 + 0x118, 0, 0x74)
int16_t* rsi = arg1 + 0x16c
int64_t r15 = 0
int64_t i_2 = 7
int64_t i

do
    sub_1419c7530(&r14[-0xe], arg2[3], *(r15 + &data_1439b6378), 0)
    sub_1419c7530(r14, arg2[3], *(r15 + &data_1439b63b0), 0)
    r14 = &r14[2]
    r15 += 8
    i = i_2
    i_2 -= 1
while (i != 1)
sub_1419c7530(arg1 + 0x150, arg2[3], u"gLpv3DTextureSampler", 0)
sub_1419c7530(arg1 + 0x154, arg2[3], u"gVplListHeadBuffer", 0)
sub_1419c7530(arg1 + 0x158, arg2[3], u"RWVplListHeadBuffer", 0)
sub_1419c7530(arg1 + 0x15c, arg2[3], u"gVplListBuffer", 0)
sub_1419c7530(arg1 + 0x160, arg2[3], u"RWVplListBuffer", 0)
int64_t i_3 = 2
int64_t i_1

do
    sub_1419c7530(&rsi[-4], arg2[3], *(rdi + &data_1439b63e8), 0)
    sub_1419c7530(rsi, arg2[3], *(rdi + &data_1439b63f8), 0)
    rsi = &rsi[2]
    rdi += 8
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
sub_1419c7530(arg1 + 0x178, arg2[3], u"RWGvListBuffer", 0)
sub_1419c7530(arg1 + 0x180, arg2[3], u"RWGvListHeadBuffer", 0)
sub_1419c7530(arg1 + 0x174, arg2[3], u"gGvListBuffer", 0)
sub_1419c7530(arg1 + 0x17c, arg2[3], u"gGvListHeadBuffer", 0)
sub_1419c7530(arg1 + 0x184, arg2[3], u"gAOVolumeTextureRW", 0)
sub_1419c7530(arg1 + 0x188, arg2[3], u"gAOVolumeTexture", 0)
return arg1
