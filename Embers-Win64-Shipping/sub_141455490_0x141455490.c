// 函数: sub_141455490
// 地址: 0x141455490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10

if ((*(arg1 + 0x100) & 1) == 0)
    r10 = *(arg1 + 0x100)
else
    r10 = *(*(arg2 + 0x58) + (sx.q((*(arg1 + 0x100) u>> 1).d) << 3))

if (r10 != 0)
    void* rdx_1 = *(arg1 + 0x130)
    
    if ((rdx_1.b & 1) != 0)
        rdx_1 = (rdx_1 s>> 1) + arg1 + 0x130
    
    if (rdx_1 != 0)
        int64_t var_28_1 = arg8
        int64_t* var_30_1 = arg7
        int64_t* var_38_1 = arg6
        int64_t var_40_1 = arg3
        int32_t var_48_1 = arg5
        char var_50_1 = arg4
        void* var_58_1 = arg1
        (*(r10 + 0x40))(*(arg1 + 0x108) & 0xf, rdx_1)

TEB* gsbase

if (sub_1411a4ac0(data_143f0f1a0, arg5) != 0 && *(zx.q(arg4) + arg3 + 0xa2) s>= 0)
    int64_t r11 = sx.q(*(arg1 + 0xe0))
    int32_t rcx_2 = 0
    int64_t* result = data_143f55690
    
    if (r11 s> 0)
        int64_t r8_1 = 0
        
        while (true)
            void* rdx_5 = *(arg1 + 0xd8)
            
            if ((*(arg1 + 0xd8) & 1) != 0)
                rdx_5 = (rdx_5 s>> 1) + arg1 + 0xd8
            
            if (*(rdx_5 + (r8_1 << 3)) == result)
                break
            
            rcx_2 += 1
            r8_1 += 1
            
            if (r8_1 s>= r11)
                goto label_1414555e1
    
    if (r11 s<= 0 || rcx_2 == 0xffffffff)
    label_1414555e1:
        result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        
        if (data_143ce8564 s> result.d)
            result = _Init_thread_header(&data_143ce8564)
            
            if (data_143ce8564 == 0xffffffff)
                data_143ce8560 = 0xffff
                return _Init_thread_footer(&data_143ce8564)
    
    return result

int64_t r11_1 = sx.q(*(arg1 + 0xe0))
int32_t rcx_3 = 0
void* rdx_10
int64_t r8_3

if (*arg6 == 0)
    int64_t rsi_1 = *(arg6[1] + 0x18)
    
    if (r11_1 s> 0)
        int64_t r8_4 = 0
        
        while (true)
            void* rdx_14 = *(arg1 + 0xd8)
            
            if ((*(arg1 + 0xd8) & 1) != 0)
                rdx_14 = (rdx_14 s>> 1) + arg1 + 0xd8
            
            if (*(rdx_14 + (r8_4 << 3)) == data_143f55690)
                break
            
            rcx_3 += 1
            r8_4 += 1
            
            if (r8_4 s>= r11_1)
                goto label_141455709
    
    if (r11_1 s<= 0 || rcx_3 == 0xffffffff)
    label_141455709:
        
        if (data_143ce8564
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143ce8564)
            
            if (data_143ce8564 == 0xffffffff)
                data_143ce8560 = 0xffff
                _Init_thread_footer(&data_143ce8564)
        
        rdx_10 = &data_143ce8560
    else
        void* rdx_16 = *(arg1 + 0xe8)
        
        if ((rdx_16.b & 1) != 0)
            rdx_16 = (rdx_16 s>> 1) + arg1 + 0xe8
        
        rdx_10 = rdx_16 + (sx.q(rcx_3) << 1)
    
    r8_3 = rsi_1
else
    if (r11_1 s> 0)
        int64_t r8_2 = 0
        
        while (true)
            void* rdx_8 = *(arg1 + 0xd8)
            
            if ((*(arg1 + 0xd8) & 1) != 0)
                rdx_8 = (rdx_8 s>> 1) + arg1 + 0xd8
            
            if (*(rdx_8 + (r8_2 << 3)) == data_143f55690)
                break
            
            rcx_3 += 1
            r8_2 += 1
            
            if (r8_2 s>= r11_1)
                goto label_141455661
    
    if (r11_1 s<= 0 || rcx_3 == 0xffffffff)
    label_141455661:
        
        if (data_143ce8564
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143ce8564)
            
            if (data_143ce8564 == 0xffffffff)
                data_143ce8560 = 0xffff
                _Init_thread_footer(&data_143ce8564)
        
        r8_3 = *arg6
        rdx_10 = &data_143ce8560
    else
        void* rdx_11 = *(arg1 + 0xe8)
        
        if ((rdx_11.b & 1) != 0)
            rdx_11 = (rdx_11 s>> 1) + arg1 + 0xe8
        
        r8_3 = *arg6
        rdx_10 = rdx_11 + (sx.q(rcx_3) << 1)

return sub_14108daf0(arg7, rdx_10, r8_3)
