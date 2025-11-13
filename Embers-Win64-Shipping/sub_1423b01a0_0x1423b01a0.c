// 函数: sub_1423b01a0
// 地址: 0x1423b01a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg2

if (arg1 != 0)
    void* rax_1 = sub_1423de540(data_143f5b298, arg1, 0)
    
    if (rax_1 != 0)
        void* rdi_1 = *(rax_1 + 0x188)
        
        if (rdi_1 != 0)
            if (rbx == 0)
                rbx = nullptr
            else
                void* rax_2 = sub_1424b2690()
                
                if (rax_2 == 0)
                    rbx = nullptr
                else
                    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
                    
                    if (rax_3.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
                        rbx = nullptr
            
            void* result = sub_1423b1350(rdi_1 + 0xd0, rbx)
            
            if (result != 0)
                void* rax_5 = sub_1424b2690()
                void* rcx_3 = *(result + 0x10)
                int64_t rdx_3 = sx.q(*(rax_5 + 0x38))
                
                if (rdx_3.d s<= *(rcx_3 + 0x38)
                        && *(*(rcx_3 + 0x30) + (rdx_3 << 3)) == rax_5 + 0x30)
                    return result
            
            return nullptr

return 0
