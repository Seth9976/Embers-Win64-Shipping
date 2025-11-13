// 函数: sub_141e70c80
// 地址: 0x141e70c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = nullptr
arg1[2].d = 0xffffffff
*arg1 = 0
arg1[1] = 0
void* rcx = data_143f5b298

if (rcx != 0 && sub_1423dcff0(rcx) != 0 && arg1[1] != 0)
    void* rcx_1 = data_143f5b298
    
    if (rcx_1 != 0)
        rdi = sub_1423dcff0(rcx_1)
    
    sub_141e797e0(rdi, zx.q(arg1[2].d), *arg1)

arg1[1] = *(arg2 + 8)
arg1[2].d = *(arg2 + 0x10)
void* rcx_3 = data_143f5b298

if (rcx_3 != 0 && sub_1423dcff0(rcx_3) != 0 && arg1[1] != 0)
    void* rcx_4 = data_143f5b298
    
    if (rcx_4 != 0)
        void* rax_6 = sub_1423dcff0(rcx_4)
        
        if (rax_6 != 0)
            sub_141e7f240(rax_6, arg1[2].d)

return arg1
