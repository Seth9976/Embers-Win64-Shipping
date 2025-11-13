// 函数: sub_14262d360
// 地址: 0x14262d360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rdi = *(arg2 + 0x14)
int32_t rdx = arg1[1].d
int16_t r15 = *(arg1 + 0x14)
int32_t* var_38 = nullptr
int32_t var_30 = 0
sub_142616290(&var_38, rdx)
int32_t i = 0

if (arg1[1].d s> 0)
    int64_t rdx_1 = 0
    
    do
        rdx_1 += 4
        i += 1
        *(rdx_1 + var_38 - 4) = *(rdx_1 + *arg1 - 4)
    while (i s< arg1[1].d)

int32_t rsi = 0
int32_t* r9 = var_38
int64_t* rbx

if (var_30 s<= 0)
labelid_1:
    rbx.b = 0
else
    int32_t* rax_3 = r9
    
    while (*rax_3 != zx.d(rdi))
        rsi += 1
        rax_3 = &rax_3[1]
        
        if (rsi s>= var_30)
            goto label_14262d3f6_2
    
    if (rsi == 0xffffffff)
    label_14262d3f6:
        rbx.b = 0
    else
        int64_t rax_5 = sx.q(arg2[1].d)
        int32_t rbp_1 = 0
        
        if (rax_5.d s<= 0)
        label_14262d3f6_1:
            rbx.b = 0
        else
            int32_t* rax_6 = *arg2
            int64_t rcx_4 = 0
            
            while (*rax_6 != zx.d(r15))
                rbp_1 += 1
                rcx_4 += 1
                rax_6 = &rax_6[1]
                
                if (rcx_4 s>= rax_5)
                    goto label_14262d3f6_2
            
            if (rbp_1 == 0xffffffff)
            label_14262d3f6_2:
                rbx.b = 0
            else
                sub_142616290(arg1, 0)
                int32_t i_1 = 0
                
                if (var_30 - 1 s> 0)
                    do
                        int32_t rdi_1 = var_38[sx.q(mods.dp.d(sx.q(i_1 + 1 + rsi), var_30))]
                        sub_142616290(arg1, arg1[1].d + 1)
                        i_1 += 1
                        *(*arg1 + (sx.q(arg1[1].d) << 2) - 4) = rdi_1
                    while (i_1 s< var_30 - 1)
                
                int32_t r15_1 = arg2[1].d
                int32_t i_2 = 0
                
                if (r15_1 - 1 s> 0)
                    do
                        int32_t rdi_2 =
                            *(*arg2 + (sx.q(mods.dp.d(sx.q(i_2 + 1 + rbp_1), r15_1)) << 2))
                        sub_142616290(arg1, arg1[1].d + 1)
                        i_2 += 1
                        *(*arg1 + (sx.q(arg1[1].d) << 2) - 4) = rdi_2
                    while (i_2 s< r15_1 - 1)
                
                sub_142632990(arg1)
                arg1[2].d += arg2[2].d
                arg2[2].d = 0
                *(arg1 + 0x17) |= *(arg2 + 0x17) & 4
                *(arg2 + 0x17) &= 0xfb
                sub_142616290(arg2, 0)
                r9 = var_38
                rbx.b = 1

sub_142609160(r9)
return zx.q(rbx.b)
