// 函数: sub_14243f6e0
// 地址: 0x14243f6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

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

int64_t r12
int64_t arg_20 = r12
EnterCriticalSection(arg1 + 0x30)

if (*(arg1 + 0x6c) == 0)
label_14243f7ae:
    r12.b = 1
else
    r12.b = 0
    int32_t rsi_1 = 0
    
    if (arg4 != 0)
        do
            int32_t r15_2 = arg4 - rsi_1
            int32_t rax = ov_read(*(arg1 + 0x10), rbp, zx.q(r15_2), 0, 2, 1, 0)
            int32_t rdi_1 = rax
            
            if (rax == 0)
                r12.b = 1
                
                if (arg3 == rax.b)
                    memset(rbp, 0, sx.q(r15_2))
                    rdi_1 = r15_2
                else if (ov_pcm_seek_page(*(arg1 + 0x10), 0) s< 0)
                    memset(rbp, 0, zx.q(arg4 - rsi_1))
                    goto label_14243f7ae
            else if (rax s< 0)
                memset(rbp, 0, zx.q(arg4 - rsi_1))
                r12.b = 0
                break
            
            rsi_1 += rdi_1
            rbp += sx.q(rdi_1)
        while (rsi_1 u< arg4)

if (arg1 != -0x30)
    LeaveCriticalSection(arg1 + 0x30)

return zx.q(r12.b)
