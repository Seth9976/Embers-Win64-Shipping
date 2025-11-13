// 函数: sub_140ff2480
// 地址: 0x140ff2480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
uint32_t rax_2 = zx.d(*(arg3 + 0x18))
uint128_t var_88
int128_t var_50

if (rax_2 == 0)
    int128_t zmm1 = *arg3
    void* rsi_3 = zmm1.q
    uint8_t var_40_1 = (arg3[1].q).b
    var_50 = zmm1
    
    if (rsi_3 == 0 || *(rsi_3 + 0x38) == 0)
    label_140ff24e3:
        void*** rax_4 = j_sub_140a82f30(0x28)
        
        if (rax_4 == 0)
            rax_4 = nullptr
        else
            *rax_4 = &data_142d3ff08
            rax_4[1].d = 0
            *(rax_4 + 0xc) = 0
            rax_4[2].w = 0x100
            *rax_4 = &data_142ef5a88
            rax_4[3] = 0
            rax_4[4] = 0
        
        *arg2 = rax_4
        
        if (rax_4 != 0)
            rax_4[1].d += 1
    else
        void*** rbx_3 = nullptr
        var_88.q = 0
        sub_140fe44e0(*(arg1 + 0x168), *(rsi_3 + 0x38), var_50:8.d, var_50:0xc.d, var_40_1, &var_88)
        void*** rax_23 = j_sub_140a82f30(0x28)
        
        if (rax_23 != 0)
            rbx_3 = sub_140fd92c0(rax_23, var_88.q, rsi_3 + 0x20)
        
        *arg2 = rbx_3
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        int64_t* rcx_13 = var_88.q
        
        if (rcx_13 != 0)
            (*(*rcx_13 + 0x10))(rcx_13)
else
    uint128_t zmm0
    
    if (rax_2 == 1)
        zmm0 = *arg3
        void* rsi_2 = zmm0.q
        var_88 = zmm0
        int64_t* rcx_3 = *(rsi_2 + 0x40)
        (*(*rcx_3 + 0x50))(rcx_3, &var_50)
        void*** rbx_2 = nullptr
        int32_t var_68
        int64_t var_40
        
        if (((var_40.d u>> 5).b & 1) == 0)
            int32_t r9_2 = var_50.d
            int32_t rax_12 = r9_2
            int32_t var_64_2 = 1
            
            if (var_88:8.d u<= r9_2)
                rax_12 = var_88:8.d
            
            uint32_t temp0_1 = divu.dp.d(0:rax_12, var_40:4.d)
            var_68 = 0
            uint32_t var_60_2 = temp0_1
            uint32_t rax_16 = divu.dp.d(0:r9_2, var_40:4.d) - temp0_1
            
            if (var_88:0xc.d u<= rax_16)
                rax_16 = var_88:0xc.d
            
            uint32_t var_5c_2 = rax_16
        else
            int32_t rdx_4 = var_50.d
            int32_t rcx_4 = rdx_4
            int32_t var_64_1 = 0xb
            
            if (var_88:8.d u<= rdx_4)
                rcx_4 = var_88:8.d
            
            uint32_t rcx_5 = rcx_4 u>> 2
            uint32_t rdx_6 = (rdx_4 u>> 2) - rcx_5
            uint32_t var_60_1 = rcx_5
            int32_t var_58_1 = 1
            
            if (var_88:0xc.d u<= rdx_6)
                rdx_6 = var_88:0xc.d
            
            uint32_t var_5c_1 = rdx_6
            var_68 = 0x27
        
        int64_t* rcx_6 = *(arg1 + 0x168)
        int64_t* var_70 = nullptr
        int32_t rax_18 = (*(*rcx_6 + 0x38))(rcx_6, *(rsi_2 + 0x40), &var_68, &var_70)
        
        if (rax_18 s< 0)
            char var_98
            var_98.q = *(arg1 + 0x168)
            sub_140fff020(rax_18, 
                "Direct3DDevice->CreateShaderResourceView(StructuredBuffer->Resource, &SRVDesc, "
            "(ID3D11ShaderResourceView**)ShaderResourceView.GetInitReference()", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11UAV.cpp", 
                0x134)
        
        void*** rax_19 = j_sub_140a82f30(0x28)
        
        if (rax_19 != 0)
            rbx_2 = sub_140fd92c0(rax_19, var_70, rsi_2 + 0x28)
        
        *arg2 = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        int64_t* rcx_10 = var_70
        
        if (rcx_10 != 0)
            (*(*rcx_10 + 0x10))(rcx_10)
    else if (rax_2 == 2)
        zmm0 = *arg3
        void* rsi_1 = zmm0.q
        var_88 = zmm0
        
        if (rsi_1 == 0)
            goto label_140ff24e3
        
        void*** rbx_1 = nullptr
        uint32_t r9_1 = var_88:0xc.d
        bool cond:3_1 = *(rsi_1 + 0x18) == 2
        int32_t r8 = var_88:8.d
        char rdx = 0x1c
        int64_t* var_78
        int64_t* var_90_1 = &var_78
        var_78 = nullptr
        
        if (cond:3_1)
            rdx = 0x20
        
        sub_140fe44e0(*(arg1 + 0x168), *(rsi_1 + 0x40), r8, r9_1, rdx, var_90_1)
        void*** rax_6 = j_sub_140a82f30(0x28)
        
        if (rax_6 != 0)
            rbx_1 = sub_140fd92c0(rax_6, var_78, rsi_1 + 0x28)
        
        *arg2 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int64_t* rcx_2 = var_78
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x10))(rcx_2)
    else
        *arg2 = 0
__security_check_cookie(rax_1 ^ &var_b8)
return arg2
