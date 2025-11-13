// 函数: sub_14283306c
// 地址: 0x14283306c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
int32_t i = 0

if (*(arg1 + 8) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        void* rcx = *(r14_1 + *(arg1 + 0x68))
        int64_t rax_1
        rax_1.b = *(rcx + 4)
        rax_1.b -= 1
        
        if (rax_1.b u<= 1)
            sub_1428394c0(rcx)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 8))

if (*(arg1 + 0x18) s> 0)
    int64_t rsi = 0
    
    do
        sub_14283e284(*(*(arg1 + 0x58) + rsi))
        i_1 += 1
        rsi += 8
    while (i_1 s< *(arg1 + 0x18))

j_sub_14283d558(*(arg1 + 0xa8))
j_sub_14283b0d0(*(arg1 + 0xa0))
return 0
