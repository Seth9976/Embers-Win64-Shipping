// 函数: sub_1420a66e0
// 地址: 0x1420a66e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0x20)
int64_t* result = (*(*rsi + 0x260))(rsi)
int64_t* result_1 = result

if (result != 0)
    void* rax_1
    int512_t zmm0_1
    rax_1, zmm0_1 = sub_14256a090()
    void* rcx_1 = result_1[2]
    result = rax_1 + 0x30
    int64_t rdx_1 = sx.q(result[1].d)
    
    if (rdx_1.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_1 << 3)) == result)
        void* rax_2 = *(arg1 + 0x28)
        int64_t rsi_1 = rsi[4]
        
        if (rax_2 != 0)
            int32_t rax_3 = *(rax_2 + 0xc)
            void* const rax_10
            
            if (rax_3 s>= data_143e1d9b4)
                rax_10 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_3)
                uint32_t rdx_3 = zx.d(temp0_1)
                int32_t rax_5 = temp1_1 + rdx_3
                rdx_1 = sx.q(zx.d(rax_5.w) - rdx_3) * 3
                rax_10 = *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + (rdx_1 << 3)
            
            if (((*(rax_10 + 8) u>> 0x1d).b & 1) == 0)
                int64_t rax_14 = (*(*result_1 + 0x698))(result_1, rdx_1)
                int64_t rdx_4 = *(arg1 + 0x28)
                
                if (rax_14 != rdx_4)
                    int64_t rax_15 = *result_1
                    zmm0_1.o = zx.o(0)
                    int32_t var_18 = 0
                    zmm0_1.o = 0x40000000
                    int32_t var_14_1 = 1.d
                    int32_t var_1c
                    int32_t var_c_1 = var_1c & 0xfffffffe
                    int32_t var_10_1 = 0x40000000
                    (*(rax_15 + 0xd10))(zmm0_1, rdx_4, &var_18)
        
        (*(*result_1 + 0xb50))(result_1, 0, rsi_1)
        result = sub_1422785c0(result_1, 0, 0)

*(arg1 + 0x28) = 0
return result
