// 函数: sub_141edc210
// 地址: 0x141edc210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x5c0))()

if (result.b != 0 && (*(arg1 + 0x8a) & 1) != 0)
    int64_t rdx_1 = *arg1
    int64_t zmm0 = *arg4
    int32_t var_50_1 = arg6.d
    int32_t var_40_2 = arg4[1].d
    int64_t var_58 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int64_t var_48 = zmm0
    (*(rdx_1 + 0xa58))(arg1, rdx_1, &var_48, &var_58, arg7, arg8, arg9, arg10, arg11)
    void* rdi_1 = arg1[0x97]
    
    if (rdi_1 == 0)
        void* rax_9 = (*(arg1[0x28] + 0x28))(&arg1[0x28])
        rdi_1 = rax_9
        arg1[0x97] = rax_9
    
    result = *(rdi_1 + 0x48)
    
    if (result != 0 && not(arg2[0] f!= *(result + 0x1c)))
        float zmm3[0x4] = *arg5
        int128_t zmm2 = *(arg5 + 4)
        void* rcx_3 = arg1[0x29]
        zmm0.d = (*(arg5 + 8)).d f* 180f
        zmm3[0] = zmm3[0] * 180f
        zmm2.d = zmm2.d f* 180f
        int32_t var_50_2 = zmm0.d
        var_48 = (_mm_unpacklo_ps(zmm3, zmm2.q)).q
        int32_t var_40_3 = var_50_2
        int32_t zmm6_1 = sub_141dd7190(rcx_3, &var_48, 0)
        uint64_t var_38[0x2]
        sub_14200cce0(&var_38, arg4, arg1[0x16])
        void* rcx_5 = arg1[0x29]
        
        if ((*(rcx_5 + 0x330) & 0x20) == 0)
            result = *(rdi_1 + 0x48)
        
        if ((*(rcx_5 + 0x330) & 0x20) != 0 || not(zmm6_1 f== *(result + 0x210)))
            result = sub_141ea47f0(rcx_5)
            
            if (result != 0 && *(result + 0x188) s<= 0)
                *(result + 0x128) = zmm6_1
                *(result + 0x30) = 0xfffffffe
                *(result + 0x38) = 0xfffffffe
                result = arg1[0x29]
                *(result + 0x330) |= 0x20

return result
