// 函数: sub_141b91de0
// 地址: 0x141b91de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141f31af0(arg1, arg2, arg3)
void* const rdi = arg2[0x87]

if (rdi == 0)
    rdi = nullptr
else
    result = sub_141c122a0()
    
    if (result == 0)
        rdi = nullptr
    else
        int64_t rdx = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s> *(rdi + 0x38))
            rdi = nullptr
        else
            int64_t result_1 = result
            result = *(rdi + 0x30)
            
            if (*(result + (result_1 << 3)) != rdx)
                rdi = nullptr

void* const rdx_1

if (*(arg1 + 0xa8) == 0)
    rdx_1 = nullptr
else
    result = sub_141c122a0()
    
    if (result == 0)
        rdx_1 = nullptr
    else
        rdx_1 = *(arg1 + 0xa8)
        int64_t r8 = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s> *(rdx_1 + 0x38))
            rdx_1 = nullptr
        else
            int64_t result_2 = result
            result = *(rdx_1 + 0x30)
            
            if (*(result + (result_2 << 3)) != r8)
                rdx_1 = nullptr

if (rdi != rdx_1)
    return result

bool cond:0_1 = arg2[0xa1] == 0
void* rdi_1 = *(arg1 + 0xb0)
arg2[0xa0] = rdi_1

if (not(cond:0_1) && rdi_1 != 0)
    void arg_8
    int64_t* rax = sub_140b58170(&arg_8, "SlateUI", 1)
    sub_142131d00(arg2[0xa1], *rax, rdi_1)

return sub_141ee8490(arg2)
