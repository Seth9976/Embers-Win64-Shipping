// 函数: sub_140da8a70
// 地址: 0x140da8a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t result = *(arg1 + 0xe4)

if (result == 0)
    void* rbx_1 = *(*(arg1 + 0xd8) + 0x30)
    *(arg1 + 0xd0)
    int64_t* rax_1
    int512_t zmm1_1
    rax_1, zmm1_1 = sub_140da5fb0(*(rbx_1 + 0x18), arg1 + 0x60)
    void** var_48
    uint128_t zmm6_1
    float zmm7_1
    zmm6_1, zmm7_1 = sub_140da70c0(rbx_1, &var_48, rax_1, 0, zmm1_1, *(arg1 + 0xac))
    void** rbx_2 = var_48
    int16_t result_1
    int64_t* var_40
    
    if (rbx_2 == 0)
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp1_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
        
        result_1 = 0
    else
        uint128_t var_18_1 = zmm6_1
        sub_140d9a4a0(*rbx_2, zx.q(*(arg1 + 0xa8)), zmm7_1)
        void* rax_3 = *rbx_2
        zmm6_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x70)))
        char rcx_3 = (*(rax_3 + 8)).b
        zmm6_1.d = zmm6_1.d f* zmm7_1
        int32_t rax_5
        
        if ((rcx_3 & 1) == 0)
            if ((rcx_3 & 2) == 0)
                rax_5 = 0
            else
                void* rax_7 = *(rax_3 + 0x80)
                rax_5 = sub_142b93e80(*(rax_7 + 0x2c), *(rax_7 + 0x20))
        else if (rbx_2[0x20].b != 0)
            rax_5 = sub_142b93e80(*(rax_3 + 0x64) - *(rax_3 + 0x5c), *(*(rax_3 + 0x80) + 0x20))
        else
            rax_5 = sub_142b93e80(sx.d(*(rax_3 + 0x6e)), *(*(rax_3 + 0x80) + 0x20))
        
        uint128_t zmm0_1
        zmm0_1.d = _mm_cvtepi32_ps(zx.o((rax_5 + 0x20) s>> 6)).d f+ zmm6_1.d
        result_1 = (int.d(zmm0_1.d)).w
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp3_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
    result = result_1
    *(arg1 + 0xe4) = result_1

return result
