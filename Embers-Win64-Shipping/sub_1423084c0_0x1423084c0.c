// 函数: sub_1423084c0
// 地址: 0x1423084c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
void* rcx = arg1[0xd]

if (*(rcx + 0x190) s> 0)
    int64_t r12_1 = 0
    
    do
        int64_t* rsi_1 = *(rcx + 0x188)
        int32_t j = 0
        
        if (*(rsi_1 + r12_1 + 8) s> 0)
            int64_t rdi_1 = 0
            
            do
                int64_t* r14_1 = *(rsi_1 + r12_1)
                void arg_8
                
                if (*sub_1408296b0(arg1, &arg_8, *(r14_1 + rdi_1)) != 0xffffffff)
                    *(r14_1 + rdi_1) = arg1[0xa]
                
                j += 1
                rdi_1 += 0x10
            while (j s< *(rsi_1 + r12_1 + 8))
        
        rcx = arg1[0xd]
        i += 1
        r12_1 += 0x10
    while (i s< *(rcx + 0x190))

int64_t result = arg1[0xb]
*(rcx + 0x180) |= result
return result
