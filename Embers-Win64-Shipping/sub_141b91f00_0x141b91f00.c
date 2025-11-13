// 函数: sub_141b91f00
// 地址: 0x141b91f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t r14 = 0
int32_t var_138 = 0
int64_t* r15 = *(arg1 + 8)
int64_t result = sx.q(*(arg1 + 0x10))
void* r12 = &r15[result]

if (r15 != r12)
    int64_t* rsi
    int64_t* var_30_1 = rsi
    int64_t* rdi_1 = var_138.q
    
    do
        var_138.q = *r15
        result = sub_140d3c6e0(&var_138)
        int64_t result_1 = result
        
        if (result == 0)
            rsi.b = 0
        else
            rdi_1 = *(result_1 + 0x530)
            r14 |= 1
            result = *(result + 0x528)
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            if (result == 0)
                rsi.b = 0
            else
                rsi.b = 1
        
        if ((r14.b & 1) != 0)
            r14 &= 0xfffffffe
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    result = (**rdi_1)(rdi_1)
                    int32_t temp1_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        result = (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (rsi.b != 0)
            void var_e8
            sub_140d921c0(&var_e8)
            int64_t rax_5 = *(result_1 + 0x458)
            uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_5.d))
            int64_t var_10c_1 = 0
            uint128_t zmm0 = _mm_cvtepi32_ps(zx.o((rax_5 u>> 0x20).d))
            int64_t* rbx_1 = *(result_1 + 0x530)
            char var_b4
            char var_ec = var_ec ^ ((var_ec ^ var_b4) & 1)
            int32_t var_120_1 = zmm1.d
            int32_t var_11c_1 = zmm0.d
            int32_t var_dc
            zmm1.d = var_dc.d f+ 0f
            int32_t var_bc
            int32_t var_f4_1 = var_bc
            int32_t var_114_1 = zmm1.d
            uint128_t var_cc
            uint128_t var_130_1 = var_cc
            int32_t var_d8
            zmm0.d = var_d8.d f+ 0f
            int32_t var_110_1 = zmm0.d
            int32_t var_e0
            int32_t var_118_1 = var_e0.d
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
            
            int64_t var_70_1 = *(result_1 + 0x528)
            uint128_t var_a8 = var_120_1.o
            uint128_t var_98_1 = var_110_1.o
            int32_t var_b8
            uint64_t var_78_1 = var_b8.q
            uint128_t var_88_1 = var_cc
            
            if (rbx_1 != 0)
                int32_t rax_9 = rbx_1[1].d
                rbx_1[1].d = rax_9
                
                if (rax_9 == 0)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            result = sub_140d99900(arg2, &var_a8)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp5_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp6_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)
        
        r15 = &r15[1]
    while (r15 != r12)

__security_check_cookie(rax_1 ^ &var_158)
return result
