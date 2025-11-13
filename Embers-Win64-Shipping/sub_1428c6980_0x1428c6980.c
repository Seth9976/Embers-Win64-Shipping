// 函数: sub_1428c6980
// 地址: 0x1428c6980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t rbx = 0
int64_t var_48 = 0
int64_t var_40

if (arg5 != 0 && sub_142898c70(arg1) s>= 2)
    void* const _Base = sub_1428a6730(sx.q(sub_142898c70(arg1)) * 0x18)
    
    if (_Base == 0)
        return _Base
    
    int64_t rax_3 = sub_1428a6730(sx.q(arg3))
    int64_t r13_1 = rax_3
    
    if (rax_3 == 0)
        sub_1428a6780(_Base)
        return nullptr
    
    int32_t r15_1 = 0
    var_48 = rax_3
    
    if (sub_142898c70(arg1) s> 0)
        void* rsi_1 = _Base + 0x10
        int32_t rax_9
        
        do
            var_40 = sub_142898ea0(arg1, r15_1)
            *(rsi_1 - 0x10) = var_48
            *(rsi_1 - 8) = sub_1428c6210(&var_40, &var_48, arg4, 0xffffffff, arg6)
            rsi_1 += 0x18
            *(rsi_1 - 0x18) = var_40
            r15_1 += 1
            rax_9 = sub_142898c70(arg1)
        while (r15_1 s< rax_9)
        r13_1 = rax_3
    
    qsort(_Base, sx.q(sub_142898c70(arg1)), 0x18, sub_1428c6f40)
    var_48 = *arg2
    int32_t rbp_1 = 0
    
    if (sub_142898c70(arg1) s> 0)
        void* rsi_2 = _Base + 8
        int32_t rax_14
        
        do
            memcpy(var_48, *(rsi_2 - 8), *rsi_2)
            int64_t rax_13 = sx.q(*rsi_2)
            rsi_2 += 0x18
            var_48 += rax_13
            rbp_1 += 1
            rax_14 = sub_142898c70(arg1)
        while (rbp_1 s< rax_14)
    
    *arg2 = var_48
    
    if (arg5 == 2 && sub_142898c70(arg1) s> 0)
        void* rsi_3 = _Base + 0x10
        int32_t rax_17
        
        do
            sub_142898dc0(arg1, rbx, *rsi_3)
            rsi_3 += 0x18
            rbx += 1
            rax_17 = sub_142898c70(arg1)
        while (rbx s< rax_17)
    
    sub_1428a6780(_Base)
    sub_1428a6780(r13_1)
    return 1

if (sub_142898c70(arg1) s> 0)
    int32_t rax_20
    
    do
        var_40 = sub_142898ea0(arg1, rbx)
        sub_1428c6210(&var_40, arg2, arg4, 0xffffffff, arg6)
        rbx += 1
        rax_20 = sub_142898c70(arg1)
    while (rbx s< rax_20)

return 1
