// 函数: sub_140ffb970
// 地址: 0x140ffb970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void* rax_2

if (arg2 != 0)
    rax_2 = (*(*arg2 + 0x48))(arg2)
else
    rax_2 = nullptr

int64_t* rcx_1 = *(rax_2 + 0x38)
int32_t rbx_1 = arg3[2] - *arg3
uint64_t i_1 = zx.q(arg3[3] - arg3[1])
void var_88
(*(*rcx_1 + 0x50))(rcx_1, &var_88)
int32_t var_78
int32_t rax_5 = sub_140fdf270(var_78)
int32_t rcx_3 = *(arg4 + 0xc)
int32_t rdx_1 = 0
arg4[1].d = 0

if (rcx_3 != 0)
    sub_1405c5510(arg4, 0)
    rdx_1 = arg4[1].d
    rcx_3 = *(arg4 + 0xc)

int32_t rax_9 = rax_5 * i_1.d * rbx_1 + rdx_1
arg4[1].d = rax_9

if (rax_9 s> rcx_3)
    sub_1405daba0(arg4)

int32_t var_a8 = arg5[1].d
int128_t var_e0 = zx.o(0)
int128_t var_b8
int32_t* var_f0 = &var_b8
int32_t var_6c
rbx_1.b = var_6c != 3
var_b8 = *arg5
int32_t* var_f8 = &var_e0
int128_t var_98 = *arg3
int64_t* var_e8
sub_140fe8ae0(arg1, &var_e8, arg2, &var_98, var_f8, var_f0)
uint32_t r15_1

if (rbx_1.b == 0)
    r15_1 = zx.d(*(arg5 + 0x11))
else
    r15_1 = 0

int64_t* rcx_7 = *(arg1 + 0x150)
int64_t* rbx_2 = var_e8
var_f8.d = 0
int64_t var_d0
int32_t rax_12 = (*(*rcx_7 + 0x70))(rcx_7, rbx_2, zx.q(r15_1), 1, var_f8, &var_d0)

if (rax_12 s< 0)
    int64_t var_f8_1 = *(arg1 + 0x168)
    sub_140fff020(rax_12, 
        "Direct3DDeviceIMContext->Map(TempTexture2D, MappedSubresource, D3D11_MAP_READ,0,&LockedRect)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp", 
        0x212)

int64_t rsi_1 = *arg4
int32_t var_c8
int64_t rdi_3 = zx.q(var_e0.d * rax_5) + zx.q(var_c8 * var_e0:4.d) + var_d0

if (i_1.d != 0)
    uint64_t rbp_1 = zx.q((arg3[2] - *arg3) * rax_5)
    uint64_t i
    
    do
        memcpy(rsi_1, rdi_3, rbp_1.d)
        rsi_1 += rbp_1
        rdi_3 += zx.q(var_c8)
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* rcx_14 = *(arg1 + 0x150)
int64_t result = (*(*rcx_14 + 0x78))(rcx_14, rbx_2, zx.q(r15_1))

if (rbx_2 != 0)
    result = (*(*rbx_2 + 0x10))(rbx_2)

__security_check_cookie(rax_1 ^ &var_118)
return result
