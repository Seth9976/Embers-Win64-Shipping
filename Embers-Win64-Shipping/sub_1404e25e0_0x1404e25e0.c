// 函数: sub_1404e25e0
// 地址: 0x1404e25e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419cfc90(arg1)
sub_1419db640()
int32_t rsi = 0
data_143f20940 = &data_143f21a98
data_143f20938 = 0
data_143f20930 = &data_142d54980
data_143f20948 = u"FVisualizeTexturePS"
sub_140b58260(&data_143f20950, u"FVisualizeTexturePS", 1)
sub_140b4c620(&data_143f20958, &data_143f20950)
sub_140b4c820(&data_143f20960, u"/Engine/Private/Tools/VisualizeTexture.usf")
data_143f20968 = u"/Engine/Private/Tools/VisualizeTexture.usf"
data_143f20970 = u"VisualizeTexturePS"
data_143f20978 = 3
data_143f20988 = sub_1405e13f0
data_143f2097c = 0x118
data_143f20990 = sub_1419cadd0
data_143f20998 = sub_1419d2e60
data_143f209a0 = sub_1419d86f0
data_143f209a8 = sub_1405948d0
data_143f20980 = 9
data_143f209b0 = &data_143f1d9a0
data_143f209b8 = 0
data_143f209c0 = 0
data_143f209c8 = &data_143f20930
__builtin_memset(&data_143f209d8, 0, 0x2c)
data_143f20a04 = 0x80
data_143f20a08 = 0xffffffff
data_143f20a0c = 0
data_143f20a18 = 0
data_143f20a20 = 0
sub_140b51dc0(&data_143f21a98)
void* rax = data_143f1da58
data_143f209d0 = 0

if (rax != 0)
    *(rax + 8) = &data_143f209b8
    rax = data_143f1da58

data_143f209b8 = rax
data_143f209c0 = &data_143f1da58
data_143f1da58 = &data_143f209b8
int64_t* arg_8 = &data_143f20930
sub_1419ce870()
sub_1419be530(&data_1439c94a0, &data_143f20958, &arg_8)
void* rax_1 = sub_1419cf430(0)
int32_t i_2 = *(rax_1 + 8)
int32_t i = i_2

if (i_2 s> 0)
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        int32_t rax_5 = i_1 + rsi
        
        if (*(*(*rax_1 + (sx.q(rax_5) << 3)) + 0x28) u< data_143f20958)
            rsi = rax_5 + rcx_1
    while (i s> 0)

*(rax_1 + 8) = i_2 + 1

if (i_2 + 1 s> *(rax_1 + 0xc))
    sub_1405a4d70(rax_1)

int64_t rbx = sx.q(rsi) << 3
int64_t rdx_5 = *rax_1 + rbx
memmove(rdx_5 + 8, rdx_5, (i_2 - rsi) << 3)
*(rbx + *rax_1) = &data_143f20930
data_143f20930 = &data_142d54980
return atexit(sub_142cf2670) __tailcall
