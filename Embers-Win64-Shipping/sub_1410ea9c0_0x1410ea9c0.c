// 函数: sub_1410ea9c0
// 地址: 0x1410ea9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419925c0(arg1, arg2)
sub_14108bb70(arg1 + 0x118)
int16_t* rbx = arg1 + 0x210
__builtin_memset(rbx, 0, 0x1c)
*(arg1 + 0x22c) = 0
*(arg1 + 0x234) = 0xffff
*(arg1 + 0x23c) = 0
sub_141396000(arg1 + 0x118, arg2[3])
sub_141396480(arg2, arg1 + 0x234)
wchar16 const (** rdi)[0xf] = &data_1439b5600
int64_t i_1 = 7
int64_t i

do
    sub_1419c7530(rbx, arg2[3], *rdi, 0)
    rbx = &rbx[2]
    rdi = &rdi[1]
    i = i_1
    i_1 -= 1
while (i != 1)
sub_1419c7530(arg1 + 0x22c, arg2[3], u"gLpv3DTextureSampler", 0)
sub_1419c7530(arg1 + 0x230, arg2[3], u"gAOVolumeTexture", 0)
sub_1419c7530(arg1 + 0x236, arg2[3], u"PreIntegratedGF", 0)
sub_1419c7530(arg1 + 0x23a, arg2[3], u"PreIntegratedGFSampler", 0)
return arg1
