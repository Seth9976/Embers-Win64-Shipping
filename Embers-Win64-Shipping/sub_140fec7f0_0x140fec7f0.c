// 函数: sub_140fec7f0
// 地址: 0x140fec7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* rdx = arg3 + 0x28
void* rsi = arg3
bool cond:0 = arg3 == 0
arg3.b = 1

if (cond:0)
    rdx = nullptr

sub_140fdf350(arg1, rdx, arg3.b)
int64_t* rcx = *(rsi + 0x40)
int32_t var_50
(*(*rcx + 0x50))(rcx, &var_50)
int64_t var_78 = *(rsi + 0x40)
int32_t var_70 = 0
int64_t* var_a8 = nullptr
int16_t var_90 = 0
int64_t* var_b8
int64_t* var_98
int64_t* var_88
int32_t var_4c
int32_t var_a0_1

if (var_4c == 2)
    int64_t* rcx_1 = *(arg1 + 0x150)
    int32_t rax_4 = (*(*rcx_1 + 0x70))(rcx_1, arg2, 0, 4, 0, &var_b8)
    
    if (rax_4 s< 0)
        int32_t var_c8_1
        var_c8_1.q = *(arg1 + 0x168)
        sub_140fff020(rax_4, 
            "Direct3DDeviceIMContext->Map(StructuredBuffer->Resource,0,D3D11_MAP_WRITE_DISCARD,0,"
        "&MappedSubresource)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11StructuredBuffer.cpp", 
            0x7e)
    
    var_98 = var_b8
    int32_t var_b0
    var_a0_1 = var_b0
else if (arg6 != 0)
    var_98 = sub_140a82f30(zx.q(var_50), 0x10)
    var_90.b = 1
    var_a0_1 = var_50
else
    int64_t* rcx_4 = *(arg1 + 0x168)
    int64_t var_58_1 = 0
    int32_t var_68 = arg5
    int64_t var_64_1 = 3
    int32_t var_5c_1 = 0x20000
    var_b8 = nullptr
    int32_t rax_9 = (*(*rcx_4 + 0x18))(rcx_4, &var_68, 0, &var_b8)
    
    if (rax_9 s< 0)
        int32_t var_c8
        var_c8.q = *(arg1 + 0x168)
        sub_140fff020(rax_9, 
            "Direct3DDevice->CreateBuffer(&StagingBufferDesc,NULL,StagingStructuredBuffer."
        "GetInitReference())", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11StructuredBuffer.cpp", 
            0x8f)
    
    int64_t* rdx_4 = var_b8
    int64_t* rbx_1 = var_a8
    var_a8 = rdx_4
    
    if (rdx_4 != 0)
        (*(*rdx_4 + 8))(rdx_4)
        rdx_4 = var_b8
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x10))(rbx_1, rdx_4)
        rdx_4 = var_b8
    
    int64_t* rcx_9 = *(arg1 + 0x150)
    (*(*rcx_9 + 0x178))(rcx_9, rdx_4, *(rsi + 0x40))
    int64_t* rcx_10 = *(arg1 + 0x150)
    int32_t rax_14 = (*(*rcx_10 + 0x70))(rcx_10, var_b8, 0, 1, 0, &var_88)
    
    if (rax_14 s< 0)
        int32_t var_c8_2
        var_c8_2.q = *(arg1 + 0x168)
        sub_140fff020(rax_14, 
            "Direct3DDeviceIMContext->Map(StagingStructuredBuffer,0,D3D11_MAP_READ,0,&MappedSubresource)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11StructuredBuffer.cpp", 
            0x97)
    
    int64_t* rcx_13 = var_b8
    var_98 = var_88
    int32_t var_80
    int32_t var_a0 = var_80
    
    if (rcx_13 != 0)
        (*(*rcx_13 + 0x10))(rcx_13)
EnterCriticalSection(arg1 + 0x2658)
var_88 = &var_78
int64_t* var_80_1 = &var_a8
sub_140fd4a30(arg1 + 0x2608, &var_b8, &var_88, nullptr)

if (arg1 != -0x2658)
    LeaveCriticalSection(arg1 + 0x2658)

int64_t* rcx_18 = var_a8

if (rcx_18 != 0)
    int64_t rdx_7 = *rcx_18
    (*(rdx_7 + 0x10))(rcx_18, rdx_7)

__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(arg4) + var_98
