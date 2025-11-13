// 函数: sub_1421166e0
// 地址: 0x1421166e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
(*(*arg2 + 0x1d8))(arg2, &data_1439a93f8)
(*(*arg2 + 0x1d8))(arg2, &data_1439a4b70)
uint32_t result = zx.d(arg2[5].b)
uint32_t result_1
void var_168

if ((result.b & 2) != 0)
    int64_t r8 = arg2[0xe]
    int32_t rdi_1 = 0
    result_1 = 0
    int64_t* rsi_1 = nullptr
    
    if (r8 != 0)
        int32_t var_174
        sub_1405ba560(arg1, &var_174, r8)
        int64_t rax_4 = sx.q(var_174)
        void* const rcx_5
        
        if (rax_4.d == 0xffffffff)
            rcx_5 = nullptr
        else
            rcx_5 = (rax_4 << 5) + *arg1
        
        rsi_1 = rcx_5 + 8
        
        if (rcx_5 == 0)
            rsi_1 = nullptr
        
        if (rsi_1 != 0)
            result_1 = rsi_1[1].d
    
    int64_t* rcx_6 = arg2[1]
    uint32_t* rdx_1 = *rcx_6
    
    if (&rdx_1[1] u> rcx_6[1])
        uint32_t* rdx_2 = &result_1
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54070(arg2, rdx_2, arg5)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_2, 4)
    else
        result = *rdx_1
        result_1 = result
        *rcx_6 += 4
    
    if (rsi_1 != 0 && result_1 s> 0)
        int512_t zmm1
        int512_t zmm2_1
        zmm1, zmm2_1 = sub_142118dc0(&var_168, arg2)
        
        if (result_1 s> 0)
            int64_t* rbx_1 = nullptr
            
            do
                void* r14_1 = *(rbx_1 + *rsi_1)
                int32_t var_a8
                int32_t rax_9 = var_a8 + 1
                var_a8 = rax_9
                int64_t var_b0
                int32_t var_a4
                
                if (rax_9 s> var_a4)
                    sub_1405a4d70(&var_b0)
                    rax_9 = var_a8
                
                int32_t var_d8
                *(var_b0 + (sx.q(rax_9) << 3) - 8) = var_d8
                zmm1, zmm2_1 = sub_142130fa0(*(*rsi_1 + rbx_1), &var_168, zmm2_1, zmm1)
                rdi_1 += 1
                rbx_1 = &rbx_1[1]
                *(var_b0 + (sx.q(var_a8) << 3) - 4) = *(r14_1 + 0x1c)
                *(var_b0 + (sx.q(var_a8) << 3) - 3) = *(r14_1 + 0x18)
            while (rdi_1 s< result_1)
        
        result = sub_14211a490(&var_168)
else if ((result.b & 1) != 0)
    uint32_t** rcx_16 = arg2[1]
    int32_t rdi_2 = 0
    result_1 = 0
    uint32_t* rdx_9 = *rcx_16
    
    if (&rdx_9[1] u> rcx_16[1])
        uint32_t* rdx_10 = &result_1
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54070(arg2, rdx_10, arg5)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_10, 4)
    else
        result = *rdx_9
        result_1 = result
        *rcx_16 = &(*rcx_16)[1]
    
    if (arg4 != 0)
        void* rax_16 = (*(*arg2 + 0x18))(arg2)
        int32_t r14_2
        
        if (rax_16 == 0)
            r14_2 = 0
        else
            r14_2 = *(rax_16 + 0xc8)
        
        result = (*(*arg2 + 0x20))(arg2) - r14_2
        *arg4 = result
    
    uint32_t result_2 = result_1
    
    if (result_2 s> 0)
        sub_14210e760(arg3, result_2)
        int512_t zmm1_1
        int512_t zmm2_2
        zmm1_1, zmm2_2 = sub_142118f10(&var_168, arg2, 4, 3)
        
        if (result_1 s> 0)
            do
                int64_t rbx_2 = sx.q(arg3[1].d)
                int32_t rax_19 = (rbx_2 + 1).d
                arg3[1].d = rax_19
                
                if (rax_19 s> *(arg3 + 0xc))
                    sub_1407c3b60(arg3)
                
                int64_t rbx_3 = rbx_2 * 0x38
                sub_1421059a0(*arg3 + rbx_3)
                zmm1_1, zmm2_2 = sub_142130fa0(*arg3 + rbx_3, &var_168, zmm2_2, zmm1_1)
                rdi_2 += 1
            while (rdi_2 s< result_1)
        
        result = sub_14211a4f0(&var_168)
__security_check_cookie(rax_1 ^ &var_198)
return result
