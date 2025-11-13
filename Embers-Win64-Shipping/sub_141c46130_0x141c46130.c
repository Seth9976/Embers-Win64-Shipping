// 函数: sub_141c46130
// 地址: 0x141c46130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0x68)
int32_t r15 = arg4
int64_t rdi = sx.q(arg2) * 9
int32_t rcx = *(rbx + (rdi << 3))
int32_t r9 = *(rbx + (rdi << 3) + 4)
int32_t rax_2 = rcx * r9

if (r15 s> rax_2)
    r15 = rax_2

int32_t i_1 = 0
*(rbx + (rdi << 3) + 0x20) = r15
int32_t i = 0

if (rcx s> 0)
    int64_t rbp_1 = 0
    
    do
        memset(*(*(rbx + (rdi << 3) + 0x38) + rbp_1), 0, sx.q(*(rbx + (rdi << 3) + 0x18)) << 2)
        i += 1
        rbp_1 += 0x10
    while (i s< *(rbx + (rdi << 3)))
    
    r9 = *(rbx + (rdi << 3) + 4)

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r15)
int32_t rcx_3
rcx_3.b = mods.dp.d(temp2:temp3, r9) != 0
int32_t result = divs.dp.d(temp2:temp3, r9) + rcx_3
*(rbx + (rdi << 3) + 0x1c) = result

if (result s> 0)
    int64_t r14 = 0
    
    do
        int32_t rbp_2 = *(rbx + (rdi << 3) + 4)
        int32_t rcx_5 = rbp_2 * i_1
        int32_t rax_7 = *(rbx + (rdi << 3) + 0x20) - rcx_5
        
        if (rbp_2 s<= rax_7)
            rax_7 = rbp_2
        
        int32_t rbp_3 = rbp_2 - rax_7
        int64_t r15_1 = sx.q(rax_7) << 2
        memcpy(*(rbx + (rdi << 3) + 0x28), arg3 + (sx.q(rcx_5) << 2), r15_1.d)
        
        if (rbp_3 s> 0)
            memset(*(rbx + (rdi << 3) + 0x28) + r15_1, 0, sx.q(rbp_3) << 2)
        
        int64_t* rcx_9 = *(rbx + (rdi << 3) + 8)
        result = (*(*rcx_9 + 0x20))(rcx_9, *(rbx + (rdi << 3) + 0x28), 
            *(*(rbx + (rdi << 3) + 0x38) + r14))
        i_1 += 1
        r14 += 0x10
    while (i_1 s< *(rbx + (rdi << 3) + 0x1c))

return result
