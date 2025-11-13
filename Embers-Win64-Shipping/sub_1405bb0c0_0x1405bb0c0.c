// 函数: sub_1405bb0c0
// 地址: 0x1405bb0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0xffffffff
int32_t arg_1c = 0
int32_t arg_8

if (arg3 != 0)
    sub_140d3a3a0(&arg_8, arg3)
    arg_18.q = arg_8.q

sub_1405ba8e0(arg1, &arg_8, &arg_18)
int64_t rax_2 = sx.q(arg_8)
void* const rax_5

if (rax_2.d == 0xffffffff)
    rax_5 = nullptr
else
    rax_5 = rax_2 * 0x50 + *arg1

int32_t* rsi = rax_5 + 8

if (rax_5 == 0)
    rsi = nullptr

if (rsi == 0)
    goto label_1405bb1ef

if (sub_140d3e110(&rsi[0xc]) != 0)
    sub_1405ac210(arg2, rsi)
else
    if (sub_140d3c6e0(rsi) == 0)
        goto label_1405bb1e5
    
    sub_140cea340()
    void* rax_9
    bool rcx_4
    
    if (*(rsi + 8) == 0)
        rcx_4 = true
        rax_9 = nullptr
    else
        bool cond:1_1 = sub_140d3e110(&rsi[4]) == 0
        rax_9 = *(rsi + 8)
        rcx_4 = cond:1_1
    
    if (rcx_4 == 0 || rsi[8] == 0)
        goto label_1405bb1bc
    
    rax_9 = sub_140cd0630(&rsi[2], nullptr, 0)
    
    if (rax_9 == 0 || (data_143e1b828 & *(*(rax_9 + 8) + 0x10)) == 0)
        if (*(rsi + 8) == 0)
            goto label_1405bb1ef
        
        rsi[4] = 0xffffffff
        rsi[5] = 0
    label_1405bb1e5:
        *(rsi + 8) = 0
    label_1405bb1ef:
        sub_141a3b760(arg1, arg3)
        sub_1405ba8e0(arg1, &arg_8, &arg_18)
        int64_t rax_11 = sx.q(arg_8)
        int64_t rdx_7
        
        if (rax_11.d != 0xffffffff)
            rdx_7 = rax_11 * 0x50
        
        if (rax_11.d == 0xffffffff || rdx_7 == neg.q(*arg1))
            sub_140d3a3a0(arg2, nullptr)
            arg2[1] = 0
            arg2[2].d = 0xffffffff
            __builtin_memset(arg2 + 0x14, 0, 0x1c)
            sub_140d3a3a0(&arg2[6], nullptr)
            sub_140d3a3a0(&arg2[7], nullptr)
        else
            sub_1405ac210(arg2, rdx_7 + *arg1 + 8)
    else
        *(rsi + 8) = rax_9
    label_1405bb1bc:
        
        if (rax_9 == 0)
            goto label_1405bb1ef
        
        sub_1405ac210(arg2, rsi)

return arg2
