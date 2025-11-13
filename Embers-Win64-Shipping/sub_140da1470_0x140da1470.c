// 函数: sub_140da1470
// 地址: 0x140da1470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg6
int64_t var_a8
sub_140d912d0(&var_a8, arg2, arg3, arg4, arg5, zmm6.d)
int64_t rdi = 0
void* rax_3

if (arg1[1].d == *(arg1 + 0x34))
label_140da155f:
    rax_3 = nullptr
else
    void* r8 = &arg1[7]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t var_90
    int32_t rax_2 = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(var_90)) << 2))
    
    if (rax_2 == 0xffffffff)
    label_140da155f_1:
        rax_3 = nullptr
    else
        int64_t r8_1 = *arg1
        int64_t* rdx_3
        
        while (true)
            rdx_3 = sx.q(rax_2) * 0x78
            int32_t var_a0
            int32_t var_9c
            int32_t var_98
            int32_t var_94
            
            if (*(rdx_3 + r8_1) == var_a8 && *(rdx_3 + r8_1 + 8) == var_a0
                    && *(rdx_3 + r8_1 + 0xc) == var_9c && *(rdx_3 + r8_1 + 0x10) == var_98
                    && var_94.d f== *(rdx_3 + r8_1 + 0x14))
                break
            
            rax_2 = *(rdx_3 + r8_1 + 0x70)
            
            if (rax_2 == 0xffffffff)
                goto label_140da155f_2
        
        rax_3 = rdx_3 + r8_1
        
        if (rax_2 == 0xffffffff)
        label_140da155f_2:
            rax_3 = nullptr

void* rdx_4 = rax_3 + 0x20

if (rax_3 == 0)
    rdx_4 = nullptr

int32_t result

if (rdx_4 == 0)
    result = sub_142b92f00(arg2, arg3, arg4, sub_140d9a4a0(arg2, zx.q(arg5), zmm6.d))
    
    if (result != 0)
        result.b = 0
    else
        int16_t var_88
        memset(&var_88, 0, zx.q(result + 0x50))
        *arg7 = var_88
        int128_t var_84
        *(arg7 + 4) = var_84
        uint128_t var_74
        *(arg7 + 0x14) = var_74
        int128_t var_64
        *(arg7 + 0x24) = var_64
        int64_t var_54
        *(arg7 + 0x34) = var_54
        int32_t var_4c
        *(arg7 + 0x3c) = var_4c
        void var_48
        
        if (&arg7[0x20] != &var_48)
            int64_t rcx_9 = *(arg7 + 0x40)
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            *(arg7 + 0x40) = 0
            *(arg7 + 0x48) = 0
        
        *arg7 = *(arg2 + 0x6e)
        void* rax_8 = *(arg2 + 0x78)
        *(arg7 + 4) = *(rax_8 + 0x30)
        *(arg7 + 0x14) = *(rax_8 + 0x40)
        void* rax_9 = *(arg2 + 0x80)
        *(arg7 + 0x24) = *(rax_9 + 0x18)
        *(arg7 + 0x34) = *(rax_9 + 0x28)
        *(arg7 + 0x3c) = *(rax_9 + 0x30)
        int16_t rcx_10 = *(*(arg2 + 0x78) + 0x9a)
        
        if (rcx_10 s> 0)
            int64_t rsi_2 = sx.q(rcx_10)
            
            if (rsi_2.d s> *(arg7 + 0x4c))
                sub_1405c5570(&arg7[0x20], rsi_2.d)
            
            if (rsi_2.d s> 0)
                do
                    int64_t rsi_3 = sx.q(*(arg7 + 0x48))
                    int64_t r14_1 = *(*(arg2 + 0x78) + 0xa0)
                    int32_t rax_13 = (rsi_3 + 1).d
                    *(arg7 + 0x48) = rax_13
                    
                    if (rax_13 s> *(arg7 + 0x4c))
                        sub_1405a4d70(&arg7[0x20])
                    
                    int64_t rax_14 = *(r14_1 + (rdi << 3))
                    rdi += 1
                    *(*(arg7 + 0x40) + (rsi_3 << 3)) = rax_14
                while (rdi s< rsi_2)
        
        sub_140d8bcf0(arg1, &var_a8)
        result.b = 1
else
    *arg7 = *rdx_4
    *(arg7 + 4) = *(rdx_4 + 4)
    *(arg7 + 0x14) = *(rdx_4 + 0x14)
    *(arg7 + 0x24) = *(rdx_4 + 0x24)
    *(arg7 + 0x34) = *(rdx_4 + 0x34)
    *(arg7 + 0x3c) = *(rdx_4 + 0x3c)
    
    if (&arg7[0x20] == rdx_4 + 0x40)
        result.b = 1
    else
        int64_t rsi_1 = sx.q(*(rdx_4 + 0x48))
        int64_t rbp_1 = *(rdx_4 + 0x40)
        int32_t r8_2 = *(arg7 + 0x4c)
        *(arg7 + 0x48) = rsi_1.d
        
        if (rsi_1.d != 0 || r8_2 != 0)
            sub_1405c4a00(&arg7[0x20], rsi_1.d, r8_2)
            memcpy(*(arg7 + 0x40), rbp_1, (rsi_1 << 3).d)
            result.b = 1
        else
            *(arg7 + 0x4c) = 0
            result.b = 1

return result
