// 函数: sub_141cc6810
// 地址: 0x141cc6810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3

if (*(arg1 + 0x68) == *(arg1 + 0x94))
label_141cc689a:
    
    if (arg4 != 0)
        TEB* gsbase
        
        if (data_143f3592c
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f3592c)
            
            if (data_143f3592c == 0xffffffff)
                atexit(sub_142cf74e0)
                _Init_thread_footer(&data_143f3592c)
        
        if (data_143a196a8 == data_143a196d4)
        label_141cc6956:
            int32_t var_18
            sub_14090a150(&data_143a196a0, &var_18)
            int64_t* var_10
            *var_10 = arg3
            var_10[1].d = 0xffffffff
            sub_1407ec830(&data_143a196a0, &arg_18, (arg3 u>> 0x20).d + sub_140b5ead0(arg3.d), 
                var_10, var_18, nullptr)
        else
            int32_t rax_9 = sub_140b5ead0(arg3.d) + arg_18:4.d
            void* rcx_9 = data_143a196e0
            void* rax_11 = &data_143a196d8
            
            if (rcx_9 != 0)
                rax_11 = rcx_9
            
            int32_t rax_12 = *(rax_11 + ((sx.q(data_143a196e8 - 1) & sx.q(rax_9)) << 2))
            
            if (rax_12 == 0xffffffff)
                goto label_141cc6956
            
            int64_t rdx_6 = data_143a196a0
            
            while (true)
                int64_t rcx_11 = sx.q(rax_12) * 2
                
                if (*(rdx_6 + (rcx_11 << 3)) == arg3)
                    break
                
                rax_12 = *(rdx_6 + (rcx_11 << 3) + 8)
                
                if (rax_12 == 0xffffffff)
                    goto label_141cc6956
            
            if (rax_12 == 0xffffffff)
                goto label_141cc6956
    
    *arg2 = 0
else
    int32_t rax_2 = sub_140b5ead0(arg3.d) + arg_18:4.d
    void* r8 = arg1 + 0x98
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0xa8)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
        goto label_141cc689a
    
    int64_t rdx_3 = *(arg1 + 0x60)
    
    while (true)
        int64_t rcx_3 = sx.q(rax_4) << 5
        
        if (*(rcx_3 + rdx_3) == arg3)
            break
        
        rax_4 = *(rcx_3 + rdx_3 + 0x18)
        
        if (rax_4 == 0xffffffff)
            goto label_141cc689a
    
    if (rax_4 == 0xffffffff)
        goto label_141cc689a
    
    *arg2 = arg3

return arg2
