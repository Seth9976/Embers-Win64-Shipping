// 函数: sub_140e78e90
// 地址: 0x140e78e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
char i
int64_t* rcx_2
int64_t rdi_1

for (i = (*(*rcx + 0x30))(rcx); i == 0; i = (*(rdi_1 + 0x30))(rcx_2))
    int64_t* rcx_1 = *(arg1 + 0x20)
    char arg_8
    (*(*rcx_1 + 0x150))(rcx_1, &arg_8, 1)
    uint64_t rax_2 = zx.q(arg_8)
    *(arg1 + 0x64) += 1
    
    if (rax_2.b != 0xa)
        bool c_1
        
        if (rax_2.b u<= 0x20)
            c_1 = test_bit(0x100002200, sx.q(rax_2.b))
        
        if (rax_2.b u> 0x20 || not(c_1))
            rax_2.b = 0
        else
            rax_2.b = 1
    else
        *(arg1 + 0x60) += 1
        rax_2.b = 1
        *(arg1 + 0x64) = 0
    
    rcx_2 = *(arg1 + 0x20)
    rdi_1 = *rcx_2
    
    if (rax_2.b == 0)
        int64_t rax_3 = (*(rdi_1 + 0x20))(rcx_2)
        i = (*(rdi_1 + 0x178))(*(arg1 + 0x20), rax_3 - 1)
        *(arg1 + 0x64) -= 1
        break

return i
