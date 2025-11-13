// 函数: sub_14186a5b0
// 地址: 0x14186a5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg3
uint64_t arg_8
sub_140812a70(*arg1, &arg_8, &arg_10, nullptr)
int128_t* rax = arg1[1]
int32_t* rcx_1 = arg1[2]
uint128_t zmm1 = *rax
uint64_t var_c8
var_c8.d = rax[1].q.d + *rcx_1
var_c8:4.d = *(arg2 + 8)
*rcx_1 += *(arg2 + 8)
int64_t rcx_2 = *arg2
int64_t rdx_1 = *arg4
int128_t* result
uint128_t var_c0
int64_t var_b0

if (rcx_2 != rdx_1)
label_14186a6ac:
    int64_t r9 = arg4[1]
    int64_t r8_2 = *(arg2 + 8)
    int64_t r10_1 = rcx_2 + r8_2
    int128_t* result_1
    uint128_t zmm0_1
    
    if (r10_1 != r9 + rdx_1)
        uint128_t zmm2 = *(arg4 + 0x10)
        int32_t rax_12 = rcx_2.d - rdx_1.d + r8_2.d
        uint64_t var_b0_1
        var_b0_1.d = arg4[4].d + rax_12
        int32_t r9_1 = r9.d - rax_12
        uint64_t var_e0_5 = zx.q(r9_1)
        uint64_t rax_14 = zx.q(rcx_2.d - rdx_1.d)
        var_b0_1:4.d = r9_1
        uint128_t var_68 = r10_1.o
        uint64_t var_d0_1 = rax_14
        uint64_t var_48_1 = var_b0_1
        uint128_t zmm0 = *arg2
        *(arg4 + 0x24) = rax_14.d
        uint128_t var_78_1 = zmm0
        uint128_t var_40 = zmm0
        zmm0 = zx.o(var_c8)
        arg_8 = zmm0.q
        uint64_t var_20_1 = zmm0.q
        uint128_t var_58_1 = zmm2
        *arg4 = rdx_1.o
        void* r8_4 = arg4[5]
        uint128_t var_30_1 = zmm1
        
        if (r8_4 == 0)
            uint128_t* rax_15 = j_sub_140a82f30(0x38)
            
            if (rax_15 != 0)
                *rax_15 = r10_1.o
                rax_15[1] = zmm2
                rax_15[2].q = var_b0_1
                *(rax_15 + 0x28) = 0
                rax_15[3].q = 0
                void* rax_16 = *(arg3 + 0x28)
                
                if (rax_16 == 0)
                    *(arg3 + 0x20) = rax_15
                else
                    *(rax_16 + 0x28) = rax_15
                    rax_15[3].q = *(arg3 + 0x28)
                
                *(arg3 + 0x28) = rax_15
                (*(*(arg3 + 0x18) + 8))(arg3 + 0x18, zx.q(*(arg3 + 0x30) + 1))
        else
            sub_141889f50(arg3 + 0x18, &var_68, r8_4)
        
        void* r8_5 = arg4[5]
        
        if (r8_5 != 0)
            return sub_141889f50(arg3 + 0x18, &var_40, r8_5)
        
        result = j_sub_140a82f30(0x38)
        result_1 = result
        
        if (result != 0)
            *result = var_78_1
            result[1] = zmm1
            zmm0_1 = zx.o(arg_8)
            goto label_14186a890
    else
        uint64_t rcx_9 = zx.q(*(arg4 + 0x24) - r8_2.d)
        *(arg4 + 0x24) = rcx_9.d
        uint64_t var_e0_3 = rcx_9
        var_b0.o = zmm1
        *arg4 = rdx_1.o
        int64_t rax_8 = *arg4 + arg4[1]
        void* r8_3 = arg4[5]
        int64_t var_e0_4 = *(arg2 + 8)
        var_c0 = rax_8.o
        uint64_t var_a0_2 = var_c8
        
        if (r8_3 != 0)
            return sub_141889f50(arg3 + 0x18, &var_c0, r8_3)
        
        result = j_sub_140a82f30(0x38)
        result_1 = result
        
        if (result != 0)
            *result = rax_8.o
            result[1] = zmm1
            zmm0_1 = zx.o(var_c8)
        label_14186a890:
            result[2].q = zmm0_1.q
            *(result + 0x28) = 0
            result[3].q = 0
            void* rax_19 = *(arg3 + 0x28)
            
            if (rax_19 == 0)
                *(arg3 + 0x20) = result_1
            else
                *(rax_19 + 0x28) = result_1
                result_1[3].q = *(arg3 + 0x28)
            
            *(arg3 + 0x28) = result_1
            return (*(*(arg3 + 0x18) + 8))(arg3 + 0x18, zx.q(*(arg3 + 0x30) + 1))
else
    result = arg4[1]
    
    if (*(arg2 + 8) != result)
        if (rcx_2 != rdx_1)
            goto label_14186a6ac
        
        int64_t rcx_3 = *(arg2 + 8)
        arg4[4].d += rcx_3.d
        *(arg4 + 0x24) -= *(arg2 + 8)
        int64_t var_e0_1 = rcx_3
        int64_t rax_5 = rcx_3 + rdx_1
        int64_t var_e0_2 = arg4[1] - rax_5 + rdx_1
        var_c0 = rdx_1.o
        uint64_t var_a0_1 = var_c8
        var_b0.o = zmm1
        *arg4 = rax_5.o
        return sub_141889f50(arg3 + 0x18, &var_c0, arg4)
    
    *(arg4 + 0x10) = zmm1
    arg4[4] = var_c8
return result
