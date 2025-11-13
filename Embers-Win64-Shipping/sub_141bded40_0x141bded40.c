// 函数: sub_141bded40
// 地址: 0x141bded40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x110))
int32_t rdx = 0
int32_t r8 = 0

if (rbx.d s<= 0)
label_141bded8f:
    r8 = -1
else
    int64_t r9_1 = 0
    
    while (true)
        void* rax_2
        
        if (r9_1 s>= 0 && r8 s< *(arg1 + 0x110))
            rax_2 = *(*(arg1 + 0x108) + (r9_1 << 3))
        
        int64_t rax
        
        if (r9_1 s< 0 || r8 s>= *(arg1 + 0x110) || rax_2 == 0)
            rax = 0
        else
            rax = *(rax_2 + 0x30)
        
        if (rax == arg2)
            break
        
        r8 += 1
        r9_1 += 1
        
        if (r9_1 s>= rbx)
            goto label_141bded8f

*(arg1 + 0x120) = r8
int64_t* rcx = *(arg1 + 0x128)

if (rcx == 0)
    return 

int32_t rax_3 = (rbx - 1).d

if (rax_3 s<= 0)
    rax_3 = 0

if (r8 s>= 0)
    if (r8 s< rax_3)
        rax_3 = r8
    
    rdx = rax_3

return sub_140f5d090(rcx, rdx) __tailcall
