// 函数: sub_142610d20
// 地址: 0x142610d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0x80000000

char rbp = (*(arg1 + 0xa0)).b
char r14 = (*(arg1 + 0x9c)).b
int32_t rdx_2 = ((1 << rbp).d - 1) & arg2.d
int32_t r8_2 = ((1 << r14).d - 1) & (arg2 u>> rbp).d

if (r8_2 u< *(arg1 + 0x30))
    int64_t rsi_1 = zx.q(r8_2) * 0xb0
    int32_t* r8_4 = *(arg1 + 0x90) + rsi_1
    
    if (*r8_4 == ((arg2 u>> (r14 + rbp)).d & ((1 << (*(arg1 + 0x98)).b).d - 1)))
        void* rax_4 = *(r8_4 + 8)
        
        if (rax_4 != 0 && rdx_2 u< *(rax_4 + 0x18))
            *arg3 = r8_4
            *arg4 = (zx.q(rdx_2) << 5) + *(rsi_1 + *(arg1 + 0x90) + 0x10)
            return 0x40000000

return 0x80000008
