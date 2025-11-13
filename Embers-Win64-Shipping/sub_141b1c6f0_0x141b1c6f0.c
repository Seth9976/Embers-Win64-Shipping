// 函数: sub_141b1c6f0
// 地址: 0x141b1c6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg2
void* rax = sub_141af0560(arg4)
int32_t rcx_1 = r15[9].d

if ((rcx_1 != 1 && rcx_1 != 3) || (*(r15 + 0x54) & 1) != 0 || r15[4].d == 1)
    return sub_141b33b10(rax) __tailcall

int32_t* result
char var_d8
int32_t var_c8
int64_t* var_b8
void* var_88
int32_t result_1

if ((arg3[3] | arg3[2] | arg3[1] | *arg3) != 0)
    sub_141a4a790(arg5, &var_88, arg3, &arg3[4])
    void* rsi_2 = var_88
    result = sx.q(result_1)
    int64_t r14_1 = 0
    void* rcx_27 = rsi_2 + (result << 3)
    uint64_t r15_5 = (rcx_27 - rsi_2 + 7) u>> 3
    
    if (rsi_2 u> rcx_27)
        r15_5 = 0
    
    if (r15_5 != 0)
        do
            var_c8.q = *rsi_2
            void* rax_24 = sub_140d3c6e0(&var_c8)
            int64_t* arg_10
            arg_10.d = 0xffffffff
            arg_10:4.d = 0
            int64_t* rdx_14
            
            if (rax_24 == 0)
                rdx_14 = 0xffffffff
            else
                sub_140d3a3a0(&var_b8, rax_24)
                rdx_14 = var_b8
                arg_10 = rdx_14
            
            int64_t* rax_25 = sub_141b21a50(rax, rdx_14, *(arg1 + 0x10))
            
            if (rax_25 != 0)
                var_d8 = 1
                result = sub_141b12020(arg1, rax_25, arg4, arg2, 1, arg5)
            else
                int64_t* rax_26 = sub_140d3c6e0(&var_c8)
                var_d8.q = arg5
                result =
                    sub_141b03040(rax, zx.q(*(*(arg1 + 8) + 0xa8)), *(arg1 + 0x10), rax_26, var_d8)
                
                if (result != 0)
                    if (sub_141b28ce0(*(arg1 + 8) + 0x300) != 0)
                        void* rcx_36 = *(arg1 + 8)
                        *(result + 0x720) = *(rcx_36 + 0x300)
                        *(result + 0x728) = *(rcx_36 + 0x308)
                    
                    void* rdx_17 = *(arg1 + 8)
                    
                    if (*(rdx_17 + 0x318) s> 0)
                        sub_1405b0be0(&result[0x19c], rdx_17 + 0x310)
                        rdx_17 = *(arg1 + 8)
                    
                    if (*(rdx_17 + 0x328) s> 0)
                        sub_1405b0be0(&result[0x1a6], rdx_17 + 0x320)
                    
                    var_d8 = 1
                    result = sub_141b12020(arg1, result, arg4, arg2, 1, arg5)
            
            rsi_2 += 8
            r14_1 += 1
        while (r14_1 != r15_5)
else
    int64_t* rax_6 = (*(*arg5 + 0x78))(arg5)
    int32_t rcx_3 = data_143f2c430
    void* r12_1 = nullptr
    void* r9 = *(arg1 + 8)
    int64_t* rsi = rax_6
    var_b8 = rax_6
    int64_t* r14 = nullptr
    int32_t rax_7 = *(r15 + 0x24)
    int32_t var_b0 = rcx_3
    char var_ac_1 = 1
    int64_t var_a8
    __builtin_memset(&var_a8, 0, 0x20)
    int32_t rdx
    
    if (rax_7 == 0x80000000)
        void* rdx_1 = &r15[2]
        
        if (r15[4].d != 0)
            rdx_1 = r15 + 4
        
        rdx = (*rdx_1).d
    else
        var_c8 = rax_7
        int32_t var_c4_1 = 0
        rdx = (var_c8.q).d
    
    sub_141b13b60(r9 + 0x240, rdx, &var_b0)
    uint128_t zmm1_1 = var_b0.o
    int64_t var_a0
    uint64_t var_48_1 = var_a0
    int32_t rax_9 = _mm_bsrli_si128(zmm1_1, 0xc).d
    uint128_t var_58 = zmm1_1
    
    if ((var_a0:4.d | var_a0.d | rax_9 | _mm_bsrli_si128(zmm1_1, 8).d) != 0)
        int32_t rbx_1 = arg3[4]
        
        if (var_b0 != 0xffffffff)
            sub_141a644b0(&var_58, &var_88, rbx_1, *((*(*arg5 + 8))(arg5) + 8) + 0xd0)
            rbx_1 = var_88.d
        
        int32_t var_60 = rbx_1
        uint128_t var_50
        uint128_t var_70 = var_50
        sub_141a4a790(arg5, &var_88, &var_70, &var_60)
        void* rbx_2 = var_88
        void* r15_1 = rbx_2 + (sx.q(result_1) << 3)
        
        if (rbx_2 != r15_1)
            do
                var_c8.q = *rbx_2
                int64_t* rax_15 = sub_140d3c6e0(&var_c8)
                
                if (rax_15 != 0)
                    void* rax_16 = sub_142452380()
                    void* rcx_13 = rax_15[2]
                    int64_t rdx_4 = sx.q(*(rax_16 + 0x38))
                    
                    if (rdx_4.d s<= *(rcx_13 + 0x38)
                            && *(*(rcx_13 + 0x30) + (rdx_4 << 3)) == rax_16 + 0x30)
                        int64_t* rax_18 = sub_141b21790(*(arg1 + 8), rax_15, &var_b0)
                        r14 = rax_18
                        
                        if (rax_18 != 0)
                            break
                
                rbx_2 += 8
            while (rbx_2 != r15_1)
            
            rsi = var_b8
        
        r15 = arg2
    
    int64_t result_3 = sub_141b21a50(rax, 0xffffffff, *(arg1 + 0x10))
    int64_t* result_2 = result_3
    
    if (result_3 != 0)
    label_141b1c9e5:
        int64_t var_90
        
        if (r14 != 0 && (result_2[0x18] != r14 || result_2[0x19] != var_90))
            sub_141f32b40(result_2, r14, &data_143f3f280, var_90)
        
        result_3.b = result_2[0x18] != 0
        return sub_141b12020(arg1, result_2, arg4, r15, result_3.b, arg5)
    
    if (rsi != 0)
        r12_1 = (*(*rsi + 0x150))(rsi)
    
    var_d8.q = arg5
    result = sub_141b03630(rax, zx.q(*(*(arg1 + 8) + 0xa8)), *(arg1 + 0x10), r12_1, var_d8)
    result_2 = result
    
    if (result != 0)
        if (sub_141b28ce0(*(arg1 + 8) + 0x300).b != 0)
            void* rcx_21 = *(arg1 + 8)
            result_2[0xe4] = *(rcx_21 + 0x300)
            result_2[0xe5] = *(rcx_21 + 0x308)
        
        void* rdx_7 = *(arg1 + 8)
        
        if (*(rdx_7 + 0x318) s> 0)
            sub_1405b0be0(&result_2[0xce], rdx_7 + 0x310)
            rdx_7 = *(arg1 + 8)
        
        if (*(rdx_7 + 0x328) s> 0)
            sub_1405b0be0(&result_2[0xd3], rdx_7 + 0x320)
        
        goto label_141b1c9e5
return result
