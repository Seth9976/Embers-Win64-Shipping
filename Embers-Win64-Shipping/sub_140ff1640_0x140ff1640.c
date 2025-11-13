// 函数: sub_140ff1640
// 地址: 0x140ff1640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8

if (*(arg6 + 0x28) == 0)
    int32_t var_78 = arg4
    int32_t var_64_1 = 0
    int32_t rdx_1 = arg5 & 6
    int32_t rax_4 = neg.d(rdx_1)
    int32_t var_74_1 = sbb.d(arg1.d, arg1.d, rdx_1 != 0) & 2
    int32_t rcx_2 = 2
    int32_t var_6c_1 = sbb.d(rax_4, rax_4, rdx_1 != 0) & 0x10000
    
    if ((arg5.b & 8) != 0)
        rcx_2 = 0x82
    
    int32_t rax_7 = 0
    int32_t var_70_1 = rcx_2
    
    if (test_bit(arg5, 8))
        rax_7 = 0x10
    
    int32_t var_68_1 = rax_7
    
    if (test_bit(arg5, 9))
        int32_t var_70_2 = rcx_2 | 8
    
    int64_t* rcx_4 = *(arg6 + 8)
    int64_t* r8 = nullptr
    
    if (rcx_4 != 0)
        int32_t var_88_1 = arg4
        int64_t var_90
        r8 = &var_90
        var_90 = (*(*rcx_4 + 0x10))(rcx_4)
        int32_t var_84_1 = 0
    
    int64_t* rcx_5 = *(arg1 + 0x168)
    int64_t* var_98 = nullptr
    int32_t rax_11 = (*(*rcx_5 + 0x18))(rcx_5, &var_78, r8, &var_98)
    
    if (rax_11 s< 0)
        int64_t var_a8_1 = *(arg1 + 0x168)
        sub_140fff020(rax_11, 
            "Direct3DDevice->CreateBuffer(&Desc,pInitData,IndexBufferResource.GetInitReference())", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11IndexBuffer.cpp", 
            0x38)
    
    int64_t* rbx_1 = var_98
    int64_t* var_80_1 = rbx_1
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 8))(rbx_1)
    
    void var_60
    (*(*rbx_1 + 0x50))(rbx_1, &var_60)
    (*(*rbx_1 + 0x10))(rbx_1)
    int64_t* rcx_11 = *(arg6 + 8)
    
    if (rcx_11 != 0)
        (*(*rcx_11 + 0x20))(rcx_11)
    
    void*** rax_16 = j_sub_140a82f30(0x48)
    void*** rbx_2 = rax_16
    
    if (rax_16 == 0)
        rbx_2 = nullptr
    else
        int64_t* rcx_12 = var_98
        *rax_16 = &data_142d3ff08
        rax_16[1].d = 0
        *(rax_16 + 0xc) = 0
        rax_16[2].w = 0x100
        rax_16[3].d = arg3
        *(rax_16 + 0x1c) = arg4
        rax_16[4].d = arg5
        rax_16[6].d = 0
        *(rax_16 + 0x34) = 0xffffffff
        rax_16[7].b = 0
        *rax_16 = &data_142ef59f8
        rax_16[5] = &data_142ef5a00
        rax_16[8] = rcx_12
        
        if (rcx_12 != 0)
            (*(*rcx_12 + 8))()
    
    *arg2 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int64_t* rcx_13 = var_98
    
    if (rcx_13 != 0)
        (*(*rcx_13 + 0x10))(rcx_13)
else
    void*** rax_2 = j_sub_140a82f30(0x48)
    
    if (rax_2 == 0)
        rax_2 = nullptr
    else
        __builtin_memset(&rax_2[1], 0, 0x40)
        *rax_2 = &data_142d3ff08
        rax_2[1].d = 0
        *(rax_2 + 0xc) = 0
        rax_2[2].w = 0x100
        rax_2[3] = 0
        rax_2[4].d = 0
        rax_2[6].d = 0
        *(rax_2 + 0x34) = 0xffffffff
        rax_2[7].b = 0
        *rax_2 = &data_142ef59f8
        rax_2[5] = &data_142ef5a00
        rax_2[8] = 0
    
    *arg2 = rax_2
    
    if (rax_2 != 0)
        rax_2[1].d += 1

__security_check_cookie(rax_1 ^ &var_c8)
return arg2
