// 函数: sub_141267530
// 地址: 0x141267530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
uint64_t result = __security_cookie ^ &var_148
uint64_t result_1 = result
int64_t* rdi = arg2
int32_t r12 = 0
int32_t var_f8 = 0
int32_t var_ec = 0

if (arg1[0x73] s> 0)
    int64_t r13_1 = *(arg1 + 8)
    char var_128
    
    if (arg2 == 0)
        sub_1412e9740(arg1)
        
        if (arg1[9].b != 0)
            int64_t* rcx_31 = data_143f0f180
            var_128.d = arg1[0x44]
            memcpy((*(*rcx_31 + 0x130))(rcx_31, &data_143f02b98, *(arg1 + 8), 0, var_128, 1), 
                *(arg1 + 0x108), arg1[0x44])
            int64_t* rcx_33 = data_143f0f180
            (*(*rcx_33 + 0x138))(rcx_33, &data_143f02b98, *(arg1 + 8))
        
        result = sub_1412e4c50(&arg1[0x18], &arg1[0x2e], r13_1, 0, *(arg1 + 0x25), 0, arg1[0x1a], 
            arg1[0x14], arg3)
    else
        if (arg1[9].b != 0)
            if (*(arg1 + 0x1b0) != 0)
                sub_1419661c0(&data_143f02b98, &arg1[0x6c])
            
            void* const rdi_1 = *(arg1 + 8)
            uint32_t count = arg1[0x44]
            int32_t rax_1 = *arg1
            uint32_t count_1 = count
            int32_t rcx = arg1[1]
            int64_t r15_1 = *(arg1 + 0x108)
            int32_t var_f0_1 = rax_1
            int32_t var_f4_1 = rcx
            void* const var_a8 = rdi_1
            
            if (rdi_1 != 0)
                *(rdi_1 + 8) += 1
                rdi_1 = var_a8
                count_1 = count
                var_f4_1 = rcx
                var_f0_1 = rax_1
            
            if (data_143f02ba8 == 0)
                void*** rcx_7 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                void* rax_7 = &rcx_7[7]
                
                if (rax_7 u> data_143f02bd0)
                    sub_140b0e3d0(&data_143f02bc8, 0x40)
                    rcx_7 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    rax_7 = &rcx_7[7]
                
                data_143f02bc8 = rax_7
                void**** rax_8 = data_143f02ba0
                data_143f02bac += 1
                var_a8 = nullptr
                *rax_8 = rcx_7
                data_143f02ba0 = &rcx_7[1]
                rcx_7[1] = 0
                *rcx_7 = &data_142f52c78
                rcx_7[2] = r13_1
                rcx_7[3] = r15_1
                rcx_7[4].d = count_1
                rcx_7[5].d = var_f0_1
                *(rcx_7 + 0x2c) = var_f4_1
                rcx_7[6] = rdi_1
            else
                int64_t* rcx_1 = data_143f0f180
                var_128.d = count_1
                memcpy((*(*rcx_1 + 0x130))(rcx_1, &data_143f02b98, r13_1, 0, var_128, 1), r15_1, 
                    count)
                int64_t* rcx_3 = data_143f0f180
                (*(*rcx_3 + 0x138))(rcx_3, &data_143f02b98, r13_1)
                sub_140a74f90(r15_1)
            
            sub_1405d1550(&var_a8)
            int64_t* var_a0
            sub_141980430(&data_143f02b98, &var_a0, 1)
            int64_t* rcx_11 = var_a0
            
            if (rcx_11 != 0)
                rcx_11[9].d -= 1
                
                if (rcx_11[9].d == 1)
                    sub_140a2f6e0(rcx_11)
            
            r12 = var_f8
            rdi = arg2
            arg1[0x72].b = 1
        
        int32_t rax_13 = data_14399e5dc
        void* rax_14 = *(arg1 + 0x1b0)
        void** var_58_1 = nullptr
        int32_t i_4 = 0
        int32_t var_4c_1 = 4
        void* var_78
        
        if (rax_14 != 0)
            i_4 = 1
            var_78 = rax_14
            *(rax_14 + 0x48) += 1
        
        int64_t* rax_15 = sub_140a242a0()
        int32_t rbx_1 = *(rdi + 0x6c)
        int64_t rdx_3 = *rax_15
        int32_t rax_16 = (*(rdx_3 + 0x18))(rax_15, rdx_3)
        int32_t r8_4 = arg1[0x73]
        int32_t r15_2 = 0
        
        if (rax_16 s<= rbx_1)
            rbx_1 = rax_16
        
        int32_t temp0_2 = divs.dp.d(sx.q(r8_4 - 1 + *(rdi + 0x74)), *(rdi + 0x74))
        *(rdi + 0x74)
        int32_t rcx_13 = temp0_2
        
        if (rbx_1 s<= temp0_2)
            rcx_13 = rbx_1
        
        result = zx.q(divs.dp.d(sx.q(r8_4 - 1 + rcx_13), rcx_13))
        int32_t var_ec_1 = result.d
        int32_t rdx_7 = result.d
        
        if (rcx_13 s> 0)
            result = 0
            int32_t var_f4_2 = 0
            
            do
                int32_t r13_3 = arg1[0x73] - result.d
                
                if (rdx_7 s<= r13_3)
                    r13_3 = rdx_7
                
                int64_t* rax_24 = sub_141421b40(rdi)
                int64_t* lpTlsValue_1 = TlsGetValue(data_143cf0950)
                int64_t* lpTlsValue = lpTlsValue_1
                
                if (lpTlsValue_1 == 0)
                    int64_t* lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
                    lpTlsValue = lpTlsValue_2
                    
                    if (lpTlsValue_2 == 0)
                        lpTlsValue = nullptr
                    else
                        __builtin_memset(lpTlsValue, 0, 0x14)
                    
                    TlsSetValue(data_143cf0950, lpTlsValue)
                
                int64_t* rdi_2 = lpTlsValue[1]
                int32_t rcx_19
                
                if (rdi_2 != 0)
                    rcx_19 = lpTlsValue[2].d
                else
                    int64_t rax_26 = *lpTlsValue
                    
                    if (rax_26 == 0)
                        int64_t rax_27 = sub_14059e7c0(&data_143cf0958)
                        lpTlsValue[1] = rax_27
                        
                        if (rax_27 == 0)
                            int64_t* rax_28 = sub_140a82f70(0x2000, 0)
                            lpTlsValue[1] = rax_28
                            int64_t i_2 = 0x1f
                            int64_t* rcx_18
                            int64_t i
                            
                            do
                                rcx_18 = &rax_28[0x20]
                                *rax_28 = rcx_18
                                rax_28 = rcx_18
                                i = i_2
                                i_2 -= 1
                            while (i != 1)
                            *rcx_18 = i_2
                    else
                        lpTlsValue[1] = rax_26
                        *lpTlsValue = rdi_2
                    
                    rdi_2 = lpTlsValue[1]
                    rcx_19 = 0x20
                    lpTlsValue[2].d = 0x20
                
                lpTlsValue[1] = *rdi_2
                lpTlsValue[2].d = rcx_19 - 1
                int64_t* var_98
                int64_t** rax_31 = sub_140a228d0(&var_98)
                r12 = (r12 | 2) & 0xfffffffd
                int64_t* rcx_21 = *rax_31
                *rax_31 = nullptr
                *rdi_2 = &data_142d40498
                int64_t* var_80_1 = rcx_21
                rdi_2[1].d = 0xff
                *(rdi_2 + 0xc) = i_4 + 1
                *rdi_2 = &data_142f51ed0
                rdi_2[9].b = 0
                rdi_2[0xa] = rcx_21
                int64_t* rcx_22 = var_98
                
                if (rcx_22 != 0)
                    rcx_22[9].d -= 1
                    
                    if (rcx_22[9].d == 1)
                        sub_140a2f6e0(rcx_22)
                
                if ((r12.b & 1) != 0)
                    r12 &= 0xfffffffe
                    int64_t* var_90
                    
                    if (var_90 != 0)
                        var_90[9].d -= 1
                        
                        if (var_90[9].d == 1)
                            sub_140a2f6e0(var_90)
                
                char rax_36 = *(arg1 + 0x25)
                int32_t rcx_25 = arg1[0x14]
                rdi_2[3] = &arg1[0x18]
                rdi_2[4] = &arg1[0x2e]
                rdi_2[6].d = 0
                rdi_2[5] = r13_1
                rdi_2[2] = rax_24
                *(rdi_2 + 0x34) = rax_36
                rdi_2[7].d = rcx_25
                *(rdi_2 + 0x3c) = r15_2
                rdi_2[8].d = rcx_13
                int64_t* rax_37 = rdi_2[0xa]
                int64_t* var_d0 = rax_37
                
                if (rax_37 != 0)
                    rax_37[9].d += 1
                
                sub_141299d90(rdi_2, &var_78, rax_13, 1)
                rdi = arg2
                sub_141415f20(rdi, rax_24, &var_d0, r13_3)
                int64_t* rcx_28 = var_d0
                
                if (rcx_28 != 0)
                    rcx_28[9].d -= 1
                    
                    if (rcx_28[9].d == 1)
                        sub_140a2f6e0(rcx_28)
                
                r15_2 += 1
                rdx_7 = var_ec_1
                result = zx.q(var_f4_2 + rdx_7)
                var_f4_2 = result.d
            while (r15_2 s< rcx_13)
        
        void** rcx_30 = var_58_1
        void** rbx_3 = &var_78
        int32_t i_3 = i_4
        
        if (rcx_30 != 0)
            rbx_3 = rcx_30
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                int64_t* rcx_29 = *rbx_3
                
                if (rcx_29 != 0)
                    result = zx.q(rcx_29[9].d)
                    rcx_29[9].d -= 1
                    
                    if (result.d == 1)
                        result = sub_140a2f6e0(rcx_29)
                
                rbx_3 = &rbx_3[1]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            rcx_30 = var_58_1
        
        if (rcx_30 != 0)
            result = sub_140a74f90(rcx_30)

__security_check_cookie(result_1 ^ &var_148)
return result
