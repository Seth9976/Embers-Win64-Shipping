// 函数: sub_140d8b570
// 地址: 0x140d8b570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = i_1

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = arg4
    return arg5

void* rax_1 = sub_140afef10(arg1, arg3 + arg5, arg4)
int128_t* r8_1 = *arg1

if (i_1 != 0)
    rax_1 = arg2 + 0x50
    void* rdx_1 = &r8_1[5]
    int32_t i
    
    do
        *r8_1 = *(rax_1 - 0x50)
        r8_1[1] = *(rax_1 - 0x40)
        r8_1[2] = *(rax_1 - 0x30)
        r8_1[3].q = *(rax_1 - 0x20)
        *(rdx_1 - 0x18) = *(rax_1 - 0x18)
        void* rcx_1 = *(rax_1 - 0x10)
        *(rdx_1 - 0x10) = rcx_1
        
        if (rcx_1 != 0)
            *(rcx_1 + 8) += 1
        
        *(rdx_1 - 8) = *(rax_1 - 8)
        void* rcx_3 = *rax_1
        *rdx_1 = rcx_3
        
        if (rcx_3 != 0)
            *(rcx_3 + 8) += 1
        
        r8_1 += 0x58
        rdx_1 += 0x58
        rax_1 += 0x58
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
