// 函数: sub_1414b97a0
// 地址: 0x1414b97a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t rbx = sx.q(*(arg4 + 0xe0))
int32_t r11 = 0

if (rbx s> 0)
    int64_t r10_1 = 0
    
    while (true)
        void* rcx_1 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_1 + (r10_1 << 3)) == data_143e83070)
            break
        
        r11 += 1
        r10_1 += 1
        
        if (r10_1 s>= rbx)
            goto label_1414b982f

void* r8_1

if (rbx s<= 0 || r11 == 0xffffffff)
label_1414b982f:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    r8_1 = &data_143ce8560
else
    void* rcx_9 = *(arg4 + 0xe8)
    
    if ((rcx_9.b & 1) != 0)
        rcx_9 = (rcx_9 s>> 1) + arg4 + 0xe8
    
    r8_1 = rcx_9 + (sx.q(r11) << 1)

sub_1412155b0(arg2, arg3, r8_1, arg6, arg5)

if (arg8 != 0)
    float var_68[0x4] = data_142d3f660
    float var_58[0x4][0x4]
    sub_14148d370(arg7, &var_58, &var_68, nullptr)
    sub_1405eb5d0(arg2, &arg_18, arg1, &var_58, 0)
    sub_1405d0e10(arg2, &arg_18, &arg1[3], &var_68, 0)

void arg_40
return sub_1405eb490(arg2, &arg_18, &arg1[6], &arg_40, 0)
