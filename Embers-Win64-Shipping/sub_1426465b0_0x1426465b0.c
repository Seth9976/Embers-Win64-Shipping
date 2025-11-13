// 函数: sub_1426465b0
// 地址: 0x1426465b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax

if (**arg1 != 0)
    rax.b = 1
    return rax

void* rdi = arg1[1]

if (rdi != 0)
    rax = sub_140d21950(rdi, sub_14254cd20())
    
    if (rax != 0)
        if (sub_14266b610(arg1[2], arg1[1], rax, *arg1[3]) == 0)
            return 0
        
        int32_t arg_8
        sub_142664630(arg1[2], &arg_8, arg1[1], rax, *arg1[3])
        int32_t* rax_4
        rax_4.b = arg_8 != 0xffffffff
        return rax_4

rax.b = 1
return rax
