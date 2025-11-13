// 函数: sub_142b38f60
// 地址: 0x142b38f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t rax = sx.q(arg2[3])

if (rax.d u> 7)
    *arg4 |= 0x40
    return 

uint32_t rbx_1
int32_t r8
void* r11_1

switch (rax)
    case 0
        if (arg1[2].b s< 0)
            goto label_142b390e4
        
    label_142b3903a:
        
        if (arg3 s> 0)
            goto label_142b39043
    case 1
        rax.b = arg3 s> 0
        r8 = rax.d
        goto label_142b390e8
    case 2
        rax.b = arg3 s>= 5
        r8 = rax.d
        goto label_142b390e8
    case 3
        if (arg3 s> 5)
        label_142b39043:
            r8 = 1
        label_142b39049:
            rbx_1 = *arg1
            r11_1 = arg1 + 9
            void* rdx_2 = r11_1
            uint32_t r9_2 = rbx_1
            
            if (rbx_1 u> 1)
                while (*rdx_2 == 9)
                    r9_2 -= 1
                    rdx_2 += 1
                    
                    if (r9_2 u<= 1)
                        goto label_142b39085
                
                goto label_142b391a5
            
        label_142b39085:
            
            if (zx.d(*rdx_2) != *((zx.q(r9_2) << 2) + &data_14366c468) - 1)
                goto label_142b391a5
            
            *rdx_2 = *((zx.q(r9_2 - 1) << 2) + &data_14366c468)
            
            for (void* i = rdx_2 - 1; i u>= r11_1; i -= 1)
                *i = 0
            
            arg1[1] += 1
            
            if (arg1[1] + *arg1 s> arg2[1] + 1)
                sub_142b3ac00(arg1, arg2, arg4)
        else if (arg3 == 5 && (*(arg1 + 9) & 1) != 0)
            goto label_142b39043
    case 4
        rax.b = arg3 s> 5
        r8 = rax.d
    label_142b390e8:
        
        if (r8 != 0)
            if (r8 s> 0)
                goto label_142b39049
            
            goto label_142b390f7
    case 5
    label_142b390e4:
        r8 = arg3 s>> 0x1f
        goto label_142b390e8
    case 6
        if (arg1[2].b s< 0)
            goto label_142b3903a
        
        goto label_142b390e4
    case 7
        int32_t rcx_1 = zx.d(*(arg1 + 9)) u% 5
        bool cond:0_1 = arg3 s<= 0
        
        if (arg3 s>= 0)
            goto label_142b38fd6
        
        if (rcx_1 == 1)
            cond:0_1 = arg3 s<= 0
        label_142b38fd6:
            
            if (not(cond:0_1) && rcx_1 == 0)
                goto label_142b39043
        else
            r8 = -1
        label_142b390f7:
            rbx_1 = *arg1
            r11_1 = arg1 + 9
            void* rdx_6 = r11_1
            uint32_t r9_3 = rbx_1
            
            if (rbx_1 u> 1)
                while (*rdx_6 == 0)
                    r9_3 -= 1
                    rdx_6 += 1
                    
                    if (r9_3 u<= 1)
                        goto label_142b39134
                
                goto label_142b391a5
            
        label_142b39134:
            
            if (zx.d(*rdx_6) != *((zx.q(r9_3 - 1) << 2) + &data_14366c468))
            label_142b391a5:
                
                if (rbx_1 s<= 0x31)
                    rbx_1 = zx.d(*(sx.q(rbx_1) + &data_14366c490))
                
                sub_142b3b1a0(r11_1, rbx_1, &data_14366c460, 1, 0, r11_1, r8)
            else
                *rdx_6 = *((zx.q(r9_3) << 2) + &data_14366c468) - 1
                
                for (void* i_1 = rdx_6 - 1; i_1 u>= r11_1; i_1 -= 1)
                    *i_1 = 9
                
                arg1[1] -= 1
                
                if (arg1[1] == arg2[2] - *arg2)
                    if (r9_3 != 1 || *arg1 != r9_3)
                        rax.b = *((zx.q(r9_3 - 1) << 2) + &data_14366c468) - 1
                        *rdx_6 = rax.b
                        *arg1 -= 1
                        arg1[1] += 1
                        *arg4 |= 0x3820
                    else
                        *rdx_6 = 0
                        arg1[1] += 1
                        *arg4 |= 0x3820
