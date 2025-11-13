// 函数: sub_142a690c0
// 地址: 0x142a690c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s> 0)
    return 0

int32_t r14 = 0
uint128_t __saved_zmm7 = arg6
int32_t rax_3

if (arg1[1].b != 0)
label_142a69138:
    rax_3 = *arg4
    
    if (rax_3 s<= 0)
        arg6 = zx.o(arg1[0x1c])
    else
        arg6 = zx.o(0)
else
    (*(*arg1 + 0xd8))(arg1, arg4)
    rax_3 = *arg4
    
    if (rax_3 s<= 0)
        if (arg1[0x1d].b != 0 || *(arg1 + 0xa) == 0)
            *(arg1 + 9) = 0
        
        arg1[1].b = 1
        *(arg1 + 0xb) = 0
        goto label_142a69138
    
    arg6 = zx.o(0)

uint128_t zmm0
int32_t rbp_1
int32_t rsi_1

if (not(arg2.q f<= arg6.q))
    rsi_1 = 1
    
    if (rax_3 s<= 0)
        int32_t i
        
        do
            sub_142a6c1a0(arg1, arg6.q, arg4)
            (*(*arg1 + 0x28))(arg1, zx.q(arg3), zx.q(rsi_1), arg4, __saved_zmm7, arg5)
            i = *arg4
            
            if (i s> 0)
                zmm0 = zx.o(0)
            else if (arg1[1].b != 0)
            label_142a691d2:
                i = *arg4
                
                if (i s<= 0)
                    zmm0 = zx.o(arg1[0x1c])
                else
                    zmm0 = zx.o(0)
            else
                (*(*arg1 + 0xd8))(arg1, arg4)
                i = *arg4
                
                if (i s<= 0)
                    if (arg1[0x1d].b != 0 || *(arg1 + 0xa) == 0)
                        *(arg1 + 9) = 0
                    
                    arg1[1].b = 1
                    *(arg1 + 0xb) = 0
                    goto label_142a691d2
                
                zmm0 = zx.o(0)
            
            zmm0.q f- arg2.q
            
            if (not(is_unordered.q(zmm0.q, arg2.q)) && zmm0.q f== arg2.q)
                return zx.q(rsi_1)
            
            if (zmm0.q f> arg2.q)
                break
            
            if (rsi_1 s>= 0x7fffffff)
                *arg4 = 1
                break
            
            r14 = rsi_1
            int32_t temp6_1 = rsi_1
            int32_t temp7_1 = rsi_1
            rsi_1 *= 2
            
            if (temp6_1 + temp7_1 s< 0)
                rsi_1 = 0x7fffffff
        while (i s<= 0)
    
    for (int32_t i_1 = rsi_1 - r14; i_1 s> 1; i_1 = rsi_1 - r14)
        if (*arg4 s> 0)
            goto label_142a694e8
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i_1)
        rbp_1 = r14 + ((temp1_1 - temp0_1) s>> 1)
        sub_142a6c1a0(arg1, arg6.q, arg4)
        (*(*arg1 + 0x28))(arg1, zx.q(arg3), zx.q(rbp_1), arg4, __saved_zmm7, arg5)
        
        if (*arg4 s> 0)
            zmm0 = zx.o(0)
        else if (arg1[1].b != 0)
        label_142a69292:
            
            if (*arg4 s<= 0)
                zmm0 = zx.o(arg1[0x1c])
            else
                zmm0 = zx.o(0)
        else
            (*(*arg1 + 0xd8))(arg1, arg4)
            
            if (*arg4 s<= 0)
                if (arg1[0x1d].b != 0 || *(arg1 + 0xa) == 0)
                    *(arg1 + 9) = 0
                
                arg1[1].b = 1
                *(arg1 + 0xb) = 0
                goto label_142a69292
            
            zmm0 = zx.o(0)
        
        zmm0.q f- arg2.q
        
        if (not(is_unordered.q(zmm0.q, arg2.q)) && zmm0.q f== arg2.q)
            return zx.q(rbp_1)
        
        if (zmm0.q f<= arg2.q)
            r14 = rbp_1
        else
            rsi_1 = rbp_1
else if (not(arg6.q f<= arg2.q))
    rsi_1 = -1
    
    if (rax_3 s<= 0)
        int32_t i_2
        
        do
            sub_142a6c1a0(arg1, arg6.q, arg4)
            (*(*arg1 + 0x28))(arg1, zx.q(arg3), zx.q(rsi_1), arg4, __saved_zmm7, arg5)
            i_2 = *arg4
            
            if (i_2 s> 0)
                zmm0 = zx.o(0)
            else if (arg1[1].b != 0)
            label_142a69371:
                i_2 = *arg4
                
                if (i_2 s<= 0)
                    zmm0 = zx.o(arg1[0x1c])
                else
                    zmm0 = zx.o(0)
            else
                (*(*arg1 + 0xd8))(arg1, arg4)
                i_2 = *arg4
                
                if (i_2 s<= 0)
                    if (arg1[0x1d].b != 0 || *(arg1 + 0xa) == 0)
                        *(arg1 + 9) = 0
                    
                    arg1[1].b = 1
                    *(arg1 + 0xb) = 0
                    goto label_142a69371
                
                zmm0 = zx.o(0)
            
            zmm0.q f- arg2.q
            
            if (not(is_unordered.q(zmm0.q, arg2.q)) && zmm0.q f== arg2.q)
                return zx.q(rsi_1)
            
            if (arg2.q f> zmm0.q)
                break
            
            r14 = rsi_1
            int32_t temp4_1 = rsi_1
            int32_t temp5_1 = rsi_1
            rsi_1 *= 2
            
            if (temp4_1 == neg.d(temp5_1))
                *arg4 = 1
                break
        while (i_2 s<= 0)
    
    while (r14 - rsi_1 s> 1)
        if (*arg4 s> 0)
            goto label_142a694e8
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rsi_1 - r14)
        rbp_1 = r14 + ((temp3_1 - temp2_1) s>> 1)
        sub_142a6c1a0(arg1, arg6.q, arg4)
        (*(*arg1 + 0x28))(arg1, zx.q(arg3), zx.q(rbp_1), arg4, __saved_zmm7, arg5)
        
        if (*arg4 s> 0)
            zmm0 = zx.o(0)
        else if (arg1[1].b != 0)
        label_142a69436:
            
            if (*arg4 s<= 0)
                zmm0 = zx.o(arg1[0x1c])
            else
                zmm0 = zx.o(0)
        else
            (*(*arg1 + 0xd8))(arg1, arg4)
            
            if (*arg4 s<= 0)
                if (arg1[0x1d].b != 0 || *(arg1 + 0xa) == 0)
                    *(arg1 + 9) = 0
                
                arg1[1].b = 1
                *(arg1 + 0xb) = 0
                goto label_142a69436
            
            zmm0 = zx.o(0)
        
        zmm0.q f- arg2.q
        
        if (not(is_unordered.q(zmm0.q, arg2.q)) && zmm0.q f== arg2.q)
            return zx.q(rbp_1)
        
        if (arg2.q f<= zmm0.q)
            r14 = rbp_1
        else
            rsi_1 = rbp_1

if (*arg4 s<= 0)
    zmm0 = 0x43846a3eddf8cd80
    
    if (arg6.q f<= zmm0.q)
        zmm0 = -0x3c7b89c49df8cd80
        
        if (zmm0.q f<= arg6.q)
            goto label_142a69495
        
        if (arg1[0x1d].b != 0)
            goto label_142a69492
        
        *arg4 = 1
    else if (arg1[0x1d].b != 0)
    label_142a69492:
        arg6 = zmm0
    label_142a69495:
        arg1[0x1c] = arg6.q
        void* rdx_12 = &arg1[0x10]
        *(arg1 + 9) = 0
        int64_t i_3 = 0
        *(arg1 + 0xb) = 1
        arg1[1].b = 1
        
        do
            *(rdx_12 - 0x74) = 0
            *rdx_12 = 0
            rdx_12 += 4
            *(arg1 + i_3 + 0x68) = 0
            i_3 += 1
        while (i_3 s< 0x17)
    else
        *arg4 = 1

label_142a694e8:
(*(*arg1 + 0x28))(arg1, zx.q(arg3), zx.q(r14), arg4, __saved_zmm7, arg5)

if (*arg4 s> 0)
    r14 = 0

return zx.q(r14)
