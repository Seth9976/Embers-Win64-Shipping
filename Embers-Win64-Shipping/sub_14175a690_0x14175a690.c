// 函数: sub_14175a690
// 地址: 0x14175a690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*arg2)
int64_t rdi = sx.q(*(arg1 + 0x88))

if (rbp.d s>= rdi.d)
label_14175a704:
    int32_t i_1 = rbp.d - rdi.d + 1
    int32_t rax_1 = rdi.d + i_1
    *(arg1 + 0x88) = rax_1
    
    if (rax_1 s> *(arg1 + 0x8c))
        sub_140adefe0(arg1 + 0x80)
    
    if (i_1 != 0)
        char* rax_4 = *(arg1 + 0x80) + rdi * 0x24 + 0x20
        int32_t i
        
        do
            *rax_4 = 0
            rax_4 = &rax_4[0x24]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    goto label_14175a747

int64_t result = *(arg1 + 0x80)
int64_t r10_2 = rbp * 9
int32_t* rbx_1 = result + (r10_2 << 2)
int32_t* r8_1

if (*(result + (r10_2 << 2) + 0x20) == 0 || rbx_1 == 0)
    if (rbp.d s>= rdi.d)
        goto label_14175a704
    
label_14175a747:
    int64_t rcx_3 = rbp * 9
    *(*(arg1 + 0x80) + (rcx_3 << 2) + 0x20) = 1
    r8_1 = *(arg1 + 0x80) + (rcx_3 << 2)
else
    if (*rbx_1 != 0xffffffff)
        return result
    
    sub_14174e490(arg1, arg2, rbx_1)
    r8_1 = rbx_1

return sub_14172ecf0(arg1, arg2, r8_1, arg3, arg4)
