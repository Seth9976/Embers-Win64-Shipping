// 函数: sub_140feb2e0
// 地址: 0x140feb2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
int64_t arg_8 = 0
int64_t* rcx = *(arg1 + 0x18)
int64_t* rsi = *(rax + 0x168)
*(arg1 + 0x18) = 0

if (rcx != 0)
    (*(*rcx + 0x10))(rcx, 0)

int32_t rax_3 = (*(*rsi + 0xc0))(rsi, &arg_8, arg1 + 0x18)

if (rax_3 s< 0)
    int64_t var_18_1 = *(*(arg1 + 0x10) + 0x168)
    sub_140fff020(rax_3, "D3DRHI->GetDevice()->CreateQuery(&QueryDesc,Query.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Query.cpp", 0x181)

return sub_140feb5b0(arg1)
