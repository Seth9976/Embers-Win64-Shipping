// 函数: sub_140866170
// 地址: 0x140866170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48
char rax_1 = sub_140a32ae0(sub_140b63b70(arg3, &var_48), u"User.", 1)
int64_t rcx_2 = var_48

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

if (rax_1 != 0)
    int64_t var_38
    sub_140745220(&var_38, arg3)
    int64_t* rax_2 = sub_140b63b70(arg3, &var_48)
    int32_t rax_3 = rax_2[1].d
    int32_t rsi_1 = rax_3 - 1
    
    if (rax_3 == 0)
        rsi_1 = 0
    
    if (rsi_1 s> 5)
        rsi_1 = 5
    
    if (rsi_1 != 0)
        if (rax_3 != rsi_1)
            int64_t rcx_6 = *rax_2
            memmove(rcx_6, rcx_6 + (sx.q(rsi_1) << 1), (rax_3 - rsi_1) * 2)
            rax_3 = rax_2[1].d
        
        rax_2[1].d = rax_3 - rsi_1
    
    int16_t* rsi_2 = *rax_2
    int16_t* const rdx_6 = &data_142d40450
    *rax_2 = 0
    bool cond:1_1 = rax_2[1].d != 0
    rax_2[1] = 0
    
    if (cond:1_1)
        rdx_6 = rsi_2
    
    int64_t arg_18
    sub_140b58260(&arg_18, rdx_6, 1)
    
    if (rsi_2 != 0)
        sub_140a74f90(rsi_2)
    
    int64_t rcx_9 = var_48
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    var_38 = arg_18
    sub_140745220(arg2, &var_38)
    int64_t var_20
    
    if (var_20 != 0)
        sub_140a74f90(var_20)
else
    sub_140745220(arg2, arg3)

return arg2
