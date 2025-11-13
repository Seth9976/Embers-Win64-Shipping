// 函数: sub_140fd8180
// 地址: 0x140fd8180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg7
int32_t arg_8 = 0
*arg1 = &data_142d3ff08
arg1[1].d = 0
*arg1 = &data_142ef5878
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
sub_141960d80(&arg1[3], arg2, arg3, arg4, arg5, arg6, r13, arg1, 1)
arg1[0xf] = 0
void* r12 = &arg1[0x12]
int64_t rdx = *(arg3 + 0xc8)
int64_t r14_1 = sx.q(*(arg3 + 0xd0))
int64_t var_70
__builtin_memset(&var_70, 0, 0x20)

if (arg2 != 0)
    void* r12_1 = arg2 + 0x18
    *(arg1 + 0x58) = *(arg2 + 0x220)
    *(arg1 + 0x68) = *(arg2 + 0x230)
    int32_t r13_1 = *(arg2 + 0x218)
    
    if (r13_1 == 0)
        r12_1 = &var_70
    
    int64_t* rcx_2 = arg1[0xf]
    arg1[0xf] = 0
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x10))(rcx_2)
    
    int32_t rcx_3 = 0
    
    if (r14_1.d u>= 4)
        rcx_3 = *(r14_1 + rdx - 4)
    
    int64_t rax_4 = sx.q(*(arg3 + 0xd8))
    int32_t rax_6 = (*(*arg8 + 0x58))(arg8, r12_1, zx.q(r13_1), rax_4 + *(arg3 + 0xc8), 
        zx.q(r14_1.d - rax_4.d - rcx_3), &arg1[0xf])
    
    if (rax_6 s< 0)
        int64_t* var_d8_2 = arg8
        sub_140fff020(rax_6, 
            "Direct3DDevice->CreateInputLayout( InVertexDeclaration && "
        "InVertexDeclaration->VertexElements.Num() ? InVertexDeclaration->VertexElements.GetData() : "
        "&NullInputElement, InVertexDeclaration ? InVertexDeclaration->VertexElements.Num() : 0, "
        "&InVertexShader->Code[ InVertexShader->Offset ], VertexShaderCode.GetActualShaderCodeSize() "
        "- InVertexShader->Offset, InputLayout.", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Shaders.cpp", 
            0x1b7)
    
    r13 = arg7
    r12 = &arg1[0x12]
else
    int64_t* rcx_1 = arg1[0xf]
    __builtin_memset(&arg1[0xf], 0, 0x30)
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1)

int64_t* rbx_1 = arg1[0x10]
int64_t* rcx_7 = *(arg3 + 0xc0)
arg1[0x10] = rcx_7

if (rcx_7 != 0)
    (*(*rcx_7 + 8))()

if (rbx_1 != 0)
    (*(*rbx_1 + 0x10))(rbx_1)

int64_t* arg_10
int64_t* rcx_10
int32_t* rdx_3
int64_t* rbx_3
int32_t rsi_2

if (arg4 == 0)
    rbx_3 = arg_8.q
    rdx_3 = &arg_10
    rcx_10 = nullptr
    arg_10 = nullptr
    rsi_2 = 2
else
    rbx_3 = *(arg4 + 0xc0)
    arg_8.q = rbx_3
    
    if (rbx_3 != 0)
        (*(*rbx_3 + 8))(rbx_3)
    
    rcx_10 = arg_10
    rdx_3 = &arg_8
    rsi_2 = 1

if (&arg1[0x11] != rdx_3)
    int64_t* rcx_11 = arg1[0x11]
    arg1[0x11] = *rdx_3
    *rdx_3 = 0
    
    if (rcx_11 != 0)
        (*(*rcx_11 + 0x10))(rcx_11, rdx_3)
    
    rcx_10 = arg_10
    rbx_3 = arg_8.q

if ((rsi_2.b & 2) != 0)
    rsi_2 &= 0xfffffffd
    
    if (rcx_10 != 0)
        (*(*rcx_10 + 0x10))(rcx_10)

if ((rsi_2.b & 1) != 0)
    rsi_2 &= 0xfffffffe
    
    if (rbx_3 != 0)
        (*(*rbx_3 + 0x10))(rbx_3)

int64_t* var_a8
int64_t* var_a0
int64_t* rcx_14
int64_t** rdx_4
int64_t* rbx_4
int32_t r14_4

if (arg5 == 0)
    rbx_4 = var_a8
    rdx_4 = &var_a0
    rcx_14 = nullptr
    r14_4 = 8
    var_a0 = nullptr
else
    rbx_4 = *(arg5 + 0xc0)
    var_a8 = rbx_4
    
    if (rbx_4 != 0)
        (*(*rbx_4 + 8))(rbx_4)
    
    rcx_14 = var_a0
    rdx_4 = &var_a8
    r14_4 = 4

int32_t r14_5 = r14_4 | rsi_2

if (r12 != rdx_4)
    int64_t* rcx_15 = *r12
    *r12 = *rdx_4
    *rdx_4 = nullptr
    
    if (rcx_15 != 0)
        (*(*rcx_15 + 0x10))(rcx_15, rdx_4)
    
    rbx_4 = var_a8
    rcx_14 = var_a0

if ((r14_5.b & 8) != 0)
    r14_5 &= 0xfffffff7
    
    if (rcx_14 != 0)
        (*(*rcx_14 + 0x10))(rcx_14)

if ((r14_5.b & 4) != 0)
    r14_5 &= 0xfffffffb
    
    if (rbx_4 != 0)
        (*(*rbx_4 + 0x10))(rbx_4)

int64_t* var_98
int64_t* var_90
int64_t* rcx_18
int64_t** rdx_5
int64_t* rbx_5
int32_t rsi_3

if (arg6 == 0)
    rbx_5 = var_98
    rdx_5 = &var_90
    rcx_18 = nullptr
    rsi_3 = 0x20
    var_90 = nullptr
else
    rbx_5 = *(arg6 + 0xc0)
    var_98 = rbx_5
    
    if (rbx_5 != 0)
        (*(*rbx_5 + 8))(rbx_5)
    
    rcx_18 = var_90
    rdx_5 = &var_98
    rsi_3 = 0x10

int32_t rsi_4 = rsi_3 | r14_5

if (&arg1[0x13] != rdx_5)
    int64_t* rcx_19 = arg1[0x13]
    arg1[0x13] = *rdx_5
    *rdx_5 = nullptr
    
    if (rcx_19 != 0)
        (*(*rcx_19 + 0x10))(rcx_19, rdx_5, &arg1[0x13])
    
    rcx_18 = var_90
    rbx_5 = var_98

if ((rsi_4.b & 0x20) != 0)
    rsi_4 &= 0xffffffdf
    
    if (rcx_18 != 0)
        (*(*rcx_18 + 0x10))(rcx_18)

if ((rsi_4.b & 0x10) != 0)
    rsi_4 &= 0xffffffef
    
    if (rbx_5 != 0)
        (*(*rbx_5 + 0x10))(rbx_5)

int64_t* var_88
int64_t* var_80
int64_t* rcx_22
int64_t** rdx_6
int64_t* rbx_6
int32_t r14_6

if (r13 == 0)
    rbx_6 = var_88
    rdx_6 = &var_80
    rcx_22 = nullptr
    r14_6 = 0x80
    var_80 = nullptr
else
    rbx_6 = *(r13 + 0xc0)
    var_88 = rbx_6
    
    if (rbx_6 != 0)
        (*(*rbx_6 + 8))(rbx_6)
    
    rcx_22 = var_80
    rdx_6 = &var_88
    r14_6 = 0x40

int32_t r14_7 = r14_6 | rsi_4

if (&arg1[0x14] != rdx_6)
    int64_t* rcx_23 = arg1[0x14]
    arg1[0x14] = *rdx_6
    *rdx_6 = nullptr
    
    if (rcx_23 != 0)
        (*(*rcx_23 + 0x10))(rcx_23, rdx_6, &arg1[0x14])
    
    rcx_22 = var_80
    rbx_6 = var_88

if (r14_7.b s< 0)
    r14_7 &= 0xffffff7f
    
    if (rcx_22 != 0)
        (*(*rcx_22 + 0x10))(rcx_22)

if ((r14_7.b & 0x40) != 0 && rbx_6 != 0)
    (*(*rbx_6 + 0x10))(rbx_6)

arg1[0x15].d = 0
*(arg1 + 0xac) = 0
arg1[0x15].b = *(arg3 + 0xb8)
uint64_t rax_32 = arg5

if (rax_32 != 0)
    rax_32 = zx.q(*(rax_32 + 0xb8))

*(arg1 + 0xa9) = rax_32.b
char rax_33

if (arg6 == 0)
    rax_33 = 0
else
    rax_33 = *(arg6 + 0xb8)

*(arg1 + 0xaa) = rax_33
uint64_t rax_34 = arg4

if (rax_34 != 0)
    rax_34 = zx.q(*(rax_34 + 0xb8))

*(arg1 + 0xab) = rax_34.b

if (r13 == 0)
    *(arg1 + 0xac) = 0
else
    *(arg1 + 0xac) = *(r13 + 0xb8)

return arg1
