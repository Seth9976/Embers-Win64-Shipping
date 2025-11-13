// 函数: sub_1410e6f00
// 地址: 0x1410e6f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = i_1

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = arg4
    return arg5

int64_t rax_1 = sub_140afef10(arg1, arg3 + arg5, arg4)
int32_t* rdx_1 = *arg1

if (i_1 != 0)
    void* rcx = arg2 + 8
    int32_t i
    
    do
        *rdx_1 = *(rcx - 8)
        rdx_1[1] = *(rcx - 4)
        rdx_1[2] = *rcx
        rdx_1[3] = *(rcx + 4)
        *(rdx_1 + 0x10) = *(rcx + 8)
        *(rdx_1 + 0x18) = *(rcx + 0x10)
        *(rdx_1 + 0x20) = *(rcx + 0x18)
        *(rdx_1 + 0x28) = *(rcx + 0x20)
        *(rdx_1 + 0x30) = *(rcx + 0x28)
        *(rdx_1 + 0x38) = *(rcx + 0x30)
        void* rax_12 = *(rcx + 0x38)
        *(rdx_1 + 0x40) = rax_12
        
        if (rax_12 != 0)
            *(rax_12 + 0xd0) += 1
        
        void* rax_13 = *(rcx + 0x40)
        *(rdx_1 + 0x48) = rax_13
        
        if (rax_13 != 0)
            *(rax_13 + 0xd0) += 1
        
        rax_1 = *(rcx + 0x48)
        rcx += 0x58
        *(rdx_1 + 0x50) = rax_1
        rdx_1 = &rdx_1[0x16]
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
