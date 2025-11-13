// 函数: sub_140ba7ff0
// 地址: 0x140ba7ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx_2

if (data_1439a9808 == data_1439a9834)
labelid_4:
    rcx_2 = 0
else
    int32_t rax_2 = sub_140b5ead0(arg1.d) + arg1:4.d
    void* rcx = data_1439a9840
    void* rax_4 = &data_1439a9838
    
    if (rcx != 0)
        rax_4 = rcx
    
    int32_t rax_5 = *(rax_4 + (((sx.q(data_1439a9848) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_140ba807a:
        rcx_2 = 0
    else
        int64_t r8_1 = data_1439a9800
        int64_t rdx_5
        
        while (true)
            rdx_5 = sx.q(rax_5) * 0x18
            
            if (*(rdx_5 + r8_1) == arg1)
                break
            
            rax_5 = *(rdx_5 + r8_1 + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_140ba807a_1
        
        rcx_2 = rdx_5 + r8_1
        
        if (rax_5 == 0xffffffff)
        label_140ba807a_1:
            rcx_2 = 0

if (rcx_2 == 0)
    return 0

return rcx_2 + 8
