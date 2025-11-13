// 函数: sub_1429cd2b0
// 地址: 0x1429cd2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
int64_t r8 = arg1[1]
int64_t r10 = *arg1
int64_t rcx_2 = (r8 - r10) s>> 1

if (arg2 u< rcx_2)
    arg1[1] = r8 + ((arg2 - rcx_2) << 1)
else if (rcx_2 u< arg2)
    int64_t rdx = arg2 - rcx_2
    int64_t r9_1 = arg1[2]
    
    if ((r9_1 - r8) s>> 1 u< rdx)
        if (0x7fffffffffffffff - rcx_2 u< rdx)
            std::_Xlength_error("vector<T> too long")
            noreturn
        
        int64_t rdx_1 = rdx + rcx_2
        int64_t r9_3 = (r9_1 - r10) s>> 1
        uint64_t rax_6 = r9_3 u>> 1
        int64_t rcx_3 = 0
        
        if (0x7fffffffffffffff - rax_6 u>= r9_3)
            rcx_3 = rax_6 + r9_3
        
        if (rcx_3 u>= rdx_1)
            rdx_1 = rcx_3
        
        std::vector<uint64_t,class std::allocator<uint64_t> >::_Reallocate_exactly(arg1, rdx_1)
    
    int64_t rcx_5 = arg1[1]
    memset(rcx_5, 0, (arg2 - ((rcx_5 - *arg1) s>> 1)) * 2)
    arg1[1] += (arg2 - ((arg1[1] - *arg1) s>> 1)) * 2
