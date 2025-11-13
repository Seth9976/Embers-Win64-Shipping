// 函数: sub_141059330
// 地址: 0x141059330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138

if (arg2 != 0)
    (*(*arg2 + 0x48))(arg2)

int32_t r15_1 = arg3[2] - *arg3
uint64_t i_1 = zx.q(arg3[3] - arg3[1])
int32_t var_a8 = arg7[1].d
int64_t var_78
int128_t* var_108 = &var_78
int128_t var_e0 = zx.o(0)
int128_t var_b8
int32_t* var_110 = &var_b8
int32_t* var_118 = &var_e0
var_b8 = *arg7
int128_t var_98 = *arg3
int64_t* var_f8
sub_14104c620(arg1, &var_f8, arg2, &var_98, arg5, arg6, var_118, var_110, var_108)
int32_t rdx_1 = 0
int32_t rbx_1 = (&data_1439c85f4)[sx.q(*(arg2 + 0x3c)) * 0xa]
int32_t rcx_3 = *(arg4 + 0xc)
arg4[1].d = 0

if (rcx_3 != 0)
    sub_1405c5510(arg4, 0)
    rdx_1 = arg4[1].d
    rcx_3 = *(arg4 + 0xc)

int32_t rax_8 = rbx_1 * i_1.d * r15_1 + rdx_1
arg4[1].d = rax_8

if (rax_8 s> rcx_3)
    sub_1405daba0(arg4)

uint64_t r15_4 = zx.q((arg3[2] - *arg3) * rbx_1)
int64_t* rbx_2 = var_f8
int32_t var_6c
uint64_t r12_4 = zx.q(var_6c * rbx_1 + 0xff) & 0xffffff00
int64_t rdi_3 = zx.q(var_e0.d * rbx_1) + zx.q(var_e0:4.d * r12_4.d) + var_78
int64_t var_88 = rdi_3
int64_t var_80 = zx.q((i_1 - 1).d * r12_4.d) + r15_4 + rdi_3
int64_t* rcx_13 = rbx_2[4]
int64_t var_e8
int32_t rax_10 = (*(*rcx_13 + 0x40))(rcx_13, 0, &var_88, &var_e8)

if (rax_10 s< 0)
    int64_t var_d0 = 0
    int64_t* var_110_1 = &var_d0
    int64_t var_c8_1 = 0
    sub_14106a020(rax_10, "TempTexture2D->GetResource()->Map(0, &ReadRange, &pData)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp", 0x300, 
        nullptr)

int64_t rdi_4 = rdi_3 + var_e8
int64_t rsi_1 = *arg4

if (i_1.d != 0)
    uint64_t i
    
    do
        memcpy(rsi_1, rdi_4, r15_4.d)
        rsi_1 += r15_4
        rdi_4 += r12_4
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* rcx_16 = rbx_2[4]
(*(*rcx_16 + 0x48))(rcx_16, 0, 0)
int32_t result = rbx_2[1].d
rbx_2[1].d -= 1

if (result == 1)
    int64_t* rcx_17 = var_f8
    result = (**rcx_17)(rcx_17, 1)

__security_check_cookie(rax_1 ^ &var_138)
return result
