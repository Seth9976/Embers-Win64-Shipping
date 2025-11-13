// 函数: sub_140ff45b0
// 地址: 0x140ff45b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168

if (*(arg5 + 0x28) == 0)
    int32_t var_118 = arg3
    int32_t var_108_1 = 0
    int32_t rdx_1 = arg4 & 6
    int32_t r8 = 1
    int32_t var_110_1 = 1
    int32_t rax_4 = neg.d(rdx_1)
    int32_t var_114_1 = sbb.d(arg1.d, arg1.d, rdx_1 != 0) & 2
    int32_t var_10c_1 = sbb.d(rax_4, rax_4, rdx_1 != 0) & 0x10000
    
    if ((arg4.b & 8) != 0)
        r8 = 0x81
        int32_t var_110_2 = 0x81
        TEB* gsbase
        
        if (data_143e2c130
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143e2c130)
            
            if (data_143e2c130 == 0xffffffff)
                data_143e2c12c = data_1439c7a08 s< 3
                _Init_thread_footer(&data_143e2c130)
            
            r8 = var_110_2
    
    int32_t rax_10
    
    if ((arg4.b & 8) == 0 || data_143e2c12c == 0)
        rax_10 = var_108_1
    else
        rax_10 = var_108_1 | 0x20
        var_108_1 = rax_10
    
    if ((arg4.b & 0x20) != 0)
        rax_10 |= 0x20
        var_108_1 = rax_10
    
    if (arg4.b s< 0)
        r8 |= 0x10
        int32_t var_110_3 = r8
    
    if (test_bit(arg4, 8))
        var_108_1 = rax_10 | 0x10
    
    if (test_bit(arg4, 9))
        int32_t var_110_4 = r8 | 8
    
    int64_t* rcx_4 = *(arg5 + 8)
    int64_t* r8_2 = nullptr
    
    if (rcx_4 != 0)
        int32_t var_128_1 = arg3
        int64_t var_130
        r8_2 = &var_130
        var_130 = (*(*rcx_4 + 0x10))(rcx_4)
        int32_t var_124_1 = 0
    
    int64_t* rcx_5 = *(arg1 + 0x168)
    int64_t* var_138 = nullptr
    int32_t rax_15 = (*(*rcx_5 + 0x18))(rcx_5, &var_118, r8_2, &var_138)
    int64_t var_148
    
    if (rax_15 s< 0)
        var_148 = *(arg1 + 0x168)
        sub_140fff020(rax_15, "Result", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11VertexBuffer.cpp", 
            0x5a)
    
    int16_t* rdx_3 = *(arg5 + 0x30)
    
    if (rdx_3 != 0)
        int64_t* rbx_1 = var_138
        void var_e8
        sub_1408f2b40(&var_e8, rdx_3)
        int64_t rax_16 = -1
        bool cond:1_1
        
        do
            cond:1_1 = *(*(arg5 + 0x30) + (rax_16 << 1) + 2) != 0
            rax_16 += 1
        while (cond:1_1)
        int64_t var_60
        (*(*rbx_1 + 0x28))(rbx_1, &data_1435fc290, zx.q((rax_16 + 1).d), var_60, var_148)
        int64_t var_68
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
    
    int64_t* rbx_2 = var_138
    int64_t* var_120_1 = rbx_2
    
    if (rbx_2 != 0)
        (*(*rbx_2 + 8))(rbx_2)
    
    void var_100
    (*(*rbx_2 + 0x50))(rbx_2, &var_100)
    (*(*rbx_2 + 0x10))(rbx_2)
    int64_t* rcx_14 = *(arg5 + 8)
    
    if (rcx_14 != 0)
        (*(*rcx_14 + 0x20))(rcx_14)
    
    void*** rax_21 = j_sub_140a82f30(0x40)
    void*** rbx_3 = rax_21
    
    if (rax_21 == 0)
        rbx_3 = nullptr
    else
        int64_t* rcx_15 = var_138
        *rax_21 = &data_142d3ff08
        rax_21[1].d = 0
        *(rax_21 + 0xc) = 0
        rax_21[2].w = 0x100
        rax_21[3].d = arg3
        *(rax_21 + 0x1c) = arg4
        rax_21[5].d = 0
        *(rax_21 + 0x2c) = 0xffffffff
        rax_21[6].b = 0
        *rax_21 = &data_142ef5a48
        rax_21[4] = &data_142ef5a50
        rax_21[7] = rcx_15
        
        if (rcx_15 != 0)
            (*(*rcx_15 + 8))()
    
    *arg2 = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    int64_t* rcx_16 = var_138
    
    if (rcx_16 != 0)
        (*(*rcx_16 + 0x10))(rcx_16)
else
    void*** rax_2 = j_sub_140a82f30(0x40)
    
    if (rax_2 == 0)
        rax_2 = nullptr
    else
        __builtin_memset(&rax_2[1], 0, 0x38)
        *rax_2 = &data_142d3ff08
        rax_2[1].d = 0
        *(rax_2 + 0xc) = 0
        rax_2[2].w = 0x100
        rax_2[3] = 0
        rax_2[5].d = 0
        *(rax_2 + 0x2c) = 0xffffffff
        rax_2[6].b = 0
        *rax_2 = &data_142ef5a48
        rax_2[4] = &data_142ef5a50
        rax_2[7] = 0
    
    *arg2 = rax_2
    
    if (rax_2 != 0)
        rax_2[1].d += 1

__security_check_cookie(rax_1 ^ &var_168)
return arg2
