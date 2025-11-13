// 函数: sub_140ff18e0
// 地址: 0x140ff18e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = *arg3
int64_t rdi = sx.q(arg3[1].d)
int64_t var_68 = r15
int32_t var_60 = rdi.d
int64_t var_128 = r15
int32_t var_120 = rdi.d
void*** rax = j_sub_140a82f30(0xc8)
int64_t rsi = 0
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = &data_142d3ff08
    rbx[1].d = 0
    *(rbx + 0xc) = 0
    rbx[2].w = 0x100
    __builtin_memset(&rbx[3], 0, 0x14)
    *(rbx + 0x2c) = 3
    rbx[6].d = 0
    __builtin_memset(&rbx[7], 0, 0x80)
    *rbx = &data_142ef5868
    rbx[0x18] = 0

int64_t var_58 = r15
int32_t var_50 = rdi.d
void** const var_118
memset(&var_118, 0, 0x90)
sub_140b4c2a0(&var_118)
int32_t var_88 = 0
var_118 = &data_142ef5568
int64_t var_80 = r15
int64_t var_70 = 0x7fffffffffffffff
int32_t var_78 = rdi.d
sub_140b55290(&var_118, 1)
var_118[0x1b](&var_118, 1)
int64_t* var_110
int32_t* rdx_1 = *var_110

if (&rdx_1[1] u> var_110[1])
    void** const* rcx_5 = &var_118
    char var_ef
    
    if ((var_ef & 0x20) != 0)
        sub_140b54070(rcx_5, &rbx[6], arg4)
    else
        var_118[0x2a](rcx_5, &rbx[6], 4)
else
    rbx[6].d = *rdx_1
    *var_110 += 4

sub_140fdadf0(&var_118, &rbx[7], arg4)
sub_140fdadf0(&var_118, &rbx[9], arg4)
sub_140fdadf0(&var_118, &rbx[0xb], arg4)
sub_140fdadf0(&var_118, &rbx[0xd], arg4)
sub_140fdadf0(&var_118, &rbx[0xf], arg4)
int64_t rcx_11 = sx.q(var_88)
int32_t rax_6 = 0

if (rdi.d u>= 4)
    rax_6 = *(rdi + r15 - 4)

sub_140fd5920(&var_128, rbx, arg4)
int32_t i = 0
int64_t* r15_1 = *(arg1 + 0x168)

if (rbx[0x16].d s> 0)
    int32_t* rdi_3 = nullptr
    
    do
        int64_t rax_8 = rbx[0x15]
        
        if (*(rdi_3 + rax_8) == 0x10de && *(rdi_3 + rax_8 + 0xa) == 4)
            sub_142c487e0(r15_1, zx.d(*(rdi_3 + rax_8 + 6)))
        
        i += 1
        rdi_3 = &rdi_3[3]
    while (i s< rbx[0x16].d)
    
    r15_1 = *(arg1 + 0x168)

int64_t* rcx_14 = rbx[0x18]
rbx[0x18] = 0

if (rcx_14 != 0)
    (*(*rcx_14 + 0x10))(rcx_14)

int32_t rax_11 =
    (*(*r15_1 + 0x78))(r15_1, r15 + rcx_11, zx.q(rdi.d - rcx_11.d - rax_6), 0, &rbx[0x18])

if (rax_11 s< 0)
    int64_t* rdi_5 = *(arg1 + 0x168)
    int64_t var_48
    sub_140fe7a50(&var_48, rax_11, rdi_5)
    int64_t* var_138_1 = rdi_5
    sub_140fff020(rax_11, 
        "Direct3DDevice->CreatePixelShader((void*)CodePtr, CodeSize, nullptr, Shader->Resource."
    "GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Shaders.cpp", 
        0x157)
    int64_t rcx_18 = var_48
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)

int32_t i_1 = 0
int64_t r15_2 = *(arg1 + 0x168)

if (rbx[0x16].d s> 0)
    int32_t* r14_1 = nullptr
    
    do
        int64_t rax_12 = rbx[0x15]
        
        if (*(r14_1 + rax_12) == 0x10de && *(r14_1 + rax_12 + 0xa) == 4)
            sub_142c487e0(r15_2, 0xffffffff)
        
        i_1 += 1
        r14_1 = &r14_1[3]
    while (i_1 s< rbx[0x16].d)

int32_t rdx_12 = rbx[0xe].d

if (rdx_12 s> *(rbx + 0xa4))
    sub_1405c5510(&rbx[0x13], rdx_12)

int32_t* r15_3 = rbx[0xd]
uint64_t r12_2 = sx.q(rbx[0xe].d) << 2 u>> 2

if (r15_3 u> &r15_3[rbx[0xe]])
    r12_2 = 0

if (r12_2 != 0)
    do
        void* rax_15 = sub_1419ce110(*r15_3)
        int64_t rdi_6 = sx.q(rbx[0x14].d)
        int32_t rdx_13 = *(rbx + 0xa4)
        int32_t rcx_22 = (rdi_6 + 1).d
        rbx[0x14].d = rcx_22
        
        if (rax_15 == 0)
            if (rcx_22 s> rdx_13)
                sub_1405daba0(&rbx[0x13])
            
            *(rdi_6 + rbx[0x13]) = 0xff
        else
            if (rcx_22 s> rdx_13)
                sub_1405daba0(&rbx[0x13])
            
            *(rdi_6 + rbx[0x13]) = *(rax_15 + 0x34)
        
        r15_3 = &r15_3[1]
        rsi += 1
    while (rsi != r12_2)

*arg2 = rbx
rbx[1].d += 1
sub_140b4cb40(&var_118)
return arg2
