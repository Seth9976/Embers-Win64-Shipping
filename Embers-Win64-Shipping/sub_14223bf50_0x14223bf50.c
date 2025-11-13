// 函数: sub_14223bf50
// 地址: 0x14223bf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[1]
void* i = *(rax + 0x10000)

if (i != 0)
    do
        void* i_1 = i
        i = *(i + 0x10000)
        sub_140a74f90(i_1)
    while (i != 0)
    
    rax = arg1[1]

*(rax + 0x10000) = 0
*(arg1[1] + 0x10010) = 0
int64_t rcx = arg1[1]
*arg1 = rcx
return sub_140a74f90(rcx) __tailcall
