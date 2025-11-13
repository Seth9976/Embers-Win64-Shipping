// 函数: sub_1420224f0
// 地址: 0x1420224f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1

if (arg1 != 0)
    void* rax_1 = sub_1425841d0()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rbx + 0x38) && *(*(rbx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* rax_4 = sub_1425841d0()
            void* const rdi_1
            
            if (rax_4 == 0)
                rdi_1 = nullptr
            else
                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                
                if (rax_5.d s> *(rbx + 0x38))
                    rdi_1 = nullptr
                else
                    rdi_1 = rbx
                    
                    if (*(*(rbx + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                        rdi_1 = nullptr
            
            if (rdi_1 != sub_1425841d0())
                void* rax_8 = sub_1425841d0()
                int64_t rax_9
                
                if (rax_8 != 0)
                    rax_9 = sx.q(*(rax_8 + 0x38))
                
                if (rax_8 == 0 || rax_9.d s> *(rbx + 0x38)
                        || *(*(rbx + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                    rbx = nullptr
                
                return sub_140596910(sub_140cde0b0(), rbx, 0, 0, 0, 0, 0)

return 0
