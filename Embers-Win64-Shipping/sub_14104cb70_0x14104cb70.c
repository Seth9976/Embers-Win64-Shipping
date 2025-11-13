// 函数: sub_14104cb70
// 地址: 0x14104cb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void* rax_2 = *arg1
int64_t* rcx = *(rax_2 + 0x18)
int32_t rdi = *(rax_2 + 0x48)
int64_t* rcx_1 = arg1[0x10]
int64_t* var_188 = nullptr
arg1[0x10] = 0

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

int32_t rax_4 = sub_141049460(arg2, rdi, &arg1[0x10], &var_188)
int64_t* rcx_3 = var_188

if (rcx_3 != 0)
    int64_t rdx_1 = *rcx_3
    void var_168
    sub_1405eb940(&var_168, (*(rdx_1 + 0x18))(rcx_3, rdx_1))
    int64_t var_60
    sub_140af98a0("Unknown", 0x1ae, D3DX12SerializeVersionedRootSignature failed with error %s", 
        var_60)
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    sub_140afbb40()

int64_t var_180

if (rax_4 s< 0)
    var_180 = 0
    int64_t* var_190_1 = &var_180
    int64_t var_178_1 = 0
    sub_14106a020(rax_4, "SerializeHR", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12RootSignature.cpp", 0x1b0, 
        nullptr)

int64_t* rcx_7 = arg1[1]
int64_t* r13 = arg1[0x10]
arg1[1] = 0

if (rcx_7 != 0)
    (*(*rcx_7 + 0x10))(rcx_7)

int32_t rsi = 1

if (data_143f0f1d8 == 0)
    rsi = (1 << (data_1439c7a34).b) - 1

int64_t rdi_3 = *rcx
int64_t rax_8 = (*(*r13 + 0x20))(r13)
int32_t result =
    (*(rdi_3 + 0x80))(rcx, zx.q(rsi), (*(*r13 + 0x18))(r13), rax_8, &data_142f01938, &arg1[1])

if (result s< 0)
    int64_t* var_190_3 = &var_180
    int64_t* var_198_3 = nullptr
    var_180 = 0
    int64_t var_178_2 = 0
    result = sub_14106a020(result, 
        "Device->CreateRootSignature(FRHIGPUMask::All().GetNative(), "
    "RootSignatureBlob->GetBufferPointer(), RootSignatureBlob->GetBufferSize(), "
    "IID_PPV_ARGS(RootSignature.GetInitReference()))", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12RootSignature.cpp", 0x1b6, 
        var_198_3)

int32_t rdx_4 = *arg2

if (rdx_4 == 1)
    result = sub_14103b5b0(arg1, &arg2[2], arg3)
else if (rdx_4 == 2)
    result = sub_14103b5b0(arg1, &arg2[2], arg3)

int64_t* rcx_15 = var_188

if (rcx_15 != 0)
    result = (*(*rcx_15 + 0x10))(rcx_15)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
