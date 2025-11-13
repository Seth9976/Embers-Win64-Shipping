// 函数: sub_140fe8d70
// 地址: 0x140fe8d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t* var_158 = nullptr
int64_t var_168
int32_t rax_3

if (arg4 == 0)
    int64_t var_5c_1 = 0
    int32_t var_80 = arg3
    int32_t r9
    int32_t var_7c_1 = r9
    int32_t var_78_1 = 1
    int32_t var_74_1 = 1
    int32_t rax_4 = sub_140fe89c0(arg2)
    int64_t* rcx_2 = *(arg1 + 0x168)
    int32_t var_70_1 = rax_4
    int64_t var_6c_1 = 1
    int32_t var_64_1 = 0
    int32_t var_60_1 = 0x28
    rax_3 = (*(*rcx_2 + 0x28))(rcx_2, &var_80, 0, &var_158)
    
    if (rax_3 s< 0)
        var_168 = *(arg1 + 0x168)
        sub_140fff020(rax_3, 
            "D3DRHI->GetDevice()->CreateTexture2D(&TextureDesc, NULL, BackBufferResource."
        "GetInitReference())", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp", 
            0x7d)
else
    rax_3 = (*(*arg4 + 0x48))(arg4, 0, &data_1435fc2c0, &var_158)
    
    if (rax_3 s< 0)
        var_168 = *(arg1 + 0x168)
        sub_140fff020(rax_3, 
            "SwapChain->GetBuffer(0, IID_ID3D11Texture2D, (void**)BackBufferResource.GetInitReference())", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp", 
            0x6c)
bool cond:0 = data_143e2c164 == 0
int64_t* var_138
int64_t* r9_4 = &var_138
int64_t* rcx_5 = *(arg1 + 0x168)
int64_t* rdx_2 = var_158
int64_t* var_140 = nullptr
var_138 = nullptr
int32_t rax_10

if (cond:0)
    int32_t var_e0 = 0
    int64_t var_dc_1 = 4
    rax_10 = (*(*rcx_5 + 0x48))(rcx_5, rdx_2, &var_e0, r9_4, var_168)
    
    if (rax_10 s< 0)
        var_168 = *(arg1 + 0x168)
        sub_140fff020(rax_10, 
            "D3DRHI->GetDevice()->CreateRenderTargetView(BackBufferResource, &RTVDesc, "
        "BackBufferRenderTargetView.GetInitReference())", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp", 
            0x95)
else
    int32_t var_128 = 0x18
    int64_t var_124_1 = 5
    int32_t var_11c_1 = 0
    int32_t var_118_1 = 1
    int32_t rax_7 = (*(*rcx_5 + 0x48))(rcx_5, rdx_2, &var_128, r9_4, var_168)
    
    if (rax_7 s< 0)
        var_168 = *(arg1 + 0x168)
        sub_140fff020(rax_7, 
            "D3DRHI->GetDevice()->CreateRenderTargetView(BackBufferResource, &RTVDescCD3D11_left, "
        "BackBufferRenderTargetView.GetInitReference())", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp", 
            0x89)
    
    int64_t* rcx_8 = var_140
    int64_t* rbx_1 = *(arg1 + 0x168)
    int32_t var_110 = 0x18
    int64_t var_10c_1 = 5
    int32_t var_104_1 = 1
    int32_t var_100_1 = 1
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0x10))(rcx_8)
    
    rax_10 = (*(*rbx_1 + 0x48))(rbx_1, var_158, &var_110, &var_140, var_168)
    
    if (rax_10 s< 0)
        var_168 = *(arg1 + 0x168)
        sub_140fff020(rax_10, 
            "D3DRHI->GetDevice()->CreateRenderTargetView(BackBufferResource, "
        "&renderTargetViewRightDesc_right, BackBufferRenderTargetViewRight.GetInitReference())", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp", 
            0x8d)
int64_t* rcx_12 = var_158
int32_t var_b0
(*(*rcx_12 + 0x50))(rcx_12, &var_b0)
int64_t* var_150 = nullptr
int32_t i_4 = 1
sub_1405a4d70(&var_150)
int64_t* rcx_14 = var_138
int64_t* r13 = var_150
*r13 = rcx_14

if (rcx_14 != 0)
    (*(*rcx_14 + 8))()

int32_t i_2

if (data_143e2c164 == 0)
    i_2 = i_4
else
    int64_t i_5 = sx.q(i_4)
    i_2 = (i_5 + 1).d
    
    if (i_2 s> 0)
        sub_1405a4d70(&var_150)
        r13 = var_150
    
    int64_t* rcx_16 = var_140
    r13[i_5] = rcx_16
    
    if (rcx_16 != 0)
        (*(*rcx_16 + 8))()

int64_t* rcx_17 = *(arg1 + 0x168)
int64_t* rdx_8 = var_158
int32_t var_f8 = 0
int64_t var_f4 = 4
int32_t var_ec = 1
int64_t* var_130 = nullptr
int32_t rax_16 = (*(*rcx_17 + 0x38))(rcx_17, rdx_8, &var_f8, &var_130, var_168)

if (rax_16 s< 0)
    int64_t var_168_1 = *(arg1 + 0x168)
    sub_140fff020(rax_16, 
        "D3DRHI->GetDevice()->CreateShaderResourceView(BackBufferResource,&SRVDesc,"
    "BackBufferShaderResourceView.GetInitReference())", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp", 
        0xab)

void*** result_1 = j_sub_140a82f30(0xf8)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    int64_t* r8_4 = var_158
    uint128_t zmm1 = zx.o(0)
    int32_t rcx_20 = var_b0
    int32_t var_c8_1 = 1
    int64_t* r14_1 = var_130
    *result = &data_142d3ff08
    uint128_t var_c4_1 = zmm1
    result[1].d = 0
    *(result + 0xc) = 0
    result[2].w = 0x100
    result[3] = 0
    result[9] = &result[0xa]
    *(result + 0x3c) = arg2
    *(result + 0x34) = 1
    result[7].d = 1
    result[8].d = 0
    uint128_t temp0_1 = _mm_bsrli_si128(zmm1, 0xc)
    *(result + 0x20) = var_c8_1.o
    result[6].d = temp0_1.d
    result[0xa] = -0x3810000020000000
    result[0xb] = 0
    *result = &data_142ef29a0
    result[0xc].d = rcx_20
    int32_t var_ac
    *(result + 0x64) = var_ac
    result[0xd] = &data_142ef5880
    result[0xe].d = 0
    *(result + 0x74) = 0xffffffff
    result[0xf].b = 0
    result[0x10] = arg1
    result[0x11] = 0
    result[0x12].d = 0
    result[0x13] = &result[0xd]
    result[0x14] = r8_4
    
    if (r8_4 != 0)
        (*(*r8_4 + 8))(r8_4)
    
    result[0x15] = r14_1
    
    if (r14_1 != 0)
        (*(*r14_1 + 8))(r14_1)
    
    result[0x16] = 0
    result[0x17].d = i_2
    
    if (i_2 != 0)
        sub_1405c4a00(&result[0x16], i_2, 0)
        int64_t* r14_2 = result[0x16]
        int32_t i_3 = i_2
        int64_t* rdi_1 = r13
        int32_t i
        
        do
            int64_t* rcx_24 = *rdi_1
            *r14_2 = rcx_24
            
            if (rcx_24 != 0)
                (*(*rcx_24 + 8))()
            
            r14_2 = &r14_2[1]
            rdi_1 = &rdi_1[1]
            i = i_3
            i_3 -= 1
        while (i != 1)
    else
        *(result + 0xbc) = 0
    
    result[0x18].b = 0
    *(result + 0xc4) = 1
    __builtin_memset(&result[0x19], 0, 0x24)
    *(result + 0xf4) &= 0xfffffffc
    *result = &data_142ef5b20
    result[0xd] = &data_142ef5b78
    result[0x1e].d = 0

sub_140fd4570(result)
result[2].b = 1
int64_t* rcx_26 = var_130

if (rcx_26 != 0)
    (*(*rcx_26 + 0x10))(rcx_26)

int64_t* rdi_2 = r13

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t* rcx_27 = *rdi_2
        
        if (rcx_27 != 0)
            (*(*rcx_27 + 0x10))(rcx_27)
        
        rdi_2 = &rdi_2[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (r13 != 0)
    sub_140a74f90(r13)

int64_t* rcx_29 = var_140

if (rcx_29 != 0)
    (*(*rcx_29 + 0x10))(rcx_29)

int64_t* rcx_30 = var_138

if (rcx_30 != 0)
    int64_t rdx_11 = *rcx_30
    (*(rdx_11 + 0x10))(rcx_30, rdx_11)

int64_t* rcx_31 = var_158

if (rcx_31 != 0)
    int64_t rdx_12 = *rcx_31
    (*(rdx_12 + 0x10))(rcx_31, rdx_12)

__security_check_cookie(rax_1 ^ &var_188)
return result
