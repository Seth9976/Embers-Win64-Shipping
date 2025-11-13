// 函数: sub_1422e0040
// 地址: 0x1422e0040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* result = arg1
*arg1 = 0x7f7f
int64_t* rbp = arg3

if (sub_142391f10(arg3) != 0)
    int32_t rax_1 = sub_14238e470()
    int64_t* rdx = *rbp
    
    if (rdx != 0 && rax_1 s>= 0 && rax_1 s< rdx[1].d)
        rbp = *(*rdx + (sx.q(rax_1) << 3))

int64_t rdi = sx.q(arg2[1].d)
int32_t zmm0_1

if (arg6 s< 0)
    if ((*(*rbp + 0x2c) & 0x10) != 0 && rdi.d != 0)
        char r8_6
        char r9_2
        
        if (arg10 == 0 || (*(*arg2 + 0x11) & 1) == 0)
            int32_t rsi_1 = 0x7fffffff
            int32_t zmm1_1 = sub_1422dff00(arg4, arg5.d, rbp)
            *arg7 = zmm1_1
            
            if (rdi.d s<= 0)
            label_1422e03ce:
                r9_2 = rsi_1.b
                r8_6 = rsi_1.b
            else
                int64_t r8_8 = rdi - 1
                void* rdx_7 = *arg2 + ((r8_8 + ((r8_8 + 1) << 2)) << 2)
                
                while (true)
                    r9_2 = *rdx_7
                    int32_t zmm0_2 = arg9 f* *(rdx_7 - 8)
                    
                    if (zmm0_2 f* zmm0_2 f* 0.25f f>= zmm1_1)
                        r8_6 = r9_2
                        break
                    
                    int32_t rax_21 = sx.d(r9_2)
                    
                    if (rsi_1 s<= rax_21)
                        rax_21 = rsi_1
                    
                    rdx_7 -= 0x14
                    int64_t temp2_1 = r8_8
                    r8_8 -= 1
                    rsi_1 = rax_21
                    
                    if (temp2_1 - 1 s< 0)
                        goto label_1422e03ce
        else
            int32_t i = 0
            int16_t* result_1 = result
            
            do
                int128_t zmm1 = arg4[1]
                float var_88 = *arg4
                int32_t rdi_2 = 0x7fffffff
                int32_t var_84_1 = zmm1.d
                int32_t var_80_1 = arg4[2]
                int32_t zmm6_1
                zmm0_1, zmm6_1 = sub_1422e0970(&var_88, arg5, rbp, i)
                int64_t r8_5 = rdi - 1
                *arg7 = zmm0_1
                char rax_17
                
                if (rdi - 1 s< 0)
                label_1422e02f3:
                    rax_17 = rdi_2.b
                else
                    char* rdx_4 = *arg2 + ((rdi * 5 - 1) << 2)
                    
                    while (true)
                        zmm1 = *(rdx_4 - 8)
                        
                        if (not(zmm1.d f<= zmm6_1))
                            rax_17 = *rdx_4
                            zmm1.d = zmm1.d f* arg9.d
                            zmm1.d = zmm1.d f* zmm1.d
                            zmm1.d = zmm1.d f* 0.25f
                            
                            if (zmm1.d f>= zmm0_1)
                                break
                            
                            int32_t rax_18 = sx.d(rax_17)
                            
                            if (rdi_2 s<= rax_18)
                                rax_18 = rdi_2
                            
                            rdi_2 = rax_18
                        
                        rdx_4 -= 0x14
                        int64_t temp3_1 = r8_5
                        r8_5 -= 1
                        
                        if (temp3_1 - 1 s< 0)
                            goto label_1422e02f3
                
                *result_1 = rax_17
                i += 1
                result_1 += 1
            while (i s< 2)
            
            result = arg1
            r9_2 = *result
            r8_6 = *(result + 1)
        
        char rcx_9 = arg8
        
        if (r9_2 s>= arg8)
            rcx_9 = r9_2
        
        *result = rcx_9
        char rcx_10 = arg8
        
        if (r8_6 s>= arg8)
            rcx_10 = r8_6
        
        *(result + 1) = rcx_10
    
    return result

int32_t rbx_1 = 0
int64_t rdi_1 = 0
zmm0_1 = (zx.o(0)).d
*arg7 = 0
int32_t rdx_1 = 0x7f
int64_t r10 = sx.q(arg2[1].d)

if (r10 s>= 4)
    void* rax_4 = *arg2
    int64_t i_4 = ((r10 - 4) u>> 2) + 1
    void* r8 = rax_4 + 0x10
    char* r9 = rax_4 + 0x38
    rdi_1 = i_4 << 2
    int64_t i_1
    
    do
        if (not(zmm0_1 f>= *(r8 - 8)))
            int32_t rcx_2 = sx.d(*r8)
            int32_t rax_5 = rcx_2
            
            if (rdx_1 s<= rcx_2)
                rax_5 = rdx_1
            
            rdx_1 = rax_5
            
            if (rbx_1 s>= rcx_2)
                rcx_2 = rbx_1
            
            rbx_1 = rcx_2
        
        if (not(zmm0_1 f>= *(r8 + 0xc)))
            int32_t rcx_3 = sx.d(*(r8 + 0x14))
            int32_t rax_6 = rcx_3
            
            if (rdx_1 s<= rcx_3)
                rax_6 = rdx_1
            
            rdx_1 = rax_6
            
            if (rbx_1 s>= rcx_3)
                rcx_3 = rbx_1
            
            rbx_1 = rcx_3
        
        if (not(zmm0_1 f>= *(r9 - 8)))
            int32_t rcx_4 = sx.d(*r9)
            int32_t rax_7 = rcx_4
            
            if (rdx_1 s<= rcx_4)
                rax_7 = rdx_1
            
            rdx_1 = rax_7
            
            if (rbx_1 s>= rcx_4)
                rcx_4 = rbx_1
            
            rbx_1 = rcx_4
        
        if (not(zmm0_1 f>= *(r9 + 0xc)))
            int32_t rcx_5 = sx.d(r9[0x14])
            int32_t rax_8 = rcx_5
            
            if (rdx_1 s<= rcx_5)
                rax_8 = rdx_1
            
            rdx_1 = rax_8
            
            if (rbx_1 s>= rcx_5)
                rcx_5 = rbx_1
            
            rbx_1 = rcx_5
        
        r8 += 0x50
        r9 = &r9[0x50]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

if (rdi_1 s< r10)
    int64_t i_3 = r10 - rdi_1
    char* r8_3 = *arg2 + ((rdi_1 + ((rdi_1 + 1) << 2)) << 2)
    int64_t i_2
    
    do
        if (not(zmm0_1 f>= *(r8_3 - 8)))
            int32_t rcx_6 = sx.d(*r8_3)
            int32_t rax_10 = rcx_6
            
            if (rdx_1 s<= rcx_6)
                rax_10 = rdx_1
            
            rdx_1 = rax_10
            
            if (rbx_1 s>= rcx_6)
                rcx_6 = rbx_1
            
            rbx_1 = rcx_6
        
        r8_3 = &r8_3[0x14]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

int32_t rax_11 = sx.d(arg8)

if (rdx_1 s>= rax_11)
    rax_11 = rdx_1

if (arg6 s>= rax_11)
    rax_11 = rbx_1
    
    if (arg6 s< rbx_1)
        rax_11 = arg6

*result = rax_11.b
*(result + 1) = rax_11.b
return result
