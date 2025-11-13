// 函数: sub_142ba8950
// 地址: 0x142ba8950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t rsi = 0

if ((*(rcx + 8) & 2) != 0)
    int32_t arg_8
    int32_t rax_2 = (*(*(rcx + 0x2d0) + 0xd0))(rcx, arg3, &arg_8)
    rsi = rax_2
    
    if (rax_2 == 0)
        void* rcx_4 = *arg1
        int32_t rdx_1 = arg_8
        *(arg1 + 0x8c) = rdx_1
        
        if ((*(rcx_4 + 8) & 1) != 0)
            sub_142b961f0(rcx_4, rdx_1)
            sub_142bb58a0(arg1, 0)
            return 0
        
        int32_t rax_8 = (*(*(rcx_4 + 0x2d0) + 0xd8))(rcx_4, rdx_1, &arg1[3])
        
        if (rax_8 != 0)
            *(arg1 + 0x8c) = 0xffffffff
        
        return zx.q(rax_8)
    
    *(arg1 + 0x8c) = 0xffffffff

sub_142b95d30(*arg1, arg2)

if ((*(*arg1 + 8) & 1) != 0)
    int32_t rax_4 = sub_142bb58a0(arg1, 0)
    rsi = rax_4
    
    if (rax_4 == 0)
        int16_t* rcx_3 = arg1[8]
        int32_t r8_2
        
        if (*rcx_3 u<= rcx_3[1])
            r8_2 = arg2[4]
        else
            r8_2 = arg2[3]
        
        if (*arg2 == 4 || r8_2 == 0)
            r8_2 = 0x48
        
        arg1[0x12].d = sub_142b93dd0(zx.d(*(arg1 + 0x6c)), 0x1200, r8_2)

return zx.q(rsi)
