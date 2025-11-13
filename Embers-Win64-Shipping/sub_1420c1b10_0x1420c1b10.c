// 函数: sub_1420c1b10
// 地址: 0x1420c1b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int64_t r10_1 = sx.q(*(*(arg2 + 0x78) + 0x3c))
int32_t rax

if (arg3 s>= 0)
    rax = arg1[1].d

if (arg3 s< 0 || arg3 s>= rax || arg4 s< 0 || arg4 s>= rax)
    int32_t rbp_1 = arg1[1].d
    int16_t* rcx_10
    int16_t* var_28
    int32_t var_20
    int16_t* var_18
    int32_t var_10
    
    if (rbp_1 != 0)
        sub_140b63b70(arg2 + 0x28, &var_28)
        int32_t var_30_1 = rbp_1 - 1
        int16_t* rsi_2 = &data_142d40450
        int16_t* rdx_6 = &data_142d40450
        
        if (var_20 != 0)
            rdx_6 = var_28
        
        int16_t* var_38_1 = rdx_6
        sub_140a2e390(&var_18, 
            Attempted to swap elements [%d] and [%d] in array %s. Available index range: [0 %d)!", 
            zx.q(arg3))
        data_143f47e08
        
        if (var_10 != 0)
            rsi_2 = var_18
        
        sub_140d23f50(rsi_2, 3)
        int16_t* rcx_9 = var_18
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rcx_10 = var_28
    else
        sub_140b63b70(arg2 + 0x28, &var_18)
        int16_t* const rsi_1 = &data_142d40450
        int16_t* const r8_3 = &data_142d40450
        
        if (var_10 != rbp_1)
            r8_3 = var_18
        
        sub_140a2e390(&var_28, u"Attempted to swap elements in empty array %s!", r8_3)
        data_143f47e08
        
        if (var_20 != rbp_1)
            rsi_1 = var_28
        
        sub_140d23f50(rsi_1, 3)
        int16_t* rcx_6 = var_28
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rcx_10 = var_18
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
else if (arg3 != arg4)
    void* r9 = *arg1
    
    if ((not.b((*(arg2 + 0x80)).b) & 1) == 0 && (r9.b & 1) != 0)
        r9 = (r9 s>> 1) + arg1
    
    return sub_140635010(sx.q(r10_1.d * arg3) + r9, sx.q(r10_1.d * arg4) + r9, r10_1) __tailcall
