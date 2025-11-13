// 函数: sub_140fefd20
// 地址: 0x140fefd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void var_d8
int64_t var_58_1 = __security_cookie ^ &var_d8

if (arg2 != 0)
    int64_t* rcx = *(arg3 + 0x28)
    
    if (rcx == 0)
    label_140fefd98:
        int64_t* rcx_1 = *(arg3 + 0x28)
        int64_t* r15_1 = *(arg1 + 0x150)
        int64_t var_78_1 = 0
        int32_t var_88 = arg5
        int64_t var_84_1 = 3
        int32_t var_7c_1 = 0x20000
        *(arg3 + 0x28) = 0
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x10))(rcx_1)
        
        int32_t rax_5 = (*(*r15_1 + 0x18))(r15_1, &var_88, 0, arg3 + 0x28)
        
        if (rax_5 s< 0)
            int32_t var_b8
            var_b8.q = *(arg1 + 0x150)
            sub_140fff020(rax_5, 
                "Direct3DDevice->CreateBuffer(&StagedReadDesc, NULL, StagingBuffer->StagedRead."
            "GetInitReference())", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Commands.cpp", 
                0x924)
        
        *(arg3 + 0x30) = arg5
        *(arg3 + 0x20) = *(arg1 + 0x138)
    else if (*(arg3 + 0x30) u< arg5)
        *(arg3 + 0x28) = 0
        
        if (rcx != 0)
            (*(*rcx + 0x10))()
        
        goto label_140fefd98
    
    int64_t* rcx_5 = *(arg1 + 0x138)
    int64_t rdx_1 = *(arg3 + 0x28)
    int32_t var_70
    int32_t* var_98_1 = &var_70
    int64_t rax_7 = *(arg2 + 0x38)
    int32_t var_a0_1 = 0
    var_70 = arg4
    int32_t var_64_1 = arg5
    int64_t var_6c_1 = 0
    int32_t var_5c_1 = 1
    int32_t var_60_1 = 1
    (*(*rcx_5 + 0x170))(rcx_5, rdx_1, 0, 0, 0, 0, rax_7, var_a0_1, var_98_1)

__security_check_cookie(var_58_1 ^ &var_d8)
