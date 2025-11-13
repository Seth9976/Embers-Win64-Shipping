// 函数: sub_142c77a00
// 地址: 0x142c77a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_3

if (arg1[0xda] != 0)
label_142c77a9a:
    
    if (arg1[0xda] != 0)
        rax_3 = sub_142c776e0(arg1, arg4)
        
        if (rax_3 != 0)
            return rax_3
        
        if (arg1[0xda] == 0 && arg1[0xd9] == 0)
            return sub_142c77910(arg1, arg2) __tailcall
    else if (arg1[0xd9] == 0)
        return sub_142c77910(arg1, arg2) __tailcall
    
    return 0x51

int64_t rax_1 = arg1[0xd9]

if (rax_1 == 0)
    goto label_142c77a9a

int32_t arg_8 = 0x4000

if (rax_1 u<= 0x4000)
    arg_8 = rax_1.d

void* rcx = *arg1
*(rcx + 0x240) = rcx + 0xa88
rax_3, arg4 = sub_142c68080(arg1, arg_8, &arg_8, arg3)

if (rax_3 != 0 && rax_3 != 0x51)
    return rax_3

int64_t rax_4 = sx.q(arg_8)

if (rax_4.d == 0)
    return rax_4

arg1[0xd9] -= rax_4
arg1[0xda] = rax_4
arg1[0xdb] = 0
goto label_142c77a9a
