// 函数: sub_140979110
// 地址: 0x140979110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x46] != 0)
    void* rax_1 = sub_140986520()
    
    if (rax_1 != 0)
        void* rdx_1 = arg1[0x46]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
                && rdx_1 != 0)
            void var_38
            sub_142427eb0(&var_38)
            int64_t* rdi_1
            
            if (arg1[0x46] == 0)
                rdi_1 = nullptr
            else
                void* rax_4 = sub_140986520()
                
                if (rax_4 == 0)
                    rdi_1 = nullptr
                else
                    rdi_1 = arg1[0x46]
                    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                    
                    if (rax_5.d s> rdi_1[7].d || *(rdi_1[6] + (rax_5 << 3)) != rax_4 + 0x30)
                        rdi_1 = nullptr
            
            void* result = sub_1420efae0((*(*arg1 + 0x150))(arg1), rdi_1, &data_143dbb1f8, 
                &data_143dbb208, &var_38)
            
            if (result == 0)
                return result
            
            *(result + 0x250) = arg1
            return result

return nullptr
