// 函数: sub_1429d19e0
// 地址: 0x1429d19e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int16_t* rsi = arg3
int64_t rdx = arg1[1]
int64_t r10 = *arg1
int64_t rcx_2 = (rdx - r10) s>> 1

if (rcx_2 u> arg2)
    arg1[1] = rdx + ((arg2 - rcx_2) << 1)
else if (rcx_2 u< arg2)
    if (rsi u>= rdx || r10 u> rsi)
        int64_t r9_4 = arg2 - rcx_2
        int64_t r11_4 = arg1[2]
        
        if ((r11_4 - rdx) s>> 1 u< r9_4)
            if (0x7fffffffffffffff - rcx_2 u< r9_4)
                std::_Xlength_error("vector<T> too long")
                noreturn
            
            int64_t rdx_2 = rcx_2 + r9_4
            int64_t r11_6 = (r11_4 - r10) s>> 1
            uint64_t rax_14 = r11_6 u>> 1
            int64_t rcx_5 = 0
            
            if (0x7fffffffffffffff - rax_14 u>= r11_6)
                rcx_5 = rax_14 + r11_6
            
            if (rcx_5 u>= rdx_2)
                rdx_2 = rcx_5
            
            std::vector<uint64_t,class std::allocator<uint64_t> >::_Reallocate_exactly(arg1, rdx_2)
    else
        int64_t r9_2 = arg2 - rcx_2
        int64_t r11_1 = arg1[2]
        
        if ((r11_1 - rdx) s>> 1 u< r9_2)
            if (0x7fffffffffffffff - rcx_2 u< r9_2)
                std::_Xlength_error("vector<T> too long")
                noreturn
            
            int64_t rdx_1 = rcx_2 + r9_2
            int64_t r11_3 = (r11_1 - r10) s>> 1
            uint64_t rax_6 = r11_3 u>> 1
            int64_t rcx_3 = 0
            
            if (0x7fffffffffffffff - rax_6 u>= r11_3)
                rcx_3 = rax_6 + r11_3
            
            if (rcx_3 u>= rdx_1)
                rdx_1 = rcx_3
            
            std::vector<uint64_t,class std::allocator<uint64_t> >::_Reallocate_exactly(arg1, rdx_1)
        
        rsi = *arg1 + ((rsi - r10) s>> 1 << 1)
    
    int16_t* rcx_7 = arg1[1]
    char var_28_1 = arg1.b
    sub_1429cfe20(rcx_7, arg2 - ((rcx_7 - *arg1) s>> 1), rsi)
    arg1[1] += (arg2 - ((arg1[1] - *arg1) s>> 1)) * 2
