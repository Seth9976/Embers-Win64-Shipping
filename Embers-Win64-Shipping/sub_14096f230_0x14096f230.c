// 函数: sub_14096f230
// 地址: 0x14096f230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* arg_10 = arg2
int64_t rsi = arg3
arg3.b = 1
uint64_t rdi
rdi.b = 0

if (sub_140b0f6c0(&arg_10, u"ONLINE") != 0)
    int16_t* rcx_1 = arg_10
    int16_t* var_28 = nullptr
    int32_t var_20_1 = 0
    sub_140b2acc0(rcx_1, u"Sub=", &var_28, 1)
    int32_t rdx_1
    
    if (var_20_1 != 0)
        rdx_1 = var_20_1 - 1
    
    int64_t arg_20
    int32_t rax_1
    bool cond:0_1
    
    if (var_20_1 == 0 || rdx_1 s<= 0)
        sub_140b2acc0(arg_10, u"Subsystem=", &var_28, 1)
        
        if (var_20_1 != 0)
            rdx_1 = var_20_1 - 1
            cond:0_1 = rdx_1 == 0
            
            if (rdx_1 s<= 0)
                goto label_14096f2d9
            
            rax_1 = rdx_1 + 0xa
            goto label_14096f2cb
        
        arg_20 = 0
    else
        rax_1 = rdx_1 + 4
    label_14096f2cb:
        cond:0_1 = rdx_1 == 0
        arg_10 = &arg_10[sx.q(rax_1)]
    label_14096f2d9:
        
        if (cond:0_1)
            arg_20 = 0
        else
            sub_140b58260(&arg_20, var_28, 1)
    TEB* gsbase
    
    if (data_143cecf88
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cecf88)
        
        if (data_143cecf88 == 0xffffffff)
            sub_140b58260(&data_143cecf80, u"OnlineSubsystem", 1)
            _Init_thread_footer(&data_143cecf88)
    
    int64_t rbx_1 = data_143cecf80
    j_sub_140b3db50()
    int64_t* rax_6 = sub_140b3da90(&data_143de7d78, rbx_1)
    int64_t r8_2 = *rax_6
    int64_t* rax_7 = (*(r8_2 + 0x50))(rax_6, arg_20, r8_2)
    
    if (rax_7 != 0)
        char rax_9
        int64_t r8_4
        rax_9, r8_4 = (*(*rax_7 + 0x158))(rax_7, arg1, arg_10, rsi)
        rdi = zx.q(rax_9)
        
        if (rax_9 == 0)
            r8_4.b = 1
            char rax_10
            int64_t r8_5
            rax_10, r8_5 = sub_140b0f6c0(&arg_10, u"TEST")
            
            if (rax_10 == 0)
                r8_5.b = 1
                
                if (sub_140b0f6c0(&arg_10, u"VOICE") != 0)
                    rdi = zx.q(sub_140964f80(rax_7, arg1, arg_10))
    
    int16_t* rcx_11 = var_28
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

return zx.q(rdi.b)
