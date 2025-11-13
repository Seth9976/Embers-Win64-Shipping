// 函数: sub_140664cf0
// 地址: 0x140664cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3
int64_t* rbx = arg2

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = arg4
    return arg5

void* rax_1 = sub_14061cb30(arg1, arg3 + arg5, arg4)
uint64_t rcx = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        *rcx = *rbx
        rax_1 = rbx[1]
        *(rcx + 8) = rax_1
        
        if (rax_1 != 0)
            *(rax_1 + 8) += 1
        
        rcx += 0x10
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
