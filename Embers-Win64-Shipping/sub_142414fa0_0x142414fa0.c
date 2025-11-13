// 函数: sub_142414fa0
// 地址: 0x142414fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = *arg3

if (rax == data_143e1e128 || rax == data_143e1dfc0)
    int32_t r9_1 = *(arg1 + 0x58)
    int32_t rcx_2 = *(arg1 + 0x64)
    
    if (rcx_2 s< r9_1 - 1)
        int32_t rcx_3 = rcx_2 + (((*(arg1 + 0xb0) & 2) * 2) | 1)
        
        if (rcx_3 s>= r9_1)
            rcx_3 = r9_1 - 1
        
        *(arg1 + 0x64) = rcx_3
else
    if (rax != data_143e1e140 && rax != data_143e1dfd8)
        sub_140d430a0(arg3)
        int64_t rax_1
        rax_1.b = 0
        return rax_1
    
    int32_t rcx_1 = *(arg1 + 0x64)
    
    if (rcx_1 s> 0)
        int32_t rax_5 = not.d(*(arg1 + 0xb0) * 2) | 0xfffffffb
        rax = zx.q(rax_5 + rcx_1)
        
        if (rax_5 + rcx_1 s< 0)
            rax = 0
        
        *(arg1 + 0x64) = rax.d

int64_t* rbx = arg3[2]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

rax.b = 1
return rax
