// 函数: sub_140ff1f80
// 地址: 0x140ff1f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 1)
    int32_t rax_1 = arg5
    
    if (arg4 == 2)
        rax_1 = 2
    
    arg5 = rax_1
else
    arg5 = arg4

int64_t* rcx = *(arg1 + 0x168)
int32_t arg_c = 0
int64_t* arg_10 = nullptr
int32_t rax_3 = (*(*rcx + 0xc0))(rcx, &arg5, &arg_10)

if (rax_3 s< 0)
    int64_t var_28_1 = *(arg1 + 0x168)
    sub_140fff020(rax_3, "Direct3DDevice->CreateQuery(&Desc,Query.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Query.cpp", 0xca)

void*** rax_4 = j_sub_140a82f30(0x30)
void*** rbx_1 = rax_4

if (rax_4 == 0)
    rbx_1 = nullptr
else
    int64_t* rcx_3 = arg_10
    *rbx_1 = &data_142d3ff08
    rbx_1[1].d = 0
    *rbx_1 = &data_142ef59e8
    *(rbx_1 + 0xc) = 0
    rbx_1[2].w = 0x100
    rbx_1[3] = rcx_3
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 8))()
    
    rbx_1[5].b &= 0xfe
    rbx_1[4] = 0
    *(rbx_1 + 0x2c) = arg4

*arg2 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t* rcx_4 = arg_10

if (rcx_4 != 0)
    (*(*rcx_4 + 0x10))(rcx_4)

return arg2
