// 函数: sub_1414efd40
// 地址: 0x1414efd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & r15) << 2))
    
    if (i != 0xffffffff)
        int64_t r14_1 = *arg1
        
        do
            int32_t* rdi_1 = r14_1 + sx.q(i) * 0x48
            
            if (sub_1414fc1c0(rdi_1, arg3) != 0)
                if (i != 0xffffffff && rdi_1 != 0)
                    return &rdi_1[0xe]
                
                break
            
            i = rdi_1[0x10]
        while (i != 0xffffffff)

return sub_1414efbd0(arg1, r15.d, arg3)
