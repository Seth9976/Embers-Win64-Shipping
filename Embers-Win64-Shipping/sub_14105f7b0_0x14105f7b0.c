// 函数: sub_14105f7b0
// 地址: 0x14105f7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void var_58
sub_141060ac0(&var_58, *(arg3 + 0x50))
int64_t* r14 = *(arg2 + 0x28)
HRESULT result
int64_t var_b0
int64_t var_a0
int64_t pSrcData
uint64_t SrcDataSize
int128_t zmm0

if (r14 == 0 || arg4 == 0)
    zmm0 = *(arg3 + 0x10)
    int64_t* r14_1 = *(arg3 + 0x60)
    HRESULT result_1 = 0
    int64_t* r15_1 = *(arg2 + 0x18)
    int32_t var_70_1 = *(arg3 + 0x38)
    int32_t var_88_1 = *(arg3 + 0x20)
    var_a0 = *(arg3 + 8)
    int32_t var_84_1 = 0
    int32_t var_6c_1 = 0
    int128_t var_80_1 = *(arg3 + 0x28)
    int64_t* var_c8
    
    if (r14_1 != 0)
        var_c8 = arg1
        result = (*(*r14_1 + 0x50))(r14_1, &var_58, &var_a0, &data_142f03b10, var_c8)
    
    if (r14_1 == 0 || result == E_INVALIDARG)
        result = (*(*r15_1 + 0x58))(r15_1, &var_a0, &data_142f03b10, arg1, var_c8)
        result_1 = result
        
        if (result s< 0)
            var_b0 = 0
            int64_t* var_c0_1 = &var_b0
            int64_t var_a8_2 = 0
            result = sub_14106a020(result_1, "hr", 
                "D:"
            "/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12PipelineState."
            "cpp", 
                0x28d, nullptr)
    
    if (r14_1 == 0)
        goto label_14105f9a9
    
    if (result_1 s< 0)
    label_14105f9ad:
        pSrcData = zmm0.q
        
        if (pSrcData != 0)
            SrcDataSize = zmm0:8.q
            goto label_14105f9be
    else
        result = (*(*r14_1 + 0x40))(r14_1, &var_58, *arg1)
    label_14105f9a9:
        
        if (result_1 s< 0)
            goto label_14105f9ad
else
    zmm0 = *(arg3 + 0x10)
    int64_t* rdi = *(arg3 + 0x60)
    var_a0:4.d = *(arg3 + 0x20)
    int128_t var_98
    var_98:8.q = *(arg3 + 8)
    int64_t* var_a8_1 = &var_a0
    var_a0.d = 0x12
    var_98.d = 0
    int32_t var_88 = 6
    int32_t var_70 = 0x13
    var_b0 = 0x48
    int128_t var_68_1 = *(arg3 + 0x28)
    
    if (rdi == 0)
        result = (*(*r14 + 0x178))(r14, &var_b0, &data_142f03b10, arg1)
    else
        result = (*(*rdi + 0x68))(rdi, &var_58, &var_b0, &data_142f03b10, arg1)
        
        if (result == E_INVALIDARG)
            result = (*(*r14 + 0x178))(r14, &var_b0, &data_142f03b10, arg1)
            
            if (result s< 0)
                goto label_14105f8c9
            
            result = (*(*rdi + 0x40))(rdi, &var_58, *arg1)
    
    if (result s< 0)
    label_14105f8c9:
        pSrcData = zmm0.q
        
        if (pSrcData != 0)
            SrcDataSize = zmm0:8.q
        label_14105f9be:
            struct ID3DBlob ppDisassembly = 0
            result = D3DDisassemble(pSrcData, SrcDataSize, 0, &data_1437020ab, &ppDisassembly)
            
            if (result s>= 0)
                struct ID3DBlob ppDisassembly_1 = ppDisassembly
                result = (*(*ppDisassembly_1 + 0x10))(ppDisassembly_1)
__security_check_cookie(rax_1 ^ &var_e8)
return result
