// 函数: sub_14119aa60
// 地址: 0x14119aa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg2
int64_t rcx = sx.q(arg1[1].d)
int32_t rbx = 4

if (*(arg1 + 0xc) != 0 || rcx.d u> 4)
    rbx = rcx.d + 0x10 + ((rcx * 3) u>> 3).d

int64_t result = 0x7fffffff

if (rcx.d s> rbx)
    rbx = 0x7fffffff

*(arg1 + 0xc) = rbx
int64_t rbp = *arg1

if (rbx != 0)
    char arg_8
    char* var_30_1 = &arg_8
    void*** (* var_38)() = j_sub_140597fc0
    arg_8 = 0
    int32_t r12_1 = rbx * 0x130
    uint64_t rcx_2 = 0x10
    int64_t* r14_1 = sub_140a756e0(&var_38, &data_143958018) + 0x10
    int32_t rax_4 = 8
    
    if (r12_1 s>= 0x10)
        rax_4 = 0x10
    
    if (r12_1 s>= 0x10)
        rcx_2 = zx.q(rax_4)
    
    uint64_t r15_1 = zx.q(rcx_2.d)
    int64_t r13_2 = not.q(rcx_2 - 1)
    int64_t rcx_6 = (*r14_1 - 1 + r15_1) & r13_2
    result = sx.q(r12_1) + rcx_6
    
    if (result u> r14_1[1])
        sub_140b0e3d0(r14_1, r15_1.d + r12_1)
        rcx_6 = (*r14_1 - 1 + r15_1) & r13_2
        result = sx.q(r12_1) + rcx_6
    
    *r14_1 = result
    *arg1 = rcx_6
    
    if (rbp != 0 && rsi != 0)
        if (rbx s<= rsi)
            rsi = rbx
        
        return memcpy(rcx_6, rbp, rsi * 0x130)

return result
