// 函数: sub_141777e10
// 地址: 0x141777e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg1
int64_t* var_48 = nullptr
sub_14083a7e0(&var_48)
int64_t* r10 = var_48
*r10 = *arg2
r10[1].d = arg2[1].d
int32_t i = 1.d

while (i != 0)
    int64_t rdx_1 = sx.q(i - 1) * 3
    int64_t zmm0 = *(r10 + (rdx_1 << 2))
    int32_t rdi_1 = *(r10 + (rdx_1 << 2) + 8)
    
    if (0 != 0)
        memmove(r10 + sx.q(i - 1) * 0xc, r10 + sx.q(i) * 0xc, 0)
    
    int64_t var_40
    var_40.d = i - 1
    sub_140775970(&var_48)
    int32_t r15_1 = zmm0.d
    int32_t r14_1 = zmm0:4.d
    int32_t r9 = arg3
    int64_t rcx_7 = sx.q((r15_1 * *(arg7 + 4) + r14_1) * *(arg7 + 8) + rdi_1)
    int64_t rax_11 = *(arg7 + 0x10)
    
    if (*(rax_11 + (rcx_7 << 2)) == r9)
        i = var_40.d
        r10 = var_48
    else
        void* r11_1 = arg6
        *(rax_11 + (rcx_7 << 2)) = r9
        int32_t var_84_1 = r14_1 + 1
        int32_t var_64_1 = r14_1
        int32_t r8_2 = rdi_1 - 1
        int32_t var_74_1 = r14_1 - 1
        int32_t var_54_1 = r14_1
        int32_t var_a4_1 = r14_1
        int32_t var_94_1 = r14_1
        
        if (rdi_1 + 1 s>= *(r13 + 0x30) ||
                *(sx.q((*(r11_1 + 4) * r15_1 + r14_1) * *(r11_1 + 8) + rdi_1 + 1) + *(r11_1 + 0x10)) != 0
                || *(*(arg7 + 0x10)
                + (sx.q((r15_1 * *(arg7 + 4) + r14_1) * *(arg7 + 8) + rdi_1 + 1) << 2)) == r9)
            i = var_40.d
            r10 = var_48
        else
            int64_t r13_1 = sx.q(var_40.d)
            i = (r13_1 + 1).d
            var_40.d = i
            
            if (i s> var_40:4.d)
                sub_14083a7e0(&var_48)
                i = var_40.d
                r8_2 = rdi_1 - 1
                r9 = arg3
                r11_1 = arg6
            
            r10 = var_48
            int64_t rdx_6 = r13_1 * 3
            *(r10 + (rdx_6 << 2)) = r15_1.q
            *(r10 + (rdx_6 << 2) + 8) = rdi_1 + 1
        
        if (*(sx.q((*(r11_1 + 4) * r15_1 + r14_1) * *(r11_1 + 8) + rdi_1) + *(r11_1 + 0x10)) == 0
                && r8_2 s>= 0 &&
                *(*(arg7 + 0x10) + (sx.q((r15_1 * *(arg7 + 4) + r14_1) * *(arg7 + 8) + r8_2) << 2))
                != r9)
            int64_t i_2 = sx.q(i)
            i = (i_2 + 1).d
            var_40.d = i
            
            if (i s> var_40:4.d)
                sub_14083a7e0(&var_48)
                i = var_40.d
                r8_2 = rdi_1 - 1
                r10 = var_48
                r9 = arg3
            
            int64_t rdx_11 = i_2 * 3
            *(r10 + (rdx_11 << 2)) = r15_1.q
            *(r10 + (rdx_11 << 2) + 8) = r8_2
        
        void* r13_2 = arg5
        
        if (r14_1 + 1 s< *(arg1 + 0x2c) &&
                *(sx.q((*(r13_2 + 4) * r15_1 + r14_1 + 1) * *(r13_2 + 8) + rdi_1) + *(r13_2 + 0x10)) == 0
                && *(*(arg7 + 0x10)
                + (sx.q((r15_1 * *(arg7 + 4) + r14_1 + 1) * *(arg7 + 8) + rdi_1) << 2)) != r9)
            int64_t i_3 = sx.q(i)
            i = (i_3 + 1).d
            var_40.d = i
            
            if (i s> var_40:4.d)
                sub_14083a7e0(&var_48)
                i = var_40.d
                r10 = var_48
                r9 = arg3
            
            int64_t rdx_16 = i_3 * 3
            r13_2 = arg5
            *(r10 + (rdx_16 << 2)) = r15_1.q
            *(r10 + (rdx_16 << 2) + 8) = rdi_1
        
        if (*(sx.q((*(r13_2 + 4) * r15_1 + r14_1) * *(r13_2 + 8) + rdi_1) + *(r13_2 + 0x10)) == 0
                && r14_1 - 1 s>= 0 && *(*(arg7 + 0x10)
                + (sx.q((r15_1 * *(arg7 + 4) + r14_1 - 1) * *(arg7 + 8) + rdi_1) << 2)) != r9)
            int64_t i_4 = sx.q(i)
            i = (i_4 + 1).d
            var_40.d = i
            
            if (i s> var_40:4.d)
                sub_14083a7e0(&var_48)
                i = var_40.d
                r10 = var_48
                r9 = arg3
            
            int64_t rdx_22 = i_4 * 3
            *(r10 + (rdx_22 << 2)) = r15_1.q
            *(r10 + (rdx_22 << 2) + 8) = rdi_1
        
        void* r13_3 = arg4
        
        if (r15_1 + 1 s< *(arg1 + 0x28) && *(
                sx.q((*(r13_3 + 4) * (r15_1 + 1) + r14_1) * *(r13_3 + 8) + rdi_1) + *(r13_3 + 0x10)) == 0
                && *(*(arg7 + 0x10)
                + (sx.q(((r15_1 + 1) * *(arg7 + 4) + r14_1) * *(arg7 + 8) + rdi_1) << 2)) != r9)
            int64_t i_5 = sx.q(i)
            i = (i_5 + 1).d
            var_40.d = i
            
            if (i s> var_40:4.d)
                sub_14083a7e0(&var_48)
                i = var_40.d
                r10 = var_48
                r9 = arg3
            
            int64_t rdx_27 = i_5 * 3
            r13_3 = arg4
            *(r10 + (rdx_27 << 2)) = (r15_1 + 1).q
            *(r10 + (rdx_27 << 2) + 8) = rdi_1
        
        if (*(sx.q((*(r13_3 + 4) * r15_1 + r14_1) * *(r13_3 + 8) + rdi_1) + *(r13_3 + 0x10)) == 0
                && r15_1 - 1 s>= 0 && *(*(arg7 + 0x10)
                + (sx.q(((r15_1 - 1) * *(arg7 + 4) + r14_1) * *(arg7 + 8) + rdi_1) << 2)) != r9)
            int64_t i_1 = sx.q(i)
            i = (i_1 + 1).d
            var_40.d = i
            
            if (i s> var_40:4.d)
                sub_14083a7e0(&var_48)
                i = var_40.d
                r10 = var_48
            
            int64_t rdx_31 = i_1 * 3
            *(r10 + (rdx_31 << 2)) = (r15_1 - 1).q
            *(r10 + (rdx_31 << 2) + 8) = rdi_1
        
        r13 = arg1

if (r10 == 0)
    return i

return sub_140a74f90(r10)
