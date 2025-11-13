// 函数: sub_14203ef60
// 地址: 0x14203ef60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1

if (arg1 != 0)
    void* rax_1 = sub_140d41340()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rbx + 0x38) && *(*(rbx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
                && arg2 != 0)
            void* rax_4 = sub_140d41340()
            void* const rax_7
            
            if (rax_4 == 0)
                rax_7 = nullptr
            else
                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                
                if (rax_5.d s> *(rbx + 0x38))
                    rax_7 = nullptr
                else
                    rax_7 = rbx
                    
                    if (*(*(rbx + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                        rax_7 = nullptr
            
            if (*(rax_7 + 0xd8) == 0)
            label_14203f048:
                void* rax_14 = sub_140d41340()
                int64_t rax_15
                
                if (rax_14 != 0)
                    rax_15 = sx.q(*(rax_14 + 0x38))
                
                if (rax_14 == 0 || rax_15.d s> *(rbx + 0x38)
                        || *(*(rbx + 0x30) + (rax_15 << 3)) != rax_14 + 0x30)
                    rbx = nullptr
                
                if ((sub_140b5b8a0(0, 0) & 1) != 0)
                    sub_140d19010(arg2, 
                        NewObject with empty name can't be used to create default subobjects (inside of "
                    "UObject derived class constructor) as it produces incon")
                
                return sub_140d2dfc0(rbx, arg2, 0, 0x1000000, 0, 0, 0, 0, 0)
            
            void* rax_8 = sub_140d41340()
            void* rax_11
            
            if (rax_8 == 0)
                rax_11 = nullptr
            else
                int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                
                if (rax_9.d s> *(rbx + 0x38))
                    rax_11 = nullptr
                else
                    rax_11 = rbx
                    
                    if (*(*(rbx + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                        rax_11 = nullptr
            
            void* rdx_3 = *(arg2 + 0x10)
            void* r8_2 = *(rax_11 + 0xd8) + 0x30
            int64_t rax_12 = sx.q(*(r8_2 + 8))
            
            if (rax_12.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_12 << 3)) == r8_2)
                goto label_14203f048

return 0
