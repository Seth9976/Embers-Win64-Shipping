// 函数: sub_1409644b0
// 地址: 0x1409644b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
*arg2 = 0
arg2[1] = 0
int32_t rsi = arg1[0x1a].d
int32_t rbp = *(arg1 + 0xcc)
int64_t rax = sub_14097be70(*(arg1 + 0xd4))
int64_t r8 = *arg1
(*(r8 + 0x68))(arg1, arg3, r8)
int64_t rdx = *arg1
int32_t var_38 = rsi
int32_t var_40 = rbp
int64_t var_48 = rax
int64_t var_28
sub_140a2e390(&var_28, 
    IsRecording: %d\n DataReady: 0x%08x State:%s\n UncompressedBytes: %d\n CompressedBytes: %d\n", 
    zx.q((*(rdx + 0x108))(arg1, rdx)))
int32_t var_20

if (arg2 == &var_28)
    int64_t rcx_5 = var_28
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
else
    int64_t rcx_4 = *arg2
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *arg2 = var_28
    arg2[1].d = var_20
    int32_t var_1c
    *(arg2 + 0xc) = var_1c

arg1[4].d
sub_140a2e390(&var_28, u"Remainder[%d] %d\n", 0)

if (var_20 != 0)
    r15 = var_20 - 1

sub_140a20ba0(arg2, var_28, r15)
int64_t rcx_8 = var_28

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg2
