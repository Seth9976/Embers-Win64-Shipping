// 函数: sub_140ff3e80
// 地址: 0x140ff3e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = nullptr
int64_t* rsi

if (arg3 != 0)
    rsi = (*(*arg3 + 0x48))(arg3)
else
    rsi = nullptr

int64_t rdx = *arg3

if ((*(rdx + 0x18))(arg3, rdx) == 0)
    if ((*(*arg3 + 0x10))(arg3) == 0)
        int32_t var_40_2 = arg4
        
        if ((*(*arg3 + 0x20))(arg3) != 0)
            goto label_140ff3f1d
        
        int32_t var_44_2 = 4
    else
        int32_t var_40_1 = arg4
    label_140ff3f1d:
        int32_t var_44_1 = 5
        void* rax_11 = &rsi[-1]
        int32_t var_3c_2 = 0
        
        if (rsi == 0)
            rax_11 = 0x68
        
        int32_t var_38_2 = *rax_11
else
    int32_t var_44 = 8
    int32_t* rax_4 = &rsi[-1]
    int32_t var_40 = arg4
    
    if (rsi == 0)
        rax_4 = 0x68
    
    int32_t var_3c_1 = 0
    uint32_t var_38_1 = *rax_4 u>> arg4.b

int32_t rax_14 = sub_140fe7330((&data_1439c85fc)[sx.q(*(arg3 + 0x3c)) * 0xa], 0)
int64_t* rcx_7 = *(arg1 + 0x168)
int32_t var_48 = rax_14
int64_t* arg_8 = nullptr
int32_t rax_16 = (*(*rcx_7 + 0x40))(rcx_7, rsi[7], &var_48, &arg_8)

if (rax_16 s< 0)
    int64_t var_58_1 = *(arg1 + 0x168)
    sub_140fff020(rax_16, 
        "Direct3DDevice->CreateUnorderedAccessView(Texture->GetResource(),&UAVDesc,"
    "(ID3D11UnorderedAccessView**)UnorderedAccessView.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11UAV.cpp", 0x68)

void*** rax_17 = j_sub_140a82f30(0x30)

if (rax_17 != 0)
    rbx = sub_140fd9530(rax_17, arg_8, rsi)

*arg2 = rbx

if (rbx != 0)
    rbx[1].d += 1

int64_t* rcx_11 = arg_8

if (rcx_11 != 0)
    (*(*rcx_11 + 0x10))(rcx_11)

return arg2
