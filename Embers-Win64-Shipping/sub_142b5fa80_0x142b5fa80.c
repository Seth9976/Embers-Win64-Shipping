// 函数: sub_142b5fa80
// 地址: 0x142b5fa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2 + 1
int32_t* rcx = *(arg1 + 0x280)
int64_t rdi_1 = sx.q(rbx) << 4
int32_t i = *(rcx + rdi_1)
void* rdx = rcx + rdi_1
int32_t i_1 = i

while (i != 1)
    if (i_1 == 4)
        return 0xffffffff
    
    if (i_1 == 5)
        int32_t rax_1
        
        if (i - 5 u<= 1)
            rax_1 = sx.d(*(rdx + 0xa))
        else
            rax_1 = 0
        
        if ((*(arg3 + 8) & 0xffe0) != 0 && rax_1 u<= 1)
            void* rdx_3 = &rcx[sx.q(rbx + 1) * 4]
            
            if (sub_142b5f280(arg1 + 0x238, *(rdx_3 + 4), zx.d(*(rdx_3 + 8)), arg3) == 0)
                return zx.q(rbx)
        
        int64_t rax_4 = *(arg1 + 0x280)
        
        if (*(rax_4 + rdi_1 + 0xc) s>= rbx)
            rbx = *(rax_4 + rdi_1 + 0xc)
    
    rcx = *(arg1 + 0x280)
    rbx += 1
    rdi_1 = sx.q(rbx) << 4
    i = *(rcx + rdi_1)
    rdx = rcx + rdi_1
    i_1 = i

return 0
