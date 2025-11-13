// 函数: _Cnd_wait
// 地址: 0x14220c990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142271780(arg2)
char rax_1
int64_t r8
rax_1, r8 = sub_142262290(arg2)

if (rax != 0 && rax_1 != 0)
    int128_t* rdx = arg1[3]
    
    if (**arg1 == 0)
        return sub_142279090(*arg1[1], arg1[2], rdx, 1) __tailcall
    
    sub_142279400(arg2, rdx)

r8.b = 1
return sub_142278c00(arg2, arg1[3]) __tailcall
