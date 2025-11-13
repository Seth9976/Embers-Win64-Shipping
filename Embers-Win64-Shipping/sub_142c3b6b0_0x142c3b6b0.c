// 函数: sub_142c3b6b0
// 地址: 0x142c3b6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int32_t rax = *arg1

if (rax == 0)
    return 

int32_t i = 0

if (rax != 0)
    do
        uint64_t i_1 = zx.q(i)
        
        if (*(arg1 + (i_1 << 3) + 0x20) != 0)
            int64_t rcx = *((i_1 << 5) + arg1 + 0x60)
            void* rsi_1 = &arg1[i_1 * 8]
            
            if (rcx != 0)
                j_sub_140a74f90(rcx)
            
            *(rsi_1 + 0x58) = 0
            *(rsi_1 + 0x60) = 0
            
            if (arg1[1].b != 0)
                j_sub_140a74f90(*(arg1 + (i_1 << 3) + 0x20))
        
        i += 1
    while (i u< *arg1)

j_sub_140a74f90(arg1)
