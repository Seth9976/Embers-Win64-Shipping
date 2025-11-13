// 函数: sub_142c6f300
// 地址: 0x142c6f300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_18[0x2]
uint64_t* rax = sub_142c59600(&var_18)
uint64_t* rdx = rax
int128_t zmm0 = *rax

if (arg2 - 1 u<= 9)
    rax = sx.q(arg2 - 1)
    int128_t var_38
    int128_t var_28
    void* rbx_1
    
    switch (rax)
        case nullptr
            *(arg1 + 0x960) = zmm0
        case 1
            *(arg1 + 0x950) = zmm0
        case 2
            rbx_1 = arg1 + 0x910
        label_142c6f3ad:
            
            if (rbx_1 != 0)
                var_38 = *(arg1 + 0x950)
                var_28 = *rdx
                int64_t rax_1 = sub_142c59590(&var_28, &var_38)
                
                if (rax_1 == 0)
                    rax_1 = 1
                
                *rbx_1 = rax_1
                return rax_1
        case 3
            rbx_1 = arg1 + 0x918
            goto label_142c6f3ad
        case 4
            rbx_1 = arg1 + 0x920
            goto label_142c6f3ad
        case 5
            rbx_1 = arg1 + 0x928
            goto label_142c6f3ad
        case 6
            rax = *(arg1 + 0x938)
            rbx_1 = arg1 + 0x930
            
            if (*rbx_1 s<= rax)
                goto label_142c6f3ad
        case 8
            *(arg1 + 0x970) = zmm0
        case 9
            var_28 = *(arg1 + 0x940)
            var_38 = *rdx
            rax = sub_142c59590(&var_38, &var_28)
            *(arg1 + 0x938) = rax

return rax
