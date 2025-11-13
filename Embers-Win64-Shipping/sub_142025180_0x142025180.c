// 函数: sub_142025180
// 地址: 0x142025180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = arg2
TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143f40798 s> result)
    int64_t r8
    result, r8 = _Init_thread_header(&data_143f40798)
    
    if (data_143f40798 == 0xffffffff)
        int64_t* rcx_10 = data_143db18d0
        
        if (rcx_10 == 0)
            sub_140a53c40()
            rcx_10 = data_143db18d0
        
        r8.b = 1
        data_143f40790 = (*(*rcx_10 + 0xb0))(rcx_10, u"r.HDR.EnableHDROutput", r8)
        result = _Init_thread_footer(&data_143f40798)

if (data_143f40790 != 0)
    if (rsi != 0)
        char rax_1
        
        if (data_143f0f227 != 0)
            rax_1 = sub_1419a4620()
        
        if (data_143f0f227 == 0 || rax_1 == 0)
            rsi = 0
    
    int32_t rbp_1 = 0x7d0
    
    if (arg3 s< 0x5dc)
        rbp_1 = 0x3e8
    
    int16_t* rcx_7
    
    if (rsi == 0)
        int64_t* rbx_2 = data_143f40790
        int16_t* var_18
        sub_140a2e390(&var_18, u"%d", 0)
        int16_t* rdx_1 = &data_142d40450
        int32_t var_10
        
        if (var_10 != 0)
            rdx_1 = var_18
        
        result = (*(*rbx_2 + 0x80))(rbx_2, rdx_1, 0x2000000)
        rcx_7 = var_18
    else
        char rax_2 = sub_1419767f0()
        char rax_3
        
        if (rax_2 == 0)
            rax_3 = sub_1419767d0()
        
        if (rax_2 != 0 || rax_3 != 0)
            sub_14203cc80(arg1, 0)
            int32_t rcx_1
            rcx_1.b = arg1[0x14].d != 0
            
            if (arg1[0x13].d != rcx_1)
                if (rcx_1 == 0)
                    arg1[0x13].d = 0
                else if (rcx_1 == 1)
                    arg1[0x13].d = 1
                else
                    arg1[0x13].d = 2
                
                sub_1420435c0(arg1)
            
            sub_14201df80(arg1, 0)
            sub_1405a9f90(&arg1[0x22], 0)
        
        int64_t* rbx_1 = data_143f40790
        int16_t* var_28
        sub_140a2e390(&var_28, u"%d", 1)
        int16_t* const rdx = &data_142d40450
        int32_t var_20
        
        if (var_20 != 0)
            rdx = var_28
        
        result = (*(*rbx_1 + 0x80))(rbx_1, rdx, 0x2000000)
        rcx_7 = var_28
    
    if (rcx_7 != 0)
        result = sub_140a74f90(rcx_7)
    
    arg1[0x21].d = rbp_1
    *(arg1 + 0x104) = rsi

return result
