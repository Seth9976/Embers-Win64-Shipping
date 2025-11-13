// 函数: sub_141b1a350
// 地址: 0x141b1a350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg4
void* rsi = arg1
int32_t* i_1
sub_141a4a790(rbx, &i_1, arg3, &arg3[4])
int32_t* i = i_1
int32_t result_1
int64_t result = sx.q(result_1)
void* r15_1 = &i[result * 2]
void* arg_18 = r15_1

for (; i != r15_1; i = &i[2])
    result = sub_140d3c6e0(i)
    int64_t* result_3 = result
    
    if (result != 0)
        int64_t rax = sub_142577430()
        void* rcx_2 = result_3[2]
        result = rax + 0x30
        int64_t rdx_1 = sx.q(*(result + 8))
        
        if (rdx_1.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rdx_1 << 3)) == result)
            result = (*(*result_3 + 0x548))(result_3, zx.q(*(rsi + 8)))
            int64_t result_2 = result
            
            if (result != 0)
                int32_t* var_70_1 = rsi + 8
                void** const var_78 = &data_14305d828
                int64_t var_98
                sub_141b21260(&data_143f2c580, &var_98, rsi + 8)
                int64_t rdx_4 = var_98
                int32_t var_80_1 = rbx[0x5b].d
                char rax_3 = *(rbx + 0x2dc)
                int64_t var_88 = rbx[0x5a]
                sub_1405c5900(&rbx[0x1f], rdx_4, &var_78, result_3, rax_3, &var_88)
                var_78 = &data_142d4ba10
                void* rax_4 = sub_142542e20()
                void* rdx_5 = *(result_2 + 0x10)
                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                int64_t var_a8
                int512_t zmm2
                
                if (rax_5.d s> *(rdx_5 + 0x38) || *(*(rdx_5 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                    int16_t* var_d8 = nullptr
                    int32_t var_d0_1 = 0
                    sub_1405947f0(&var_d8, 0xa)
                    int32_t rbx_1 = var_d0_1 + 0xa
                    
                    if (rbx_1 s> 0)
                        sub_140594770(&var_d8)
                    
                    int16_t* rdi_1 = var_d8
                    sub_1405a7220(rdi_1, 0xa, "_Animated", 0xa, 0x3f)
                    var_a8 = *(result_2 + 0x18)
                    int16_t* var_b8
                    sub_140b63b70(&var_a8, &var_b8)
                    int32_t var_b0
                    int16_t* r15_2
                    
                    if (var_b0 s> 1)
                        int32_t rbx_2
                        
                        if (rbx_1 == 0)
                            rbx_2 = 0
                        else
                            rbx_2 = rbx_1 - 1
                        
                        int32_t rdx_8
                        
                        if (var_b0 == 0)
                            rdx_8 = var_b0 + 1
                        
                        if (var_b0 != 0 || rbx_2 == 0)
                            rdx_8 = 0
                        
                        int16_t* var_c8 = var_b8
                        int32_t rdx_10 = rdx_8 + var_b0 + rbx_2
                        var_b8 = nullptr
                        int32_t var_c0_1 = var_b0
                        int32_t var_ac
                        int32_t var_bc_1 = var_ac
                        var_b0.q = 0
                        
                        if (rdx_10 s> var_ac)
                            sub_1405947f0(&var_c8, rdx_10)
                        
                        sub_140a20ba0(&var_c8, rdi_1, rbx_2)
                        r15_2 = var_c8
                        rbx_1 = var_c0_1
                        var_c8 = nullptr
                        var_c0_1.q = 0
                    else
                        r15_2 = rdi_1
                        rdi_1 = nullptr
                        int64_t var_d0_2 = 0
                    
                    int16_t* rcx_14 = var_b8
                    
                    if (rcx_14 != 0)
                        sub_140a74f90(rcx_14)
                    
                    if (rdi_1 != 0)
                        sub_140a74f90(rdi_1)
                    
                    int16_t* const rdi_2 = &data_142d40450
                    
                    if (rbx_1 != 0)
                        rdi_2 = r15_2
                    
                    uint64_t var_90
                    void var_58
                    sub_140d25240(&var_90, result_3, sub_142542e20(), 
                        *sub_140b58260(&var_58, rdi_2, 1))
                    void* result_4
                    result_4, zmm2 = sub_142121d50(result_2, result_3, var_90)
                    int64_t r9_3 = *result_3
                    result_2 = result_4
                    (*(r9_3 + 0x550))(result_3, zx.q(*(rsi + 8)), result_4, r9_3)
                    
                    if (r15_2 != 0)
                        sub_140a74f90(r15_2)
                    
                    r15_1 = arg_18
                
                void* j_3 = *(arg1 + 0x28)
                void* j = arg1 + 0x10
                
                if (j_3 != 0)
                    j = j_3
                
                for (void* rdi_3 = j + sx.q(*(arg1 + 0x30)) * 0xc; j != rdi_3; j += 0xc)
                    zmm2.o = *(j + 8)
                    sub_142131b70(result_2, *j)
                
                void* j_2 = *(arg1 + 0xb8)
                void* j_1 = arg1 + 0x90
                
                if (j_2 != 0)
                    j_1 = j_2
                
                for (void* rdi_4 = j_1 + sx.q(*(arg1 + 0xc0)) * 0x14; j_1 != rdi_4; j_1 += 0x14)
                    void var_50
                    var_a8.o = *sub_140acc990(&var_50, j_1 + 8)
                    sub_1421321b0(result_2, *j_1, &var_a8)
                
                void* rax_15 = *(arg1 + 0xf8)
                void* rbx_4 = arg1 + 0xc8
                
                if (rax_15 != 0)
                    rbx_4 = rax_15
                
                result = sx.q(*(arg1 + 0x100))
                void* r14_2 = rbx_4 + result * 0x18
                
                if (rbx_4 != r14_2)
                    void* rdi_5 = rbx_4 + 8
                    
                    do
                        var_a8.o = *rdi_5
                        result, zmm2 = sub_1421321b0(result_2, *rbx_4, &var_a8)
                        rbx_4 += 0x18
                        rdi_5 += 0x18
                    while (rbx_4 != r14_2)
                
                rbx = arg4
            
            rsi = arg1

return result
