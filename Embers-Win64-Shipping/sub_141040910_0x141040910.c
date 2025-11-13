// 函数: sub_141040910
// 地址: 0x141040910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1
int512_t zmm0
result_1, zmm0 = j_sub_140a82f30(0x208)
void*** rsi = nullptr
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    void* r8_1 = arg1[6]
    int32_t r9_1 = *arg1[5]
    int32_t rdx = *arg1[4]
    int32_t rcx = *arg1[3]
    int32_t rbx_1 = *arg1[2]
    int32_t r11_1 = *arg1[1]
    int32_t r10_1 = **arg1
    *result = &data_142d3ff08
    result[1].d = 0
    *result = &data_142ef2948
    *(result + 0xc) = 0
    result[2].w = 0x100
    result[3] = 0
    zmm0.o = *(r8_1 + 0x10)
    *(result + 0x20) = zmm0.o
    result[6].d = *(r8_1 + 0x20)
    *(result + 0x34) = rcx
    result[9] = &result[0xa]
    *(result + 0x3c) = rdx
    result[7].d = 1
    result[8].d = r9_1
    result[0xa] = -0x3810000020000000
    result[0xb] = 0
    *result = &data_142ef2a50
    result[0xc].d = r10_1
    *(result + 0x64) = r11_1
    result[0xd].d = rbx_1
    sub_14103fda0(&result[0xe], arg2)
    *result = &data_142f00a18
    result[0xe] = &data_142f00a70

int64_t* r9_2 = arg1[6]
int32_t r10_2

if (*r9_2 == 0)
    r10_2 = *arg1[9]
else
    r10_2 = 0x400

int128_t* rax_9 = arg1[7]
char* rdx_2 = arg1[4]
zmm0.o = *rax_9
uint128_t zmm1 = rax_9[1]
void**** r8_3 = *arg1[8]
int128_t var_68 = zmm0.o
zmm0.o = rax_9[2]
uint128_t var_58 = zmm1
int64_t var_b8 = r9_2[6]
int128_t var_48 = zmm0.o
uint64_t var_38 = rax_9[3].q
int32_t rax_11 = sub_141014050(arg2 + 0x838, &var_68, r8_3, *rdx_2, zmm0, &result[0x17], r10_2)

if (rax_11 s< 0)
    int32_t var_c0
    var_c0.q = sub_141022ce0(arg2)
    sub_141069b00(rax_11, 
        "Device->GetTextureAllocator().AllocateTexture(TextureDesc, ClearValuePtr, Format, "
    "Texture3D->ResourceLocation, (CreateInfo.BulkData != nullptr) ? D3D12_RESOURCE_STATE_COPY_DEST "
    " DestinationState, CreateInfo.DebugName)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Texture.cpp", 0x431, 
        arg1[7])

if (*arg1[0xa] != 0)
    int32_t var_94_1 = 0
    int32_t* rax_16 = arg1[2]
    int32_t var_a8 = *arg1[0xb]
    int64_t var_a4_1 = 8
    int32_t var_9c_1 = 0
    int32_t var_98_1 = *rax_16
    void*** rax_17 = j_sub_140a82f30(0x88)
    void*** rbp_1
    
    if (rax_17 == 0)
        rbp_1 = nullptr
    else
        rbp_1 = sub_14103f110(rax_17, arg2, &var_a8, &result[0x17])
    
    void* rbx_3 = &result[0x2d]
    sub_14104a820(rbx_3, 1)
    
    if (rbp_1 != 0)
        rbp_1[0xd].d += 1
    
    int64_t r13_1 = sx.q(*(rbx_3 + 0x10))
    int32_t rax_19 = (r13_1 + 1).d
    *(rbx_3 + 0x10) = rax_19
    
    if (rax_19 s> *(rbx_3 + 0x14))
        sub_140809610(rbx_3, r13_1.d)
    
    void* rax_20 = *(rbx_3 + 8)
    
    if (rax_20 != 0)
        rbx_3 = rax_20
    
    *(rbx_3 + (r13_1 << 3)) = rbp_1

int64_t var_88 = 0x1688
int128_t var_78 = zx.o(0)
int32_t var_8c = 8
int32_t* rax_22 = arg1[3]
int32_t var_90 = *arg1[0xc]
int32_t var_80 = 0
int32_t var_7c = *rax_22
void*** rax_23 = j_sub_140a82f30(0xa8)

if (rax_23 != 0)
    rsi = sub_14103fc50(rax_23, arg2, &var_90, &result[0x17], 0xffffffff, 0)

sub_1405d16e0(&result[0x2c], rsi)
return result
