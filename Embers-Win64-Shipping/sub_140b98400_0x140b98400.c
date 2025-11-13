// 函数: sub_140b98400
// 地址: 0x140b98400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x2a)
int32_t* rdi = arg2

if ((rax & 0x20) == 0 || (rax & 0x40) != 0)
    arg2.b = 1
    void* arg_8 = sub_140d3c740(rdi, arg2.b)
    (*(*arg1 + 0x130))(arg1, &arg_8)
    
    if ((arg1[5].b & 1) != 0 || (*(arg1 + 0x2a) & 0x40) != 0)
        sub_140d3a3a0(rdi, arg_8)

return arg1
