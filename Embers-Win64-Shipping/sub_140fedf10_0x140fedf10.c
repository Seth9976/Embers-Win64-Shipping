// 函数: sub_140fedf10
// 地址: 0x140fedf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
uint64_t rbx = zx.q(arg5)
int32_t i_1 = arg6
void* r12 = arg1
int64_t* rdi = nullptr
char var_1d8 = rbx.b
int64_t* var_1c8 = nullptr
int64_t* var_1c0 = nullptr
int32_t i_2 = i_1
int64_t var_138
memset(&var_138, 0, 0xe0)
uint64_t r13 = rbx * 5
int32_t rbx_1 = (&data_1439c85fc)[r13 * 2]
int32_t rax_2 = sub_140fe7330(rbx_1, (arg7 u>> 4).b & 1)
uint64_t r14_1 = zx.q(arg9)
int32_t rcx_2 = arg3
int32_t i = 0
int32_t r9 = arg4
int32_t var_15c = 1
int64_t var_154 = 1
int32_t var_168 = rcx_2
int32_t var_164 = r9
int32_t i_4 = i_1
char var_158 = rbx_1.b
int32_t var_14c = 0
int64_t var_148 = 8
int32_t var_140 = 0
int32_t var_130

if (r14_1.d != 0)
    void* r11_1 = arg8
    int32_t r15_1 = *((r13 << 3) + 0x1439c85e8)
    int32_t* r9_1 = &var_130
    int32_t rbx_2 = (&data_1439c85f4)[r13 * 2]
    
    do
        r9_1 = &r9_1[4]
        char rcx_3 = i.b
        r11_1 += 8
        uint32_t temp0_1 = divu.dp.d(0:(arg3 u>> rcx_3), r15_1)
        uint32_t r8 = temp0_1
        
        if (temp0_1 u<= 1)
            r8 = 1
        
        uint32_t rcx_4 = divu.dp.d(0:(arg4 u>> rcx_3), *((r13 << 3) + &data_1439c85ec))
        *(r9_1 - 0x18) = *(r11_1 - 8)
        r9_1[-4] = rbx_2 * r8
        
        if (rcx_4 u<= 1)
            rcx_4 = 1
        
        i += 1
        r9_1[-3] = rcx_4 * rbx_2 * r8
    while (i u< r14_1.d)
    
    rdi = var_1c8
    r12 = arg1
    i_1 = i_2
    rcx_2 = arg3
    r9 = arg4

int64_t r15_2 = *(r12 + 0x26d0)
int32_t rbx_3 = *(r12 + 0x26d8)

if (r14_1.d u< i_1)
    int32_t r8_1 = (&data_1439c85f4)[r13 * 2]
    void* rdi_1 = &(&var_130)[r14_1 * 4]
    
    do
        char rcx_7 = r14_1.b
        uint32_t temp0_3 = divu.dp.d(0:(rcx_2 u>> rcx_7), *((r13 << 3) + 0x1439c85e8))
        uint32_t r12_2 = temp0_3
        
        if (temp0_3 u<= 1)
            r12_2 = 1
        
        uint32_t temp0_4 = divu.dp.d(0:(r9 u>> rcx_7), *((r13 << 3) + &data_1439c85ec))
        uint32_t rsi_1 = temp0_4
        
        if (temp0_4 u<= 1)
            rsi_1 = 1
        
        int32_t rsi_3 = rsi_1 * r8_1 * r12_2
        
        if (rsi_3 u> rbx_3)
            int64_t rax_20 = sub_140a82f30(zx.q(rsi_3), 0)
            r15_2 = rax_20
            memset(rax_20, 0, zx.q(rsi_3))
            r9 = arg4
            r8_1 = (&data_1439c85f4)[r13 * 2]
            rbx_3 = rsi_3
        
        rcx_2 = arg3
        r14_1 = zx.q(r14_1.d + 1)
        *(rdi_1 + 4) = rsi_3
        i_1 = i_2
        *(rdi_1 - 8) = r15_2
        *rdi_1 = r8_1 * r12_2
        rdi_1 += 0x10
    while (r14_1.d u< i_1)
    
    rdi = var_1c8
    r12 = arg1

if (rdi != 0)
    (*(*rdi + 0x10))(rdi)

int64_t* rdi_2 = *(r12 + 0x168)
int32_t rax_25 = (*(*rdi_2 + 0x28))(rdi_2, &var_168, &var_138, &var_1c8)
int32_t var_258
int32_t var_250
int32_t var_248
int32_t var_240
char var_238
int32_t i_5
int32_t var_228
int32_t var_220
int32_t var_218
int32_t var_210
int32_t var_208
int32_t var_200
int64_t var_1f8
int32_t var_1f0
int32_t var_1e8
int64_t* var_1e0
uint32_t r14_2

if (rax_25 s>= 0)
    r14_2 = zx.d(var_1d8)
else
    r14_2 = zx.d(var_1d8)
    var_1e0 = rdi_2
    int32_t var_12c
    var_1e8 = var_12c
    var_1f0 = var_130
    var_1f8 = var_138
    var_200 = var_154:4.d
    var_208 = var_154.d
    var_210 = var_140
    var_218 = var_148:4.d
    var_220 = var_14c
    var_228 = var_148.d
    i_5 = i_4
    var_238 = var_158
    var_240 = var_15c
    var_248 = var_164
    var_250 = var_168
    var_258 = 0x1e0
    sub_140ffeb30(rax_25, r14_2, 
        "Direct3DDevice->CreateTexture2D(TextureDesc,SubResourceData,OutTexture2D)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp", 
        var_258, var_250, var_248, var_240, var_238, i_5, var_228.b, var_220, var_218, var_210, 
        var_208, var_200, var_1f8, var_1f0, var_1e8, var_1e0)

if (rbx_3 != *(r12 + 0x26d8))
    sub_140a74f90(r15_2)

int64_t* rcx_14 = var_1c0
int64_t* rbx_4 = *(r12 + 0x168)
int32_t var_198 = rax_2
int64_t var_194 = 4
int32_t i_3 = i_1

if (rcx_14 != 0)
    (*(*rcx_14 + 0x10))(rcx_14)

int32_t rax_43 = (*(*rbx_4 + 0x38))(rbx_4, var_1c8, &var_198, &var_1c0, var_258, var_250, var_248, 
    var_240, var_238, i_5, var_228, var_220, var_218, var_210, var_208, var_200, var_1f8, var_1f0, 
    var_1e8, var_1e0, var_1d8, arg4)

if (rax_43 s< 0)
    var_258.q = *(r12 + 0x168)
    sub_140fff020(rax_43, 
        "Direct3DDevice->CreateShaderResourceView(TextureResource,&SRVDesc,ShaderResourceView."
    "GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp", 
        0x4b0)

void*** rax_45 = j_sub_140a82f30(0xf8)
void*** rbx_5 = rax_45

if (rax_45 == 0)
    rbx_5 = nullptr
else
    int64_t* rcx_17 = var_1c8
    int64_t* rsi_4 = var_1c0
    *rbx_5 = &data_142d3ff08
    uint128_t zmm1 = zx.o(0)
    int32_t var_180_1 = 1
    uint128_t var_17c_1 = zmm1
    rbx_5[1].d = 0
    *(rbx_5 + 0xc) = 0
    rbx_5[2].w = 0x100
    rbx_5[3] = 0
    *(rbx_5 + 0x34) = i_2
    rbx_5[7].d = 1
    *(rbx_5 + 0x3c) = zx.d(r14_2.b)
    rbx_5[9] = &rbx_5[0xa]
    rbx_5[8].d = arg7
    zmm1 = _mm_bsrli_si128(zmm1, 0xc)
    *(rbx_5 + 0x20) = var_180_1.o
    rbx_5[6].d = zmm1.d
    rbx_5[0xa] = -0x3810000020000000
    rbx_5[0xb] = 0
    *(rbx_5 + 0x64) = arg4
    *rbx_5 = &data_142ef29a0
    rbx_5[0xc].d = arg3
    rbx_5[0xd] = &data_142ef5880
    rbx_5[0xe].d = 0
    *(rbx_5 + 0x74) = 0xffffffff
    rbx_5[0xf].b = 0
    rbx_5[0x10] = r12
    rbx_5[0x11] = 0
    rbx_5[0x12].d = 0
    rbx_5[0x13] = &rbx_5[0xd]
    rbx_5[0x14] = rcx_17
    
    if (rcx_17 != 0)
        (*(*rcx_17 + 8))()
    
    rbx_5[0x15] = rsi_4
    
    if (rsi_4 != 0)
        (*(*rsi_4 + 8))(rsi_4)
    
    __builtin_memset(&rbx_5[0x16], 0, 0x11)
    *(rbx_5 + 0xc4) = 1
    __builtin_memset(&rbx_5[0x19], 0, 0x24)
    *(rbx_5 + 0xf4) &= 0xfffffffc
    *rbx_5 = &data_142ef5b20
    rbx_5[0xd] = &data_142ef5b78
    rbx_5[0x1e].d = arg7

sub_140fd4570(rbx_5)
*arg2 = rbx_5

if (rbx_5 != 0)
    rbx_5[1].d += 1

int64_t* rcx_20 = var_1c0

if (rcx_20 != 0)
    int64_t rdx_7 = *rcx_20
    (*(rdx_7 + 0x10))(rcx_20, rdx_7)

int64_t* rcx_21 = var_1c8

if (rcx_21 != 0)
    int64_t rdx_8 = *rcx_21
    (*(rdx_8 + 0x10))(rcx_21, rdx_8)

__security_check_cookie(rax_1 ^ &var_278)
return arg2
