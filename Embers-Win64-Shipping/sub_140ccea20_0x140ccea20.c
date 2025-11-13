// 函数: sub_140ccea20
// 地址: 0x140ccea20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *(arg1 + 0xe0)

if (*(arg1 + 0x1c8) == 0 && rbp s> 0)
    int64_t* rcx = *(arg1 + 0x2d8)
    (*(*rcx + 0x178))(rcx, sx.q(*(arg1 + 0xe4)))
    int32_t rdx_2 = *(arg1 + 0xc8)
    
    if (rdx_2 s> 0)
        int64_t* rcx_1 = *(arg1 + 0x2d8)
        char rax_2
        
        if (*(arg1 + 0x2a2) == 0)
            int64_t rax_3 = sx.q(*(arg1 + 0xe4))
            int64_t r9_1 = *rcx_1
            rax_2 = (*(r9_1 + 0x198))(rcx_1, rax_3, sx.q(rdx_2 - rax_3.d), r9_1)
        else
            rax_2, arg2 = sub_140bb43d0(rcx_1, *(arg1 + 0x32c), *(arg1 + 0x32d), 
                zx.o(*(arg1 + 0x338)), *(arg1 + 0x334))
        
        if (rax_2 == 0)
            return 2

if (rbp s> *(arg1 + 0x1cc))
    sub_1405dadb0(arg1 + 0x1c0, rbp)

int32_t rsi_1 = *(arg1 + 0x1c8)
int32_t var_838 = 0
char var_834_1 = 0
int32_t var_32_1 = 0

if (rsi_1 s>= rbp)
    return 1

while (true)
    sub_140b5b600(arg1 + 0x200, &var_838, arg2)
    void arg_10
    int64_t* rax_4
    rax_4, arg2 = sub_140b57e80(&arg_10, &var_838)
    int64_t r15_1 = sx.q(*(arg1 + 0x1c8))
    int32_t rbx_1 = *rax_4
    int32_t rax_5 = (r15_1 + 1).d
    *(arg1 + 0x1c8) = rax_5
    
    if (rax_5 s> *(arg1 + 0x1cc))
        sub_1405a4cf0(arg1 + 0x1c0)
    
    *(*(arg1 + 0x1c0) + (r15_1 << 2)) = rbx_1
    int32_t rax_8 = rsi_1 & 0x8000007f
    
    if (rax_8 s< 0)
        rax_8 = ((rax_8 - 1) | 0xffffff80) + 1
    
    if (rax_8 == 0x7f && *(arg1 + 0x1c8) != rbp)
        char rax_11
        rax_11, arg2 = sub_140cc1900(arg1, u"serializing name map", rax_8 - 0x7e)
        
        if (rax_11 != 0)
            return 2
    
    rsi_1 += 1
    
    if (rsi_1 s>= rbp)
        return 1
