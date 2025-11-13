// 函数: sub_1413a2a90
// 地址: 0x1413a2a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].b != 0)
    return 

arg1[1].b = 1
int64_t* i = (*(*arg1 + 0x40))(arg1, 0)
int64_t* i_1 = i
int32_t rsi_1 = 1

while (i != 0)
    int64_t* rcx = *i_1
    
    if (rcx != 0)
        void* rax_2 = (*(*rcx + 0x38))(rcx, zx.q(i_1[1].d))
        
        if (rax_2 != 0)
            *(rax_2 + 0x58) += 1
    
    int64_t rcx_1 = *i_1
    
    if (rcx_1 != 0)
        sub_1413a2a90(rcx_1)
    
    i = (*(*arg1 + 0x40))(arg1, zx.q(rsi_1))
    rsi_1 += 1
    i_1 = i
