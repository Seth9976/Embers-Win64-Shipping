// 函数: sub_140ff7ce0
// 地址: 0x140ff7ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* r12

if (arg2 != 0)
    r12 = (*(*arg2 + 0x48))(arg2)
else
    r12 = nullptr

int64_t* rcx_1 = *(r12 + 0x38)
int32_t r15_1 = arg3[2] - *arg3
int32_t rbx_1 = arg3[3] - arg3[1]
void var_88
(*(*rcx_1 + 0x50))(rcx_1, &var_88)
int32_t r14_1 = rbx_1 * r15_1
arg4[1].d = 0

if (*(arg4 + 0xc) != r14_1)
    sub_1405c5570(arg4, r14_1)

int64_t* rcx_3 = *(arg1 + 0x168)
int32_t var_d0 = *arg3
int32_t var_cc = arg3[1]
int32_t var_c4 = arg3[2]
int32_t var_b4 = rbx_1
int32_t rbx_2 = 3
int32_t var_c0 = arg3[3]
int32_t var_c8 = 0
int64_t* var_e8 = nullptr
int32_t var_78
int32_t var_a8 = var_78
int32_t var_bc = 1
int32_t var_b8 = r15_1
int32_t var_b0 = 1
int32_t var_ac = 1
int64_t var_a4
__builtin_memcpy(&var_a4, 
    "\x01\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00", 
    0x18)
int32_t rax_11 = (*(*rcx_3 + 0x28))(rcx_3, &var_b8, 0, &var_e8)
int64_t var_118

if (rax_11 s< 0)
    var_118 = *(arg1 + 0x168)
    sub_140fff020(rax_11, 
        "Direct3DDevice->CreateTexture2D(&Desc,NULL,TempTexture2D.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp", 
        0x366)

int32_t rax_12 = 0
int32_t var_60

if (var_60 == 4)
    if (arg5 == 1)
        rbx_2 = 1
    else if (arg5 == 2)
        rbx_2 = 2
    else if (arg5 != 3)
        if (arg5 == 4)
            rbx_2 = 4
        else if (arg5 == 5)
            rbx_2 = 5
        else
            rbx_2 = 0
    
    int32_t var_80
    rax_12 = (rbx_2 + arg6 * 6) * var_80 + arg7

int64_t* rcx_12 = *(arg1 + 0x150)
var_118.d = 0
(*(*rcx_12 + 0x170))(rcx_12, var_e8, 0, 0, var_118, 0, *(r12 + 0x38), rax_12, &var_d0)
int64_t* rcx_13 = *(arg1 + 0x150)
int32_t var_110
int64_t var_e0
var_110.q = &var_e0
var_118.d = 0
int32_t rax_18 = (*(*rcx_13 + 0x70))(rcx_13, var_e8, 0, 1, var_118, var_110)

if (rax_18 s< 0)
    int64_t var_118_1 = *(arg1 + 0x168)
    sub_140fff020(rax_18, 
        "Direct3DDeviceIMContext->Map(TempTexture2D,0,D3D11_MAP_READ,0,&LockedRect)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11RenderTarget.cpp", 
        0x373)

int64_t rbx_3 = sx.q(arg4[1].d)

if (r14_1 s>= rbx_3.d)
    int32_t rax_19 = rbx_3.d + r14_1
    arg4[1].d = rax_19
    
    if (rax_19 s> *(arg4 + 0xc))
        sub_1405a4d70(arg4)
    
    memset(*arg4 + (rbx_3 << 3), 0, sx.q(r14_1) << 3)

for (int32_t i = arg3[1]; i s< arg3[3]; i += 1)
    int32_t rcx_19 = i - arg3[1]
    int32_t var_d8
    memcpy(*arg4 + (sx.q(rcx_19 * r15_1) << 3), zx.q(rcx_19 * var_d8) + var_e0, r15_1 << 3)

int64_t* rcx_23 = *(arg1 + 0x150)
int64_t result = (*(*rcx_23 + 0x78))(rcx_23, var_e8, 0)
int64_t* rcx_24 = var_e8

if (rcx_24 != 0)
    result = (*(*rcx_24 + 0x10))(rcx_24)

__security_check_cookie(rax_1 ^ &var_138)
return result
