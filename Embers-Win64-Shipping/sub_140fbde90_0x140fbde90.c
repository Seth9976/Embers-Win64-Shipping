// 函数: sub_140fbde90
// 地址: 0x140fbde90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
uint64_t result = __security_cookie ^ &var_358
uint64_t result_1 = result
int64_t* rsi = *(arg3 + 0x70)

if (rsi != 0)
    int64_t rbx_1 = *rsi
    sub_140fb4180()
    result = (*(rbx_1 + 0x58))(rsi, &data_143e2b7e0)
    
    if (result.b != 0)
        void* rbx_2 = *(arg3 + 0x70)
        int64_t* rdi_1 = *(arg3 + 0x78)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        if (rbx_2 != 0)
            int128_t* rax_1 = j_sub_140a82f30(0x10)
            int128_t* rsi_1 = rax_1
            
            if (rax_1 == 0)
                rsi_1 = nullptr
            else
                *rax_1 = *(rbx_2 + 0x40)
            
            void*** rax_2 = j_sub_140a82f30(0x18)
            void*** rbx_3 = rax_2
            
            if (rax_2 == 0)
                rbx_3 = nullptr
            else
                rax_2[1].d = 1
                *(rax_2 + 0xc) = 1
                *rbx_3 = &data_142ec7b18
                rbx_3[2] = rsi_1
            
            int128_t* var_320 = rsi_1
            void*** var_318_1 = rbx_3
            
            if (arg1 + 0x2e0 == &var_320)
            label_140fbdfe0:
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp3_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*rbx_3)[1](rbx_3, 1)
            else
                *(arg1 + 0x2e0) = rsi_1
                int64_t* rsi_2 = *(arg1 + 0x2e8)
                var_320 = nullptr
                
                if (rbx_3 == rsi_2)
                    goto label_140fbdfe0
                
                void*** var_318_2 = nullptr
                *(arg1 + 0x2e8) = rbx_3
                
                if (rsi_2 != 0)
                    rsi_2[1].d -= 1
                    
                    if (rsi_2[1].d == 1)
                        (**rsi_2)(rsi_2)
                        int32_t temp5_1 = *(rsi_2 + 0xc)
                        *(rsi_2 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rsi_2 + 8))(rsi_2, 1)
                    
                    rbx_3 = var_318_2
                    goto label_140fbdfe0
            
            int64_t* rbx_4 = *(arg1 + 0x2e8)
            int128_t* r15_1 = *(arg1 + 0x2e0)
            int128_t* var_2f8_1 = r15_1
            
            if (rbx_4 != 0)
                rbx_4[1].d += 1
            
            char var_2e8_1 = 1
            int64_t var_2e0 = 0
            int32_t var_2d8_1 = 0
            void var_2c0
            int64_t* rax_7 = sub_140f99c70(&var_2c0)
            var_320 = r15_1
            
            if (rbx_4 != 0)
                rbx_4[1].d += 1
            
            if (&var_320 != &rax_7[0x34])
                var_320.o = *(rax_7 + 0x1a0)
                *(rax_7 + 0x1a0) = var_320.o
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp7_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            rax_7[0x36].b = 1
            sub_1407473e0(&rax_7[0x37], &var_2e0)
            rax_7[0x49].b = *(arg1 + 0x380)
            *(rax_7 + 0x249) = *(arg1 + 0x381)
            sub_140692f90(&rax_7[0x4a], arg1 + 0x388)
            rax_7[0x4c].b = *(arg1 + 0x398)
            *(rax_7 + 0x261) = *(arg1 + 0x399)
            sub_140692f90(&rax_7[0x4d], arg1 + 0x3a0)
            void*** rax_14 = sub_140f96eb0()
            void* var_310 = &rax_14[2]
            sub_140918950(&var_310, &rax_14[2])
            int64_t var_338_1 = 0x428
            void var_328
            void* var_300_1 = &var_328
            void* var_2d0
            void** rax_15 = sub_140f9e770(&var_310, &var_2d0, rax_7, 
                sub_140e23ed0(&rax_14[2], "SThemeColorBlock"))
            int64_t* rbx_6 = rax_15[1]
            
            if (rbx_6 != 0)
                rbx_6[1].d += 1
            
            if (arg1 + 0x2d0 == &var_320)
            label_140fbe1d6:
                
                if (rbx_6 != 0)
                    rbx_6[1].d -= 1
                    
                    if (rbx_6[1].d == 1)
                        (**rbx_6)(rbx_6)
                        int32_t temp10_1 = *(rbx_6 + 0xc)
                        *(rbx_6 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*rbx_6 + 8))(rbx_6, 1)
            else
                *(arg1 + 0x2d0) = *rax_15
                int64_t* rsi_4 = *(arg1 + 0x2d8)
                
                if (rbx_6 == rsi_4)
                    goto label_140fbe1d6
                
                *(arg1 + 0x2d8) = rbx_6
                
                if (rsi_4 != 0)
                    rsi_4[1].d -= 1
                    
                    if (rsi_4[1].d == 1)
                        (**rsi_4)(rsi_4)
                        int32_t temp14_1 = *(rsi_4 + 0xc)
                        *(rsi_4 + 0xc) -= 1
                        
                        if (temp14_1 == 1)
                            (*(*rsi_4 + 8))(rsi_4, 1)
            
            int64_t* var_2c8
            
            if (var_2c8 != 0)
                var_2c8[1].d -= 1
                
                if (var_2c8[1].d == 1)
                    (**var_2c8)(var_2c8)
                    int32_t temp13_1 = *(var_2c8 + 0xc)
                    *(var_2c8 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        (*(*var_2c8 + 8))(var_2c8, 1)
            
            if (rax_14 != 0)
                rax_14[1].d -= 1
                
                if (rax_14[1].d == 1)
                    (**rax_14)(rax_14)
                    int32_t temp16_1 = *(rax_14 + 0xc)
                    *(rax_14 + 0xc) -= 1
                    
                    if (temp16_1 == 1)
                        (*rax_14)[1](rax_14, 1)
            
            sub_140f9afe0(&var_2c0)
            result = sub_140745b20(&var_2e0)
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    result = (**rbx_4)(rbx_4)
                    int32_t temp17_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp17_1 == 1)
                        result = (*(*rbx_4 + 8))(rbx_4, 1)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                result = (**rdi_1)(rdi_1)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*rdi_1 + 8))(rdi_1, 1)

__security_check_cookie(result_1 ^ &var_358)
return result
