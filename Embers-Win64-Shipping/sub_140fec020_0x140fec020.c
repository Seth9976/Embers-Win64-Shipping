// 函数: sub_140fec020
// 地址: 0x140fec020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t rsi_2 = *(arg1 + 0x34) * arg3 + arg2
int64_t rdx = sx.q(*(arg1 + 0x3c)) * 5
uint32_t r8 = *((rdx << 3) + 0x1439c85e8)
uint32_t r13 = r8
uint32_t r9 = *((rdx << 3) + &data_1439c85ec)
int32_t r12 = (&data_1439c85f4)[rdx * 2]
uint32_t rax_4 = *(arg1 + 0x60) u>> arg2.b
uint32_t rcx_1 = r9

if (rax_4 u>= r8)
    r13 = rax_4

if (rax_4 u>= r9)
    rcx_1 = rax_4

uint32_t var_b0 = rcx_1
uint32_t temp0 = divu.dp.d(0:(r8 - 1 + r13), r8)
int64_t* result_5 = nullptr
int16_t var_90 = 0
int64_t* result_1
int32_t var_a0_1
int64_t* result
int64_t* result_2

if (arg4 != 1)
    int64_t* rcx_6 = *(arg1 + 0xa8)
    uint32_t var_78
    (*(*rcx_6 + 0x50))(rcx_6, &var_78, 0)
    uint32_t var_74_1 = var_b0
    void* rax_21 = *(arg1 + 0x88)
    var_78 = r13
    int32_t var_70_1 = 1
    int32_t var_6c_1 = 1
    int32_t var_5c_1 = 3
    int64_t var_54_1 = 0x20000
    result_1 = nullptr
    int64_t* rcx_7 = *(rax_21 + 0x168)
    int32_t rax_23 = (*(*rcx_7 + 0x28))(rcx_7, &var_78, 0, &result_1)
    int32_t var_120
    int32_t var_118
    int32_t var_110
    int32_t var_108
    int32_t var_100
    int32_t var_f8
    int32_t var_f0
    int64_t var_e8
    int32_t var_e0
    int32_t var_d8
    int64_t* var_d0
    
    if (rax_23 s< 0)
        int32_t r8_2 = *(arg1 + 0x60)
        var_d0 = *(*(arg1 + 0x88) + 0x168)
        var_d8 = 0
        var_e0 = 0
        var_e8 = 0
        int32_t var_60
        var_f0 = var_60
        int32_t var_64
        var_f8 = var_64
        var_100 = var_54_1:4.d
        var_108 = var_54_1.d
        var_110 = var_5c_1
        var_118 = 0
        var_120 = 1
        char var_68
        sub_140ffeb30(rax_23, *(arg1 + 0x3c), 
            "D3DRHI->GetDevice()->CreateTexture2D(&StagingTextureDesc,NULL,StagingTexture."
        "GetInitReference())", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp", 
            0x663, r8_2, r8_2, *(arg1 + 0x68), var_68, var_120, var_118.b, var_110, var_108, 
            var_100, var_f8, var_f0, var_e8, var_e0, var_d8, var_d0)
    
    int64_t* result_4 = result_1
    int64_t* result_7 = result_5
    result_5 = result_4
    
    if (result_4 != 0)
        (*(*result_4 + 8))(result_4)
        result_4 = result_1
    
    if (result_7 != 0)
        (*(*result_7 + 0x10))(result_7, result_4)
        result_4 = result_1
    
    char var_128
    var_128.q = 0
    int64_t* rcx_14 = *(*(arg1 + 0x88) + 0x150)
    int32_t var_138
    var_138.q = *(arg1 + 0xa8)
    (*(*rcx_14 + 0x170))(rcx_14, result_4, 0, 0, 0, 0, var_138, rsi_2, var_128, var_120, var_118, 
        var_110, var_108, var_100, var_f8, var_f0, var_e8, var_e0, var_d8, var_d0)
    int32_t var_140_2
    var_140_2.q = &result_2
    int64_t* rcx_15 = *(*(arg1 + 0x88) + 0x150)
    int32_t rax_35 = (*(*rcx_15 + 0x70))(rcx_15, result_1, 0, 1, 0, var_140_2)
    
    if (rax_35 s< 0)
        int32_t var_148_4
        var_148_4.q = *(*(arg1 + 0x88) + 0x168)
        sub_140fff020(rax_35, 
            "D3DRHI->GetDeviceContext()->Map(StagingTexture,0,D3D11_MAP_READ,0,&MappedTexture)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp", 
            0x66b)
    
    int64_t* result_3 = result_1
    result = result_2
    int32_t var_80
    *arg5 = var_80
    var_a0_1 = var_80
    
    if (result_3 != 0)
        (*(*result_3 + 0x10))(result_3)
    
    goto label_140fec37a

if (arg6 == 0 && (*(arg1 + 0xf8) & 0x20) != 0)
    int32_t var_140
    var_140.q = &result_1
    int64_t* rcx_2 = *(*(arg1 + 0x88) + 0x150)
    int32_t rax_15 = (*(*rcx_2 + 0x70))(rcx_2, *(arg1 + 0xa8), zx.q(rsi_2), 2, 0, var_140)
    
    if (rax_15 s< 0)
        int32_t var_148_1
        var_148_1.q = *(*(arg1 + 0x88) + 0x168)
        sub_140fff020(rax_15, 
            "D3DRHI->GetDeviceContext()->Map(GetResource(), Subresource, D3D11_MAP_WRITE, 0, "
        "&MappedTexture)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp", 
            0x634)
    
    result = result_1
    int32_t var_b8
    *arg5 = var_b8
    int32_t var_a0 = var_b8
    goto label_140fec386

int32_t rdi_1 = temp0 * r12
result = sub_140a82f30(zx.q(divu.dp.d(0:(r9 - 1 + rcx_1), r9) * temp0 * r12), 0x10)
var_90 = 0x101
*arg5 = rdi_1
var_a0_1 = rdi_1
label_140fec37a:

if (arg6 != 0)
    int64_t* result_8 = result_5
    
    if (result_8 != 0)
        (*(*result_8 + 8))(result_8)
    
    void*** rcx_24 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_42 = &rcx_24[8]
    
    if (rax_42 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x48)
        rcx_24 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_42 = &rcx_24[8]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_42
    *data_143f02ba0 = rcx_24
    data_143f02ba0 = &rcx_24[1]
    rcx_24[1] = 0
    *rcx_24 = &data_142efaec8
    rcx_24[2] = arg1
    rcx_24[3].d = rsi_2
    rcx_24[4] = result_8
    rcx_24[5].d = var_a0_1
    int32_t var_9c
    *(rcx_24 + 0x2c) = var_9c
    rcx_24[6] = result
    rcx_24[7].b = var_90.b
    *(rcx_24 + 0x39) = var_90:1.b
else
label_140fec386:
    void* rdi_2 = *(arg1 + 0x88)
    result_2 = *(arg1 + 0xa8)
    int32_t var_80_1 = rsi_2
    EnterCriticalSection(rdi_2 + 0x2658)
    result_1 = &result_2
    int64_t* var_b8_1 = &result_5
    sub_140fd4a30(rdi_2 + 0x2608, &var_b0, &result_1, nullptr)
    
    if (rdi_2 != -0x2658)
        LeaveCriticalSection(rdi_2 + 0x2658)

int64_t* result_6 = result_5

if (result_6 != 0)
    int64_t rdx_11 = *result_6
    (*(rdx_11 + 0x10))(result_6, rdx_11)

__security_check_cookie(rax_1 ^ &var_168)
return result
