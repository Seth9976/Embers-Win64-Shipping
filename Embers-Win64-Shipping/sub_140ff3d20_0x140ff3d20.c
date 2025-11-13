// 函数: sub_140ff3d20
// 地址: 0x140ff3d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* rcx = *(arg3 + 0x40)
int32_t var_48
(*(*rcx + 0x50))(rcx, &var_48)
void*** rbx = nullptr
int32_t var_5c = 1
int32_t var_38
uint8_t r8_1 = (var_38 u>> 5).b & 1
int32_t var_60

if ((var_38.b & 0x10) == 0)
    int32_t rax_4 = 0
    
    if (r8_1 != 0)
        rax_4 = 0x27
    
    var_60 = rax_4
else
    var_60 = 0x2a

int32_t var_34
int32_t rcx_1 = var_34
int32_t var_58 = 0

if (rcx_1 == 0)
    rcx_1 = 4

uint32_t var_54 = divu.dp.d(0:var_48, rcx_1)
int32_t rax_7 = 0

if (arg4 != 0)
    rax_7 = 4

int32_t var_50 = rax_7

if (arg5 != 0)
    rax_7 |= 2
    int32_t var_50_1 = rax_7

if (r8_1 != 0)
    int32_t var_50_2 = rax_7 | 1

int64_t* rcx_2 = *(arg1 + 0x168)
int64_t rdx_2 = *(arg3 + 0x40)
int64_t* var_68 = nullptr
int32_t rax_10 = (*(*rcx_2 + 0x40))(rcx_2, rdx_2, &var_60, &var_68)

if (rax_10 s< 0)
    int64_t var_78_1 = *(arg1 + 0x168)
    sub_140fff020(rax_10, 
        "Direct3DDevice->CreateUnorderedAccessView(StructuredBuffer->Resource,&UAVDesc,"
    "(ID3D11UnorderedAccessView**)UnorderedAccessView.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11UAV.cpp", 0x33)

void*** rax_12 = j_sub_140a82f30(0x30)

if (rax_12 != 0)
    rbx = sub_140fd9530(rax_12, var_68, arg3 + 0x28)

*arg2 = rbx

if (rbx != 0)
    rbx[1].d += 1

int64_t* rcx_5 = var_68

if (rcx_5 != 0)
    int64_t rdx_4 = *rcx_5
    (*(rdx_4 + 0x10))(rcx_5, rdx_4)

__security_check_cookie(rax_1 ^ &var_98)
return arg2
