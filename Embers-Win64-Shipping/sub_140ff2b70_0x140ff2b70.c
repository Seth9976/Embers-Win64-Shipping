// 函数: sub_140ff2b70
// 地址: 0x140ff2b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t var_128 = arg4
int32_t rdx_1 = arg5 & 6
int32_t rax_3 = 0
int32_t var_124 = sbb.d(arg1.d, arg1.d, rdx_1 != 0) & 2

if (test_bit(arg5, 9))
    rax_3 = 8

int32_t var_120 = rax_3

if ((8 & arg5.b) != 0)
    rax_3 |= 0x80
    int32_t var_120_1 = rax_3

if (arg5.b s< 0)
    rax_3 |= 0x10
    int32_t var_120_2 = rax_3

int32_t var_11c = sbb.d(rax_3, rax_3, rdx_1 != 0) & 0x10000

if (not(test_bit(arg5, 8)))
    int32_t rax_6 = 0x40
    
    if ((arg5.b & 0x20) != 0)
        rax_6 = 0x20
    
    int32_t var_118_1 = rax_6
else
    int32_t var_118 = 0x10

int64_t* rcx_2 = *(arg6 + 8)
int64_t* r8 = nullptr
int32_t var_114 = arg3

if (rcx_2 != 0)
    int32_t var_138_1 = arg4
    int64_t var_140
    r8 = &var_140
    var_140 = (*(*rcx_2 + 0x10))(rcx_2)
    int32_t var_134_1 = 0

int64_t* rcx_3 = *(arg1 + 0x168)
int64_t* var_148 = nullptr
int32_t rax_10 = (*(*rcx_3 + 0x18))(rcx_3, &var_128, r8, &var_148)
int64_t var_158

if (rax_10 s< 0)
    var_158 = *(arg1 + 0x168)
    sub_140fff020(rax_10, 
        "Direct3DDevice->CreateBuffer(&Desc,pInitData,StructuredBufferResource.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11StructuredBuffer.cpp", 
        0x4d)

int16_t* rdx_3 = *(arg6 + 0x30)

if (rdx_3 != 0)
    int64_t* rbx_1 = var_148
    void var_f8
    sub_1408f2b40(&var_f8, rdx_3)
    int64_t rax_12 = -1
    bool cond:1_1
    
    do
        cond:1_1 = *(*(arg6 + 0x30) + (rax_12 << 1) + 2) != 0
        rax_12 += 1
    while (cond:1_1)
    int64_t var_70
    (*(*rbx_1 + 0x28))(rbx_1, &data_1435fc290, zx.q((rax_12 + 1).d), var_70, var_158)
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)

int64_t* rbx_2 = var_148
int64_t* var_130 = rbx_2

if (rbx_2 != 0)
    (*(*rbx_2 + 8))(rbx_2)

void var_110
(*(*rbx_2 + 0x50))(rbx_2, &var_110)
(*(*rbx_2 + 0x10))(rbx_2)
int64_t* rcx_11 = *(arg6 + 8)

if (rcx_11 != 0)
    (*(*rcx_11 + 0x20))(rcx_11)

void*** rax_17 = j_sub_140a82f30(0x48)
void*** rbx_3 = rax_17

if (rax_17 == 0)
    rbx_3 = nullptr
else
    int64_t* rcx_12 = var_148
    *rbx_3 = &data_142d3ff08
    rbx_3[1].d = 0
    *(rbx_3 + 0xc) = 0
    rbx_3[2].w = 0x100
    rbx_3[3].d = arg3
    *(rbx_3 + 0x1c) = arg4
    rbx_3[4].d = arg5
    rbx_3[6].d = 0
    *(rbx_3 + 0x34) = 0xffffffff
    rbx_3[7].b = 0
    *rbx_3 = &data_142ef5a20
    rbx_3[5] = &data_142ef5a28
    rbx_3[8] = rcx_12
    
    if (rcx_12 != 0)
        (*(*rcx_12 + 8))()
    
    rbx_3[6].d = 2

*arg2 = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d += 1

int64_t* rcx_13 = var_148

if (rcx_13 != 0)
    int64_t rdx_6 = *rcx_13
    (*(rdx_6 + 0x10))(rcx_13, rdx_6)

__security_check_cookie(rax_1 ^ &var_178)
return arg2
