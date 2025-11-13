// 函数: sub_142686c50
// 地址: 0x142686c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = *(arg2 + 0x100)
int64_t i = *(arg1 + 0x18)
int64_t* rcx = r10
int64_t i_1 = i
void* r9 = &r10[sx.q(*(arg2 + 0x108))]
int32_t rcx_1

if (r10 == r9)
label_142686c89:
    rcx_1 = -1
else
    while (*(*rcx + 0x28) != i)
        rcx = &rcx[1]
        
        if (rcx == r9)
            goto label_142686c89
    
    rcx_1 = ((rcx - r10) s>> 3).d

if (rcx_1 == 0xffffffff)
    return 0

void* result = r10[sx.q(rcx_1)]

if (result != 0)
    void* rax_1 = sub_1426a0de0()
    void* rdx_1 = *(result + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        return result

return 0
