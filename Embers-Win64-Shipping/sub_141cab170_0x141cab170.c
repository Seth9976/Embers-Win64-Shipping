// 函数: sub_141cab170
// 地址: 0x141cab170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x88))
int64_t* rdx_5

if (result.d == *(arg1 + 0xb4))
label_141cab1fe:
    rdx_5 = nullptr
else
    int32_t rax_1 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = arg1 + 0xb8
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    result = zx.q(*(r8_1 + (((sx.q(*(arg1 + 0xc8)) - 1) & sx.q(rax_1)) << 2)))
    
    if (result.d == 0xffffffff)
    label_141cab1fe_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(result.d) << 5) + *(arg1 + 0x80)
            
            if (*rdx_5 == arg2)
                break
            
            result = zx.q(rdx_5[3].d)
            
            if (result.d == 0xffffffff)
                goto label_141cab1fe_2
        
        if (result.d == 0xffffffff)
        label_141cab1fe_2:
            rdx_5 = nullptr

void* rsi = &rdx_5[1]

if (rdx_5 == 0)
    rsi = nullptr

if (rsi != 0 && *(rsi + 8) s> 0)
    int64_t rax_3 = *(arg1 + 0x28)
    int64_t* var_d8
    __builtin_memset(&var_d8, 0, 0x20)
    int64_t var_d0
    int64_t* var_c8
    int64_t var_c0
    (*(rax_3 + 0x80))(arg1 + 0x28, arg2, &var_d8, 1, var_d8, var_d0, var_c8, var_c0)
    (*(*(arg1 + 0x28) + 0x80))(arg1 + 0x28, arg2, &var_c8, 2)
    int64_t rdi_1 = sx.q(*(rsi + 8))
    uint64_t rdx_8 = 0
    int64_t rsi_1 = *rsi
    uint64_t var_b8 = 0
    int32_t var_b0_1 = rdi_1.d
    
    if (rdi_1.d != 0)
        sub_1405c4a00(&var_b8, rdi_1.d, 0)
        memcpy(var_b8, rsi_1, (rdi_1 << 3).d)
        rdx_8 = var_b8
        rdi_1 = zx.q(var_b0_1)
    
    result = sx.q(rdi_1.d)
    int64_t** rsi_2 = rdx_8
    int64_t rdi_2 = 0
    uint64_t rcx_6 = rdx_8 + (result << 3)
    uint64_t r14_4 = (rcx_6 - rdx_8 + 7) u>> 3
    
    if (rdx_8 u> rcx_6)
        r14_4 = 0
    
    if (r14_4 != 0)
        do
            result = sub_141caa8e0(arg1, *rsi_2)
            rdi_2 += 1
            rsi_2 = &rsi_2[1]
        while (rdi_2 != r14_4)
    
    int64_t* rsi_3
    int64_t* r14_5
    
    if (var_d0.d s> 0 || var_c0.d s> 0)
        void* r15_1 = arg1 + 0x30
        int64_t arg_18 = 0
        int128_t* result_2 = nullptr
        int64_t var_68 = arg2
        int64_t var_60
        __builtin_memset(&var_60, 0, 0x18)
        void* arg_20 = r15_1
        int128_t* rax_5 = sub_141c9a300(r15_1, &var_68)
        rsi_3 = var_d8
        int64_t r14_6 = 0
        void* rdx_13 = &rsi_3[sx.q(var_d0.d)]
        uint64_t r12_4 = (rdx_13 - rsi_3 + 7) u>> 3
        
        if (rsi_3 u> rdx_13)
            r12_4 = 0
        
        int64_t var_98
        int128_t var_78
        
        if (r12_4 != 0)
            result_2 = nullptr
            arg_18 = 0
            
            do
                var_98 = *rsi_3
                int64_t var_90_1
                __builtin_memset(&var_90_1, 0, 0x18)
                int128_t* result_3 = sub_141c9a300(r15_1, &var_98)
                
                if (result_3 != 0)
                    int128_t** var_a0_1 = &result_2
                    var_78 = rax_5.o
                    result_2.b = 0
                    sub_1405a7050(&result_3[3], &var_78)
                    result_2 = result_3
                    sub_1405a7050(&rax_5[7], &result_2)
                
                r15_1 = arg_20
                rsi_3 = &rsi_3[1]
                r14_6 += 1
            while (r14_6 != r12_4)
            
            rsi_3 = var_d8
        
        r14_5 = var_c8
        int64_t r15_3 = 0
        result = sx.q(var_c0.d)
        void* rcx_13 = &r14_5[result]
        uint64_t r12_8 = (rcx_13 - r14_5 + 7) u>> 3
        
        if (r14_5 u> rcx_13)
            r12_8 = 0
        
        if (r12_8 != 0)
            result_2 = nullptr
            int128_t* result_4 = result_2
            
            do
                var_98 = *r14_5
                int64_t var_90_2 = 0
                int64_t var_88_1 = 0
                int128_t* result_5 = result_4
                result = sub_141c9a300(arg_20, &var_98)
                int128_t* result_1 = result
                
                if (result != 0)
                    int128_t** var_a0_2 = &result_2
                    var_78 = rax_5.o
                    result_2.b = 0
                    sub_1405a7050(&result_1[2], &var_78)
                    result_2 = result_1
                    result = sub_1405a7050(&rax_5[7], &result_2)
                
                r14_5 = &r14_5[1]
                r15_3 += 1
            while (r15_3 != r12_8)
            
            rsi_3 = var_d8
            r14_5 = var_c8
    else
        rsi_3 = var_d8
        r14_5 = var_c8
    
    uint64_t rcx_17 = var_b8
    
    if (rcx_17 != 0)
        result = sub_140a74f90(rcx_17)
        rsi_3 = var_d8
        r14_5 = var_c8
    
    if (r14_5 != 0)
        result = sub_140a74f90(r14_5)
        rsi_3 = var_d8
    
    if (rsi_3 != 0)
        return sub_140a74f90(rsi_3)

return result
