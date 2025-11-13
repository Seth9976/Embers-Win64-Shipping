// 函数: sub_14100e910
// 地址: 0x14100e910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 0x10))
        break
    
    int64_t* rsi_1 = *(*(arg1 + 8) + (sx.q(i) << 3))
    
    if (rsi_1 != 0)
        int64_t* rdx_1 = *rsi_1
        int64_t* rcx_1 = nullptr
        *rsi_1 = 0
        
        if (rdx_1 != 0)
            (*(*rdx_1 + 0x10))(rdx_1)
            rcx_1 = *rsi_1
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x10))(rcx_1)
        
        j_sub_140a74f90(rsi_1)

int64_t result = DeleteCriticalSection(arg1 + 0x30)

while (*(arg1 + 0x28) != 0)
    int64_t* rcx_5 = *(arg1 + 0x28)
    *(arg1 + 0x28) = *rcx_5
    result = j_sub_140a74f90(rcx_5)

int64_t rcx_6 = *(arg1 + 8)

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6) __tailcall
