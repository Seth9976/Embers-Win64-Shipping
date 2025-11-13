// 函数: sub_14097ebc0
// 地址: 0x14097ebc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
int32_t rcx = 0
int64_t result

if (rbp.d u< *(arg1 + 0x48))
    result = *(arg1 + 0x50)
    int64_t r8_2 = rbp * 3
    char* rsi_1 = result + (r8_2 << 2)
    
    if (*(result + (r8_2 << 2)) == 1 && *(arg1 + 0x38) != 0)
        if (sub_140967a20(arg1 + 8) != 0 && (rsi_1[9] != 0 || rsi_1[8] != 0))
            int64_t* rcx_2 = *(arg1 + 0x30)
            int64_t var_28
            (*(*rcx_2 + 0xf0))(rcx_2, &var_28, zx.q(rbp.d))
            
            if (var_28 != 0)
                uint128_t zmm0 = var_28.o
                uint128_t var_18 = zmm0
                void* rax_2 = _mm_bsrli_si128(zmm0, 8).q
                
                if (rax_2 != 0)
                    *(rax_2 + 8) += 1
                
                sub_140954cd0(arg1 + 8, &var_18, 0)
            
            int64_t* var_20
            
            if (var_20 != 0)
                var_20[1].d -= 1
                
                if (var_20[1].d == 1)
                    (**var_20)(var_20)
                    int32_t temp1_1 = *(var_20 + 0xc)
                    *(var_20 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_20 + 8))(var_20, 1)
        
        int64_t* rcx_6 = *(arg1 + 0x38)
        (*(*rcx_6 + 0x18))(rcx_6, zx.q(rbp.d))
        int64_t* rcx_7 = *(arg1 + 0x38)
        rcx = (*(*rcx_7 + 0x38))(rcx_7, zx.q(rbp.d)).d
        *(rsi_1 + 8) = 0
        *rsi_1 = 0

result.b = rcx == 0
return result
