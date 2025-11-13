// 函数: sub_1423c0190
// 地址: 0x1423c0190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_1424359b0(*(arg1 + 0x30))
char* result

if (rax != 0)
    result = sub_1424359b0(*(arg1 + 0x30))

if (rax == 0 || *result == 0)
    int64_t rdi_1 = sx.q(*(arg1 + 0x18))
    void* rsi_1 = *(arg1 + 0x30)
    int32_t rax_1 = (rdi_1 + 1).d
    *(arg1 + 0x18) = rax_1
    
    if (rax_1 s> *(arg1 + 0x1c))
        sub_1405a4d70(arg1 + 0x10)
    
    result = *(rsi_1 + 0x470)
    *(*(arg1 + 0x10) + (rdi_1 << 3)) = result

int32_t i = 0

if (arg2[1].d s> 0)
    int64_t* rdi_2 = nullptr
    
    do
        result = *arg2
        void* r15_1 = *(rdi_2 + result)
        
        if ((*(r15_1 + 0x1f4) & 0x20) != 0)
            int64_t rbp_1 = sx.q(*(arg1 + 0x18))
            int32_t rax_2 = (rbp_1 + 1).d
            *(arg1 + 0x18) = rax_2
            
            if (rax_2 s> *(arg1 + 0x1c))
                sub_1405a4d70(arg1 + 0x10)
            
            result = *(r15_1 + 0x138)
            *(*(arg1 + 0x10) + (rbp_1 << 3)) = result
        
        i += 1
        rdi_2 = &rdi_2[1]
    while (i s< arg2[1].d)

return result
