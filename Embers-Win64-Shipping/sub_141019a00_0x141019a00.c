// 函数: sub_141019a00
// 地址: 0x141019a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
uint64_t var_78 = zx.q(*(arg1 + 0x3c))
int64_t var_5c = 0
int32_t var_54 = 0
int32_t var_4c = 0
int32_t rax_3
int32_t rcx

if (data_143f0f1d8 == 0)
    rcx = *(arg2 + 0x10)
    rax_3 = arg3
else
    rax_3 = 1
    rcx = 1

int32_t var_60 = rax_3
int32_t var_50 = arg5
void* rax_5 = *(arg2 + 0x20)
int32_t var_98 = arg4
int32_t var_8c = rcx
int64_t var_94 = 0
int128_t var_70 = var_98.o
int64_t* rcx_1 = *(rax_5 + 0x18)
int64_t var_80
int32_t rax_7 = (*(*rcx_1 + 0xe0))(rcx_1, &var_78, &data_142efe600, &var_80)

if (rax_7 s< 0)
    var_98.q = 0
    int32_t* var_a0_1 = &var_98
    var_94 = 0
    sub_14106a020(rax_7, "Parent->GetDevice()->CreateHeap(&Desc, IID_PPV_ARGS(&D3DHeap))", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Allocation.cpp", 0x623, 
        nullptr)

void*** result_1 = j_sub_140a82f30(0xa0)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    int32_t rdi_1 = arg1[1].d
    int64_t r12_1 = var_80
    uint64_t r15_1 = zx.q(*(arg1 + 0x3c))
    sub_14103eed0(result_1, arg2, arg3)
    *result = &data_142efcff8
    result[0x10] = 0
    result[0x11] = 0
    result[0x13].d = rdi_1
    result[0x12] = arg1
    *(result + 0x9c) = 0
    int64_t* rcx_4 = result[4]
    result[4] = 0
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x10))(rcx_4)
    
    result[4] = r12_1
    sub_1410447b0(result, r15_1)
    result[1].d += 1

int64_t rbx_1 = sx.q(arg1[1].d)
int32_t rcx_6 = (rbx_1 + 1).d
arg1[1].d = rcx_6

if (rcx_6 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

*(*arg1 + (rbx_1 << 3)) = result
__security_check_cookie(rax_1 ^ &var_c8)
return result
