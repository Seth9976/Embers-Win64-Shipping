// 函数: sub_142715ba0
// 地址: 0x142715ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0xb0) & 2) == 0)
    return 

int64_t* rsi_1 = *(arg1 + 0xa0)

if (rsi_1 == 0)
    return 

uint64_t rax = (*(*rsi_1 + 0x150))(rsi_1)

if (rax != 0)
    rax = sub_1426fbdd0(rax)
    
    if (rax != 0)
        void** i = *(arg1 + 0xb8)
        
        for (void* r14_1 = &i[sx.q(*(arg1 + 0xc0))]; i != r14_1; i = &i[1])
            sub_142715f90(rax, rsi_1, *i)

*(arg1 + 0xb0) &= 0xfffffffd
