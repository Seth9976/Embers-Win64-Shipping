// 函数: sub_141057300
// 地址: 0x141057300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
int128_t* r12 = arg7
int32_t rdi = 0
int128_t* var_318 = r12
int64_t* result

if (arg2 != 0)
    int64_t rax_6 = *arg2
    int64_t var_300 = 0
    int64_t var_2f8_1 = 0
    void* rax_7 = (*(rax_6 + 0x48))(arg2)
    int64_t rdx_1 = *arg2
    void* rax_8 = (*(rdx_1 + 8))(arg2, rdx_1)
    int64_t* result_2 = *(rax_8 + 0x138)
    int64_t* result_1 = result_2
    
    if (result_2 != 0)
        *(result_2 + 0x14) += 1
        result_2 = result_1
    
    void** const var_2f0 = &data_142efcd90
    int64_t var_2e0_1 = *(rax_8 + 0x140)
    
    if (result_2 != 0)
        if (sub_141022a90(*(*(**(arg1 + 0x20) + 0x9d8) + 0x38), &var_2f0) != 0)
            arg5, arg6 = sub_141037f50(&var_2f0)
        else
            void** var_2d8
            arg5, arg6 = sub_141022330(**(*(**(arg1 + 0x20) + 0x9d8) + 0x6d8), &var_2d8, 1)
            var_2d8 = &data_142efcd90
            int64_t* var_2d0
            
            if (var_2d0 != 0)
                int32_t rax_15 = *(var_2d0 + 0x14)
                *(var_2d0 + 0x14) -= 1
                
                if (rax_15 == 1)
                    if (var_2d0 != 0)
                        sub_14100eba0(var_2d0)
                        arg5 = j_sub_140a74f90(var_2d0)
                    
                    r12 = var_318
    
    void* rax_17 = *(rax_7 + 0x58)
    int64_t* var_338_1
    
    if (*(rax_17 + 0xac) != 1)
        void* rax_20 = **(arg1 + 0x20)
        void* r12_2
        
        if (data_1439c7a34 u<= 1)
            r12_2 = **(*(rax_20 + 0x9d8) + 0x6d8)
        else
            r12_2 = rax_20 + 0x570
        
        void var_220
        sub_141961860(&var_220, *(r12_2 + 0x130))
        void* var_200_1 = r12_2
        void* var_1f8_1 = r12_2
        char var_198_1 = 0
        int32_t var_298_1 = var_318[1].d
        int128_t var_2a8
        int32_t* var_330_1 = &var_2a8
        var_2a8 = *var_318
        var_338_1 = &var_300
        int128_t var_258 = *arg3
        sub_141058930(arg1, &var_220, arg2, &var_258, var_338_1, var_330_1)
        sub_1419628c0(&var_220)
    else
        int32_t var_2b8_1 = r12[1].d
        int128_t var_2c8 = *r12
        var_338_1 = &var_2c8
        int128_t var_268 = *arg3
        sub_141059330(arg1, arg2, &var_268, &var_300, arg5, arg6, var_338_1)
    
    int32_t r13_2 = *(arg3 + 0xc) - *(arg3 + 4)
    int32_t rdx_8 = *(arg4 + 0xc)
    int32_t r12_5 = (*(arg3 + 8) - *arg3) * *(rax_17 + 0xac)
    arg4[1].d = 0
    
    if (rdx_8 != 0)
        sub_140679c00(arg4, 0)
        rdx_8 = *(arg4 + 0xc)
        rdi = arg4[1].d
    
    int32_t rcx_24 = r13_2 * r12_5 + rdi
    arg4[1].d = rcx_24
    
    if (rcx_24 s> rdx_8)
        sub_1406105e0(arg4)
    
    uint128_t zmm2 = *(sx.q(*(arg2 + 0x3c)) * 0x28 + 0x1439c85f0)
    int64_t rcx_27 = _mm_bsrli_si128(zmm2, 8).q
    int32_t var_278_1 = var_318[1].d
    int128_t var_288
    int128_t* var_328_1 = &var_288
    uint64_t rax_28 = *arg4
    int64_t rbx_1 = var_300
    var_288 = *var_318
    var_338_1.d = (zmm2.q u>> 0x20).d * r12_5
    sub_140fdf960((rcx_27 u>> 0x20).d, r12_5, r13_2, rbx_1, var_338_1.d, rax_28, var_328_1)
    var_2f0 = &data_142efcd90
    result = result_1
    
    if (result != 0)
        int32_t r14_4 = *(result + 0x14)
        *(result + 0x14) -= 1
        
        if (r14_4 == 1 && result_1 != 0)
            sub_14100eba0(result_1)
            result = j_sub_140a74f90(result_1)
        
        rbx_1 = var_300
    
    if (rbx_1 != 0)
        result = sub_140a74f90(rbx_1)
else
    int32_t rcx = *(arg4 + 0xc)
    arg4[1].d = 0
    
    if (rcx != 0)
        sub_140679c00(arg4, arg2.d)
        rcx = *(arg4 + 0xc)
        rdi = arg4[1].d
    
    int32_t r14_3 = (*(arg3 + 0xc) - *(arg3 + 4)) * (*(arg3 + 8) - *arg3)
    int32_t rax_4 = rdi + r14_3
    arg4[1].d = rax_4
    
    if (rax_4 s> rcx)
        sub_1406105e0(arg4)
    
    result = memset(*arg4 + (sx.q(rdi) << 2), 0, sx.q(r14_3) << 2)

__security_check_cookie(rax_1 ^ &var_358)
return result
