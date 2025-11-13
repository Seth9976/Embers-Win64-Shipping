// 函数: sub_140ee9e30
// 地址: 0x140ee9e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t rbp = arg1[1].d
int32_t rbp_1 = rbp - 1
int128_t zmm8
zmm8.d = (*(arg1 + 0x1c)).d f- data_1439b3984
uint128_t zmm9
zmm9.d = arg1[3].d.d f- data_1439b3980
int64_t rsi = sx.q(rbp_1)

if (rbp - 1 s>= 0)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int64_t r14_2 = rsi << 4
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    int64_t temp1_1
    
    do
        result = *arg1
        void* rdi_1 = *(r14_2 + result)
        int64_t* rbx_1 = *(rdi_1 + 0x3a8)
        
        if (rbx_1 != 0)
            result = zx.q(rbx_1[1].d)
            
            if (result.d != 0)
                result = zx.q(result.d + 1)
                rbx_1[1].d = result.d
                
                if (rbx_1 != 0)
                    void* rdi_2 = *(rdi_1 + 0x3a0)
                    
                    if (rdi_2 != 0)
                        int32_t arg_8
                        sub_140e13cf0(rdi_2, &arg_8)
                        zmm7.d = zmm9.d f- arg_8
                        zmm6.d = zmm8.d f- arg2
                        int32_t arg_10 = zmm7.d
                        int32_t arg_14 = zmm6.d
                        void arg_18
                        int64_t* rax = sub_140e15940(rdi_2, &arg_18)
                        int64_t* rax_1
                        void arg_20
                        
                        if (zmm7.d f!= *rax || not(zmm6.d f== *(rax + 4)))
                            rax_1 = sub_140e173b0(rdi_2, &arg_20)
                        
                        if ((zmm7.d f!= *rax || not(zmm6.d f== *(rax + 4)))
                                && (arg_8 f!= *rax_1 || arg2 f!= *(rax_1 + 4)))
                            result, zmm8, zmm9 = sub_140e21b40(rdi_2, arg_10.q, arg_8.q)
                        else
                            void var_88
                            result = sub_140e15940(rdi_2, &var_88)
                            
                            if (zmm7.d f!= *result || not(zmm6.d f== *(result + 4)))
                                uint128_t zmm0_2
                                zmm0_2.d =
                                    _mm_cvtepi32_ps(zx.o(arg1[1].d - rbp_1 - 1)).d f* data_1439b3984
                                zmm6.d = zmm6.d f- zmm0_2.d
                                result = sub_140e1c780(rdi_2, _mm_unpacklo_ps(zmm7, zmm6.q).q)
                        
                        zmm8.d = zmm8.d f- arg2
                    
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        result = (**rbx_1)(rbx_1)
                        int32_t temp3_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            result = (*(*rbx_1 + 8))(rbx_1, 1)
        
        rbp_1 -= 1
        r14_2 -= 0x10
        temp1_1 = rsi
        rsi -= 1
    while (temp1_1 - 1 s>= 0)

return result
