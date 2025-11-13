// 函数: sub_141bd9450
// 地址: 0x141bd9450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
uint64_t result = __security_cookie ^ &var_318
uint64_t result_1 = result
int64_t* rbx_1

if (data_143e29f28 == 0 || *(arg1 + 0x200) == 0)
    rbx_1 = arg2[2]
else
    result = zx.q(*(arg1 + 0x268))
    
    if (result.d != *(arg1 + 0x294))
        int64_t rax_1 = *arg2
        int32_t rax_3 = sub_140b5ead0(rax_1.d) + rax_1:4.d
        void* r8_1 = arg1 + 0x298
        void* rcx_1 = *(r8_1 + 8)
        
        if (rcx_1 != 0)
            r8_1 = rcx_1
        
        result = zx.q(*(r8_1 + (((sx.q(*(arg1 + 0x2a8)) - 1) & sx.q(rax_3)) << 2)))
        
        if (result.d != 0xffffffff)
            int64_t rdx_3 = *(arg1 + 0x260)
            
            while (true)
                int64_t rcx_3 = sx.q(result.d) << 5
                
                if (*(rcx_3 + rdx_3) == *arg2)
                    if (result.d != 0xffffffff)
                        sub_140e85f50(arg1 + 0x260, arg2)
                        void var_238
                        sub_140dbf000(arg1 + 0x238, &var_238, 0, 0, arg3, data_1439ae51c)
                        int64_t var_2c0 = *arg2
                        int64_t var_2b8_1 = arg2[1]
                        void* rax_8 = arg2[2]
                        void* var_2b0_1 = rax_8
                        
                        if (rax_8 != 0)
                            *(rax_8 + 8) += 1
                        
                        char var_2f8_1
                        var_2f8_1.q = arg1 + 0x340
                        void** var_2a8
                        sub_140e51450(&var_2a8, *(*(arg1 + 0x200) + 8), 
                            (int.q(fconvert.t(*(arg1 + 0x214)))).d, arg1 + 0x338, var_2f8_1, 
                            arg1 + 0x260, &var_2c0, 0, arg1 + 0x258)
                        void var_d8
                        sub_140e87e80(data_143e29f28, &var_d8, &var_238, &var_2a8)
                        sub_140597700(&var_d8)
                        int64_t* var_260
                        
                        if (var_260 != 0)
                            var_260[1].d -= 1
                            
                            if (var_260[1].d == 1)
                                (**var_260)(var_260)
                                int32_t temp4_1 = *(var_260 + 0xc)
                                *(var_260 + 0xc) -= 1
                                
                                if (temp4_1 == 1)
                                    (*(*var_260 + 8))(var_260, 1)
                        
                        var_2a8 = &data_142d7f690
                        void var_e8
                        sub_140596d80(&var_e8)
                        int64_t* var_f0
                        
                        if (var_f0 != 0)
                            var_f0[1].d -= 1
                            
                            if (var_f0[1].d == 1)
                                (**var_f0)(var_f0)
                                int32_t temp5_1 = *(var_f0 + 0xc)
                                *(var_f0 + 0xc) -= 1
                                
                                if (temp5_1 == 1)
                                    (*(*var_f0 + 8))(var_f0, 1)
                        
                        void var_230
                        result = sub_140d94d20(&var_230)
                    
                    break
                
                result = zx.q(*(rcx_3 + rdx_3 + 0x18))
                
                if (result.d == 0xffffffff)
                    rbx_1 = arg2[2]
                    goto label_141bd967a
    
    rbx_1 = arg2[2]

label_141bd967a:

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

__security_check_cookie(result_1 ^ &var_318)
return result
