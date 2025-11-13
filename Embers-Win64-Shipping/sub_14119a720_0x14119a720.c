// 函数: sub_14119a720
// 地址: 0x14119a720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg2
int64_t rcx = sx.q(arg1[1].d)
int64_t rbx = 4

if (*(arg1 + 0xc) != 0 || rcx.d u> 4)
    rbx = rcx + 0x10 + ((rcx * 3) u>> 3)

int64_t result = 0x7fffffff

if (rcx.d s> rbx.d)
    rbx = 0x7fffffff

*(arg1 + 0xc) = rbx.d
int64_t rbp = *arg1

if (rbx.d != 0)
    char arg_8
    char* var_30_1 = &arg_8
    int32_t r15_2 = (rbx * 3).d << 3
    arg_8 = 0
    void*** (* var_38)() = j_sub_140597fc0
    void* rax_3 = sub_140a756e0(&var_38, &data_143958018)
    int32_t rdx = 8
    int64_t r13_1 = 8
    
    if (r15_2 s>= 0x10)
        r13_1 = 0x10
    
    int64_t r12_2 = not.q(r13_1 - 1)
    int64_t rcx_5 = (*(rax_3 + 0x10) - 1 + r13_1) & r12_2
    result = sx.q(r15_2) + rcx_5
    
    if (result u> *(rax_3 + 0x18))
        if (r15_2 s>= 0x10)
            rdx = 0x10
        
        sub_140b0e3d0(rax_3 + 0x10, rdx + r15_2)
        rcx_5 = (*(rax_3 + 0x10) - 1 + r13_1) & r12_2
        result = sx.q(r15_2) + rcx_5
    
    *(rax_3 + 0x10) = result
    *arg1 = rcx_5
    
    if (rbp != 0 && rsi != 0)
        if (rbx.d s<= rsi)
            rsi = rbx.d
        
        return memcpy(rcx_5, rbp, rsi * 0x18)

return result
