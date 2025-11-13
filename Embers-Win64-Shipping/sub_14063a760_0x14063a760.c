// 函数: sub_14063a760
// 地址: 0x14063a760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg2

if (arg2 != 0)
    void* rax_1 = sub_142452380()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= rbp[7].d && *(rbp[6] + (rax_2 << 3)) == rax_1 + 0x30)
            void* rax_4 = sub_1423de540(data_143f5b298, arg1, 0)
            
            if (rax_4 != 0)
                void var_58
                sub_142427eb0(&var_58)
                char var_30
                char rcx_3 = var_30
                
                if (arg6 != 0)
                    rcx_3 = 1
                
                char var_2f
                char var_2f_1 = var_2f & 0xfb
                char var_30_1 = rcx_3
                int64_t* i = *(rax_4 + 0x98)
                
                for (void* r14 = &i[sx.q(*(rax_4 + 0xa0))]; i != r14; i = &i[1])
                    void* rcx_4 = *i
                    
                    if (rcx_4 != 0)
                        int64_t rsi_1 = *(rcx_4 + 0x128)
                        void arg_10
                        
                        if (rsi_1 != 0 && *sub_1420e4d10(rcx_4, &arg_10) == arg3)
                            int64_t var_38_1 = rsi_1
                            break
                
                void* rax_7 = sub_142452380()
                int64_t rax_8
                
                if (rax_7 != 0)
                    rax_8 = sx.q(*(rax_7 + 0x38))
                
                if (rax_7 == 0 || rax_8.d s> rbp[7].d || *(rbp[6] + (rax_8 << 3)) != rax_7 + 0x30)
                    rbp = nullptr
                
                return sub_1420efae0(rax_4, rbp, arg4, arg5, &var_58)

return 0
