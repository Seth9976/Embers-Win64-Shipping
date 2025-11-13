// 函数: sub_14237e8a0
// 地址: 0x14237e8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1433365d8
__builtin_memset(&arg1[1], 0, 0x28)
arg1[8] = 0
void* rcx = &arg1[6]
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x10]
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
arg1[0xc] = 0
arg1[0xd].d = 0
arg1[0xe] = 0
arg1[0xf] = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
arg1[0x14].d = 0xffffffff
*(arg1 + 0xa4) = 0
arg1[0x16] = 0
arg1[0x17].d = 0
arg1[0x18].d = 0
*(arg1 + 0xc4) = 0
arg1[0x32] = 0
arg1[0x33] = 0
arg1[0x34] = 0
arg1[0x35] = 0
__builtin_memset(&arg1[0x36], 0, 0x4c)
sub_1423b7130(&arg1[0x36])
arg1[0x40] = 0
arg1[0x41] = 0
sub_14237dca0(&arg1[0x42])
__builtin_memset(&arg1[0x4b], 0, 0x40)
void* rcx_4 = &arg1[0x53]
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_2 = *(rcx_4 + 0x10)

if (rax_2 != 0)
    rcx_4 = rax_2

*rcx_4 = 0
*(rcx_4 + 8) = 0
arg1[0x57].d = 0xffffffff
*(arg1 + 0x2bc) = 0
arg1[0x59] = 0
void* rcx_5 = &arg1[0x5d]
arg1[0x5a].d = 0
arg1[0x5b] = 0
arg1[0x5c] = 0
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax_3 = *(rcx_5 + 0x10)

if (rax_3 != 0)
    rcx_5 = rax_3

*rcx_5 = 0
*(rcx_5 + 8) = 0
arg1[0x61].d = 0xffffffff
*(arg1 + 0x30c) = 0
arg1[0x63] = 0
arg1[0x64].d = 0
__builtin_memset(&arg1[0x65], 0, 0x14)
__builtin_memset(&arg1[0x68], 0, 0x14)
*(arg1 + 0x354) = 5
arg1[0x6b].b = 0
*(arg1 + 0x35c) = 0x40400000
__builtin_memset(&arg1[0x6c], 0, 0x21)
*(arg1 + 0x384) = 0
memset(&arg1[0x72], 0, 0x190)
__builtin_memset(&arg1[0xa4], 0, 0x20)
void* rcx_7 = &arg1[0xa8]
*(rcx_7 + 0x10) = 0
*(rcx_7 + 0x18) = 0
*(rcx_7 + 0x1c) = 0x80
void* rax_4 = *(rcx_7 + 0x10)

if (rax_4 != 0)
    rcx_7 = rax_4

*rcx_7 = 0
*(rcx_7 + 8) = 0
arg1[0xac].d = 0xffffffff
*(arg1 + 0x564) = 0
arg1[0xae] = 0
arg1[0xaf].d = 0
InitializeCriticalSection(&arg1[0xb0])
SetCriticalSectionSpinCount(&arg1[0xb0], 0xfa0)
int32_t arg_8
sub_140af3c10(data_143ddb400, u"TextureStreaming", u"MemoryMargin", &arg_8, &data_143de5780)
arg1[0x6c] = sx.q(arg_8)
sub_140af3b00(data_143ddb400, TextureStreaming", LightmapStreamingFactor", &data_143a2ffa4, 
    &data_143de5780)
sub_140af3b00(data_143ddb400, TextureStreaming", ShadowmapStreamingFactor", &data_143a2ffa8, 
    &data_143de5780)
int32_t arg_10 = 0
sub_140af3c10(data_143ddb400, u"TextureStreaming", u"PoolSize", &arg_10, &data_143de5780)
sub_140af2fd0(data_143ddb400, TextureStreaming", UseDynamicStreaming", &arg1[0x6b], &data_143de5780)
sub_140af3b00(data_143ddb400, TextureStreaming", BoostPlayerTextures", arg1 + 0x35c, 
    &data_143de5780)
sub_140af2fd0(data_143ddb400, TextureStreaming", NeverStreamOutRenderAssets", &data_143f5a090, 
    &data_143de5780)
sub_140af2b60()
char rax_6 = sub_140b21a10(&data_143dbb3f0, u"NeverStreamOutRenderAssets")
char rcx_17 = data_143f5a090
void* rdi = &arg1[0x19]
int32_t i = 0

if (rax_6 != 0)
    rcx_17 = 1

data_143f5a090 = rcx_17
arg1[0x6c] <<= 0x14

do
    void* rax_12 = sub_1423c2190(sub_1405e25d0(sub_141fe0f50(sub_141fe0c50(0))), i)
    i += 1
    rdi += 4
    *(rdi - 4) = *(rax_12 + 0x1c)
while (i s< 0x31)

arg1[0x33].d = 0

if (*(arg1 + 0x19c) != 1)
    sub_1405dadb0(&arg1[0x32], 1)

int64_t rbx = sx.q(arg1[0x33].d)
int32_t rax_13 = (rbx + 1).d
arg1[0x33].d = rax_13

if (rax_13 s> *(arg1 + 0x19c))
    sub_1405a4cf0(&arg1[0x32])

*(arg1[0x32] + (rbx << 2)) = 0x7fffffff
arg1[0x35].d = 0

if (*(arg1 + 0x1ac) != 1)
    sub_1405dadb0(&arg1[0x34], 1)

int64_t rbx_1 = sx.q(arg1[0x35].d)
int32_t rax_15 = (rbx_1 + 1).d
arg1[0x35].d = rax_15

if (rax_15 s> *(arg1 + 0x1ac))
    sub_1405a4cf0(&arg1[0x34])

*(arg1[0x34] + (rbx_1 << 2)) = 0x7fffffff
data_14399fa00 = sub_141f884f0
arg1[0x6a].d = 0
void*** rax_17 = j_sub_140a82f30(0x140)

if (rax_17 == 0)
    rax_17 = nullptr
else
    *rax_17 = &data_143336940
    rax_17[1] = 0
    rax_17[2] = 0
    rax_17[7] = 0
    rax_17[8].d = 0
    *(rax_17 + 0x44) = 4
    __builtin_memset(&rax_17[9], 0, 0x18)
    rax_17[0xd] = 0
    rax_17[0xc].d = 0x7f7fffff
    rax_17[0xe] = 0
    __builtin_memset(&rax_17[0x10], 0, 0x30)
    rax_17[0x16] = arg1
    __builtin_memset(&rax_17[0x17], 0, 0x31)
    rax_17[0x1d].b = 0
    __builtin_memset(&rax_17[0x1e], 0, 0x3c)
    rax_17[0x26] = 0
    rax_17[0x27] = 0

arg1[0x40] = rax_17
void*** rax_18 = j_sub_140a82f30(0x70)

if (rax_18 == 0)
    rax_18 = nullptr
else
    __builtin_memset(&rax_18[9], 0, 0x28)
    *rax_18 = &data_143336510
    __builtin_memset(&rax_18[1], 0, 0x44)
    rax_18[0xa] = 0
    rax_18[0xb] = 0
    rax_18[0xd].d = 0
    *rax_18 = &data_143336528
    rax_18[0xc] = &data_143336540

void* rcx_26 = arg1[0x41]
arg1[0x41] = rax_18

if (rax_18 != 0)
    rax_18[0xd].d += 1

if (rcx_26 != 0)
    int32_t temp0_1 = *(rcx_26 + 0x68)
    *(rcx_26 + 0x68) -= 1
    
    if (temp0_1 == 1)
        (**(rcx_26 + 0x60))(rcx_26 + 0x60, 1)

void* rbx_2 = arg1[0x45]
void* rdi_1 = arg1[0x41]

if (rbx_2 != 0)
    *(rbx_2 + 8) += 1

int64_t rsi = sx.q(*(rdi_1 + 0x10))
int32_t rax_20 = (rsi + 1).d
*(rdi_1 + 0x10) = rax_20

if (rax_20 s> *(rdi_1 + 0x14))
    sub_1405a4d70(rdi_1 + 8)

*(*(rdi_1 + 8) + (rsi << 3)) = rbx_2
void* rbx_3 = arg1[0x44]

if (rbx_3 != 0)
    *(rbx_3 + 8) += 1

int64_t rsi_1 = sx.q(*(rdi_1 + 0x40))
int32_t rax_22 = (rsi_1 + 1).d
*(rdi_1 + 0x40) = rax_22

if (rax_22 s> *(rdi_1 + 0x44))
    sub_1405a4d70(rdi_1 + 0x38)

*(*(rdi_1 + 0x38) + (rsi_1 << 3)) = rbx_3
sub_140d21fd0()
void*** rax_24 = sub_140a84c80(0, 0x30, 0)
void*** var_58 = rax_24
int32_t var_50 = 3

if (rax_24 != 0)
    rax_24[1] = arg1
    *rax_24 = &data_142d3fe58
    rax_24[2] = sub_142392e10
    rax_24[4] = sub_140a387b0()
    *rax_24 = &data_142d3feb0
    void arg_18
    sub_1408d6c30(&data_1439aad30, &arg_18, &var_58)
    void*** rax_27
    
    if (var_50 == 0)
        rax_27 = var_58
    label_14237f08f:
        
        if (rax_27 != 0)
            sub_140a74f90(rax_27)
    else
        void*** rbx_5 = var_58
        
        if (rbx_5 != 0)
            (*rbx_5)[7](rbx_5, 0)
            rax_27 = sub_140a84c80(rbx_5, 0, 0)
            goto label_14237f08f

void*** rax_28 = sub_140a84c80(0, 0x30, 0)
void*** var_48 = rax_28
int32_t var_40 = 3

if (rax_28 != 0)
    rax_28[1] = arg1
    *rax_28 = &data_142d3fe58
    rax_28[2] = sub_142392c40
    rax_28[4] = sub_140a387b0()
    *rax_28 = &data_142d3feb0
    void arg_20
    sub_1408d6c30(&data_14399fb80, &arg_20, &var_48)
    void*** rax_31
    
    if (var_40 == 0)
        rax_31 = var_48
    label_14237f138:
        
        if (rax_31 != 0)
            sub_140a74f90(rax_31)
    else
        void*** rbx_7 = var_48
        
        if (rbx_7 != 0)
            (*rbx_7)[7](rbx_7, 0)
            rax_31 = sub_140a84c80(rbx_7, 0, 0)
            goto label_14237f138

return arg1
