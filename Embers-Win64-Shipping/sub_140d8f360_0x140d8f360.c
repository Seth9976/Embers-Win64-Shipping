// 函数: sub_140d8f360
// 地址: 0x140d8f360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x120)
void* rdi = arg1

if (rax != 0)
    rdi = rax

void* rbx = rdi + sx.q(arg3) * 0x48

while (rbx != rdi)
    int64_t* rcx = *(rbx - 0x10)
    rbx -= 0x48
    
    if ((*(*rcx + 0x208))(rcx) != 0)
        return (rbx - rdi) s/ 0x48

return 0xffffffff
