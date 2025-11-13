// 函数: sub_1419ea690
// 地址: 0x1419ea690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141a24b60()
void* const rbx = rax

if (rax == 0)
    rbx = nullptr
else
    void* rax_1 = sub_141a24b60()
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbx = nullptr

void* result = sub_1423b1350(arg1 + 0x648, rbx)

if (result != 0)
    void* rax_4 = sub_141a24b60()
    void* rcx_2 = *(result + 0x10)
    int64_t rdx_3 = sx.q(*(rax_4 + 0x38))
    
    if (rdx_3.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rdx_3 << 3)) == rax_4 + 0x30)
        return result

return 0
