// 函数: sub_140ff1ce0
// 地址: 0x140ff1ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
uint32_t rdx = zx.d(*(arg3 + 1))
int32_t var_48 = 0
int32_t var_34 = 0
int32_t r8 = 3
int32_t rax_2

if (rdx == 1)
    rax_2 = 3
else if (rdx == 2)
    rax_2 = 2
else
    rax_2 = 1

int32_t var_54 = rax_2

if (*arg3 == 1)
    r8 = 2

float zmm1 = *(arg3 + 4) * 16777216f
int32_t var_58 = r8
int32_t var_44 = *(arg3 + 8)
int32_t var_50 = 1
int32_t var_40 = 1
int32_t var_3c = 1
int32_t var_4c = int.d(zmm1 + zmm1 - 0.5f) s>> 1
uint32_t var_38 = zx.d(*(arg3 + 0xc))
void*** rax_6 = j_sub_140a82f30(0x20)
void*** rbx = rax_6

if (rax_6 == 0)
    rbx = nullptr
else
    *rbx = &data_142d3ff08
    rbx[1].d = 0
    *rbx = &data_142ef5830
    *(rbx + 0xc) = 0
    rbx[2].w = 0x100
    rbx[3] = 0

int64_t* rcx = rbx[3]
int64_t* r14 = *(arg1 + 0x168)
rbx[3] = 0

if (rcx != 0)
    (*(*rcx + 0x10))(rcx)

int32_t rax_9 = (*(*r14 + 0xb0))(r14, &var_58, &rbx[3])

if (rax_9 s< 0)
    int64_t var_68_1 = *(arg1 + 0x168)
    sub_140fff020(rax_9, 
        "Direct3DDevice->CreateRasterizerState(&RasterizerDesc,RasterizerState->Resource."
    "GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11State.cpp", 0xd4)

*arg2 = rbx

if (rbx != 0)
    rbx[1].d += 1

__security_check_cookie(rax_1 ^ &var_88)
return arg2
