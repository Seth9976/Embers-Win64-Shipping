// 函数: sub_1423a6360
// 地址: 0x1423a6360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x18)
void* rdx_2 = (sx.q(*(arg1 + 0x20)) << 4) + rcx

if (rcx != rdx_2)
    do
        void* rax = *(rcx + 8)
        
        if (rax != 0)
            *(rax + 0xb8) = 0xffffffff
        
        rcx += 0x10
    while (rcx != rdx_2)
    
    rcx = *(arg1 + 0x18)

if (rcx != 0)
    return sub_140a74f90(rcx) __tailcall
