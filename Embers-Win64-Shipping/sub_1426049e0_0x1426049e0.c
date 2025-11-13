// 函数: sub_1426049e0
// 地址: 0x1426049e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rdi_1 = *arg1
    char r14_1 = (*(rdi_1 + 0x9c)).b
    char rbp_1 = (*(rdi_1 + 0xa0)).b
    uint64_t r8_2 = zx.q((1 << rbp_1).d - 1) & zx.q(arg2.d)
    int32_t rdx_2 = ((1 << r14_1).d - 1) & (arg2 u>> rbp_1).d
    
    if (rdx_2 u< *(rdi_1 + 0x30))
        int32_t* rdx_4 = zx.q(rdx_2) * 0xb0 + *(rdi_1 + 0x90)
        
        if (*rdx_4 == ((arg2 u>> (r14_1 + rbp_1)).d & ((1 << (*(rdi_1 + 0x98)).b).d - 1)))
            void* rax_4 = *(rdx_4 + 8)
            
            if (rax_4 != 0 && r8_2.d u< *(rax_4 + 0x18) && rdx_4 != 0)
                sub_1426054a0(arg1, rdx_4, (r8_2 << 5) + *(rdx_4 + 0x10), arg3, arg4)
                return 0x40000000

return 0x80000008
