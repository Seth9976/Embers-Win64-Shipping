// 函数: sub_14264bd20
// 地址: 0x14264bd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rbx = *(arg1 + 0x90)
void* result = &rbx[sx.q(*(arg1 + 0x98))]
uint64_t rsi_1 = sx.q(*(arg1 + 0x98)) << 3 u>> 3

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        void* rcx = *rbx
        
        if (rcx != 0)
            int64_t* rcx_1 = *(rcx + 0x2e0)
            
            if (rcx_1 != 0)
                result = (*(*rcx_1 + 0x18))(rcx_1)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != rsi_1)

return result
