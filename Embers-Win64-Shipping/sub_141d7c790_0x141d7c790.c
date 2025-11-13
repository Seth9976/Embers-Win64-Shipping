// 函数: sub_141d7c790
// 地址: 0x141d7c790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
uint64_t result = __security_cookie ^ &var_128
uint64_t result_1 = result

if (arg2 == *arg1)
    result = sub_140a80f40()
    uint128_t zmm0 = zx.o(0)
    
    if (arg1[0xe].d != 0)
        int64_t* rcx = arg1[0xd]
        int64_t* rax_2 = rcx[1]
        
        if (rax_2 != 0)
            rax_2[1].d += 1
            zmm0 = zx.o(0)
        
        int128_t zmm6 = (*rcx).o
        int64_t var_e8_1
        var_e8_1.o = zmm0
        void* rcx_1 = _mm_bsrli_si128(zmm0, 8).q
        int128_t var_78_1 = zmm6
        
        if (rcx_1 != 0)
            int32_t rax_3 = *(rcx_1 + 8)
            *(rcx_1 + 8) -= 1
            
            if (rax_3 == 1)
                (**rax_2)(rax_2)
                int32_t rax_5 = *(rax_2 + 0xc)
                *(rax_2 + 0xc) -= 1
                
                if (rax_5 == 1)
                    (*(*rax_2 + 8))(rax_2, 1)
        
        sub_140a18a40(&arg1[0xd], 0, 1, 0)
        int32_t rax_7 = arg1[0xf].d
        
        if (rax_7 != data_143f3833c)
            sub_1419a21e0(0)
            void* rbx_2 = arg1[9]
            void* r14_1 = rbx_2 + sx.q(arg1[0xa].d) * 0x48
            
            while (rbx_2 != r14_1)
                int64_t* rcx_6 = *(rbx_2 + 0x18)
                
                if (rcx_6 != 0)
                    (*(*rcx_6 + 0x10))(rcx_6)
                    int64_t* rcx_7 = *(rbx_2 + 0x18)
                    
                    if (rcx_7 != 0)
                        (*(*rcx_7 + 0x20))(rcx_7, 0xffffffff, 0)
                        sub_140a4fc50(*(rbx_2 + 0x18))
                        *(rbx_2 + 0x18) = 0
                
                *(rbx_2 + 0x45) = 0
                rbx_2 += 0x48
                arg1[0xb].d = 0
            
            rax_7 = data_143f3833c
            arg1[0xf].d = rax_7
        
        int32_t rcx_9 = arg1[0xa].d
        int32_t r14_2 = rcx_9 - 1
        
        if (rax_7 s< 0)
            r14_2 = 0
        else if (rax_7 s< r14_2)
            r14_2 = rax_7
        
        int64_t r12_1 = sx.q(arg1[0xb].d)
        int32_t r15_1 = r12_1.d
        int32_t r15_2 = r15_1 - r14_2
        
        if (r15_1 - r14_2 s< 0)
            r15_2 = r12_1.d - r14_2 + rcx_9
        
        int64_t rcx_11 = r12_1 * 0x48
        int128_t* r13_2 = arg1[9] + rcx_11
        int64_t* rcx_12 = *(r13_2 + 0x18)
        
        if (rcx_12 != 0)
            (*(*rcx_12 + 0x20))(rcx_12, 0xffffffff, 0)
            sub_140a4fc50(*(r13_2 + 0x18))
            *(r13_2 + 0x18) = 0
        
        void*** rax_12
        uint128_t zmm6_1
        rax_12, zmm6_1 = sub_140a491d0(0)
        *(r13_2 + 0x18) = rax_12
        void* rbx_3 = _mm_bsrli_si128(zmm6_1, 8).q
        uint128_t var_f8 = zmm6_1
        
        if (rbx_3 != 0)
            *(rbx_3 + 8) += 1
            rbx_3 = zmm6:8.q
            zmm6_1 = var_f8
        
        if (&var_f8 != r13_2)
            uint128_t var_68_1 = zmm6_1
            var_f8 = *r13_2
            *r13_2 = zmm6_1
        
        void* rcx_14 = var_f8:8.q
        
        if (rcx_14 != 0)
            int32_t rax_13 = *(rcx_14 + 8)
            *(rcx_14 + 8) -= 1
            
            if (rax_13 == 1)
                int64_t* rbx_4 = var_f8:8.q
                (**rbx_4)(rbx_4)
                int32_t rax_15 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rax_15 == 1)
                    int64_t* rcx_16 = var_f8:8.q
                    (*(*rcx_16 + 8))(rcx_16, 1)
            
            rbx_3 = zmm6:8.q
        
        int64_t r9_1 = arg1[9]
        int64_t rax_17 = sx.q(r15_2)
        int64_t* rdx_2 = r9_1 + ((rax_17 * 9 + 2) << 3)
        
        if (*(r9_1 + ((rax_17 * 9 + 2) << 3) + 0x35) == 0 && r14_2 s> 0)
            rdx_2 = nullptr
        
        int64_t var_a8_1 = 0
        void** const var_98_1 = &data_142d42ed8
        int32_t var_c0_1 = r12_1.d
        int64_t var_b8[0x2]
        var_b8[0] = sub_141d76b40
        uint128_t var_90_1 = arg1.o
        sub_141d7e160(rcx_11 + 0x10 + r9_1, rdx_2, arg3, &var_b8)
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(arg1[0xb].d + 1)
        result = zx.q(divs.dp.d(temp3_1:temp4_1, arg1[0xa].d))
        arg1[0xb].d = mods.dp.d(temp3_1:temp4_1, arg1[0xa].d)
        
        if (rbx_3 != 0)
            result = zx.q(*(rbx_3 + 8))
            *(rbx_3 + 8) -= 1
            
            if (result.d == 1)
                int64_t* rbx_5 = zmm6:8.q
                result = (**rbx_5)(rbx_5)
                int32_t rsi_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    int64_t* rcx_21 = zmm6:8.q
                    result = (*(*rcx_21 + 8))(rcx_21, zx.q(rsi_1))

__security_check_cookie(result_1 ^ &var_128)
return result
