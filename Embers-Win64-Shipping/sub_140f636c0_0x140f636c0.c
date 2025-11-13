// 函数: sub_140f636c0
// 地址: 0x140f636c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x405) = 1
void* var_20
int32_t rax = sub_140e66250(data_143e29f28, &var_20)
void* rcx_1 = var_20
int64_t* var_18

if (rcx_1 != 0)
    int64_t* rsi_1 = *(rcx_1 + 0x390)
    int64_t* rcx_2 = *(rcx_1 + 0x398)
    
    if (rcx_2 != 0)
        *(rcx_2 + 0xc) += 1
    
    int64_t* rbx_1 = rcx_2
    
    if (rcx_2 != 0)
        rax = rcx_2[1].d
        
        if (rax == 0)
            rbx_1 = nullptr
        else
            rax += 1
            rcx_2[1].d = rax
        
        int32_t temp3_1 = *(rcx_2 + 0xc)
        *(rcx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            rax = (*(*rcx_2 + 8))(rcx_2, 1)
        
        rcx_2 = nullptr
    
    if (rbx_1 == 0)
        rsi_1 = nullptr
    
    if (rcx_2 != 0)
        int32_t temp2_1 = *(rcx_2 + 0xc)
        *(rcx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            rax = (*(*rcx_2 + 8))(rcx_2, 1)
    
    if (rsi_1 != 0)
        int64_t var_38
        (*(*rsi_1 + 0x10))(rsi_1, &var_38)
        int64_t rax_4 = var_38
        void* rcx_4 = data_143e29f28
        int32_t var_28 = _mm_cvtepi32_ps(zx.o(rax_4.d)).d
        int32_t var_24 = _mm_cvtepi32_ps(zx.o((rax_4 u>> 0x20).d)).d
        int64_t rax_6 = sub_140da9b20(rcx_4, arg1 + 0x408)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                rax_6 = (**rbx_1)(rbx_1)
                int32_t temp8_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    rax_6 = (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (var_18 != 0)
            var_18[1].d -= 1
            
            if (var_18[1].d == 1)
                rax_6 = (**var_18)(var_18)
                int32_t temp9_1 = *(var_18 + 0xc)
                *(var_18 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    rax_6 = (*(*var_18 + 8))(var_18, 1)
        
        float zmm1_1
        float zmm2[0x4]
        float zmm3[0x4]
        
        if (data_143e2a240 != 0)
            zmm2 = data_1439b3a10
            zmm2[0] = zmm2[0] f* *(arg1 + 0x408)
            zmm1_1 = zmm2[0]
            zmm2[0] = zmm2[0] f* *(arg1 + 0x40c)
            zmm1_1 = zmm1_1 f* *(arg1 + 0x410)
            zmm2[0] = zmm2[0] f* *(arg1 + 0x414)
            zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
            zmm3[0] = zmm2[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3[0] = zmm1_1
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
            zmm3[0] = zmm2[0]
            *(arg1 + 0x408) = _mm_shuffle_ps(zmm3, zmm3, 0x39)
        
        float zmm0_1[0x4] = zx.o(0)
        
        if (*(arg1 + 0x404) == 0)
            zmm3 = zx.o(0)
        else
            zmm3 = *(arg1 + 0x414)
        
        if (*(arg1 + 0x402) == 0)
            zmm2 = zx.o(0)
        else
            zmm2 = *(arg1 + 0x410)
        
        if (*(arg1 + 0x403) == 0)
            zmm1_1 = (zx.o(0)).d
        else
            zmm1_1 = *(arg1 + 0x40c)
        
        if (*(arg1 + 0x401) != 0)
            zmm0_1 = *(arg1 + 0x408)
        
        zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
        zmm0_1[0] = zmm1_1
        *(arg1 + 0x405) = 0
        zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc6)
        zmm0_1[0] = zmm2[0]
        zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x27)
        zmm0_1[0] = zmm3[0]
        *(arg1 + 0x408) = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x39)
        return rax_6
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            rax = (**rbx_1)(rbx_1)
            int32_t temp6_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                rax = (*(*rbx_1 + 8))(rbx_1, 1)

if (var_18 != 0)
    var_18[1].d -= 1
    
    if (var_18[1].d == 1)
        rax = (**var_18)(var_18)
        int32_t temp1_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_18 + 8))(var_18, 1)

return rax
