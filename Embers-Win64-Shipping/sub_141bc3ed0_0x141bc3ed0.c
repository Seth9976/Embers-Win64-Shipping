// 函数: sub_141bc3ed0
// 地址: 0x141bc3ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x8b].d = arg1[0x88].d
*(arg1 + 0x45c) = *(arg1 + 0x444)
sub_141f20900(arg1)
void (* var_28)(int64_t* arg1, int64_t arg2, int64_t arg3) = sub_141bc01c0
int32_t var_20 = 0
void*** rax_2 = sub_140a84c80(0, 0x30, 0)

if (rax_2 != 0)
    *rax_2 = &data_143084628
    sub_140d3a3a0(&rax_2[1], arg1)
    *(rax_2 + 0x10) = var_28.o
    rax_2[5] = sub_140a387b0()
    *rax_2 = &data_143084680

if (rax_2 != 0)
    sub_140599630(&data_143a30728, 1)
    void arg_8
    (*rax_2)[6](rax_2, &arg_8)
    int64_t rsi_1 = sx.q(data_143a30730)
    int32_t rax_5 = (rsi_1 + 1).d
    bool cond:0_1 = rax_5 s<= data_143a30734
    data_143a30730 = rax_5
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_143a30728)
    
    void**** rax_8 = (rsi_1 << 4) + data_143a30728
    *rax_8 = rax_2
    rax_8[1].d = 3

void* rax_9 = arg1[0x15]

if (rax_9 == 0)
    rax_9 = sub_141ee69e0(arg1)

void*** result = sub_14243ade0(rax_9)

if (arg1[0x86].b != 1)
    if (*(arg1 + 0x46c) != 0 && arg1[0xa4].b == 0 && result.b != 0)
        int64_t* rcx_4 = data_143f5b298
        (*(*rcx_4 + 0x358))(rcx_4, &var_28)
        uint128_t zmm0_1 = var_28.o
        uint128_t var_18 = zmm0_1
        void* rax_11 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_11 != 0)
            *(rax_11 + 8) += 1
        
        result = sub_141bd8b50(arg1, &var_18)
        int64_t* rdi_1 = var_20.q
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                result = (**rdi_1)(rdi_1)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (arg1[0xa8] == 0 && data_143f0f1d4 == 0)
        void*** rax_14 = j_sub_140a82f30(0x38)
        
        if (rax_14 == 0)
            result = nullptr
        else
            result = sub_141b7bc70(rax_14, *(arg1 + 0x46f), 1)
        
        arg1[0xa8] = result

arg1[0x99] = 0
return result
