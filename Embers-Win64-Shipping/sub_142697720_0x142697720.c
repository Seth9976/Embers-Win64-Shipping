// 函数: sub_142697720
// 地址: 0x142697720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d3c6e0(&arg2[0x10])
void* result_1 = result

if (result != 0)
    result = *(result + 0x4a8)
    
    if (result != 0 && *(result + 8) != 0)
        int64_t* rbx = *(result_1 + 0x340)
        int64_t r13 = *(result_1 + 0x338)
        
        if (rbx != 0)
            rbx[1].d += 1
        
        int64_t r12 = *(arg2 + 0x20)
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t rsi_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (rsi_1 == 1)
                    (*(*rbx + 8))(rbx, zx.q(rsi_1))
        
        void* rsi_2 = *(arg2 + 0x20)
        rbx.b = 1
        
        if (rsi_2 != 0)
            int64_t* rcx_3 = *(rsi_2 + 0x10)
            int32_t var_38
            (*(*rcx_3 + 0x78))(rcx_3, &var_38, &arg2[5])
            uint32_t zmm0[0x4] = arg2[2]
            zmm0[0] = zmm0[0] f- var_38
            uint32_t zmm2[0x4] = arg2[3]
            uint32_t zmm1[0x4] = arg2[4]
            int32_t var_34
            zmm2[0] = zmm2[0] f- var_34
            int32_t var_30
            zmm1[0] = zmm1[0] f- var_30
            
            if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f)
            label_142697837:
                int32_t rax_5
                
                if (r12 == r13)
                    rax_5 = sub_1426974f0(*(result_1 + 0x4a8), &arg2[2], &var_38, arg3)
                    rbx.b = rax_5 == 3
                
                if (r12 != r13 || rax_5 == 1)
                    void* rax_6 = sub_140d3c6e0(arg2)
                    rbx.b =
                        sub_1426979e0(*(result_1 + 0x4a8), &arg2[2], &var_38, rsi_2, rax_6, arg3)
                        == 3
            else
                if (_mm_and_ps(zmm2, 0x7fffffff)[0] f> 9.99999975e-05f)
                    goto label_142697837
                
                if (not(_mm_and_ps(zmm1, 0x7fffffff)[0] f<= 9.99999975e-05f))
                    goto label_142697837
        
        return zx.q(rbx.b)

result.b = 0
return result
