// 函数: sub_141e22a40
// 地址: 0x141e22a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0xa0)

if (rbp == 0)
    void* arg_8 = arg2
    void** var_10 = &arg_8
    int64_t (* var_18)(int64_t* arg1, int64_t* arg2) = sub_141e18180
    return sub_140d3bfe0(arg1, &var_18, 0, 0, 0x20000000)

void* rsi = nullptr
*(arg2 + 0x48) = 0

if (*(arg2 + 0x4c) s<= 0xffffffff)
    sub_140775b80(arg2, 0)

void* rax = sub_14255cbc0()

if (rax != 0)
    void* rax_1 = sub_142459c10()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rax + 0x38) && *(*(rax + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            rsi = rax

if (rsi != sub_142459c10())
    return sub_141e10a40(rbp, rax, arg2) __tailcall

return sub_141e10830(rbp, rax, arg2) __tailcall
