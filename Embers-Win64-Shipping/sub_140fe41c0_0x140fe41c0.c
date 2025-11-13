// 函数: sub_140fe41c0
// 地址: 0x140fe41c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg5)
*arg1 = 0
int32_t r8 = arg5 - 1
int32_t rdx_2 = 0x20 << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(r8)
int32_t rcx

if (rdx_2 == 0)
    rcx = 0x20
else
    rcx = 0x1f - temp0_1

int64_t rax_5 = sx.q(*(((zx.q(0x20 - rcx) & zx.q(not.d(rdx_2))) << 4) + &data_143e2bad8))
int32_t temp0_2 = rax_5.d
bool cond:2 = temp0_2 == 0

if (temp0_2 s<= 0)
    goto label_140fe4339

int64_t rax_6 = *(((zx.q(0x20 - rcx) & zx.q(not.d(rdx_2))) << 4) + &data_143e2bad0)
int64_t rcx_2 = rax_5 * 2
int64_t* rsi_1 = *(rax_6 + (rcx_2 << 3) - 0x10)
*(rax_6 + (rcx_2 << 3) - 0x10) = 0
int64_t rdx_4 = sx.q(*(((zx.q(0x20 - rcx) & zx.q(not.d(rdx_2))) << 4) + &data_143e2bad8))
int64_t* r9_2 = (rdx_4 << 4) - 0x10
int32_t var_a8 = rdx_4.d
int64_t* var_a0 = r9_2
int64_t* rcx_3 = *(r9_2 + *(((zx.q(0x20 - rcx) & zx.q(not.d(rdx_2))) << 4) + &data_143e2bad0))
int32_t rax_8 = rdx_4.d

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3)
    rax_8 = *(((zx.q(0x20 - rcx) & zx.q(not.d(rdx_2))) << 4) + &data_143e2bad8)
    rdx_4 = zx.q(var_a8)
    r9_2 = var_a0

int32_t rcx_5 = rax_8 - (rdx_4 - 1).d

if (rcx_5 != 1)
    int64_t rax_10 = *(((zx.q(0x20 - rcx) & zx.q(not.d(rdx_2))) << 4) + &data_143e2bad0)
    memmove(r9_2 + rax_10, (sx.q(rdx_4.d) << 4) + rax_10, (rcx_5 - 1) << 4)
    rax_8 = *(((zx.q(0x20 - rcx) & zx.q(not.d(rdx_2))) << 4) + &data_143e2bad8)

*(((zx.q(0x20 - rcx) & zx.q(not.d(rdx_2))) << 4) + &data_143e2bad8) = rax_8 - 1
sub_1405a5010(((zx.q(0x20 - rcx) & zx.q(not.d(rdx_2))) << 4) + &data_143e2bad0)
int64_t* r14_4 = *arg1
*arg1 = rsi_1

if (rsi_1 != 0)
    (*(*rsi_1 + 8))(rsi_1)

if (r14_4 != 0)
    (*(*r14_4 + 0x10))(r14_4)

if (rsi_1 != 0)
    (*(*rsi_1 + 0x10))(rsi_1)

int64_t* var_b8

if (*arg1 == 0)
    r8 = arg5 - 1
    cond:2 = true
label_140fe4339:
    uint64_t rflags_2
    int32_t temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(arg5)
    int32_t rax_15
    
    rax_15 = cond:2 ? 0x20 : 0x1f - temp0_3
    
    int32_t rax_17 = rax_15 << 0x1a s>> 0x1f
    uint64_t rflags_3
    char temp0_4
    temp0_4, rflags_3 = _bit_scan_reverse(r8)
    char rbp_1
    
    if (rax_17 == 0)
        rbp_1 = 0x20
    else
        rbp_1 = 0x1f - temp0_4
    
    *arg1 = 0
    int32_t var_6c_1 = 0
    int32_t var_7c_1 = 2
    int32_t var_78_1 = 4
    int64_t var_74_1 = 0x10000
    int32_t var_80 = 1 << ((0x20 - rbp_1) & (not.d(rax_17)).b)
    int32_t rax_21 = (*(*arg2 + 0x18))(arg2, &var_80, 0, arg1)
    
    if (rax_21 s< 0)
        var_b8 = arg2
        sub_140fff020(rax_21, 
            "Device->CreateBuffer(&Desc, NULL, UniformBufferResource.GetInitReference())", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11UniformBuffer.cpp", 
            0x9d)
    
    int64_t* rbx_3 = *arg1
    
    if (rbx_3 != 0)
        (*(*rbx_3 + 8))(rbx_3)
    
    void var_68
    (*(*rbx_3 + 0x50))(rbx_3, &var_68)
    (*(*rbx_3 + 0x10))(rbx_3)

var_b8.d = 0
int64_t var_90
int32_t rax_26 = (*(*arg3 + 0x70))(arg3, *arg1, 0, 4, var_b8, &var_90, var_a8, var_a0, arg4)

if (rax_26 s< 0)
    var_b8 = arg2
    sub_140fff020(rax_26, 
        "Context->Map(UniformBufferResource, 0, D3D11_MAP_WRITE_DISCARD, 0, &MappedSubresource)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11UniformBuffer.cpp", 
        0xa6)

memcpy(var_90, arg4, arg5)
int64_t r9_4 = *arg3
(*(r9_4 + 0x78))(arg3, *arg1, 0, r9_4, var_b8)
__security_check_cookie(rax_1 ^ &var_d8)
return arg1
