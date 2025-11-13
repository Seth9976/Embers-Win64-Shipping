// 函数: sub_14036ef90
// 地址: 0x14036ef90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rdx_1 = *(arg1 + 0x28)
    
    if (rdx_1 != 0)
        int32_t rbx_1 = *(rdx_1 + 8)
        uint64_t rcx = zx.q(rbx_1 - 0x45)
        
        if ((rcx.d u<= 0x2c && test_bit(0x100400400011, rcx)) || rbx_1 == 0x29a || rbx_1 == 0x2a)
            int64_t rax_1 = *(rdx_1 + 0x10)
            
            if (rax_1 != 0)
                (*(arg1 + 0x38))(*(arg1 + 0x40), rax_1)
                rdx_1 = *(arg1 + 0x28)
            
            int64_t rax_2 = *(rdx_1 + 0x68)
            
            if (rax_2 != 0)
                (*(arg1 + 0x38))(*(arg1 + 0x40), rax_2)
                rdx_1 = *(arg1 + 0x28)
            
            int64_t rax_3 = *(rdx_1 + 0x60)
            
            if (rax_3 != 0)
                (*(arg1 + 0x38))(*(arg1 + 0x40), rax_3)
                rdx_1 = *(arg1 + 0x28)
            
            int64_t rax_4 = *(rdx_1 + 0x50)
            
            if (rax_4 != 0)
                (*(arg1 + 0x38))(*(arg1 + 0x40), rax_4)
                rdx_1 = *(arg1 + 0x28)
            
            (*(arg1 + 0x38))(*(arg1 + 0x40), rdx_1)
            *(arg1 + 0x28) = 0
            int64_t rax_5
            rax_5.b = rbx_1 != 0x71
            return zx.q((rax_5 * 3).d - 3)

return 0xfffffffe
