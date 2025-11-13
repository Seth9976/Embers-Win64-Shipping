// 函数: sub_1423b12c0
// 地址: 0x1423b12c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg2

if (arg2 == 0)
    rbx = nullptr
else
    void* rax_1 = sub_142531170()
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbx = nullptr

void* result = sub_1423b1350(arg1 + 0xd8, rbx)

if (result != 0)
    void* rax_4 = sub_142531170()
    void* rcx_2 = *(result + 0x10)
    int64_t rdx_2 = sx.q(*(rax_4 + 0x38))
    
    if (rdx_2.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rdx_2 << 3)) == rax_4 + 0x30)
        return result

return 0
