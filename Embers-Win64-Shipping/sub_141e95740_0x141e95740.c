// 函数: sub_141e95740
// 地址: 0x141e95740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = sub_141ed8440(arg1)

if (arg1[0x41].b != 0)
    void* rax = arg1[0x15]
    int64_t rbx_1 = arg1[0x40]
    
    if (rax == 0)
        rax = sub_141ee69e0(arg1)
    
    int64_t* var_18
    sub_1424373a0(rax, &var_18)
    int32_t i_1
    i = i_1
    
    while (i s>= 0)
        int64_t* rdx_2 = var_18
        
        if (i s>= rdx_2[1].d)
            break
        
        void* rax_2 = sub_140d3c6e0(*rdx_2 + (sx.q(i) << 3))
        
        if (rax_2 != 0)
            int64_t* rcx_4 = *(rax_2 + 0x2b8)
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x790))(rcx_4, rbx_1, arg1)
        
        i = i_1 + 1
        i_1 = i

return i
