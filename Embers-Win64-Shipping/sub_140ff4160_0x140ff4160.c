// 函数: sub_140ff4160
// 地址: 0x140ff4160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t* rcx = *(arg4 + 0x40)
int32_t var_38
(*(*rcx + 0x50))(rcx, &var_38)
int32_t var_4c = 1
int32_t rcx_2 = (&data_1439c85fc)[zx.q(arg5) * 0xa]
int32_t var_50

if (rcx_2 == 0x1b)
    var_50 = 0x1c
else
    int32_t rax_3 = 0x57
    
    if (rcx_2 != 0x5a)
        rax_3 = rcx_2
    
    var_50 = rax_3

void*** rbx_1 = nullptr
uint32_t var_44 = divu.dp.d(0:var_38, (&data_1439c85f4)[zx.q(arg5) * 0xa])
int32_t var_48 = 0
int32_t var_40 = 0
int32_t var_28

if (((var_28 u>> 5).b & 1) != 0)
    int32_t var_40_1 = 1
    var_50 = 0x27

int64_t* rcx_3 = *(arg1 + 0x168)
int64_t rdx_2 = *(arg4 + 0x40)
int64_t* var_58 = nullptr
int32_t rax_7 = (*(*rcx_3 + 0x40))(rcx_3, rdx_2, &var_50, &var_58)

if (rax_7 s< 0)
    int64_t var_68_1 = *(arg1 + 0x168)
    sub_140fff020(rax_7, 
        "Direct3DDevice->CreateUnorderedAccessView(IndexBuffer->Resource, &UAVDesc, "
    "(ID3D11UnorderedAccessView**)UnorderedAccessView.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11UAV.cpp", 0xb2)

void*** rax_9 = j_sub_140a82f30(0x30)

if (rax_9 != 0)
    rbx_1 = sub_140fd9530(rax_9, var_58, arg4 + 0x28)

*arg2 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t* rcx_6 = var_58

if (rcx_6 != 0)
    int64_t rdx_4 = *rcx_6
    (*(rdx_4 + 0x10))(rcx_6, rdx_4)

__security_check_cookie(rax_1 ^ &var_88)
return arg2
