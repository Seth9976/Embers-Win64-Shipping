// 函数: sub_140fecbb0
// 地址: 0x140fecbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* rdx = arg3 + 0x20
int32_t rsi = arg4
bool cond:0 = arg3 == 0
void* r14 = arg3
arg3.b = 1

if (cond:0)
    rdx = nullptr

sub_140fdf350(arg1, rdx, arg3.b)
int64_t* rcx = *(r14 + 0x38)
int32_t var_58
(*(*rcx + 0x50))(rcx, &var_58)
int64_t var_98 = *(r14 + 0x38)
int32_t var_90 = 0
int64_t* var_c8 = nullptr
int16_t var_b0 = 0
int64_t* var_d8
int64_t* var_b8
int64_t* var_a8
int32_t var_54
int32_t var_c0_1

if (var_54 == 2)
    int64_t r10_1 = *(**(arg1 + 0x150) + 0x70)
    int64_t* var_100_1 = &var_d8
    int32_t var_108_1 = 0
    int32_t rax_4
    
    if (arg7 != 1)
        rax_4 = r10_1(arg5, arg2, 0, 5, var_108_1, var_100_1)
        
        if (rax_4 s< 0)
            var_108_1.q = *(arg1 + 0x168)
            sub_140fff020(rax_4, 
                "Direct3DDeviceIMContext->Map(VertexBuffer->Resource,0,D3D11_MAP_WRITE_NO_OVERWRITE,0,"
            "&MappedSubresource)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11VertexBuffer.cpp", 
                0x94)
    else
        rax_4 = r10_1(arg5, arg2, 0, 4, var_108_1, var_100_1)
        
        if (rax_4 s< 0)
            var_108_1.q = *(arg1 + 0x168)
            sub_140fff020(rax_4, 
                "Direct3DDeviceIMContext->Map(VertexBuffer->Resource,0,D3D11_MAP_WRITE_DISCARD,0,"
            "&MappedSubresource)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11VertexBuffer.cpp", 
                0x90)
    var_b8 = var_d8
    int32_t var_d0
    var_c0_1 = var_d0
else if (arg7 != 0)
    var_b8 = sub_140a82f30(zx.q(var_58), 0x10)
    var_b0.b = 1
    var_c0_1 = var_58
else
    int64_t* rcx_4 = *(arg1 + 0x168)
    int64_t var_78_1 = 0
    int64_t var_84_1 = 3
    int32_t var_7c_1 = 0x20000
    var_d8 = nullptr
    int32_t var_88 = arg6
    int32_t rax_8 = (*(*rcx_4 + 0x18))(rcx_4, &var_88, 0, &var_d8)
    
    if (rax_8 s< 0)
        int32_t var_108
        var_108.q = *(arg1 + 0x168)
        sub_140fff020(rax_8, 
            "Direct3DDevice->CreateBuffer(&StagingBufferDesc,NULL,StagingVertexBuffer.GetInitReference())", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11VertexBuffer.cpp", 
            0xa7)
    
    int64_t* rdx_5 = var_d8
    int64_t* rbx_1 = var_c8
    var_c8 = rdx_5
    
    if (rdx_5 != 0)
        (*(*rdx_5 + 8))(rdx_5)
        rdx_5 = var_d8
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x10))(rbx_1, rdx_5)
        rdx_5 = var_d8
    
    int64_t* rcx_9 = *(arg1 + 0x150)
    int32_t var_64_1 = rsi + arg6
    int32_t var_70 = rsi
    int64_t var_6c_1 = 0
    int32_t var_5c_1 = 1
    int32_t var_60_1 = 1
    int64_t var_100
    var_100.d = 0
    (*(*rcx_9 + 0x170))(rcx_9, rdx_5, 0, 0, 0, var_100, *(r14 + 0x38), 0, &var_70)
    int64_t* rcx_10 = *(arg1 + 0x150)
    int32_t rax_14 = (*(*rcx_10 + 0x70))(rcx_10, var_d8, 0, 1, 0, &var_a8)
    
    if (rax_14 s< 0)
        int32_t var_108_3
        var_108_3.q = *(arg1 + 0x168)
        sub_140fff020(rax_14, 
            "Direct3DDeviceIMContext->Map(StagingVertexBuffer,0,D3D11_MAP_READ,0,&MappedSubresource)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11VertexBuffer.cpp", 
            0xb4)
    
    rsi = 0
    int64_t* rcx_13 = var_d8
    var_b8 = var_a8
    int32_t var_a0
    int32_t var_c0 = var_a0
    
    if (rcx_13 != 0)
        (*(*rcx_13 + 0x10))(rcx_13)
EnterCriticalSection(arg1 + 0x2658)
var_a8 = &var_98
int64_t* var_a0_1 = &var_c8
sub_140fd4a30(arg1 + 0x2608, &var_d8, &var_a8, nullptr)

if (arg1 != -0x2658)
    LeaveCriticalSection(arg1 + 0x2658)

int64_t* rcx_18 = var_c8

if (rcx_18 != 0)
    int64_t rdx_8 = *rcx_18
    (*(rdx_8 + 0x10))(rcx_18, rdx_8)

__security_check_cookie(rax_1 ^ &var_128)
return zx.q(rsi) + var_b8
