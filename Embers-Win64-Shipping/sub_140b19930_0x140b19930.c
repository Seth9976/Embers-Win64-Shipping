// 函数: sub_140b19930
// 地址: 0x140b19930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
int32_t r9_1 = sub_140b5ead0(arg1.d) + arg_8:4.d

if (data_1439a4ad8 != data_1439a4b04)
    void* rcx = data_1439a4b10
    void* rax_3 = &data_1439a4b08
    
    if (rcx != 0)
        rax_3 = rcx
    
    int32_t i = *(rax_3 + (((sx.q(data_1439a4b18) - 1) & sx.q(r9_1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_1 = data_1439a4ad0
        
        do
            int64_t rdx_5 = sx.q(i) * 0x28
            
            if (*(rdx_5 + r8_1) == arg1)
                if (i != 0xffffffff)
                    int64_t rax_5 = rdx_5 + r8_1
                    
                    if (rax_5 != 0)
                        return rax_5 + 8
                
                break
            
            i = *(rdx_5 + r8_1 + 0x20)
        while (i != 0xffffffff)

return sub_140b08350(&data_1439a4ad0, r9_1, &arg_8)
