// 函数: sub_140f19a00
// 地址: 0x140f19a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140f19180(arg1)
uint64_t rsi
rsi.b = 0
int32_t result = EnterCriticalSection(arg1 + 0x4b0)

if (*(arg1 + 0x471) != 0)
    rsi = zx.q(*(arg1 + 0x470))
    *(arg1 + 0x471) = 0

if (arg1 != -0x4b0)
    result = LeaveCriticalSection(arg1 + 0x4b0)

int64_t* rcx_2 = *(arg1 + 0x478)

if (rcx_2 != 0 && rsi.b != 0)
    uint32_t rdx_1 = zx.d(rsi.b)
    *(arg1 + 0x472) = rsi.b
    int32_t rbx_1
    
    if (rdx_1 == 1)
        rbx_1 = 1
    label_140f19ac3:
        result = (*(*rcx_2 + 0x268))()
        
        if (rbx_1 != result)
            int64_t* rcx_3 = *(arg1 + 0x478)
            return (*(*rcx_3 + 0x270))(rcx_3, zx.q(rbx_1))
    else
        if (rdx_1 == 2)
            rbx_1 = 2
            goto label_140f19ac3
        
        if (rdx_1 == 3)
            rbx_1 = 3
            goto label_140f19ac3
        
        if (rdx_1 == 4)
            int128_t var_18 = data_142d5beb0
            return (*(*rcx_2 + 0x288))(rcx_2, &var_18)

return result
