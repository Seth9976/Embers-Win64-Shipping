// 函数: sub_1429d1b70
// 地址: 0x1429d1b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = arg1.b
int64_t var_18 = -2
int64_t r8 = arg1[1]
int64_t r10 = *arg1
int64_t rcx_2 = (r8 - r10) s>> 2

if (arg2 u< rcx_2)
    arg1[1] = r8 + ((arg2 - rcx_2) << 2)
else if (rcx_2 u< arg2)
    int64_t rdx = arg2 - rcx_2
    int64_t r9_1 = arg1[2]
    
    if ((r9_1 - r8) s>> 2 u< rdx)
        if (0x3fffffffffffffff - rcx_2 u< rdx)
            std::_Xlength_error("vector<T> too long")
            noreturn
        
        int64_t rdx_1 = rdx + rcx_2
        int64_t r9_3 = (r9_1 - r10) s>> 2
        uint64_t rax_6 = r9_3 u>> 1
        int64_t rcx_3 = 0
        
        if (0x3fffffffffffffff - rax_6 u>= r9_3)
            rcx_3 = rax_6 + r9_3
        
        if (rcx_3 u>= rdx_1)
            rdx_1 = rcx_3
        
        sub_1429d01e0(arg1, rdx_1)
    
    int32_t* rcx_5 = arg1[1]
    sub_1429cfe80(rcx_5, arg2 - ((rcx_5 - *arg1) s>> 2))
    arg1[1] += (arg2 - ((arg1[1] - *arg1) s>> 2)) << 2
