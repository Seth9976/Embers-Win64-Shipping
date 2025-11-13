// 函数: sub_140ec8160
// 地址: 0x140ec8160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
uint64_t result = __security_cookie ^ &var_c8
uint64_t result_2 = result
int64_t* rdi = *(arg2 + 0x70)
int32_t var_90 = 0
char rbp = 0

if (rdi != 0)
    int64_t rbx_1 = *rdi
    sub_140ec00f0()
    result = (*(rbx_1 + 0x58))(rdi, &data_143e29fe0)
    
    if (result.b != 0)
        result = *(arg2 + 0x70)
        int64_t* r14_1 = *(arg2 + 0x78)
        uint64_t result_1 = result
        
        if (r14_1 != 0)
            r14_1[1].d += 1
        
        if (result != 0)
            int64_t rcx_1 = 0
            int64_t* rsi_1 = *(arg1 + 0x2d8)
            var_90.q = 0
            
            if (rsi_1 != 0)
                int32_t rax_1 = rsi_1[1].d
                
                if (rax_1 != 0)
                    rsi_1[1].d = rax_1 + 1
                    rax_1.b = 1
                
                result = result_1
                
                if (rax_1.b == 0)
                    rsi_1 = nullptr
                
                if (rsi_1 != 0)
                    rcx_1 = *(arg1 + 0x2d0)
                    var_90.q = rcx_1
            
            int64_t* rdi_1 = *(arg1 + 0x2e8)
            void* i = *(arg1 + 0x2e0)
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            int64_t var_a8
            int64_t* rbx_2
            void* const r15
            
            if (i == 0)
                int64_t* var_a0
                rbx_2 = var_a0
                r15.b = 0
            else
                var_a8 = rcx_1
                rbx_2 = rsi_1
                int64_t* var_a0_1 = rbx_2
                
                if (rsi_1 != 0)
                    rsi_1[1].d += 1
                
                rbp = 1
                result = sub_140eadaa0(result, &var_a8, 0)
                
                if (result.b == 0)
                    r15.b = 0
                else
                    r15 = 1
            
            if ((rbp & 1) != 0 && rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    result = (**rbx_2)(rbx_2)
                    int32_t temp4_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        result = (*(*rbx_2 + 8))(rbx_2, 1)
            
            if (r15.b != 0)
                if (rdi_1 != 0)
                    rdi_1[1].d += 1
                
                void* rdx_1 = arg1
                int64_t* rcx_5 = *(rdx_1 + 0x2b8)
                int64_t* rbx_3 = rcx_5
                void* rax_6 = &rcx_5[sx.q(*(rdx_1 + 0x2c0)) * 2]
                int32_t rbx_4
                
                if (rcx_5 == rax_6)
                label_140ec8302:
                    rbx_4 = -1
                else
                    while (*rbx_3 != i)
                        rbx_3 = &rbx_3[2]
                        
                        if (rbx_3 == rax_6)
                            goto label_140ec8302
                    
                    rbx_4 = ((rbx_3 - rcx_5) s>> 4).d
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp9_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
                        
                        rdx_1 = arg1
                
                var_a8 = *(arg1 + 0x2e0)
                int64_t* rax_10 = *(arg1 + 0x2e8)
                
                if (rax_10 != 0)
                    rax_10[1].d += 1
                
                sub_140ed4fe0(rdx_1 + 0x2a8, &var_a8)
                
                if (rax_10 != 0)
                    rax_10[1].d -= 1
                    
                    if (rax_10[1].d == 1)
                        (**rax_10)(rax_10)
                        int32_t temp11_1 = *(rax_10 + 0xc)
                        *(rax_10 + 0xc) -= 1
                        
                        if (temp11_1 == 1)
                            (*(*rax_10 + 8))(rax_10, 1)
                
                var_a8.o = zx.o(0)
                sub_140f164a0(i, &var_a8)
                
                if (arg1 + 0x2e0 != &var_a8)
                    *(arg1 + 0x2e0) = 0
                    int64_t* r15_2 = *(arg1 + 0x2e8)
                    
                    if (r15_2 != 0)
                        *(arg1 + 0x2e8) = 0
                        r15_2[1].d -= 1
                        
                        if (r15_2[1].d == 1)
                            (**r15_2)(r15_2)
                            int32_t temp13_1 = *(r15_2 + 0xc)
                            *(r15_2 + 0xc) -= 1
                            
                            if (temp13_1 == 1)
                                (*(*r15_2 + 8))(r15_2, 1)
                
                void* rbp_2
                void* r15_3
                
                if ((**(rdx_1 + 0x2a8))(rdx_1 + 0x2a8) != 0)
                    rbp_2 = arg1
                    int32_t rdx_4 = 0
                    
                    if (rbx_4 - 1 s>= 0)
                        rdx_4 = rbx_4 - 1
                    
                    sub_140ea45d0(rbp_2, rdx_4)
                    r15_3 = var_90.q
                else
                    r15_3 = var_90.q
                    sub_140ecbbf0(r15_3)
                    rbp_2 = arg1
                
                sub_140eae5c0(*sub_140ebe530(rbp_2, &var_a8), 0)
                
                if (rax_10 != 0)
                    rax_10[1].d -= 1
                    
                    if (rax_10[1].d == 1)
                        (**rax_10)(rax_10)
                        int32_t temp15_1 = *(rax_10 + 0xc)
                        *(rax_10 + 0xc) -= 1
                        
                        if (temp15_1 == 1)
                            (*(*rax_10 + 8))(rax_10, 1)
                
                int64_t* rbx_7 = *(rbp_2 + 0x10)
                uint128_t zmm1_1 = *(r15_3 + 0x3c8)
                uint128_t var_80 = *(r15_3 + 0x3b8)
                uint128_t zmm0_1 = *(r15_3 + 0x3d8)
                uint128_t var_70_1 = zmm1_1
                zmm1_1 = zx.o(*(r15_3 + 0x3e8))
                uint64_t var_50_1 = zmm1_1.q
                uint128_t var_60_1 = zmm0_1
                
                if (rbx_7 != 0)
                    int32_t rax_21 = rbx_7[1].d
                    
                    if (rax_21 != 0)
                        rbx_7[1].d = rax_21 + 1
                        rax_21.b = 1
                    
                    if (rax_21.b == 0)
                        rbx_7 = nullptr
                    
                    if (rbx_7 != 0)
                        int32_t rax_22 = rbx_7[1].d
                        rbx_7[1].d = rax_22
                        
                        if (rax_22 == 0)
                            (**rbx_7)(rbx_7)
                            int32_t temp18_1 = *(rbx_7 + 0xc)
                            *(rbx_7 + 0xc) -= 1
                            
                            if (temp18_1 == 1)
                                (*(*rbx_7 + 8))(rbx_7, 1)
                
                result = sub_140ed0430(result_1, zmm1_1.d, &var_80, zmm0_1)
                
                if (rbx_7 != 0)
                    rbx_7[1].d -= 1
                    
                    if (rbx_7[1].d == 1)
                        result = (**rbx_7)(rbx_7)
                        int32_t temp17_1 = *(rbx_7 + 0xc)
                        *(rbx_7 + 0xc) -= 1
                        
                        if (temp17_1 == 1)
                            result = (*(*rbx_7 + 8))(rbx_7, 1)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    result = (**rdi_1)(rdi_1)
                    int32_t temp6_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        result = (*(*rdi_1 + 8))(rdi_1, 1)
            
            if (rsi_1 != 0)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    result = (**rsi_1)(rsi_1)
                    int32_t temp7_1 = *(rsi_1 + 0xc)
                    *(rsi_1 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        result = (*(*rsi_1 + 8))(rsi_1, 1)
        
        if (r14_1 != 0)
            r14_1[1].d -= 1
            
            if (r14_1[1].d == 1)
                result = (**r14_1)(r14_1)
                int32_t temp1_1 = *(r14_1 + 0xc)
                *(r14_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*r14_1 + 8))(r14_1, 1)

__security_check_cookie(result_2 ^ &var_c8)
return result
