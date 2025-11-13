// 函数: sub_1426ec4b0
// 地址: 0x1426ec4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2
void* result = nullptr
void* rax = sub_1423de540(data_143f5b298, arg1, 1)

if (rax != 0 && rdi != 0)
    void* rax_1 = sub_14255d000()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= rdi[7].d && *(rdi[6] + (rax_2 << 3)) == rax_1 + 0x30)
            void var_48
            sub_142427eb0(&var_48)
            int64_t var_38_1 = arg7
            char var_20_1 = (arg6 ^ 1) * 2 + 1
            void* rax_5 = sub_14255d000()
            int64_t rax_6
            
            if (rax_5 != 0)
                rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_5 == 0 || rax_6.d s> rdi[7].d || *(rdi[6] + (rax_6 << 3)) != rax_5 + 0x30)
                rdi = nullptr
            
            void* result_1 = sub_1420efae0(rax, rdi, arg4, arg5, &var_48)
            result = result_1
            
            if (result_1 != 0)
                if (*(result_1 + 0x258) == 0)
                    int64_t rdx_4 = *result_1
                    (*(rdx_4 + 0x700))(result_1, rdx_4)
                
                if (arg3 != 0)
                    int64_t* rdi_1 = *(result + 0x258)
                    
                    if (rdi_1 != 0)
                        void* rax_8 = sub_1427249f0()
                        void* rcx_6 = rdi_1[2]
                        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                        
                        if (rax_9.d s<= *(rcx_6 + 0x38)
                                && *(*(rcx_6 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
                            (*(*rdi_1 + 0x7a8))(rdi_1, arg3)

return result
