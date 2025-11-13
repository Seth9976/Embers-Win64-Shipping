// 函数: sub_14290f9f0
// 地址: 0x14290f9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t rbp = 0
int64_t* rdi = nullptr
void* const arg_18 = nullptr
int64_t* rax = sub_14293bfc0(arg1)
int32_t arg_10 = 1
int64_t* arg_20

if (sub_14293bfe0(arg1, nullptr, nullptr, &arg_20) s> 0)
    int32_t rax_2
    
    if (rax != 0)
        rax_2 = sub_1428973a0(rax, 0xffffffff, 0x1006, 0, &arg_10)
    
    if (rax == 0 || rax_2 s> 0)
        int32_t rcx_2 = arg_10
        
        if (rcx_2 == 1)
            void* rax_3 = sub_1428a9570(6)
            sub_1428dafb0(arg_20, rax_3, 5, 0)
            return 1
        
        if (rcx_2 == 4)
            char* var_38
            char* var_30
            
            if (sub_1428bcb30(rax, rcx_2 + 2, 0x300, 0x100b, 0, &var_38) s> 0
                    && sub_1428973a0(rax, 0x3f8, 0x1008, 0, &var_30) s> 0)
                int64_t* var_48_1
                var_48_1.d = 0
                int64_t var_28
                int32_t rax_7 = sub_1428bcb30(rax, 6, 0x300, 0x100c, var_48_1.d, &var_28)
                
                if (rax_7 s>= 0)
                    int64_t* rax_8 = sub_1428979b0()
                    rdi = rax_8
                    
                    if (rax_8 != 0 && sub_14290fe10(rax_8, var_38) != 0
                            && sub_14290fe70(&rdi[1], var_30) != 0)
                        if (rax_7 s<= 0)
                            goto label_14290fbea
                        
                        int64_t rax_11 = sub_1428daf90()
                        rdi[2] = rax_11
                        
                        if (rax_11 != 0)
                            int32_t* rax_12 = sub_1428c35d0()
                            
                            if (rax_12 != 0)
                                if (sub_1428e61a0(rax_12, var_28, rax_7) != 0)
                                    void* rax_14 = sub_1428a9570(0x3a7)
                                    sub_1428dafb0(rdi[2], rax_14, 4, rax_12)
                                label_14290fbea:
                                    
                                    if (sub_1428f8c10(rdi, &data_1434ea630, &arg_18) != 0)
                                        void* rax_16 = sub_1428a9570(0x397)
                                        sub_1428dafb0(arg_20, rax_16, 0x10, arg_18)
                                        arg_18 = nullptr
                                        rbp = 1
                                else
                                    sub_1428c3460(rax_12)
            
            sub_142897980(rdi)
            sub_1428f2c80(arg_18)
            return zx.q(rbp)

return 0
