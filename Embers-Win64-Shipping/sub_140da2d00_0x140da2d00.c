// 函数: sub_140da2d00
// 地址: 0x140da2d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t result = *(arg1 + 0xe6)

if (result == 0)
    void* rbx_1 = *(*(arg1 + 0xd8) + 0x30)
    *(arg1 + 0xd0)
    int64_t* rax_1
    int512_t zmm1_1
    rax_1, zmm1_1 = sub_140da5fb0(*(rbx_1 + 0x18), arg1 + 0x60)
    void** var_38
    float zmm6_1 = sub_140da70c0(rbx_1, &var_38, rax_1, 0, zmm1_1, *(arg1 + 0xac))
    void** rbx_2 = var_38
    int16_t result_1
    int64_t* var_30
    
    if (rbx_2 == 0)
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t temp1_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_30 + 8))(var_30, 1)
        
        result_1 = 0
    else
        sub_140d9a4a0(*rbx_2, zx.q(*(arg1 + 0xa8)), zmm6_1)
        void* rax_3 = *rbx_2
        char rcx_3 = (*(rax_3 + 8)).b
        int32_t rax_5
        
        if ((rcx_3 & 1) == 0)
            if ((rcx_3 & 2) == 0)
                rax_5 = 0
            else
                void* rax_7 = *(rax_3 + 0x80)
                rax_5 = sub_142b93e80(*(rax_7 + 0x28), *(rax_7 + 0x20))
        else if (rbx_2[0x20].b != 0)
            rax_5 = sub_142b93e80(*(rax_3 + 0x5c), *(*(rax_3 + 0x80) + 0x20))
        else
            rax_5 = sub_142b93e80(sx.d(*(rax_3 + 0x6c)), *(*(rax_3 + 0x80) + 0x20))
        
        result_1 = ((rax_5 + 0x20) s>> 6).w
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t temp3_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_30 + 8))(var_30, 1)
    result = result_1
    *(arg1 + 0xe6) = result_1

return result
