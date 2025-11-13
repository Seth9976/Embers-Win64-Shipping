// 函数: sub_140d169b0
// 地址: 0x140d169b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2

if (rax != 0)
    if ((*(rax + 0xb) & 1) != 0)
    label_140d169fd:
        
        if (*arg2 != 0)
            int64_t* rdi_1 = *(arg1 + 0xa8)
            int64_t rax_6 = (*(*rdi_1 + 0x28))(rdi_1)
            int64_t r8_1 = *rdi_1
            (*(r8_1 + 0x20))(rdi_1, *(arg1 + 0x78), r8_1)
            (*(*rdi_1 + 0x38))(rdi_1, arg2, *(arg1 + 0x90), *(arg1 + 0x78))
            int64_t r8_3 = *rdi_1
            (*(r8_3 + 0x20))(rdi_1, rax_6, r8_3)
    else
        void* rax_1 = *(arg1 + 0x78)
        
        if (rax_1 == 0 || ((zx.q(*(*(rax_1 + 8) + 0x10)) u>> 0x10).b & 1) == 0)
            goto label_140d169fd
        
        int64_t* rcx_2 = *(arg1 + 0xa8)
        
        if ((*(*rcx_2 + 0x30))(rcx_2) == 0)
            goto label_140d169fd

return arg1
