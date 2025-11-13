// 函数: sub_1421bf190
// 地址: 0x1421bf190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
uint64_t rbx
rbx.b = 0
int32_t rbp = 0
int32_t i = 0
int32_t rax_3

if (*(rax + 0x48) s<= 0)
    rax_3 = *(arg1 + 0x10c)
else
    do
        if (rbx.b != 0)
            goto label_1421bf1f4
        
        void* rax_1 = sub_142192ca0(rax, i)
        
        if (rax_1 != 0)
            rbx = zx.q(rbx.b)
            
            if (*(*(rax_1 + 0x30) + 0xa9) != 0)
                rbx = 1
        
        rax = *(arg1 + 0x10)
        i += 1
    while (i s< *(rax + 0x48))
    
    if (rbx.b == 0)
        rax_3 = *(arg1 + 0x10c)
    else
    label_1421bf1f4:
        rax_3 = *(arg1 + 0x10c)
        rbp = 8
        *(arg1 + 0x38) = rax_3

int64_t* rcx_1 = *(arg1 + 0x1d0)
*(arg1 + 0x1dc) = rax_3 + rbp

if (rcx_1 != 0)
    int64_t rdx_2 = *rcx_1
    
    if ((*(rdx_2 + 0x380))(rcx_1, rdx_2) != 0)
        *(arg1 + 0x1e0) = *(arg1 + 0x10c) + rbp + 0x48
        return zx.q(rbp + 0x80)

return zx.q(rbp + 0x48)
