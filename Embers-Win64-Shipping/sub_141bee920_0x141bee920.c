// 函数: sub_141bee920
// 地址: 0x141bee920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int32_t result = sub_141beee70(arg1)
int64_t* rbx = arg1[0x1e]

if (rbx != 0)
    result = rbx[1].d
    
    if (result == 0)
        rbx = nullptr
    else
        result += 1
        rbx[1].d = result
    
    if (rbx != 0)
        int64_t* r15_1 = arg1[0x1d]
        
        if (r15_1 != 0)
            int32_t rcx
            rcx.b = sub_140b5b8a0(arg1[0x25].d, 0) == 0
            int128_t var_118
            int64_t var_100
            int32_t var_f8
            int128_t var_d8
            int128_t* rdx_3
            int32_t rsi_1
            
            if ((*(arg1 + 0x12c) != 0 | rcx.b) == 0)
            label_141beea10:
                int128_t zmm0_1 = *(arg1 + 0x110)
                char var_108_1 = 1
                rdx_3 = &var_118
                var_100 = 0
                rsi_1 = 2
                var_118 = zmm0_1
                var_f8 = 0
            else
                void* rax_1 = sub_140d3c6e0(&arg1[0x24])
                
                if (rax_1 == 0)
                    goto label_141beea10
                
                if (sub_140d1fd20(rax_1, arg1[0x25]) == 0)
                    goto label_141beea10
                
                arg_8.q = arg1[0x25]
                rdx_3 = sub_141b700f0(&var_d8, sub_140d3c6e0(&arg1[0x24]), &arg_8)
                rsi_1 = 1
            
            int128_t var_98 = *rdx_3
            char var_88_1 = rdx_3[1].b
            int64_t var_80 = 0
            int32_t var_78_1 = 0
            sub_1407473e0(&var_80, rdx_3 + 0x18)
            
            if ((rsi_1.b & 2) != 0)
                rsi_1 &= 0xfffffffd
                sub_140745b20(&var_100)
            
            int64_t var_c0
            
            if ((rsi_1.b & 1) != 0)
                rsi_1 &= 0xfffffffe
                sub_140745b20(&var_c0)
            
            int32_t rcx_8
            rcx_8.b = sub_140b5b8a0(arg1[0x2c].d, 0) == 0
            int64_t* var_b8
            int64_t var_a8
            int128_t* rdx_7
            int32_t r14_1
            
            if ((*(arg1 + 0x164) != 0 | rcx_8.b) == 0)
            label_141beeafd:
                int128_t zmm0_2 = *(arg1 + 0x130)
                char var_c8_1 = arg1[0x28].b
                var_c0 = arg1[0x29]
                int64_t* rax_15 = arg1[0x2a]
                var_b8 = rax_15
                var_d8 = zmm0_2
                
                if (rax_15 != 0)
                    rax_15[1].d += 1
                
                char var_b0_1 = 1
                rdx_7 = &var_d8
                var_a8 = 0
                r14_1 = 8
                int32_t var_a0_1 = 0
            else
                void* rax_8 = sub_140d3c6e0(&arg1[0x2b])
                
                if (rax_8 == 0)
                    goto label_141beeafd
                
                if (sub_140d1fd20(rax_8, arg1[0x2c]) == 0)
                    goto label_141beeafd
                
                arg_8.q = arg1[0x2c]
                rdx_7 = sub_141b70370(&var_118, sub_140d3c6e0(&arg1[0x2b]), &arg_8)
                r14_1 = 4
            
            int32_t r14_2 = r14_1 | rsi_1
            int128_t var_68 = *rdx_7
            char var_58_1 = rdx_7[1].b
            int64_t var_50_1 = *(rdx_7 + 0x18)
            int64_t* rax_18 = rdx_7[2].q
            
            if (rax_18 != 0)
                rax_18[1].d += 1
            
            char var_40_1 = *(rdx_7 + 0x28)
            int64_t var_38 = 0
            int32_t var_30_1 = 0
            sub_1407473e0(&var_38, &rdx_7[3])
            
            if ((r14_2.b & 8) != 0)
                r14_2 &= 0xfffffff7
                sub_140745b20(&var_a8)
                
                if (var_b8 != 0)
                    var_b8[1].d -= 1
                    
                    if (var_b8[1].d == 1)
                        (**var_b8)(var_b8)
                        int32_t temp5_1 = *(var_b8 + 0xc)
                        *(var_b8 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*var_b8 + 8))(var_b8, 1)
            
            if ((r14_2.b & 4) != 0)
                void var_e8
                sub_140745b20(&var_e8)
                int64_t* rsi_3 = var_f8.q
                
                if (rsi_3 != 0)
                    rsi_3[1].d -= 1
                    
                    if (rsi_3[1].d == 1)
                        (**rsi_3)(rsi_3)
                        int32_t temp7_1 = *(rsi_3 + 0xc)
                        *(rsi_3 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*rsi_3 + 8))(rsi_3, 1)
            
            sub_140e92500(r15_1, &r15_1[0x65], &var_98, 2)
            sub_140dd5630(r15_1, &r15_1[0x6a], &var_68, 2)
            int128_t zmm0_3 = *(arg1 + 0x168)
            char var_c8_2 = 1
            var_c0 = 0
            var_d8 = zmm0_3
            var_b8.d = 0
            var_118 = zmm0_3
            char var_108_2 = 1
            var_100 = 0
            int32_t var_f8_1 = 0
            sub_140692f90(&var_100, &var_c0)
            r15_1[0x5e].b = var_108_2
            *(r15_1 + 0x2e0) = var_118
            sub_140692f90(&r15_1[0x5f], &var_100)
            sub_140745b20(&var_100)
            sub_140745b20(&var_c0)
            sub_140745b20(&var_38)
            
            if (rax_18 != 0)
                rax_18[1].d -= 1
                
                if (rax_18[1].d == 1)
                    (**rax_18)(rax_18)
                    int32_t temp6_1 = *(rax_18 + 0xc)
                    *(rax_18 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rax_18 + 8))(rax_18, 1)
            
            result = sub_140745b20(&var_80)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
