// 函数: sub_140671a60
// 地址: 0x140671a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
char rax_1 = (*(*rcx + 0x30))(rcx)

if (rax_1 == 0)
    while (true)
        int64_t* rcx_1 = *(arg1 + 0x20)
        int16_t arg_8
        (*(*rcx_1 + 0x150))(rcx_1, &arg_8, 2)
        uint64_t rax_3 = zx.q(arg_8)
        *(arg1 + 0x64) += 1
        
        if (rax_3.d == 0xa)
            *(arg1 + 0x60) += 1
            *(arg1 + 0x64) = 0
        else if (rax_3.d u> 0x20 || not(test_bit(0x100002200, rax_3)))
            int64_t* rcx_3 = *(arg1 + 0x20)
            int64_t rdi_1 = *rcx_3
            int64_t rax_6 = (*(rdi_1 + 0x20))(rcx_3)
            rax_1 = (*(rdi_1 + 0x178))(*(arg1 + 0x20), rax_6 - 2)
            *(arg1 + 0x64) -= 1
            break
        
        int64_t* rcx_2 = *(arg1 + 0x20)
        char rax_5 = (*(*rcx_2 + 0x30))(rcx_2)
        
        if (rax_5 != 0)
            return rax_5

return rax_1
