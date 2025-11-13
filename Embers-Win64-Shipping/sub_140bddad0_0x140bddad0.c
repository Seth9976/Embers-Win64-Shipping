// 函数: sub_140bddad0
// 地址: 0x140bddad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48
sub_140bded20(arg1, &var_48, arg3)
int32_t var_40

if (var_40 s> 1)
    int64_t rax_5 = *(arg1 + 0x58)
    
    if (rax_5 == 0)
        int64_t var_38
        sub_140aae2f0(arg2, sub_140bded20(arg1, &var_38, arg3))
        int64_t rcx_9 = var_38
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
    else
        void var_28
        int64_t* rax_6 = rax_5(&var_28, zx.q(arg3))
        *arg2 = *rax_6
        void* rcx_4 = rax_6[1]
        arg2[1] = rcx_4
        
        if (rcx_4 != 0)
            *(rcx_4 + 8) += 1
        
        arg2[2].d = rax_6[2].d
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t rsi_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    (*(*var_20 + 8))(var_20, zx.q(rsi_1))
else
    TEB* gsbase
    
    if (data_143cd6ff0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cd6ff0)
        
        if (data_143cd6ff0 == 0xffffffff)
            sub_140a96080(&data_143cd6fd8)
            atexit(sub_142cb0d20)
            _Init_thread_footer(&data_143cd6ff0)
    
    *arg2 = data_143cd6fd8
    void* rax_3 = data_143cd6fe0
    arg2[1] = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    arg2[2].d = data_143cd6fe8

int64_t rcx_10 = var_48

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return arg2
