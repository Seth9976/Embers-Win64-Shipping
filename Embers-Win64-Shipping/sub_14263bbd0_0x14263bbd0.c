// 函数: sub_14263bbd0
// 地址: 0x14263bbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0xb0)
    *(arg1 + 8) += 1

int64_t rbp = sx.q(*(arg1 + 0x58))
int32_t rax = (rbp + 1).d
*(arg1 + 0x58) = rax

if (rax s> *(arg1 + 0x5c))
    sub_1405a4d70(arg1 + 0x50)

*(*(arg1 + 0x50) + (rbp << 3)) = arg2

if ((*(arg2 + 0x3c) & 1) != 0)
    int64_t rbp_1 = sx.q(*(arg1 + 0x48))
    int32_t rax_2 = (rbp_1 + 1).d
    *(arg1 + 0x48) = rax_2
    
    if (rax_2 s> *(arg1 + 0x4c))
        sub_1405a4d70(arg1 + 0x40)
    
    *(*(arg1 + 0x40) + (rbp_1 << 3)) = arg2
    
    if (*(arg1 + 0x48) == 1)
        char rax_5 = (*(*(arg1 - 0xb0) + 0x3e8))(arg1 - 0xb0)
        
        if ((*(arg1 - 0x26) & 1) != rax_5)
            int64_t r9_1 = *(arg1 - 0xb0)
            (*(r9_1 + 0x278))(arg1 - 0xb0, zx.q(rax_5), 0, r9_1)

if (((*(arg2 + 0x3c) u>> 1).b & 1) != 0)
    int64_t rbp_2 = sx.q(*(arg1 + 0x18))
    int32_t rax_8 = (rbp_2 + 1).d
    *(arg1 + 0x18) = rax_8
    
    if (rax_8 s> *(arg1 + 0x1c))
        sub_1405a4d70(arg1 + 0x10)
    
    *(*(arg1 + 0x10) + (rbp_2 << 3)) = arg2
    *(arg1 + 0xc) |= 2

char rax_10

if (*(arg2 + 0x50) != 0)
    rax_10 = sub_140d3e110(arg2 + 0x48)

int64_t* rcx_7

if (*(arg2 + 0x50) == 0 || rax_10 == 0)
    rcx_7 = nullptr
else
    rcx_7 = *(arg2 + 0x50)

uint32_t result = *(arg2 + 0x3c) u>> 5

if ((result.b & 1) == 0 && rcx_7 != 0)
    result = (*(*rcx_7 + 0x38))(rcx_7, arg2)

if (arg1 != 0xb0)
    result = *(arg1 + 8) - 1
    bool cond:1_1 = *(arg1 + 0x38) == 0
    *(arg1 + 8) = result
    
    if (not(cond:1_1) && (*(arg1 + 0xc) & 1) == 0 && result == 0)
        return sub_14263c400(arg1 - 0xb0)

return result
