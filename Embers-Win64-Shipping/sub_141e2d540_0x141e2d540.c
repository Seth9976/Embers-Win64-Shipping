// 函数: sub_141e2d540
// 地址: 0x141e2d540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x14] != 0)
    void* rax_1 = sub_142463bc0()
    
    if (rax_1 != 0)
        void* rdx = arg1[0x14]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30 && rdx != 0
                && arg1[0xf] != 0)
            void* rax_4 = sub_14245f6d0()
            
            if (rax_4 != 0)
                void* rdx_1 = arg1[0xf]
                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                
                if (rax_5.d s<= *(rdx_1 + 0x38))
                    int64_t result = *(rdx_1 + 0x30)
                    
                    if (*(result + (rax_5 << 3)) == rax_4 + 0x30 && rdx_1 != 0)
                        return result

return sub_141e2a370(arg1, arg3)
