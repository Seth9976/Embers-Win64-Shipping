// 函数: sub_141bca320
// 地址: 0x141bca320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
uint64_t result = __security_cookie ^ &var_4a8
uint64_t result_1 = result

if (data_143e29f28 == 0 || arg1[0x40] == 0)
    int64_t* rbx_5 = arg2[2]
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            result = (**rbx_5)(rbx_5)
            int32_t temp1_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*rbx_5 + 8))(rbx_5, 1)
else
    int64_t var_458
    
    if (arg1[0x4d].d == *(arg1 + 0x294))
    label_141bca3f7:
        float zmm0_1[0x4] = sub_140d42530(&arg1[0x4c], &var_458, arg2, nullptr)
        int64_t var_450
        
        if (arg1[0x48].d s<= 0)
            void var_258
            sub_140d94220(&var_450, sub_141ba3230(arg1, &var_258))
            sub_140e553b0(&arg1[0x47], &var_450)
            sub_141b848a0(&var_450)
            void var_108
            sub_140596d80(&var_108)
            int64_t* var_110
            
            if (var_110 != 0)
                var_110[1].d -= 1
                
                if (var_110[1].d == 1)
                    (**var_110)(var_110)
                    int32_t temp4_1 = *(var_110 + 0xc)
                    *(var_110 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*var_110 + 8))(var_110, 1)
            
            void var_250
            zmm0_1 = sub_140d94d20(&var_250)
        
        void var_3b8
        sub_140dbf000(&arg1[0x47], &var_3b8, 0, 0, zmm0_1, data_1439ae51c)
        var_450 = *arg2
        int64_t var_448_1 = arg2[1]
        void* rax_12 = arg2[2]
        void* var_440_1 = rax_12
        
        if (rax_12 != 0)
            *(rax_12 + 8) += 1
        
        char var_488_1
        var_488_1.q = &arg1[0x68]
        void** var_428
        sub_140e51450(&var_428, *(arg1[0x40] + 8), (int.q(fconvert.t(*(arg1 + 0x214)))).d, 
            &arg1[0x67], var_488_1, &arg1[0x4c], &var_450, 0, &arg1[0x4b])
        void var_f8
        sub_140e86d00(data_143e29f28, &var_f8, &var_3b8, &var_428)
        sub_140597700(&var_f8)
        int64_t* var_3e0
        
        if (var_3e0 != 0)
            var_3e0[1].d -= 1
            
            if (var_3e0[1].d == 1)
                (**var_3e0)(var_3e0)
                int32_t temp6_1 = *(var_3e0 + 0xc)
                *(var_3e0 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_3e0 + 8))(var_3e0, 1)
        
        var_428 = &data_142d7f690
        void var_268
        sub_140596d80(&var_268)
        int64_t* var_270
        
        if (var_270 != 0)
            var_270[1].d -= 1
            
            if (var_270[1].d == 1)
                (**var_270)(var_270)
                int32_t temp7_1 = *(var_270 + 0xc)
                *(var_270 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*var_270 + 8))(var_270, 1)
        
        void var_3b0
        result = sub_140d94d20(&var_3b0)
    else
        int64_t rax_2 = *arg2
        var_458 = rax_2
        int32_t rax_4 = sub_140b5ead0(rax_2.d) + var_458:4.d
        void* r8_1 = &arg1[0x53]
        void* rcx_1 = *(r8_1 + 8)
        
        if (rcx_1 != 0)
            r8_1 = rcx_1
        
        result = zx.q(*(r8_1 + (((sx.q(arg1[0x55].d) - 1) & sx.q(rax_4)) << 2)))
        
        if (result.d == 0xffffffff)
            goto label_141bca3f7
        
        int64_t rdx_3 = arg1[0x4c]
        
        while (true)
            int64_t rcx_3 = sx.q(result.d) << 5
            
            if (*(rcx_3 + rdx_3) == *arg2)
                break
            
            result = zx.q(*(rcx_3 + rdx_3 + 0x18))
            
            if (result.d == 0xffffffff)
                goto label_141bca3f7
        
        if (result.d == 0xffffffff)
            goto label_141bca3f7
    int64_t* rbx_4 = arg2[2]
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            result = (**rbx_4)(rbx_4)
            int32_t temp9_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp9_1 == 1)
                result = (*(*rbx_4 + 8))(rbx_4, 1)

__security_check_cookie(result_1 ^ &var_4a8)
return result
