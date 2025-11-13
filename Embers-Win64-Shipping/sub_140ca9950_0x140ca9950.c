// 函数: sub_140ca9950
// 地址: 0x140ca9950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
EnterCriticalSection(arg1 + 0xe8)
int64_t result

if ((*(arg3 + 0xc) | *(arg3 + 8) | *(arg3 + 4) | *arg3) != 0)
    EnterCriticalSection(arg1 + 0x58)
    void* var_58
    int32_t arg_8
    
    if (arg2 != *(arg1 + 0x80))
        *(arg1 + 0x80) = arg2
        sub_1405ba560(arg1 + 8, &arg_8, arg2)
        int64_t rax_4 = sx.q(arg_8)
        void* const rcx_6
        
        if (rax_4.d == 0xffffffff)
            rcx_6 = nullptr
        else
            rcx_6 = (rax_4 << 5) + *(arg1 + 8)
        
        int128_t* rax_5 = rcx_6 + 8
        
        if (rcx_6 == 0)
            rax_5 = nullptr
        
        int128_t zmm0
        
        if (rax_5 == 0)
            var_58 = nullptr
            int64_t var_50_1 = 0
            zmm0 = var_58.o
        else
            zmm0 = *rax_5
        
        *(arg1 + 0x88) = zmm0
    
    int128_t var_48 = *(arg1 + 0x88)
    
    if (arg1 != -0x58)
        LeaveCriticalSection(arg1 + 0x58)
    
    sub_140ccd8d0(arg1 + 0x98, &var_48)
    EnterCriticalSection(arg1 + 0x58)
    *(arg1 + 0x80) = arg2
    *(arg1 + 0x88) = *arg3
    
    if ((*(arg1 + 0x94) | *(arg1 + 0x90) | *(arg1 + 0x8c) | *(arg1 + 0x88)) != 0)
        if (*(arg1 + 0x10) == *(arg1 + 0x3c))
            sub_140d186f0(&data_143e1d990, arg1)
        
        var_58 = arg1 + 0x80
        void* var_50_2 = arg1 + 0x88
        sub_140caa170(arg1 + 8, &arg_8, &var_58, nullptr)
    else
        sub_140ccdb00(arg1, arg2)
    
    if (arg1 != -0x58)
        LeaveCriticalSection(arg1 + 0x58)
    
    sub_140ccd8d0(arg1 + 0x98, arg3)
    result = sub_140ca9d50(arg1 + 0x98, arg3, &arg_10)
else
    result = sub_140ccdbb0(arg1, arg2)

if (arg1 == -0xe8)
    return result

return LeaveCriticalSection(arg1 + 0xe8) __tailcall
