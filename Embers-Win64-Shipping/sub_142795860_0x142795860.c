// 函数: sub_142795860
// 地址: 0x142795860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x220) != 0)
    uint128_t var_90
    memset(&var_90, 0, 0x88)
    float zmm2 = *(arg3 + 4) f- *(arg2 + 4)
    int32_t var_88_1 = 0x3f800000
    *arg4 = var_90
    int128_t var_80
    arg4[1] = var_80
    uint128_t var_70
    arg4[2] = var_70
    int128_t var_60
    arg4[3] = var_60
    uint128_t var_50
    arg4[4] = var_50
    int128_t var_40
    arg4[5] = var_40
    int128_t zmm1
    zmm1.d = (*arg3).d f- *arg2
    uint128_t var_30
    arg4[6] = var_30
    uint128_t var_20
    arg4[7] = var_20
    int64_t var_10
    arg4[8].q = var_10
    int32_t rax_1 = arg2[1].d
    arg4[4].q = *arg2
    *(arg4 + 0x4c) = *arg3
    uint128_t zmm0_1
    zmm0_1.d = (*(arg3 + 8)).d f- arg2[1].d
    zmm1.d = zmm1.d f* zmm1.d
    *(arg4 + 0x48) = rax_1
    *(arg4 + 0x54) = *(arg3 + 8)
    zmm0_1.d = zmm0_1.d f* zmm0_1.d
    
    if (not(_mm_sqrt_ss(0, zmm2 * zmm2 f+ zmm1.d f+ zmm0_1.d).d f<= 9.99999975e-05f))
        void* rcx_1 = *(*(arg1 + 0x220) + 0x520)
        int64_t* rdi_1 = *(rcx_1 + 0xc8)
        void* rbp_1 = *(rcx_1 + 0xc0)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int64_t var_a0_1 = data_143f37078
        void var_98
        int64_t var_a8 = *sub_140b58170(&var_98, "GUID", 1)
        void arg_8
        sub_141d1ca50(rbp_1 + 8, &arg_8, &var_a8)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t rbx_2 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_2))
        
        sub_142790830(*(arg1 + 0x220))

int32_t result
result.b = 0
return result
