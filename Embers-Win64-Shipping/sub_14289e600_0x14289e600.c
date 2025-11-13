// 函数: sub_14289e600
// 地址: 0x14289e600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rbp = 0
int32_t rcx = arg1[1]
int32_t rcx_2

if (rcx == 0x17)
    rcx_2 = *arg1
    
    if (rcx_2 == 0xd)
        goto label_14289e649
else if (rcx == 0x18 && *arg1 == 0xf)
    rcx_2 = 0xf
label_14289e649:
    int32_t i = 0
    
    if (rcx_2 - 1 s> 0)
        int64_t rsi_1 = 0
        
        do
            if (sub_1428e4710(zx.d(*(*(arg1 + 8) + rsi_1)), 4) == 0)
                return 0
            
            rcx_2 = *arg1
            i += 1
            rsi_1 += 1
        while (i s< rcx_2 - 1)
    
    if (*(*(arg1 + 8) + sx.q(rcx_2) - 1) == 0x5a)
        __time64_t _Time_1
        __time64_t _Time
        
        if (arg2 == 0)
            _time64(&_Time)
            _Time_1 = _Time
        else
            _Time_1 = *arg2
            _Time = _Time_1
        int32_t* rax_6 = sub_1428e5670(nullptr, _Time_1, 0, 0)
        int32_t arg_8
        int32_t arg_18
        
        if (rax_6 != 0 && sub_1428e5760(&arg_8, &arg_18, arg1, rax_6) != 0)
            if (arg_8 s>= 0)
                rbp = -1
            
            if (arg_8 s< 0 || arg_18 s< 0)
                rbp = 1
        
        sub_1428e5860(rax_6)
        return zx.q(rbp)
return 0
