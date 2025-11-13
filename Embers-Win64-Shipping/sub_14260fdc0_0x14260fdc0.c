// 函数: sub_14260fdc0
// 地址: 0x14260fdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    char rbx_1 = (*(arg1 + 0xa0)).b
    char rdi_1 = (*(arg1 + 0x9c)).b
    int32_t rdx_2 = ((1 << rbx_1).d - 1) & arg2.d
    int32_t r9_3 = ((1 << rdi_1).d - 1) & (arg2 u>> rbx_1).d
    
    if (r9_3 u< *(arg1 + 0x30))
        int32_t* r9_5 = zx.q(r9_3) * 0xb0 + *(arg1 + 0x90)
        
        if (*r9_5 == ((arg2 u>> (rdi_1 + rbx_1)).d & ((1 << (*(arg1 + 0x98)).b).d - 1)))
            void* r8_3 = *(r9_5 + 8)
            
            if (r8_3 != 0 && rdx_2 u< *(r8_3 + 0x18)
                    && (*((zx.q(rdx_2) << 5) + *(r9_5 + 0x10) + 0x1f) & 0xc0) == 0x40)
                return *(r9_5 + 0x48) + zx.q(rdx_2 - *(r8_3 + 0x3c)) * 0x28

return 0
