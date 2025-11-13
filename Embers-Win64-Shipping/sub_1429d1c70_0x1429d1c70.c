// 函数: sub_1429d1c70
// 地址: 0x1429d1c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
char* rsi = arg3
int64_t r9 = arg1[1]
int64_t r8 = *arg1
int64_t rcx_1 = r9 - r8

if (arg2 u< rcx_1)
    arg1[1] = r8 + arg2
else if (rcx_1 u< arg2)
    if (rsi u>= r9 || r8 u> rsi)
        int64_t rdx_2 = arg2 - rcx_1
        int64_t r10_3 = arg1[2]
        
        if (r10_3 - r9 u< rdx_2)
            if (not.q(rcx_1) u< rdx_2)
                std::_Xlength_error("vector<T> too long")
                noreturn
            
            int64_t rdx_3 = rdx_2 + rcx_1
            int64_t r10_4 = r10_3 - r8
            uint64_t rax_13 = r10_4 u>> 1
            int64_t r8_2 = 0
            
            if (not.q(rax_13) u>= r10_4)
                r8_2 = rax_13 + r10_4
            
            if (r8_2 u>= rdx_3)
                rdx_3 = r8_2
            
            sub_1429cab70(arg1, rdx_3)
    else
        int64_t rdx = arg2 - rcx_1
        int64_t r10_1 = arg1[2]
        
        if (r10_1 - r9 u< rdx)
            if (not.q(rcx_1) u< rdx)
                std::_Xlength_error("vector<T> too long")
                noreturn
            
            int64_t rdx_1 = rdx + rcx_1
            int64_t r10_2 = r10_1 - r8
            uint64_t rax_6 = r10_2 u>> 1
            int64_t r8_1 = 0
            
            if (not.q(rax_6) u>= r10_2)
                r8_1 = rax_6 + r10_2
            
            if (r8_1 u>= rdx_1)
                rdx_1 = r8_1
            
            sub_1429cab70(arg1, rdx_1)
        
        rsi = rsi - r8 + *arg1
    
    char* rcx_8 = arg1[1]
    char var_28_1 = arg1.b
    sub_1429cfe50(rcx_8, arg2 - (rcx_8 - *arg1), rsi)
    arg1[1] += *arg1 - arg1[1] + arg2
