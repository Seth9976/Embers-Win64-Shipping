// 函数: sub_140a7de60
// 地址: 0x140a7de60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143db9780 s> *rdi_1)
    _Init_thread_header(&data_143db9780)
    
    if (data_143db9780 == 0xffffffff)
        sub_142a4b200(&data_143db9740, "zero")
        atexit(sub_142cbd8a0)
        _Init_thread_footer(&data_143db9780)

if (data_143db97d0 s> *rdi_1)
    _Init_thread_header(&data_143db97d0)
    
    if (data_143db97d0 == 0xffffffff)
        sub_142a4b200(&data_143db9790, "one")
        atexit(&data_142cbd640)
        _Init_thread_footer(&data_143db97d0)

if (data_143db9820 s> *rdi_1)
    _Init_thread_header(&data_143db9820)
    
    if (data_143db9820 == 0xffffffff)
        sub_142a4b200(&data_143db97e0, "two")
        atexit(sub_142cbd810)
        _Init_thread_footer(&data_143db9820)

if (data_143db9870 s> *rdi_1)
    _Init_thread_header(&data_143db9870)
    
    if (data_143db9870 == 0xffffffff)
        sub_142a4b200(&data_143db9830, "few")
        atexit(&data_142cbd4d0)
        _Init_thread_footer(&data_143db9870)

if (data_143db98c0 s> *rdi_1)
    _Init_thread_header(&data_143db98c0)
    
    if (data_143db98c0 == 0xffffffff)
        sub_142a4b200(&data_143db9880, "many")
        atexit(sub_142cbd560)
        _Init_thread_footer(&data_143db98c0)

if (data_143db9910 s> *rdi_1)
    _Init_thread_header(&data_143db9910)
    
    if (data_143db9910 == 0xffffffff)
        sub_142a4b200(&data_143db98d0, "other")
        atexit(&data_142cbd650)
        _Init_thread_footer(&data_143db9910)

char rcx_2 = *(arg1 + 8)

if ((rcx_2 & 1) == 0)
    int16_t rax_8 = *(arg1 + 8)
    int32_t r8_2
    
    if (rax_8 s< 0)
        r8_2 = *(arg1 + 0xc)
    else
        r8_2 = sx.d(rax_8) s>> 5
    
    int16_t rcx = data_143db9748.w
    int32_t rax_10
    
    if (rcx s< 0)
        rax_10 = data_143db974c
    else
        rax_10 = sx.d(rcx) s>> 5
    
    if ((rcx.b & 1) == 0 && r8_2 == rax_10 && sub_142a490e0(arg1, &data_143db9740, r8_2) != 0)
        return 0
    
    rcx_2 = *(arg1 + 8)
else if ((data_143db9748 & 1) != 0)
    return 0

if ((rcx_2 & 1) == 0)
    int16_t rax_13 = *(arg1 + 8)
    int32_t r8_4
    
    if (rax_13 s< 0)
        r8_4 = *(arg1 + 0xc)
    else
        r8_4 = sx.d(rax_13) s>> 5
    
    int16_t rcx_3 = data_143db9798.w
    int32_t rax_15
    
    if (rcx_3 s< 0)
        rax_15 = data_143db979c
    else
        rax_15 = sx.d(rcx_3) s>> 5
    
    if ((rcx_3.b & 1) == 0 && r8_4 == rax_15 && sub_142a490e0(arg1, &data_143db9790, r8_4) != 0)
        return 1
    
    rcx_2 = *(arg1 + 8)
else if ((data_143db9798 & 1) != 0)
    return 1

if ((rcx_2 & 1) == 0)
    int16_t rax_18 = *(arg1 + 8)
    int32_t r8_6
    
    if (rax_18 s< 0)
        r8_6 = *(arg1 + 0xc)
    else
        r8_6 = sx.d(rax_18) s>> 5
    
    int16_t rcx_5 = data_143db97e8.w
    int32_t rax_20
    
    if (rcx_5 s< 0)
        rax_20 = data_143db97ec
    else
        rax_20 = sx.d(rcx_5) s>> 5
    
    if ((rcx_5.b & 1) == 0 && r8_6 == rax_20 && sub_142a490e0(arg1, &data_143db97e0, r8_6) != 0)
        return 2
    
    rcx_2 = *(arg1 + 8)
else if ((data_143db97e8 & 1) != 0)
    return 2

if ((rcx_2 & 1) == 0)
    int16_t rax_23 = *(arg1 + 8)
    int32_t r8_8
    
    if (rax_23 s< 0)
        r8_8 = *(arg1 + 0xc)
    else
        r8_8 = sx.d(rax_23) s>> 5
    
    int16_t rcx_7 = data_143db9838.w
    int32_t rax_25
    
    if (rcx_7 s< 0)
        rax_25 = data_143db983c
    else
        rax_25 = sx.d(rcx_7) s>> 5
    
    if ((rcx_7.b & 1) == 0 && r8_8 == rax_25 && sub_142a490e0(arg1, &data_143db9830, r8_8) != 0)
        return 3
    
    rcx_2 = *(arg1 + 8)
else if ((data_143db9838 & 1) != 0)
    return 3

int32_t result

if ((rcx_2 & 1) == 0)
    int16_t rax_27 = *(arg1 + 8)
    int32_t r8_10
    
    if (rax_27 s< 0)
        r8_10 = *(arg1 + 0xc)
    else
        r8_10 = sx.d(rax_27) s>> 5
    
    int16_t rcx_9 = data_143db9888.w
    
    if (rcx_9 s< 0)
        result = data_143db988c
    else
        result = sx.d(rcx_9) s>> 5
    
    if ((rcx_9.b & 1) == 0 && r8_10 == result && sub_142a490e0(arg1, &data_143db9880, r8_10).b != 0)
        result.b = 4
        return result
    
    rcx_2 = *(arg1 + 8)
else
    result.b = data_143db9888 & 1
    
    if (result.b != 0)
        result.b = 4
        return result

if ((rcx_2 & 1) == 0)
    int16_t rax_29 = *(arg1 + 8)
    int32_t r8_12
    
    if (rax_29 s< 0)
        r8_12 = *(arg1 + 0xc)
    else
        r8_12 = sx.d(rax_29) s>> 5
    
    int16_t rcx_11 = data_143db98d8
    
    if (rcx_11 s< 0)
        result = data_143db98dc
    else
        result = sx.d(rcx_11) s>> 5
    
    if ((rcx_11.b & 1) == 0 && r8_12 == result)
        sub_142a490e0(arg1, &data_143db98d0, r8_12)

result.b = 5
return result
