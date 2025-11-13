// 函数: sub_1419ce110
// 地址: 0x1419ce110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg1)

if (data_1439c9688 != data_1439c96b4)
    void* rdx_1 = data_1439c96c0
    void* rax = &data_1439c96b8
    
    if (rdx_1 != 0)
        rax = rdx_1
    
    int32_t i = *(rax + (((sx.q(data_1439c96c8) - 1) & r9) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_4 = data_1439c9680
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rcx = i_1 * 3
            
            if (*(r8_4 + (rcx << 3)) == r9.d)
                if (i != 0xffffffff)
                    void* rax_3 = r8_4 + i_1 * 0x18
                    
                    if (rax_3 != 0)
                        return *(rax_3 + 8)
                
                break
            
            i = *(r8_4 + (rcx << 3) + 0x10)
        while (i != 0xffffffff)

return 0
