// 函数: sub_1420caad0
// 地址: 0x1420caad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax

if (arg2 != 0)
    rax = sub_1423de540(data_143f5b298, arg1, 1)
    
    if (rax != 0)
        void* rax_1 = *(rax + 0x188)
        void* rcx_2
        
        if (rax_1 == 0)
            rcx_2 = *(rax + 0x300)
        else
            rcx_2 = *(rax_1 + 0xc0)
        
        int64_t arg_10 = arg2
        void* rax_2
        rax_2.b = sub_1423dce10(rcx_2, &arg_10) != 0
        return rax_2

rax.b = 0
return rax
