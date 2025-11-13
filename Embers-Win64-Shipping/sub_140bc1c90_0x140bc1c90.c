// 函数: sub_140bc1c90
// 地址: 0x140bc1c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
*(rbx + 0x60) = 1

if (*(rbx + 0x20) != 0)
    void* rcx = rbx + 0x40
    char var_18 = *(rbx + 0x63)
    void* rax_2 = *(rbx + 0x30)
    void* var_10 = rbx
    
    if (rax_2 != 0)
        rcx = rax_2
    
    (*(rbx + 0x20))((*(*rcx + 8))(rcx), &var_18, &var_10)

*(rbx + 0x61) = 1
void* rbx_1 = *arg1
int64_t* rcx_2 = *(rbx_1 + 0x78)

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2)
    sub_140a4fc50(*(rbx_1 + 0x78))
    *(rbx_1 + 0x78) = 0

return sub_140a980e0(arg2) __tailcall
