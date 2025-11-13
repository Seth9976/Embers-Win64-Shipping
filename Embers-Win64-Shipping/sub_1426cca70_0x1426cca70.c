// 函数: sub_1426cca70
// 地址: 0x1426cca70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x70) != 0)
    int64_t* rcx = *(arg2 + 0xc0)
    
    if (rcx != 0 && *(arg1 + 0xa8) != 0)
        void* rax_2 = (*(*rcx + 0x150))(rcx)
        void* rdi_1 = *(rax_2 + 0x188)
        void* rdi_2
        
        if (rdi_1 == 0)
            rdi_2 = *(rax_2 + 0x300)
        else
            rdi_2 = *(rdi_1 + 0xc0)
        
        if (sub_1423dce10(rdi_2, arg1 + 0xa8) != 0)
            sub_1423e60e0(rdi_2, *(arg1 + 0xa8))

int64_t* rcx_3 = *(arg1 + 0x88)
*(arg1 + 0xa8) = 0

if (rcx_3 != 0 && *(arg1 + 0x90) == 0)
    sub_141f477c0(rcx_3, 0)

return 2
