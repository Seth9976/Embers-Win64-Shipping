// 函数: sub_142b9a390
// 地址: 0x142b9a390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 8)

if (rsi == 0)
    return 

int64_t rbp_1 = *rsi

if (rsi == -0x118)
    return 

for (int64_t* i = rsi[0x23]; i != 0; i = i[1])
    if (i[2] == arg1)
        void* rax = *(arg1 + 0x18)
        
        if (*(rax + 0x38) == 0x6f75746c)
            int64_t rcx = *(arg1 + 0x60)
            
            if (rcx != 0)
                (*(*(rax + 0x60) + 0x28))(rcx)
        
        if (rsi != -0x118)
            void* rcx_1 = *i
            void** rax_2 = i[1]
            
            if (rcx_1 == 0)
                rsi[0x23] = rax_2
            else
                *(rcx_1 + 8) = rax_2
            
            if (rax_2 == 0)
                rsi[0x24] = rcx_1
            else
                *rax_2 = rcx_1
        
        (*(rbp_1 + 0x10))(rbp_1, i)
        void* j = rsi[0x23]
        void* rdx_2 = nullptr
        
        for (; j != 0; j = *(j + 8))
            void* rcx_3 = *(j + 0x10)
            
            if (*(rcx_3 + 0x20) == 0x6f75746c)
                rdx_2 = rcx_3
                break
        
        rsi[0x25] = rdx_2
        break
