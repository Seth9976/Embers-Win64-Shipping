// 函数: sub_141478da0
// 地址: 0x141478da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if ((*(arg2 + 0x9c) & 4) != 0)
    int64_t* rcx = *(arg2 + 0x80)
    uint64_t rdx = zx.q(*(arg1 + 0x10))
    int64_t* var_148 = nullptr
    int64_t* rax_1 = (*(*rcx + 0x40))(rcx, rdx, &var_148)
    int64_t* r12_1 = var_148
    int64_t* rdi_1 = rax_1
    
    if (r12_1 == 0)
        r12_1 = *(arg2 + 0x80)
    
    (*(*rax_1 + 0x1d8))(rdi_1)
    char var_158_1
    
    if (*(arg1 + 0x6a) != 0)
        var_158_1 = 1
    
    if (*(arg1 + 0x6a) == 0 || *(arg1 + 0x69) != 0)
        var_158_1 = 0
    
    char arg_10
    
    if (*(*(*rdi_1 + 0x1e8))(rdi_1, &arg_10) == 0x400)
        arg_10 = 0
    else if ((*(*rdi_1 + 0x1d8))(rdi_1) == 0)
        arg_10 = 1
    else if ((*(*rdi_1 + 0x1d8))(rdi_1) == 1)
        arg_10 = 1
    else if ((*(*rdi_1 + 0x1d8))(rdi_1) != 2)
        arg_10 = 0
    else if ((*(*rdi_1 + 0x208))(rdi_1) == 0)
        arg_10 = 0
    else
        arg_10 = 1
    
    int64_t var_140 = sub_141261c60(arg2)
    int32_t rax_14 = sub_141261c10(arg2, rdi_1, &var_140)
    int32_t rax_15 = sub_141261bd0(arg2, rdi_1, &var_140)
    int64_t rdx_4 = *rdi_1
    char rcx_11
    
    if ((*(rdx_4 + 0x28))(rdi_1, rdx_4) != 0 || (*(arg4 + 0x3a) & 2) != 0)
        rcx_11 = 1
    else
        rcx_11 = 0
    
    char r14_1 = rcx_11
    
    if (*(arg1 + 0x6a) != 0)
        r14_1 = 1
    
    int32_t var_154_1 = 1
    int64_t rbx_1 = sx.q((*U"1111")[sx.q(*(arg1 + 0x10))])
    TEB* gsbase
    int512_t zmm0
    
    if (data_143edcdc0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        int64_t r8_10
        r8_10, zmm0 = _Init_thread_header(&data_143edcdc0)
        
        if (data_143edcdc0 == 0xffffffff)
            int64_t* rcx_35 = data_143db18d0
            
            if (rcx_35 == 0)
                sub_140a53c40()
                rcx_35 = data_143db18d0
            
            r8_10.b = 1
            int64_t* rax_39 = (*(*rcx_35 + 0xb0))(rcx_35, u"r.MobileHDR", r8_10)
            
            if (rax_39 != 0)
                int64_t rdx_17 = *rax_39
                rax_39 = (*(rdx_17 + 0x58))(rax_39, rdx_17)
            
            data_143edcdb8 = rax_39
            _Init_thread_footer(&data_143edcdc0)
    
    result = data_143f025b8
    
    if (((rbx_1.d u> 0x18 || not(test_bit(0x100a040, rbx_1.d)))
            && *(rbx_1 * 0x14 + &data_143f025f0) != result) || ((rbx_1.d u> 0x1e
            || not(test_bit(0x6562c800, rbx_1.d))) && (*(rbx_1 * 0x14 + &data_143f025fc) & 1) == 0)
            || (rbx_1.d u<= 0x1b && test_bit(0x857c041, rbx_1.d)))
        result.b = 0
    else
        int64_t r8_3 = rbx_1 * 0x14
        int32_t rdx_8 = *(r8_3 + &data_143f025fc)
        
        if (((rdx_8 u>> 2).b & 1) != 0 || rbx_1.d == 0xb || rbx_1.d == 0x1e)
            result.b = 0
        else
            int64_t rcx_16 = *(r8_3 + &data_143f025f0)
            
            if ((rcx_16 != result || (rdx_8.b & 1) == 0)
                    && (rbx_1.d u> 0x30 || not(test_bit(0x1000030200000, rbx_1)))
                    && rcx_16 != data_143f025c0 && (rbx_1 - 0x19).d u> 1)
                int64_t rbx_2 = data_143edcdb8
                int64_t rcx_17
                
                if (data_143de5480 == 0)
                    rcx_17 = 0
                else
                    rcx_17.b = GetCurrentThreadId().d != data_143de5470
                
                if (*(rbx_2 + (rcx_17 << 2)) != 0)
                    result.b = 0
                else
                    result.b = 1
            else
                result.b = 0
    
    int32_t r14_2
    
    if (r14_1 != 0)
        r14_2 = 0
    else if (result.b == *(arg1 + 0x69))
        r14_2 = rax_15
    else
        r14_2 = 0
        
        if (rax_15 != 0)
            r14_2.b = rax_15 != 2
            r14_2 += 1
    
    if (arg_10 != 0)
    label_141479096:
        result = (*(*rdi_1 + 0x20))(rdi_1)
        
        if (result.d != 3)
            result = (*(*rdi_1 + 0x290))(rdi_1)
            
            if (result.b == 0)
                result = (*(*rdi_1 + 0x1e8))(rdi_1, &arg_10)
                
                if (((*result u>> 0xa).b & 1) == 0)
                    int32_t r15_2 = *(arg1 + 0x10)
                    int128_t zmm6
                    int128_t zmm7
                    int128_t zmm8
                    int128_t zmm9
                    
                    if (sub_142134f80(rdi_1, 1) != 0 && sub_14212f090(rdi_1) == 0
                            && *(arg1 + 0x6a) == 0)
                        int64_t* rax_28
                        rax_28, zmm0, zmm6, zmm7, zmm8, zmm9 = sub_14210f630(0)
                        int64_t* rax_29 = (*(*rax_28 + 0x280))(rax_28)
                        arg_10.q = 0
                        r12_1 = rax_29
                        int64_t r9 = *rax_29
                        rdi_1 = (*(r9 + 0x40))(rax_29, zx.q(r15_2), &arg_10, r9)
                    
                    if (*(arg1 + 0x6a) == 0)
                        return sub_141472d00(arg1, arg2, arg3, arg5, arg4, r12_1, rdi_1, rax_14, 
                            r14_2)
                    
                    char r9_1 = *(arg1 + 0x68)
                    int32_t r8_6 = *(arg1 + 0x10)
                    zmm0.o = zx.o(0)
                    int64_t* rdx_12 = *(arg2 + 0x78)
                    int128_t var_48_1 = zmm6
                    int32_t var_188
                    int128_t var_118
                    var_188.q = &var_118
                    int32_t var_190
                    int128_t var_128
                    var_190.q = &var_128
                    int128_t var_58_1 = zmm7
                    int128_t var_68_1 = zmm8
                    int128_t var_78_1 = zmm9
                    int32_t var_1a8
                    var_1a8.b = *(arg1 + 0x69)
                    int128_t var_138
                    __builtin_memset(&var_138, 0, 0x70)
                    int128_t var_108
                    int128_t var_f8
                    sub_14146ead0(rdi_1, rdx_12, r8_6, r9_1, zmm0, var_1a8.b, 0, &var_138, var_190, 
                        var_188, &var_108, &var_f8)
                    void* rdx_13 = *(arg1 + 0x18)
                    int128_t var_c8 = zx.o(0)
                    sub_141458e70(&var_c8, rdx_13, arg4, arg2, arg5, 0)
                    int64_t rax_33 = sub_141260e50(var_138.q, var_108.q)
                    
                    if (*(arg1 + 0x69) != 0 && sub_14122e130((*U"1111")[sx.q(*(arg1 + 0x10))]) == 0)
                        var_154_1 = 6
                    
                    int128_t var_d8
                    int128_t zmm6_1 = var_d8
                    result = arg1 + 0x28
                    int32_t r15_3 = 0
                    zmm8 = var_f8
                    zmm9 = var_108
                    int128_t zmm10 = var_118
                    int128_t zmm11 = var_128
                    int128_t zmm12 = var_138
                    
                    do
                        void** var_180_1
                        var_180_1.d = r14_2
                        var_190.q = &var_138
                        int32_t var_b8_1 = r15_3
                        var_138 = zmm12
                        var_128 = zmm11
                        var_118 = zmm10
                        var_108 = zmm9
                        var_f8 = zmm8
                        int128_t var_e8
                        int128_t var_e8_1 = var_e8
                        int128_t var_d8_1 = zmm6_1
                        zmm6_1 = sub_14146d710(arg1, arg2, arg3, arg4, r12_1, rdi_1, result, 
                            var_190, rax_14, var_180_1.d, rax_33, 0, &var_c8)
                        r15_3 += 1
                        result = arg1 + 0x28
                    while (r15_3 u< var_154_1)
    else if (var_158_1 != 0)
        if ((*(*rdi_1 + 0x50))(rdi_1) != 0)
            goto label_141479096
        
        result = (*(*rdi_1 + 0x58))(rdi_1)
        
        if (result.b != 0)
            goto label_141479096

return result
