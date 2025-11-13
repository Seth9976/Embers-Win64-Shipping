// 函数: sub_142053ff0
// 地址: 0x142053ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x9c] = 0

if (arg1[0x9d] != 0)
    void* rcx = arg1[0x88]
    
    if (rcx != 0 && sub_142368cd0(rcx, 0, 0xffffffff) != 0)
        if (arg1[0xa0].d s> 0)
            void* rcx_1 = arg1[0x9d]
            
            if (*(rcx_1 + 0x38) != 0)
                sub_1420a6fb0(rcx_1, &arg1[0x9f], arg2)
        
        int64_t rbp
        rbp.b = arg1[0x94].d == 0
        arg1[0x9c] = *(arg1[0x9d] + 0x10)
        void*** rax_3 = j_sub_140a82f30(0x800)
        
        if (rax_3 == 0)
            return nullptr
        
        void* rax_4 = arg1[0x15]
        
        if (rax_4 == 0)
            rax_4 = sub_141ee69e0(arg1)
        
        return sub_142048830(rax_3, rbp.b, arg1, zx.d(*(rax_4 + 0x118)))

return 0
