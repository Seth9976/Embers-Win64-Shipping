// 函数: sub_14281f460
// 地址: 0x14281f460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = nullptr
class std::wostream* rcx = arg1[3]
class std::wostream* result

if (rcx == 0)
    int64_t r9_1 = *arg1
    int64_t rcx_3 = arg1[4] + 1 + arg3
    int64_t r8_1 = arg1[1] - r9_1
    int64_t rdx_1 = r8_1
    
    if (r8_1 u< rcx_3)
        rdx_1 = rcx_3
    
    if (rdx_1 u< r8_1)
        arg1[1] = r9_1 + rdx_1
    else if (rdx_1 u> r8_1)
        if (rdx_1 u<= arg1[2] - r9_1)
            arg1[1] = sub_14281f244(arg1[1], rdx_1 - r8_1)
        else
            sub_14281f11c(arg1, rdx_1)
    
    result = std::_Uninitialized_move<uint64_t* __ptr64,class std::allocator<uint64_t> >(arg2, 
        arg2 + arg3, *arg1 + arg1[4])
else
    result = std::ostream::write(rcx, arg2, arg3)

if (arg3 != 0)
    do
        sub_14281f328(arg1, *(rdi + arg2))
        rdi = &rdi[1]
    while (rdi u< arg3)

return result
