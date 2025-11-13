// 函数: sub_142660e50
// 地址: 0x142660e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143f714b0
int64_t* r13 = arg2
sub_140b34200("PathfindingAsync", rax)
int64_t rax_1 = sx.q(r13[1].d)

if (rax_1.d != 0)
    int32_t* r15_1 = *r13
    void* r12_3 = &r15_1[rax_1 * 0x30]
    
    if (r15_1 != r12_3)
        void* rdi_1 = &r15_1[0x2c]
        
        do
            void* rax_3
            
            if (sub_140d3e110(rdi_1 - 0x70) == 0)
                rax_3 = sub_142657070(arg1, 0)
            else
                rax_3 = sub_140d3c6e0(rdi_1 - 0x70)
            
            void* rsi_1
            int64_t* rcx_11
            
            if (rax_3 == 0)
                rsi_1 = rdi_1 - 8
                int32_t rax_26 = 1
                int32_t var_2e0_1 = 1
                int128_t var_2f0 = zx.o(0)
                
                if (rsi_1 != &var_2f0)
                    *rsi_1 = 0
                    sub_1405aeff0(rdi_1, &var_2f0:8)
                    rax_26 = var_2e0_1
                
                void* rcx_21 = var_2f0:8.q
                *(rdi_1 + 8) = rax_26
                
                if (rcx_21 != 0)
                    int32_t rax_27 = *(rcx_21 + 8)
                    *(rcx_21 + 8) -= 1
                    
                    if (rax_27 == 1)
                        int64_t* rbx_5 = var_2f0:8.q
                        (**rbx_5)(rbx_5)
                        int32_t rax_29 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (rax_29 == 1)
                            rcx_11 = var_2f0:8.q
                            (*(*rcx_11 + 8))(rcx_11, 1)
            else if (*(rdi_1 - 0x10) != 1)
                void var_2c0
                int64_t* rax_15 = (*(rax_3 + 0x2b8))(&var_2c0, rdi_1 - 0x58, r15_1)
                int64_t var_320 = *rax_15
                int64_t* rcx_14 = rax_15[1]
                rax_15[1] = 0
                *rax_15 = 0
                int32_t rax_16 = rax_15[2].d
                int64_t* var_318 = rcx_14
                int64_t* var_2b8
                
                if (var_2b8 != 0)
                    var_2b8[1].d -= 1
                    
                    if (var_2b8[1].d == 1)
                        (**var_2b8)(var_2b8)
                        int32_t rax_19 = *(var_2b8 + 0xc)
                        *(var_2b8 + 0xc) -= 1
                        
                        if (rax_19 == 1)
                            (*(*var_2b8 + 8))(var_2b8, 1)
                
                rsi_1 = rdi_1 - 8
                
                if (rsi_1 != &var_320)
                    *rsi_1 = var_320
                    var_320 = 0
                    sub_1405aeff0(rdi_1, &var_318)
                
                int64_t* rcx_18 = var_318
                *(rdi_1 + 8) = rax_16
                
                if (rcx_18 != 0)
                    rcx_18[1].d -= 1
                    
                    if (rcx_18[1].d == 1)
                        int64_t* rbx_4 = var_318
                        (**rbx_4)(rbx_4)
                        int32_t rax_25 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (rax_25 == 1)
                            rcx_11 = var_318
                            (*(*rcx_11 + 8))(rcx_11, 1)
            else
                void var_2d8
                int64_t* rax_4 = (*(rax_3 + 0x2c0))(&var_2d8, rdi_1 - 0x58, r15_1)
                int64_t var_338 = *rax_4
                int64_t* rcx_5 = rax_4[1]
                rax_4[1] = 0
                *rax_4 = 0
                int32_t rax_5 = rax_4[2].d
                int64_t* var_330 = rcx_5
                int64_t* var_2d0
                
                if (var_2d0 != 0)
                    var_2d0[1].d -= 1
                    
                    if (var_2d0[1].d == 1)
                        (**var_2d0)(var_2d0)
                        int32_t rax_8 = *(var_2d0 + 0xc)
                        *(var_2d0 + 0xc) -= 1
                        
                        if (rax_8 == 1)
                            (*(*var_2d0 + 8))(var_2d0, 1)
                
                rsi_1 = rdi_1 - 8
                
                if (rsi_1 != &var_338)
                    *rsi_1 = var_338
                    var_338 = 0
                    sub_1405aeff0(rdi_1, &var_330)
                
                int64_t* rcx_9 = var_330
                *(rdi_1 + 8) = rax_5
                
                if (rcx_9 != 0)
                    rcx_9[1].d -= 1
                    
                    if (rcx_9[1].d == 1)
                        int64_t* rbx_2 = var_330
                        (**rbx_2)(rbx_2)
                        int32_t rax_14 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (rax_14 == 1)
                            rcx_11 = var_330
                            (*(*rcx_11 + 8))(rcx_11, 1)
            void var_2a8
            sub_142642440(&var_2a8, r15_1)
            int32_t var_220_1 = *(rdi_1 - 0x28)
            int64_t var_218 = 0
            int32_t var_210_1 = 0
            
            if (rdi_1 - 0x20 != &var_218 && *(rdi_1 - 0x18) != 0)
                int64_t* rcx_25 = *(rdi_1 - 0x20)
                
                if (rcx_25 != 0)
                    (*(*rcx_25 + 0x40))(rcx_25, &var_218)
            
            char var_208_1 = *(rdi_1 - 0x10)
            int64_t var_200_1 = *rsi_1
            void* rax_35 = *rdi_1
            void* var_1f8_1 = rax_35
            
            if (rax_35 != 0)
                *(rax_35 + 8) += 1
            
            int32_t var_1f0_1 = *(rdi_1 + 8)
            void var_1d0
            int32_t* rax_37 = sub_142641250(&var_1d0, &var_2a8)
            void*** rax_38 = sub_140a84c80(0, 0xe0, 0)
            void*** var_300 = rax_38
            void*** rsi_2 = rax_38
            void var_110
            
            if (rax_38 != 0)
                sub_1426404d0(rsi_2, sub_142649a10, sub_142641250(&var_110, rax_37))
            sub_142645160(rax_37)
            sub_142645160(&var_2a8)
            void var_1e8
            int64_t* rax_40 = sub_140958da0(&var_1e8, nullptr, 0xff)
            int64_t* rbx_8 = *rax_40 + 0x10
            *rbx_8 = 0
            rbx_8[1].d = 0
            
            if (&var_300 != rbx_8 && rsi_2 != 0)
                void** r8_3 = *rsi_2
                r8_3[8](rsi_2, rbx_8, r8_3)
            
            rbx_8[2].d = 2
            void* rcx_33 = *rax_40
            int32_t r8_4 = rax_40[2].d
            int64_t* rdx_10 = rax_40[1]
            int64_t* rbx_9 = *(rcx_33 + 0x30)
            int64_t* var_308_1 = rbx_9
            int32_t* r14_2 = &rbx_9[9]
            
            if (rbx_9 != 0)
                *r14_2 += 1
                rsi_2 = var_300
                rbx_9 = var_308_1
            
            sub_140978a40(rcx_33, rdx_10, r8_4, 1)
            
            if (rbx_9 != 0)
                int32_t rax_41 = *r14_2
                *r14_2 -= 1
                
                if (rax_41 == 1)
                    sub_140a2f6e0(var_308_1)
                
                rsi_2 = var_300
            
            if (rsi_2 != 0)
                (*rsi_2)[7](rsi_2, 0)
                void*** rax_43 = sub_140a84c80(rsi_2, 0, 0)
                var_300 = rax_43
                
                if (rax_43 != 0)
                    sub_140a74f90(rax_43)
            
            r15_1 = &r15_1[0x30]
            rdi_1 += 0xc0
        while (r15_1 != r12_3)
        
        r13 = arg2

sub_140b38680("PathfindingAsync", rax)
return sub_142644c90(r13) __tailcall
