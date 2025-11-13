// 函数: sub_141460980
// 地址: 0x141460980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t count = arg2
int64_t rcx = sx.q(arg1[1].d)
uint32_t count_1 = 4

if (*(arg1 + 0xc) != 0 || rcx.d u> 4)
    count_1 = rcx.d + 0x10 + ((rcx * 3) u>> 3).d

int64_t result = 0x7fffffff

if (rcx.d s> count_1)
    count_1 = 0x7fffffff

*(arg1 + 0xc) = count_1
int64_t rbp = *arg1

if (count_1 != 0)
    char arg_8
    char* var_30_1 = &arg_8
    void*** (* var_38)() = j_sub_140597fc0
    arg_8 = 0
    void* rax_3 = sub_140a756e0(&var_38, &data_143958018)
    int64_t count_2 = sx.q(count_1)
    int32_t rdx = 8
    int64_t r15_1 = 8
    
    if (count_1 s>= 0x10)
        r15_1 = 0x10
    
    int64_t r12_2 = not.q(r15_1 - 1)
    int64_t rcx_5 = (*(rax_3 + 0x10) - 1 + r15_1) & r12_2
    result = rcx_5 + count_2
    
    if (result u> *(rax_3 + 0x18))
        if (count_1 s>= 0x10)
            rdx = 0x10
        
        sub_140b0e3d0(rax_3 + 0x10, rdx + count_1)
        rcx_5 = (*(rax_3 + 0x10) - 1 + r15_1) & r12_2
        result = rcx_5 + count_2
    
    *(rax_3 + 0x10) = result
    *arg1 = rcx_5
    
    if (rbp != 0 && count != 0)
        if (count_1 s<= count)
            count = count_1
        
        return memcpy(rcx_5, rbp, count)

return result
