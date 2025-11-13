// 函数: sub_141a16c60
// 地址: 0x141a16c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
uint64_t result = __security_cookie ^ &var_78
uint64_t result_1 = result

if (*(arg1 + 0x52) != 0)
    int32_t var_58
    sub_141a0a4e0(&data_1439cbfb0, &var_58, arg1 + 0x10)
    int64_t rax_1 = sx.q(var_58)
    void* rdi_1 = nullptr
    int64_t r14_1
    
    if (rax_1.d != 0xffffffff)
        r14_1 = rax_1 * 0x70
    
    int64_t* r14_3
    
    if (rax_1.d == 0xffffffff || r14_1 == neg.q(data_1439cbfb0))
        r14_3 = nullptr
    else
        r14_3 = r14_1 + data_1439cbfb0 + 0x18
    
    int64_t rbx_1 = *(arg1 + 0x28)
    sub_1419eda60(r14_3, &var_58, rbx_1)
    int64_t rax_2 = sx.q(var_58)
    void* rax_4
    
    if (rax_2.d != 0xffffffff)
        rax_4 = *r14_3 + rax_2 * 0x18
    
    if (rax_2.d == 0xffffffff || rax_4 == 0)
        result = 0
    else
        result = *(rax_4 + 8)
    
    if (result == arg1)
        sub_1419eff80(r14_3, rbx_1)
        
        if (arg2 != 0)
            sub_141a0a410(&data_1439cc030, &var_58, arg1 + 0x10)
            int64_t rax_5 = sx.q(var_58)
            void* const r8_4
            
            if (rax_5.d == 0xffffffff)
                r8_4 = nullptr
            else
                r8_4 = data_1439cc030 + rax_5 * 0x28
            
            int32_t* r8_5 = *(r8_4 + 0x18)
            int64_t rax_7 = *(arg2 + 0x178)
            int64_t var_50_1 = 0
            int64_t var_48_1 = 0
            *(*(r8_5 + 0xc8)
                + (sx.q(rax_7.d + ((rax_7 u>> 0x20).d - r8_5[3]) * r8_5[4] - r8_5[2]) << 3)) = 0
            int64_t rax_10 = *(arg2 + 0x178)
            *(*(r8_5 + 0xb8)
                + sx.q(rax_10.d + ((rax_10 u>> 0x20).d - r8_5[3]) * r8_5[4] - r8_5[2]) * 0x10) =
                zx.o(0)
            int64_t rax_14 = *(arg2 + 0x178)
            int64_t rdx_8 = *(r8_5 + 0x28)
            int64_t rcx_17 =
                sx.q(rax_14.d + ((rax_14 u>> 0x20).d - r8_5[3]) * r8_5[4] - r8_5[2]) * 5
            *(rdx_8 + (rcx_17 << 2)) = var_50_1.o
            *(rdx_8 + (rcx_17 << 2) + 0x10) = 0
            void* r9_1 = arg2 + 0x5c0
            void* rax_17 = *(arg2 + 0x5d0)
            int32_t rdx_9 = 0
            int32_t r10_1 = *(arg2 + 0x5d8)
            
            if (rax_17 != 0)
                r9_1 = rax_17
            
            int64_t rax_18 = 0
            uint64_t rcx_19 = zx.q((r10_1 + 0x1f) u>> 5)
            
            if (rcx_19 != 0)
                while (*(r9_1 + (rax_18 << 2)) == 0)
                    rdx_9 += 1
                    rax_18 += 1
                    
                    if (rax_18 s>= rcx_19)
                        break
            
            if (rdx_9 s< rcx_19.d)
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = __bsf_gprv_memv(*(r9_1 + (sx.q(rdx_9) << 2)))
                int32_t rdx_11 = (rdx_9 << 5) + temp0_2
                
                if (rdx_11 s< r10_1 && rdx_11 != 0xffffffff)
                    r8_5[1] -= 1
            
            *r8_5 -= 1
        
        if (r14_3[1].d != *(r14_3 + 0x34))
            void* rax_23 = *(arg1 + 0x30)
            
            if (rax_23 != 0)
                *(rax_23 + 0x48) = 0
            
            void* rax_24 = *(arg1 + 0x38)
            
            if (rax_24 != 0)
                *(rax_24 + 0x40) = 0
            
            void* rax_25 = *(arg1 + 0x40)
            
            if (rax_25 != 0)
                *(rax_25 + 0x38) = 0
            
            result = *(arg1 + 0x48)
            
            if (result != 0)
                *(result + 0x30) = 0
        else
            sub_141a13530(&data_1439cbfb0, arg1 + 0x10)
            sub_141a0a410(&data_1439cc030, &var_58, arg1 + 0x10)
            int64_t rax_21 = sx.q(var_58)
            
            if (rax_21.d != 0xffffffff)
                rdi_1 = data_1439cc030 + rax_21 * 0x28
            
            void* rbx_2 = *(rdi_1 + 0x18)
            
            if (rbx_2 != 0)
                sub_1419fd4e0(rbx_2)
                j_sub_140a74f90(rbx_2)
            
            result = sub_141a13400(&data_1439cc030, arg1 + 0x10)

__security_check_cookie(result_1 ^ &var_78)
return result
