// 函数: sub_142101870
// 地址: 0x142101870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x58)
int64_t rdi = 0
*(arg1 + 0x80) = 0
void var_18

if (arg1 + 0x88 != &var_18)
    int64_t rcx_1 = *(arg1 + 0x88)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg1 + 0x88) = 0
    *(arg1 + 0x90) = 0

int32_t r14_1 = *(arg1 + 0x10) - *(arg1 + 0x3c)
sub_1407547c0(arg1 + 8, 0)
void* result = zx.q(*(arg1 + 0x50))

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        void* result_1 = *(arg1 + 0x48)
        result = arg1 + 0x40
        int64_t rdx_3 = (sx.q(*(arg1 + 0x50)) - 1) & rdi
        
        if (result_1 != 0)
            result = result_1
        
        rdi += 1
        *(result + (rdx_3 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r14_1 s> 0)
    result = sub_140d2af80(&data_143e1d990, arg1)

if (arg1 == -0x58)
    return result

return LeaveCriticalSection(arg1 + 0x58)
