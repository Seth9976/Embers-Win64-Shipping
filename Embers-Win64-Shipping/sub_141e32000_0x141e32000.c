// 函数: sub_141e32000
// 地址: 0x141e32000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t r12
r12.b = 1

if (*(arg4 + 0x99) != 0)
    int32_t zmm1 = *(arg2 + 0x28)
    int128_t zmm6 = *(arg2 + 0x20)
    int128_t zmm7 = *(arg2 + 0x24)
    *(arg4 + 0x8c) = zmm1
    int128_t zmm0
    zmm0.d = zmm7.d f/ arg1[0x12].d
    *(arg4 + 0x90) = zmm0.d
    
    if (not(zmm1 f== 0f) && *(arg2 + 0x40) != 0)
        int32_t* r15_1 = *(arg2 + 0x38)
        
        if (r15_1 != 0 && *(arg4 + 0x98) != 0)
            int32_t r8 = *r15_1
            
            if (r8 == 0xfffffffe || r15_1[2] == 0xfffffffe)
                result.b = 0
            else
                result = 1
            
            int64_t r10_1 = *arg1
            void var_60
            int128_t* rax
            
            if (result.b == 0)
                int64_t r9_1 = *(arg4 + 0x80)
                int32_t var_68 = 0xfffffffe
                int32_t arg_20 = 0xfffffffe
                (*(r10_1 + 0x2e8))(arg1, zmm7.d, 0, r9_1, &var_68, &arg_20, var_68)
                int32_t* var_78_1
                var_78_1.d = zmm7.d
                rax = (*(*arg1 + 0x2f0))(arg1, &var_60, zx.q(var_68), zx.q(arg_20), var_78_1)
            else
                int64_t var_78
                var_78.d = zmm7.d
                rax = (*(r10_1 + 0x2f0))(arg1, &var_60, r8, zx.q(r15_1[2]), var_78)
            
            int64_t r9_3 = *(arg4 + 0x80)
            *(arg4 + 0x58) = *rax
            *(arg4 + 0x68) = rax[1].d
            (*(*arg1 + 0x2e8))(arg1, zmm6.d, 0, r9_3, r15_1, &r15_1[2])
            r12.b = 0
            int32_t* var_78_2
            var_78_2.d = zmm6.d
            int128_t* rax_5 =
                (*(*arg1 + 0x2f0))(arg1, &var_60, zx.q(*r15_1), zx.q(r15_1[2]), var_78_2)
            *(arg4 + 0x6c) = *rax_5
            *(arg4 + 0x7c) = rax_5[1].d
            result = *(arg2 + 0x30)
            
            if (arg4 + 0x48 != result)
                int64_t rsi_2 = sx.q(result[1].d)
                void* const r15_2 = *result
                int32_t r8_3 = *(arg4 + 0x54)
                *(arg4 + 0x50) = rsi_2.d
                
                if (rsi_2.d != 0 || r8_3 != 0)
                    sub_1407c3650(arg4 + 0x48, rsi_2.d, r8_3)
                    result = memcpy(*(arg4 + 0x48), r15_2, (rsi_2 * 0xc).d)
                else
                    *(arg4 + 0x54) = rsi_2.d
    
    zmm6.d = zmm6.d f/ arg1[0x12].d
    *(arg4 + 0x94) = zmm6.d

if (*(arg4 + 0x99) == 0 || r12.b != 0)
    result = *(arg2 + 0x38)
    
    if (result != 0)
        *result = 0xfffffffe
        result[1].d = 0xfffffffe

return result
