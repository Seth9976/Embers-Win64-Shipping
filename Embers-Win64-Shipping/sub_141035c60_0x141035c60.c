// 函数: sub_141035c60
// 地址: 0x141035c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg2 + 0x400)

if (rsi == 0xffffffff)
    return 

void* rbp_1 = *(arg1 + 0x18)

if (rsi != 0xffffffff)
    void* rbx_1 = arg2 + 0x300
    uint64_t i_1 = zx.q(rsi + 1)
    uint64_t i
    
    do
        void* rdx = *rbx_1
        
        if (data_1439b4ad4 != 0 && rdx != 0 && *(rdx + 8) != 0)
            sub_141026da0(*(*(rbp_1 + 0x1c8) + 0x118), rdx)
        
        rbx_1 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbp_1 = *(arg1 + 0x18)

int64_t* rcx_2 = *(*(rbp_1 + 0x1c8) + 0x30)
(*(*rcx_2 + 0x160))(rcx_2, 0, zx.q(rsi + 1), arg2)
