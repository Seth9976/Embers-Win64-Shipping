// 函数: sub_142167020
// 地址: 0x142167020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x300)
int32_t arg_8 = *(arg1 + 0x308)
int64_t rsi = rdi[0x14]
rdi[0x14] = 0
sub_140b560b0(rdi, 0)
int64_t* rcx_1 = rdi[1]
int32_t* rdx = *rcx_1

if (&rdx[1] u> rcx_1[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(rdi + 0x29) & 0x20) != 0)
        sub_140b54070(rdi, rdx_1, arg2)
    else
        (*(*rdi + 0x150))(rdi, rdx_1, 4)
else
    arg_8 = *rdx
    int64_t* rax_3 = rdi[1]
    *rax_3 += 4

rdi[0x14] = rsi
void* result = *(arg1 + 0x300)

if (*(result + 0x100) != 0)
    int64_t rsi_1 = sx.q(*(arg1 + 0x2f8))
    int32_t rax_5 = (rsi_1 + 1).d
    *(arg1 + 0x2f8) = rax_5
    
    if (rax_5 s> *(arg1 + 0x2fc))
        sub_1405a4d70(arg1 + 0x2f0)
    
    result = *(arg1 + 0x300)
    *(*(arg1 + 0x2f0) + (rsi_1 << 3)) = result

*(arg1 + 0x308) = 0
*(arg1 + 0x300) = 0
return result
