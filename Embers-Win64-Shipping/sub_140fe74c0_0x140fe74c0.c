// 函数: sub_140fe74c0
// 地址: 0x140fe74c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af2b60()
int32_t result

if (sub_140b21a10(&data_143dbb3f0, u"d3ddebug") != 0)
label_140fe7515:
    int64_t* rcx = *(arg1 + 0x168)
    int64_t* arg_10 = nullptr
    result = (**rcx)(rcx, &data_1435fc2b0, &arg_10)
    int64_t var_48
    
    if (result s< 0)
        var_48 = *(arg1 + 0x168)
        result = sub_140fff020(result, 
            "Direct3DDevice->QueryInterface(IID_ID3D11InfoQueue, (void**)InfoQueue.GetInitReference())", 
            "D:"
        "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Device."
        "cpp", 0x44f)
    
    int64_t* rcx_3 = arg_10
    
    if (rcx_3 != 0)
        int64_t var_38 = 0
        int64_t var_30_1 = 0
        int64_t rax_4 = (*(*rcx_3 + 0x48))(rcx_3)
        int64_t rdi_1 = 0
        
        if (rax_4 != 0)
            do
                int64_t* rcx_4 = arg_10
                int64_t arg_18 = 0
                
                if ((*(*rcx_4 + 0x28))(rcx_4, rdi_1, 0, &arg_18, var_48) s>= 0)
                    int32_t rax_6 = arg_18.d
                    void* rbx_1 = nullptr
                    void* var_28 = nullptr
                    int32_t var_1c_1 = 0
                    int32_t var_20_1 = rax_6
                    
                    if (rax_6 s> 0)
                        sub_1405daba0(&var_28)
                        rbx_1 = var_28
                    
                    int64_t* rcx_6 = arg_10
                    
                    if ((*(*rcx_6 + 0x28))(rcx_6, rdi_1, rbx_1, &arg_18) s>= 0)
                        sub_140a20ba0(&var_38, &data_142efa70c, 2)
                        char* rdx_4 = *(rbx_1 + 0x10)
                        int64_t r8_3 = -1
                        
                        do
                            r8_3 += 1
                        while (rdx_4[r8_3] != 0)
                        
                        sub_140a20b00(&var_38, rdx_4, r8_3.d)
                    
                    if (rbx_1 != 0)
                        sub_140a74f90(rbx_1)
                
                rdi_1 += 1
            while (rdi_1 u< rax_4)
        
        int64_t* rcx_10 = arg_10
        result = (*(*rcx_10 + 0x20))(rcx_10)
        int64_t rcx_11 = var_38
        
        if (rcx_11 != 0)
            result = sub_140a74f90(rcx_11)
        
        int64_t* rcx_12 = arg_10
        
        if (rcx_12 != 0)
            return (*(*rcx_12 + 0x10))(rcx_12)
else
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"d3debug") != 0)
        goto label_140fe7515
    
    sub_140af2b60()
    result = sub_140b21a10(&data_143dbb3f0, u"dxdebug")
    
    if (result.b != 0)
        goto label_140fe7515

return result
