// 函数: sub_1405b2d40
// 地址: 0x1405b2d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg3

if (arg3 == 0)
    rdi = nullptr
else
    void* rax_1 = sub_1405c7920()
    
    if (rax_1 == 0)
        rdi = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> rdi[7].d || *(rdi[6] + (rax_2 << 3)) != rax_1 + 0x30)
            rdi = nullptr

void* result = sub_1405b2ea0(arg1, arg2, rdi, 2)

if (result != 0)
    void* rax_4 = sub_1405c7920()
    void* rcx_2 = *(result + 0x10)
    int64_t rdx_2 = sx.q(*(rax_4 + 0x38))
    
    if (rdx_2.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rdx_2 << 3)) == rax_4 + 0x30)
        return result

return 0
