// 函数: sub_142446960
// 地址: 0x142446960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg4
int64_t rbp = arg2
bool z

if (0 == data_143f5e628)
    data_143f5e628 = 0
    z = true
else
    data_143f5e628
    z = false

if (z)
    uint64_t result
    result.b = 1
    return result

EnterCriticalSection(arg1 + 0x30)
int64_t r14

if (*(arg1 + 0x6c) != 0)
    r14.b = 0
    
    while (i != 0)
        int32_t var_88_1 = 2
        int32_t rax = ov_read(*(arg1 + 0x10), rbp, zx.q(i), 0, 2, 1, 0)
        int64_t rcx_2 = sx.q(rax)
        
        if (rax s> 0)
            rbp += rcx_2
            i -= rcx_2.d
        else
            int32_t rax_1 = sub_1423660c0(*(arg1 + 8))
            
            if (*(arg1 + 0x64) s< rax_1)
                memset(rbp, 0, zx.q(i))
                r14.b = 0
                break
            
            int64_t rcx_4 = *(arg1 + 0x10)
            r14.b = 1
            *(arg1 + 0x24) = 0
            ov_clear(rcx_4)
            memset(*(arg1 + 0x10), 0, 0x348)
            
            if (arg3 == 0)
                memset(rbp, 0, zx.q(i))
                break
            
            int64_t rdx_1 = *(arg1 + 0x10)
            int64_t var_60_1 = 0
            int64_t var_50_1 = 0
            *(arg1 + 0x64) = 0
            int128_t var_48 = sub_14243de20.o
            int128_t var_38_1 = sub_140594890.o
            var_88_1.q = &var_48
            
            if (ov_open_callbacks(arg1, rdx_1, 0, 0, var_88_1) s< 0)
                break
else
    r14.b = 1

if (arg1 != -0x30)
    LeaveCriticalSection(arg1 + 0x30)

return zx.q(r14.b)
