// 函数: sub_142793030
// 地址: 0x142793030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xc)
int64_t* rbx = *arg1
int32_t i_2 = arg1[1].d

if (rax s< 0)
    if (i_2 != 0)
        int32_t i
        
        do
            void* rsi_2 = *rbx
            
            if (rsi_2 != 0)
                sub_141d2ee50(rsi_2)
                j_sub_140a74f90(rsi_2)
            
            rbx = &rbx[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rax = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (rax != 0)
        sub_1405c5570(arg1, 0)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            void* rsi_1 = *rbx
            
            if (rsi_1 != 0)
                sub_141d2ee50(rsi_1)
                j_sub_140a74f90(rsi_1)
            
            rbx = &rbx[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

if (arg2 s> *(arg1 + 0xc))
    sub_1405c5570(arg1, arg2)

int32_t rax_1 = *(arg1 + 0x1c)
arg1[3].d = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405dadb0(&arg1[2], 0)

if (arg2 s> *(arg1 + 0x1c))
    sub_1405dadb0(&arg1[2], arg2)

sub_1408d84f0(&arg1[6])
int32_t result = arg1[7].d - *(arg1 + 0x64)

if (arg2 s> result)
    sub_1409d93a0(&arg1[6], arg2)
    
    if (arg2 u< 4)
        result = 1
    else
        uint32_t rbp_1 = arg2 u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rbp_1 + 8)
        int32_t rcx_10
        
        if (rbp_1 == 0xfffffff8)
            rcx_10 = 0x20
        else
            rcx_10 = 0x1f - temp0_1
        
        int32_t rcx_12 = rcx_10 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(rbp_1 + 7)
        
        if (rcx_12 == 0)
            result = 1
        else
            result = 1 << ((not.d(rcx_12)).b & (0x20 - (0x1f - temp0_2)))
    
    int32_t rcx_15 = arg1[0xf].d
    
    if (rcx_15 == 0 || rcx_15 s< result)
        arg1[0xf].d = result
        return sub_140772110(&arg1[6])

return result
