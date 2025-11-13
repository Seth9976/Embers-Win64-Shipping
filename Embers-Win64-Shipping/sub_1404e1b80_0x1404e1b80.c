// 函数: sub_1404e1b80
// 地址: 0x1404e1b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419d9670()
int32_t rdi = 0
data_143f1ec10 = &data_143f20de0
data_143f1ec08 = 0
data_143f1ec00 = &data_142d54980
data_143f1ec18 = u"FResolveSingleSamplePS"
sub_140b58260(&data_143f1ec20, u"FResolveSingleSamplePS", 1)
sub_140b4c620(&data_143f1ec28, &data_143f1ec20)
sub_140b4c820(&data_143f1ec30, u"/Engine/Private/ResolvePixelShader.usf")
data_143f1ec38 = u"/Engine/Private/ResolvePixelShader.usf"
data_143f1ec40 = u"MainSingleSample"
data_143f1ec48 = 3
data_143f1ec58 = sub_1411df4d0
data_143f1ec4c = 0x128
data_143f1ec60 = sub_1419caa70
data_143f1ec50 = 1
data_143f1ec68 = sub_140594850
data_143f1ec70 = sub_140bd5640
data_143f1ec78 = sub_1405948d0
__builtin_memset(&data_143f1ec80, 0, 0x18)
data_143f1ec98 = &data_143f1ec00
__builtin_memset(&data_143f1eca8, 0, 0x2c)
data_143f1ecd4 = 0x80
data_143f1ecd8 = 0xffffffff
data_143f1ecdc = 0
data_143f1ece8 = 0
data_143f1ecf0 = 0
sub_140b51dc0(&data_143f20de0)
void* rax = data_143f1da58
data_143f1eca0 = 0

if (rax != 0)
    *(rax + 8) = &data_143f1ec80:8
    rax = data_143f1da58

data_143f1ec80:8 = rax
data_143f1ec90 = &data_143f1da58
data_143f1da58 = &data_143f1ec80:8
int64_t* arg_8 = &data_143f1ec00
sub_1419ce870()
sub_1419be530(&data_1439c94a0, &data_143f1ec28, &arg_8)
void* rax_1 = sub_1419cf430(0)
int32_t i_2 = *(rax_1 + 8)
int32_t i = i_2

if (i_2 s> 0)
    do
        int32_t rcx_2 = i & 0x80000001
        
        if (rcx_2 s< 0)
            rcx_2 = ((rcx_2 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        int32_t rax_5 = i_1 + rdi
        
        if (*(*(*rax_1 + (sx.q(rax_5) << 3)) + 0x28) u< data_143f1ec28)
            rdi = rax_5 + rcx_2
    while (i s> 0)

*(rax_1 + 8) = i_2 + 1

if (i_2 + 1 s> *(rax_1 + 0xc))
    sub_1405a4d70(rax_1)

int64_t rbx = sx.q(rdi) << 3
int64_t rdx_5 = *rax_1 + rbx
memmove(rdx_5 + 8, rdx_5, (i_2 - rdi) << 3)
*(rbx + *rax_1) = &data_143f1ec00
data_143f1ec00 = &data_142d54980
return atexit(sub_142cf2630) __tailcall
