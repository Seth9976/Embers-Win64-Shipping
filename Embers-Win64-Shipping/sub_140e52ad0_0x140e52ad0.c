// 函数: sub_140e52ad0
// 地址: 0x140e52ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int32_t i_1 = arg2[1].d
int64_t* rbx = *arg2
arg1[1].d = i_1

if (i_1 != 0)
    sub_1405a4be0(arg1, i_1, 0)
    int64_t* rcx = *arg1
    int32_t i
    
    do
        *rcx = *rbx
        void* rax_2 = rbx[1]
        rcx[1] = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 0xc) += 1
        
        rcx = &rcx[2]
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0xc) = 0

arg1[2] = arg2[2]
void* rax_4 = arg2[3]
arg1[3] = rax_4

if (rax_4 != 0)
    *(rax_4 + 0xc) += 1

return arg1
