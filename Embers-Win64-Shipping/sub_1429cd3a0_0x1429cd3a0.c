// 函数: sub_1429cd3a0
// 地址: 0x1429cd3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = arg1.b
int64_t var_18 = -2
int64_t r10 = arg1[1]
int64_t r8 = *arg1
int64_t rcx_1 = r10 - r8

if (arg2 u< rcx_1)
    arg1[1] = r8 + arg2
else if (rcx_1 u< arg2)
    int64_t rdx = arg2 - rcx_1
    int64_t r9_1 = arg1[2]
    
    if (r9_1 - r10 u< rdx)
        if (not.q(rcx_1) u< rdx)
            std::_Xlength_error("vector<T> too long")
            noreturn
        
        int64_t rdx_1 = rdx + rcx_1
        int64_t r9_2 = r9_1 - r8
        uint64_t rax_6 = r9_2 u>> 1
        int64_t r8_1 = 0
        
        if (not.q(rax_6) u>= r9_2)
            r8_1 = rax_6 + r9_2
        
        if (r8_1 u>= rdx_1)
            rdx_1 = r8_1
        
        sub_1429cab70(arg1, rdx_1)
    
    arg1[1] - *arg1
    arg1[1] += *arg1 - arg1[1] + arg2
