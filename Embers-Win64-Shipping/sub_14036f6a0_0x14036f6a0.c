// 函数: sub_14036f6a0
// 地址: 0x14036f6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rdi_1 = *(arg1 + 0x28)
    
    if (rdi_1 != 0 && *(arg1 + 0x30) != 0 && *(arg1 + 0x38) != 0)
        *(arg1 + 0x1c) = 0
        *(arg1 + 0xc) = 0
        *(arg1 + 0x20) = 0
        *(arg1 + 0x48) = 2
        *(rdi_1 + 0x28) = 0
        *(rdi_1 + 0x20) = *(rdi_1 + 0x10)
        int32_t rax_2 = *(rdi_1 + 0x2c)
        
        if (rax_2 s< 0)
            rax_2 = neg.d(rax_2)
            *(rdi_1 + 0x2c) = rax_2
        
        int32_t rdx_1 = 0x2a
        
        if (rax_2 == 0)
            rdx_1 = 0x71
        
        *(rdi_1 + 8) = rdx_1
        int32_t rax_3
        
        if (rax_2 != 2)
            rax_3 = sub_140374410(0, nullptr, 0)
        else
            rax_3 = sub_140374810(0, nullptr, 0)
        
        *(arg1 + 0x4c) = rax_3
        *(rdi_1 + 0x40) = 0
        _tr_init(rdi_1)
        return 0

return 0xfffffffe
