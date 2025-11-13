// 函数: sub_140a87b60
// 地址: 0x140a87b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *arg1
int64_t* rsi = nullptr

if (rax != 0)
    while (rax != arg2)
        int64_t r8_1 = *rax
        rsi = rax
        rax = (*(r8_1 + 0x58))(rax, arg3, r8_1)
        
        if (rax == 0)
            break
    
    if (rsi != 0)
        void* rbx_1 = *rsi
        (*(*arg2 + 0x58))(arg2)
        jump(*(rbx_1 + 0x60))

int64_t* rax_5 = (*(*arg2 + 0x58))(arg2)
*arg1 = rax_5
jump(*(*rax_5 + 0x28))
