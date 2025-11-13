// 函数: sub_141be7520
// 地址: 0x141be7520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || (*(arg2 + 0x294) & 2) == 0 || (*(*arg2 + 0x6a8))(arg2).b == 0 || arg2[0x53] == 0)
    return 

int64_t var_28
sub_141bab3c0(arg1, &var_28)

if (var_28 != 0)
    int64_t* rax = sub_14226dd50(arg2)
    
    if (rax != 0)
        int32_t rax_2
        uint128_t zmm0_1
        rax_2, zmm0_1 = sub_140e69900(data_143e29f28, zx.q(rax[0x17].d))
        
        if (sub_140e8ab30(data_143e29f28, rax_2, &var_28, 2, zmm0_1) == 0)
            uint128_t zmm0_2 = var_28.o
            uint128_t var_18 = zmm0_2
            void* rax_4 = _mm_bsrli_si128(zmm0_2, 8).q
            
            if (rax_4 != 0)
                *(rax_4 + 8) += 1
            
            sub_140dbdce0(&rax[0x34], &var_18, 2, 0)
        else
            sub_140d9b350(&rax[0x34])

int64_t* var_20

if (var_20 == 0)
    return 

var_20[1].d -= 1

if (var_20[1].d != 1)
    return 

(**var_20)(var_20)
int32_t temp1_1 = *(var_20 + 0xc)
*(var_20 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*var_20 + 8))(var_20, 1)
