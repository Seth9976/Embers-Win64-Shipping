// 函数: sub_1404e1e10
// 地址: 0x1404e1e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419d9880()
int32_t rdi = 0
data_143f1ed20 = &data_143f20e48
data_143f1ed18 = 0
data_143f1ed10 = &data_142d54980
data_143f1ed28 = u"FResolveVS"
sub_140b58260(&data_143f1ed30, u"FResolveVS", 1)
sub_140b4c620(&data_143f1ed38, &data_143f1ed30)
sub_140b4c820(&data_143f1ed40, u"/Engine/Private/ResolveVertexShader.usf")
data_143f1ed48 = u"/Engine/Private/ResolveVertexShader.usf"
data_143f1ed50 = u"Main"
data_143f1ed58 = 0
data_143f1ed68 = sub_1410f1c50
data_143f1ed5c = 0x128
data_143f1ed70 = sub_1419cab80
data_143f1ed60 = 1
data_143f1ed78 = sub_140594850
data_143f1ed80 = sub_1405948d0
data_143f1ed88 = sub_1405948d0
__builtin_memset(&data_143f1ed90, 0, 0x18)
data_143f1eda8 = &data_143f1ed10
__builtin_memset(&data_143f1edb8, 0, 0x2c)
data_143f1ede4 = 0x80
data_143f1ede8 = 0xffffffff
data_143f1edec = 0
data_143f1edf8 = 0
data_143f1ee00 = 0
sub_140b51dc0(&data_143f20e48)
void* rax = data_143f1da58
data_143f1edb0 = 0

if (rax != 0)
    *(rax + 8) = &data_143f1ed90:8
    rax = data_143f1da58

data_143f1ed90:8 = rax
data_143f1eda0 = &data_143f1da58
data_143f1da58 = &data_143f1ed90:8
int64_t* arg_8 = &data_143f1ed10
sub_1419ce870()
sub_1419be530(&data_1439c94a0, &data_143f1ed38, &arg_8)
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
        
        if (*(*(*rax_1 + (sx.q(rax_5) << 3)) + 0x28) u< data_143f1ed38)
            rdi = rax_5 + rcx_2
    while (i s> 0)

*(rax_1 + 8) = i_2 + 1

if (i_2 + 1 s> *(rax_1 + 0xc))
    sub_1405a4d70(rax_1)

int64_t rbx = sx.q(rdi) << 3
int64_t rdx_5 = *rax_1 + rbx
memmove(rdx_5 + 8, rdx_5, (i_2 - rdi) << 3)
*(rbx + *rax_1) = &data_143f1ed10
data_143f1ed10 = &data_142d54980
return atexit(sub_142cf2640) __tailcall
