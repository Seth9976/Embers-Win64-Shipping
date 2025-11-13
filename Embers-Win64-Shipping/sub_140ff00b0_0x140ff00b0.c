// 函数: sub_140ff00b0
// 地址: 0x140ff00b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
void var_140
memset(&var_140, 0, 0x100)
void* r8 = arg3 + 2
uint32_t var_144 = zx.d(*(arg3 + 0x38))
int32_t var_148 = 0
void var_13c
void* r9 = &var_13c
int64_t i_1 = 8
int64_t i

do
    char rcx_1 = *(r8 - 2)
    int32_t rax_3
    char rdx
    char r10_1
    char r11_1
    
    if (rcx_1 != 0 || *r8 != 0 || *(r8 - 1) != 1 || *(r8 + 1) != 0 || *(r8 + 3) != 0
            || *(r8 + 2) != 1)
        rdx = *(r8 - 1)
        rax_3 = 1
        r10_1 = *r8
        r11_1 = *(r8 + 1)
    else
        r10_1 = 0
        rax_3 = 0
        r11_1 = 0
        rdx = 1
    
    uint32_t rcx_2 = zx.d(rcx_1)
    *(r9 - 4) = rax_3
    int32_t rax_4
    
    if (rcx_2 == 1)
        rax_4 = 2
    else if (rcx_2 == 2)
        rax_4 = 4
    else if (rcx_2 == 3)
        rax_4 = 5
    else if (rcx_2 == 4)
        rax_4 = 3
    else
        rax_4 = 1
    
    *(r9 + 8) = rax_4
    *r9 = sub_140ffde40(zx.d(rdx))
    uint32_t rcx_8 = zx.d(r11_1)
    *(r9 + 4) = sub_140ffde40(zx.d(r10_1))
    int32_t rax_7
    
    if (rcx_8 == 1)
        rax_7 = 2
    else if (rcx_8 == 2)
        rax_7 = 4
    else if (rcx_8 == 3)
        rax_7 = 5
    else if (rcx_8 == 4)
        rax_7 = 3
    else
        rax_7 = 1
    
    uint32_t rcx_12 = zx.d(*(r8 + 2))
    *(r9 + 0x14) = rax_7
    int32_t rax_8 = sub_140ffde40(rcx_12)
    uint32_t rcx_13 = zx.d(*(r8 + 3))
    *(r9 + 0xc) = rax_8
    *(r9 + 0x10) = sub_140ffde40(rcx_13)
    char rax_10 = *(r8 + 4)
    r8 += 7
    *(r9 + 0x18) = rax_10 & 0xf
    r9 += 0x20
    i = i_1
    i_1 -= 1
while (i != 1)
void*** rax_11 = j_sub_140a82f30(zx.q((i_1 + 0x20).d))
void*** rbx_1 = rax_11

if (rax_11 == 0)
    rbx_1 = nullptr
else
    *rbx_1 = &data_142d3ff08
    rbx_1[1].d = 0
    *rbx_1 = &data_142ef5830
    *(rbx_1 + 0xc) = 0
    rbx_1[2].w = 0x100
    rbx_1[3] = 0

int64_t* rcx_15 = rbx_1[3]
int64_t* rsi = *(arg1 + 0x168)
rbx_1[3] = 0

if (rcx_15 != 0)
    (*(*rcx_15 + 0x10))(rcx_15)

int32_t rax_14 = (*(*rsi + 0xa0))(rsi, &var_148, &rbx_1[3])

if (rax_14 s< 0)
    int64_t var_158_1 = *(arg1 + 0x168)
    sub_140fff020(rax_14, 
        "Direct3DDevice->CreateBlendState(&BlendDesc,BlendState->Resource.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11State.cpp", 0x125)

*arg2 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

__security_check_cookie(rax_1 ^ &var_178)
return arg2
