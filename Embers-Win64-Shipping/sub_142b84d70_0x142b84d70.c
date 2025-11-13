// 函数: sub_142b84d70
// 地址: 0x142b84d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *arg1
int64_t arg_8
int512_t result

if (rdx != 0x7ff0000000000000)
    int64_t rax_2
    
    if (rdx s>= 0)
        rax_2 = rdx + 1
    else
        int64_t rcx_1 = rdx & 0xfffffffffffff
        int64_t rax_1 = rcx_1 + 0x10000000000000
        
        if ((0x7ff0000000000000 & rdx) == 0)
            rax_1 = rcx_1
        
        if (rax_1 == 0)
            result.o = zx.o(0)
            return result
        
        rax_2 = rdx - 1
    
    arg_8 = rax_2
else
    arg_8 = 0x7ff0000000000000

int64_t arg_10
memmove(&arg_10, &arg_8, 8)
result.o = zx.o(arg_10)
return result
