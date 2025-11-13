// 函数: sub_1420d1880
// 地址: 0x1420d1880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

char* rax_1 = *(arg1 + 0x10)
char* var_38
char* arg_8

if (arg2 == 0)
label_1420d1913:
    char* rax = *(arg1 + 0x10)
    
    if (arg2 != 0)
        var_38 = rax
        void* const i_2
        
        if (rax == 0)
            i_2 = nullptr
        else
            i_2 = *(rax + 0x50)
        
        int32_t var_28_2 = 0xffffffff
        int16_t var_24_2 = 0x101
        char var_22_2 = 0
        sub_1420c8990(&var_38)
        void* i_1
        
        for (void* const i = i_2; i != 0; i = i_1)
            rax = *(i + 0x28)
            arg_8 = rax
            
            if (rax == arg2)
                if (i != 0)
                    int64_t* rcx_6 = *(i + 0x78)
                    (*(*rcx_6 + 0x148))(rcx_6, sx.q(*(i + 0x4c)) + arg1, zx.q(arg3))
                
                break
            
            i_1 = *(i + 0x20)
            sub_1420c8990(&var_38)
else
    var_38 = rax_1
    void* const rcx
    
    if (rax_1 == 0)
        rcx = nullptr
    else
        rcx = *(rax_1 + 0x50)
    
    int32_t var_28_1 = 0xffffffff
    int16_t var_24_1 = 0x101
    char var_22_1 = 0
    sub_1420c87b0(&var_38)
    void* const rax_2 = rcx
    
    if (rax_2 == 0)
        goto label_1420d1913
    
    while (true)
        char* rcx_2 = *(rax_2 + 0x28)
        arg_8 = rcx_2
        
        if (rcx_2 == arg2)
            break
        
        void* rax_3 = *(rax_2 + 0x20)
        sub_1420c87b0(&var_38)
        rax_2 = rax_3
        
        if (rax_2 == 0)
            goto label_1420d1913
    
    if (rax_2 == 0)
        goto label_1420d1913
    
    *(sx.q(*(rax_2 + 0x4c)) + arg1) = arg3
