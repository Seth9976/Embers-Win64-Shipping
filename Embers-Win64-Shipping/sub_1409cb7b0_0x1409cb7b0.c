// 函数: sub_1409cb7b0
// 地址: 0x1409cb7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0

if (*(arg1 + 0x3a8) != 0)
    int64_t* rdi_1 = *(arg1 + 0x3b0)
    
    if (rdi_1 != 0 && rdi_1[1].d s> 0)
        void*** rax_1 = j_sub_140a82f30(0x18)
        void*** rdx = rax_1
        
        if (rax_1 == 0)
            rdx = nullptr
        else
            *rdx = &data_142e3e5d0
            rdx[1] = 0
            rdx[1] = *rdi_1
            *rdi_1 = 0
            rdx[2].d = rdi_1[1].d
            *(rdx + 0x14) = *(rdi_1 + 0xc)
            rdi_1[1] = 0
        
        int64_t* rcx_2 = *arg2
        *arg2 = rdx
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x38))(rcx_2, 1)

int64_t* rdx_1 = *(arg1 + 0x3b0)

if (rdx_1 != 0)
    *(arg1 + 0x3b0) = 0
    sub_1409aeb90(arg1 + 0x3b0, rdx_1)

return arg2
