// 函数: sub_141022080
// 地址: 0x141022080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410179a0(*(arg1 + 0x1c8))
int32_t r9 = *(arg1 + 0x8a0)
int32_t r8 = *(arg1 + 0x8a4)
data_143f0f214 += *(arg1 + 0x3b80)
data_143f0f218
data_143f0f218 += r8 + r9
*(arg1 + 0x3b80)
void*** result

if (*(arg1 + 0x3b94) + *(arg1 + 0x3b90) + *(arg1 + 0x3b8c) + *(arg1 + 0x3b88) + *(arg1 + 0x3b84)
        == neg.d(*(arg1 + 0x3b80)))
    void* rax_10 = *(arg1 + 0x138)
    void* r8_3
    
    if (*(arg1 + 0x136) == 0)
        r8_3 = *(rax_10 + 0x38)
    else
        r8_3 = *(rax_10 + 0x48)
    
    void* rcx_3 = *(*(arg1 + 0x1c8) + 0x58)
    *(rcx_3 + 0x18) -= 1
    result = sub_14101f480(r8_3 + 0x30, arg1 + 0x1c0)
else
    int64_t rsi_1 = sx.q(arg2[1].d)
    int32_t rax_7 = (rsi_1 + 1).d
    arg2[1].d = rax_7
    
    if (rax_7 s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
    
    void* rcx_2 = *(arg1 + 0x1c8)
    result = (rsi_1 << 4) + *arg2
    *result = &data_142efcd90
    result[1] = rcx_2
    
    if (rcx_2 != 0)
        *(rcx_2 + 0x14) += 1
    
    *result = &data_142efcd90

void* rcx_5 = *(arg1 + 0x1c8)

if (rcx_5 != 0)
    result = zx.q(*(rcx_5 + 0x14))
    *(rcx_5 + 0x14) -= 1
    
    if (result.d == 1)
        int64_t* rcx_6 = *(arg1 + 0x1c8)
        
        if (rcx_6 != 0)
            result = sub_141011360(rcx_6, result.b)
    
    *(arg1 + 0x1c8) = 0

return result
