// 函数: sub_140a4dc10
// 地址: 0x140a4dc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 2
uint64_t result
uint128_t zmm6
uint128_t zmm7
uint128_t zmm8
result, zmm6, zmm7, zmm8 = sub_140af3c10(data_143ddb400, CrashReportClient", CrashConfigPurgeDays"
    , &arg_8, &data_143de5780)

if (arg_8 s> 0)
    sub_140a464c0()
    int64_t* var_88 = nullptr
    int32_t var_80_1 = 0
    wchar16 const* const var_70_1 = u"UE4CC-"
    int16_t* var_78 = sub_140a46f60()
    uint64_t var_a8 = 0
    int64_t var_a0_1 = 0
    int32_t rcx_2 = sub_140b0f5f0(&var_a8, &var_78, 2)
    int32_t rdx_2 = var_a0_1.d
    uint64_t var_98 = var_a8
    int32_t rax_3 = var_a0_1:4.d
    int32_t rdx_3 = rdx_2 + sbb.d(rcx_2, rcx_2, rdx_2 != 0) + 2
    var_a8 = 0
    int32_t var_8c_1 = rax_3
    int64_t var_a0_2 = 0
    
    if (rdx_3 s> rax_3)
        sub_1405947f0(&var_98, rdx_3)
    
    sub_140a20ba0(&var_98, &data_142d6bbe8, 1)
    int16_t* const r8_1 = &data_142d40450
    uint64_t rbx_1 = var_98
    var_98 = 0
    
    if (rdx_2 != 0)
        r8_1 = rbx_1
    
    int32_t var_90_1
    var_90_1.q = 0
    result = (*(data_14399ea08 + 0x78))(&data_14399ea08, &var_88, r8_1, 0, 1)
    
    if (rbx_1 != 0)
        result = sub_140a74f90(rbx_1)
    
    uint64_t rcx_8 = var_a8
    
    if (rcx_8 != 0)
        result = sub_140a74f90(rcx_8)
    
    int64_t* rbx_2 = var_88
    int64_t rdi_1 = sx.q(var_80_1)
    void* rsi_3 = &rbx_2[rdi_1 * 2]
    
    if (rbx_2 != rsi_3)
        uint128_t var_48_1 = zmm6
        uint128_t var_58_1 = zmm7
        uint128_t var_68_1 = zmm8
        
        do
            int16_t* const rdi_2
            
            if (rbx_2[1].d == 0)
                rdi_2 = &data_142d40450
            else
                rdi_2 = *rbx_2
            
            var_78 = sub_140a46f60()
            int16_t* const var_70_2 = rdi_2
            var_98 = 0
            var_90_1.q = 0
            sub_140b0f5f0(&var_98, &var_78, 2)
            uint64_t r8_2 = &data_142d40450
            
            if (var_90_1 != 0)
                r8_2 = var_98
            
            int64_t arg_10
            (*(data_14399ea08 + 0xd0))(&data_14399ea08, &arg_10, r8_2)
            zmm6 = _mm_cvtepi32_pd(zx.q(arg_8))
            void arg_18
            int64_t* rax_8
            int64_t r9_1
            rax_8, r9_1 = sub_140b21590(&arg_18)
            zmm6.q = zmm6.q f* 0x4269254d38000000
            zmm6.q = zmm6.q f+ 0x3fe0000000000000
            int64_t rcx_11 = int.q(zmm6.q)
            
            if (rcx_11 != -0x8000000000000000 && not(float.d(rcx_11) f== zmm6.q))
                zmm6.q =
                    float.d(rcx_11 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm6, zmm6.q))) & 1))
            
            result = *rax_8 - arg_10
            
            if (result s> int.q(zmm6.q))
                uint64_t rdx_8 = &data_142d40450
                r9_1.b = 1
                
                if (var_90_1 != 0)
                    rdx_8 = var_98
                
                result = (*(data_14399ea08 + 0x60))(&data_14399ea08, rdx_8, 0, r9_1)
            
            uint64_t rcx_14 = var_98
            
            if (rcx_14 != 0)
                result = sub_140a74f90(rcx_14)
            
            rbx_2 = &rbx_2[2]
        while (rbx_2 != rsi_3)
        
        rdi_1 = zx.q(var_80_1)
        rbx_2 = var_88
    
    if (rdi_1.d != 0)
        int32_t i
        
        do
            int64_t rcx_15 = *rbx_2
            
            if (rcx_15 != 0)
                result = sub_140a74f90(rcx_15)
            
            rbx_2 = &rbx_2[2]
            i = rdi_1.d
            rdi_1 = zx.q(rdi_1.d - 1)
        while (i != 1)
        rbx_2 = var_88
    
    if (rbx_2 != 0)
        return sub_140a74f90(rbx_2)

return result
