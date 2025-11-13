// 函数: sub_140feb250
// 地址: 0x140feb250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x18)
int64_t* rcx = *(arg1 + 0x10)
int64_t arg_8 = 3
int64_t* rsi = *(rax + 0x168)
*(arg1 + 0x10) = 0

if (rcx != 0)
    (*(*rcx + 0x10))(rcx, 0)

int32_t result = (*(*rsi + 0xc0))(rsi, &arg_8, arg1 + 0x10)

if (result s>= 0)
    return result

int64_t var_18_1 = *(*(arg1 + 0x18) + 0x168)
return sub_140fff020(result, 
    "D3DRHI->GetDevice()->CreateQuery(&QueryDesc, DisjointQuery.GetInitReference())", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Query.cpp", 0x329)
