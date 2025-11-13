// 函数: sub_1420d7960
// 地址: 0x1420d7960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & rbp) << 2))
    
    if (i != 0xffffffff)
        int64_t rcx = *arg1
        
        do
            int64_t arg_8 = *arg3
            int64_t rdi_2 = sx.q(i) << 5
            int64_t arg_20 = *(rdi_2 + rcx)
            
            if (sub_140664af0(&arg_20, &arg_8) != 0)
                if (i != 0xffffffff)
                    int64_t rax_5 = *arg1
                    
                    if (rax_5 != neg.q(rdi_2))
                        return rax_5 + rdi_2 + 8
                
                break
            
            rcx = *arg1
            i = *(rdi_2 + rcx + 0x18)
        while (i != 0xffffffff)

return sub_1420d77b0(arg1, rbp.d, arg3)
