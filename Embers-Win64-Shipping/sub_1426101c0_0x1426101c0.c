// 函数: sub_1426101c0
// 地址: 0x1426101c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0x80000000

char rsi = (*(arg1 + 0x9c)).b
char rdi = (*(arg1 + 0xa0)).b
int32_t r8_2 = ((1 << rdi).d - 1) & arg2.d
int32_t r9_2 = ((1 << rsi).d - 1) & (arg2 u>> rdi).d

if (r9_2 u< *(arg1 + 0x30))
    int32_t* r9_4 = zx.q(r9_2) * 0xb0 + *(arg1 + 0x90)
    
    if (*r9_4 == ((arg2 u>> (rsi + rdi)).d & ((1 << (*(arg1 + 0x98)).b).d - 1)))
        void* rax_4 = *(r9_4 + 8)
        
        if (rax_4 != 0 && r8_2 u< *(rax_4 + 0x18))
            *arg3 = *((zx.q(r8_2) << 5) + *(r9_4 + 0x10) + 0x1f) & 0x3f
            return 0x40000000

return 0x80000008
