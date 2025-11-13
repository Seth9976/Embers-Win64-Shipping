// 函数: sub_140a693d0
// 地址: 0x140a693d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
EnterCriticalSection(arg1)
int32_t result

if (arg1->__offset(0x1830).d == arg1->__offset(0x186c).d)
label_140a69472:
    int32_t var_18
    sub_140a694e0(&arg1[1], &var_18)
    int32_t rax_1 = var_18
    int32_t* var_10
    *var_10 = rsi.d
    *(var_10 + 8) = arg3
    var_10[4] = 0xffffffff
    void arg_10
    result = sub_140a6f7b0(&arg1[1], &arg_10, rsi.d, var_10, rax_1, nullptr)
else
    void* r9_1 = arg1->__offset(0x1a70).q
    void* r10_1 = arg1 + 0x1870
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    result = *(r10_1 + (((sx.q(arg1->__offset(0x1a78).d) - 1) & rsi) << 2))
    
    if (result == 0xffffffff)
        goto label_140a69472
    
    void* r9_2 = arg1->__offset(0x1828).q
    
    while (true)
        void* r8_3 = &arg1[1]
        
        if (r9_2 != 0)
            r8_3 = r9_2
        
        int64_t rdx = sx.q(result) * 3
        
        if (*(r8_3 + (rdx << 3)) == rsi.d)
            break
        
        result = *(r8_3 + (rdx << 3) + 0x10)
        
        if (result == 0xffffffff)
            goto label_140a69472
    
    if (result == 0xffffffff)
        goto label_140a69472

if (arg1 == 0)
    return result

return LeaveCriticalSection(arg1)
