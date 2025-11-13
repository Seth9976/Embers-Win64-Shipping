// 函数: sub_140ff4bc0
// 地址: 0x140ff4bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = *arg3
int64_t rsi = sx.q(arg3[1].d)
int64_t var_68 = r15
uint32_t count = rsi.d
int32_t var_60 = rsi.d
int64_t var_128 = r15
int32_t var_120 = rsi.d
void*** rax = j_sub_140a82f30(0xe0)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    *rdi = &data_142d3ff08
    rdi[1].d = 0
    *(rdi + 0xc) = 0
    rdi[2].w = 0x100
    __builtin_memset(&rdi[3], 0, 0x15)
    rdi[6].d = 0
    __builtin_memset(&rdi[7], 0, 0x80)
    *rdi = &data_142ef5860
    __builtin_memset(&rdi[0x18], 0, 0x18)

int64_t var_58 = r15
int32_t var_50 = rsi.d
void** const var_118
memset(&var_118, 0, 0x90)
sub_140b4c2a0(&var_118)
int32_t var_88 = 0
var_118 = &data_142ef5568
int64_t var_80 = r15
int64_t var_70 = 0x7fffffffffffffff
int32_t var_78 = rsi.d
sub_140b55290(&var_118, 1)
var_118[0x1b](&var_118, 1)
int64_t* var_110
int32_t* rdx_1 = *var_110

if (&rdx_1[1] u> var_110[1])
    void** const* rcx_5 = &var_118
    char var_ef
    
    if ((var_ef & 0x20) != 0)
        sub_140b54070(rcx_5, &rdi[6], arg4)
    else
        var_118[0x2a](rcx_5, &rdi[6], 4)
else
    rdi[6].d = *rdx_1
    *var_110 += 4

sub_140fdadf0(&var_118, &rdi[7], arg4)
sub_140fdadf0(&var_118, &rdi[9], arg4)
sub_140fdadf0(&var_118, &rdi[0xb], arg4)
sub_140fdadf0(&var_118, &rdi[0xd], arg4)
sub_140fdadf0(&var_118, &rdi[0xf], arg4)
int64_t rdx_8 = sx.q(var_88)
int32_t rcx_11 = 0

if (rsi.d u>= 4)
    rcx_11 = *(rsi + r15 - 4)

sub_140fd5920(&var_128, rdi, arg4)
int32_t i = 0
int64_t* r15_1 = *(arg1 + 0x168)

if (rdi[0x16].d s> 0)
    int32_t* rbx_1 = nullptr
    
    do
        int64_t rax_9 = rdi[0x15]
        
        if (*(rbx_1 + rax_9) == 0x10de && *(rbx_1 + rax_9 + 0xa) == 4)
            sub_142c487e0(r15_1, zx.d(*(rbx_1 + rax_9 + 6)))
        
        i += 1
        rbx_1 = &rbx_1[3]
    while (i s< rdi[0x16].d)
    
    r15_1 = *(arg1 + 0x168)

int64_t* rcx_14 = rdi[0x18]
rdi[0x18] = 0

if (rcx_14 != 0)
    (*(*rcx_14 + 0x10))(rcx_14)

int32_t rax_12 =
    (*(*r15_1 + 0x60))(r15_1, r15 + rdx_8, zx.q(rsi.d - rdx_8.d - rcx_11), 0, &rdi[0x18])

if (rax_12 s< 0)
    int64_t* rbx_3 = *(arg1 + 0x168)
    int64_t var_48
    sub_140fe7a50(&var_48, rax_12, rbx_3)
    int64_t* var_148_1 = rbx_3
    sub_140fff020(rax_12, 
        "Direct3DDevice->CreateVertexShader((void*)CodePtr, CodeSize, nullptr, Shader->Resource."
    "GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Shaders.cpp", 0xe3)
    int64_t rcx_18 = var_48
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)

int32_t i_1 = 0
int64_t r15_2 = *(arg1 + 0x168)

if (rdi[0x16].d s> 0)
    int32_t* rbx_4 = nullptr
    
    do
        int64_t rax_13 = rdi[0x15]
        
        if (*(rbx_4 + rax_13) == 0x10de && *(rbx_4 + rax_13 + 0xa) == 4)
            sub_142c487e0(r15_2, 0xffffffff)
        
        i_1 += 1
        rbx_4 = &rbx_4[3]
    while (i_1 s< rdi[0x16].d)

int32_t rdx_13 = rdi[0xe].d

if (rdx_13 s> *(rdi + 0xa4))
    sub_1405c5510(&rdi[0x13], rdx_13)

int64_t r12_1 = 0
int32_t* r15_3 = rdi[0xd]
uint64_t rcx_22 = sx.q(rdi[0xe].d) << 2 u>> 2

if (r15_3 u> &r15_3[rdi[0xe]])
    rcx_22 = 0

if (rcx_22 != 0)
    do
        void* rax_16 = sub_1419ce110(*r15_3)
        int64_t rbx_5 = sx.q(rdi[0x14].d)
        int32_t rdx_14 = *(rdi + 0xa4)
        int32_t rcx_24 = (rbx_5 + 1).d
        rdi[0x14].d = rcx_24
        
        if (rax_16 == 0)
            if (rcx_24 s> rdx_14)
                sub_1405daba0(&rdi[0x13])
            
            *(rbx_5 + rdi[0x13]) = 0xff
        else
            if (rcx_24 s> rdx_14)
                sub_1405daba0(&rdi[0x13])
            
            *(rbx_5 + rdi[0x13]) = *(rax_16 + 0x34)
        
        r15_3 = &r15_3[1]
        r12_1 += 1
    while (r12_1 != rcx_22)

int32_t r8_2 = *(rdi + 0xd4)
rdi[0x1a].d = count

if (count != 0 || r8_2 != 0)
    sub_1405da9e0(&rdi[0x19], count, r8_2)
    memcpy(rdi[0x19], r15, count)
else
    *(rdi + 0xd4) = 0

rdi[0x1b].d = rdx_8.d
*arg2 = rdi
rdi[1].d += 1
sub_140b4cb40(&var_118)
return arg2
