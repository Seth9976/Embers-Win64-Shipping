// 函数: sub_142127230
// 地址: 0x142127230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx
int64_t rbx

if (data_143de5480 == 0)
    rbx = 0
    rcx = 0
else
    rbx = 0
    rcx.b = GetCurrentThreadId().d != data_143de5470

int64_t* result

if (*(rcx + arg1 + 0x13a) != 0)
    *arg3 = 0
    result.b = 0
    return result

int32_t i = 0

if (*(arg1 + 0x118) s> 0)
    int64_t r15_1 = 0
    
    do
        int32_t* rsi_2 = *(arg1 + 0x110) + r15_1
        void arg_8
        
        if (*sub_140b4c620(&arg_8, rsi_2) == *arg2 && rsi_2[3] == arg2[1].d
                && rsi_2[2].b == *(arg2 + 0xc))
            *arg3 = *(rsi_2 + 0x10)
            result.b = 1
            goto label_1421273f3
        
        i += 1
        r15_1 += 0x28
    while (i s< *(arg1 + 0x118))

int64_t rsi_3

if (*(arg2 + 0xc) != 2)
    rsi_3 = sx.q(sub_14210eb80(arg1 + 0x188, 4, arg2).d)

if (*(arg2 + 0xc) == 2 || rsi_3.d == 0xffffffff)
    if (*(arg1 + 0xd0) != 0)
        if (data_143de5480 != 0)
            GetCurrentThreadId()
        
        int64_t rcx_6
        
        if (data_143de5480 == 0 || data_143de5480 == 0)
            rcx_6 = 0
        else
            rcx_6.b = GetCurrentThreadId() != data_143de5470
        
        *(rcx_6 + arg1 + 0x13a) = 1
        int64_t* rcx_7 = *(arg1 + 0xd0)
        char rax_2 = (*(*rcx_7 + 0x3d0))(rcx_7, arg2, arg3, zx.q(arg4))
        
        if (data_143de5480 != 0)
            rbx.b = GetCurrentThreadId() != data_143de5470
        
        *(rbx + arg1 + 0x13a) = 0
        return zx.q(rax_2)
    
    *arg3 = 0
    result.b = 0
else
    result = sub_142111f50(arg1 + 0x188, 4, rsi_3.d, arg4)
    *arg3 = *(*(arg1 + 0x318) + (rsi_3 << 3))

label_1421273f3:
return result
