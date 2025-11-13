// 函数: sub_1423cc240
// 地址: 0x1423cc240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143a30250 == 0)
    return 

void** i = data_143f5a780

while (i != 0)
    int64_t* rdi_1 = i[2]
    i = *i
    
    if (rdi_1 != 0)
        sub_140b33630("FlushDeferredResourceUpdate")
        
        if (rdi_1[2] != 0)
            int64_t r8_1
            r8_1.b = 1
            (**rdi_1)(rdi_1, arg1, r8_1)
            
            if (rdi_1[4].b != 0)
                void* rcx_1 = rdi_1[1]
                
                if (rcx_1 != 0)
                    *(rcx_1 + 8) = rdi_1[2]
                
                int64_t* rcx_2 = rdi_1[2]
                
                if (rcx_2 != 0)
                    *rcx_2 = rdi_1[1]
                
                rdi_1[1] = 0
                rdi_1[2] = 0
        
        sub_140b37f60("FlushDeferredResourceUpdate")

data_143a30250 = 0
