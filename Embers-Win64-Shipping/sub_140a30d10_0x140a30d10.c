// 函数: sub_140a30d10
// 地址: 0x140a30d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(arg1[2])
uint64_t rdi = zx.q(arg2)

if (arg2 != rax.d)
    if (arg2 != 0)
        if (rax.d == 0)
            arg1[1].w = *arg1 - 1
            uint64_t rcx_2 = zx.q(*arg1)
            int64_t rax_3 = 4 * rcx_2
            
            if (mulu.dp.q(4, rcx_2) u>> 0x40 != zx.o(0))
                rax_3 = -1
            
            int64_t rax_4 = j_sub_140a82f30(rax_3)
            uint64_t count = zx.q(*arg1 << 2)
            *(arg1 + 0x10) = rax_4
            memset(rax_4, 0xff, count)
        
        int64_t rax_5 = 4 * rdi
        
        if (mulu.dp.q(4, rdi) u>> 0x40 != zx.o(0))
            rax_5 = -1
        
        rax = j_sub_140a82f30(rax_5)
        int64_t rdx = *(arg1 + 0x18)
        uint64_t rsi_1 = rax
        
        if (rdx != 0)
            memcpy(rax, rdx, arg1[2] << 2)
            rax = j_sub_140a74f90(*(arg1 + 0x18))
        
        *(arg1 + 0x18) = rsi_1
        arg1[2] = rdi.d
    else if (rax.d != 0)
        arg1[1].w = 0
        arg1[2] = 0
        j_sub_140a74f90(*(arg1 + 0x10))
        int64_t rcx_1 = *(arg1 + 0x18)
        *(arg1 + 0x10) = &data_14399e5d8
        int64_t rax_1 = j_sub_140a74f90(rcx_1)
        *(arg1 + 0x18) = 0
        return rax_1

return rax
