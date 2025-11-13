// 函数: sub_142bdda50
// 地址: 0x142bdda50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0xc0)
uint64_t r10 = zx.q(arg3)
int32_t* r15 = rax + (r10 << 3)
uint64_t r9 = zx.q(arg2)
int32_t rdx = arg1[2]
int32_t* rbx = rax + (r9 << 3)
int32_t rax_1 = arg1[3]
int32_t r13_2 = rax_1 * *rbx - rdx
int32_t r11_2 = rbx[1] * rax_1 - rdx
int32_t rcx_2 = *r15 * rax_1 - rdx
int32_t arg_10 = r11_2
int32_t r8_2 = *(rax + (r10 << 3) + 4) * rax_1 - rdx
int32_t arg_8 = rcx_2
int32_t arg_c = r8_2

if (arg4 != 0)
    int32_t rax_2 = r13_2
    r13_2 = r11_2
    r11_2 = rax_2
    arg_10 = rax_2
    int32_t rax_3 = rcx_2
    rcx_2 = r8_2
    arg_8 = rcx_2
    r8_2 = rax_3
    arg_c = rax_3

int64_t rdx_1 = *(arg1 + 0xc8)
uint8_t rax_4 = *(rdx_1 + r9)
char* r14 = rdx_1 + r9

if ((rax_4 & 4) != 0)
    arg1[0x42].b = rax_4 u>> 5

void* result = zx.q(sx.d(*r14)) & 3

if (result.d == 2)
label_142bdddae:
    arg1[0xe] = 0x14
label_142bdddb5:
    result.b = 1
else
    if (result.d == 0)
        if ((*(rdx_1 + r10) & 3) != 1)
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rcx_2 + r13_2)
            r13_2 = (temp1_1 - temp0_1) s>> 1
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r8_2 + r11_2)
            int32_t rax_15 = (temp3_1 - temp2_1) s>> 1
            r11_2 = rax_15
            arg_10 = rax_15
        else
            int64_t rax_7 = arg_8.q
            r15 -= 8
            arg_8.q = rax_7
            r13_2 = rax_7.d
            r11_2 = arg_c
            arg_10 = r11_2
        
        rbx -= 8
        r14 -= 1
    
    arg1[0x16] = r13_2
    arg1[0x17] = r11_2
    
    if (rbx u>= r15)
    label_142bddd69:
        result = sub_142bde950(arg1, r13_2, r11_2)
    else
        while (true)
            int32_t rax_16 = sx.d(r14[1])
            r14 = &r14[1]
            rbx = &rbx[2]
            int32_t rax_17 = rax_16 & 3
            
            if (rax_17 == 0)
                int32_t result_3 = arg1[3] * *rbx - arg1[2]
                int32_t result_5 = rbx[1] * arg1[3] - arg1[2]
                
                if (arg4 != 0)
                    int32_t result_4 = result_3
                    result_3 = result_5
                    result_5 = result_4
                
                while (true)
                    if (rbx u>= r15)
                        result = sub_142bdd3f0(arg1, result_3, result_5, r13_2, arg_10)
                        goto label_142bddd6e
                    
                    result = zx.q(arg1[3])
                    rbx = &rbx[2]
                    int32_t rdx_10 = sx.d(r14[1])
                    r14 = &r14[1]
                    int32_t rdx_11 = rdx_10 & 3
                    int32_t result_1 = result.d * *rbx - arg1[2]
                    int32_t result_2 = rbx[1] * result.d - arg1[2]
                    
                    if (arg4 != 0)
                        result = zx.q(result_1)
                        result_1 = result_2
                        result_2 = result.d
                    
                    if (rdx_11 == 1)
                        result = sub_142bdd3f0(arg1, result_3, result_5, result_1, result_2)
                        break
                    
                    if (rdx_11 != 0)
                        goto label_142bdddae
                    
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(result_1 + result_3)
                    int32_t temp6_1
                    int32_t temp7_1
                    temp6_1:temp7_1 = sx.q(result_2 + result_5)
                    
                    if (sub_142bdd3f0(arg1, result_3, result_5, (temp5_1 - temp4_1) s>> 1, 
                            (temp7_1 - temp6_1) s>> 1).b != 0)
                        goto label_142bdddb5_1
                    
                    result_3 = result_1
                    result_5 = result_2
            else if (rax_17 == 1)
                int32_t rdx_9 = arg1[3] * *rbx - arg1[2]
                int32_t r8_8 = rbx[1] * arg1[3] - arg1[2]
                
                if (arg4 != 0)
                    int32_t rax_21 = rdx_9
                    rdx_9 = r8_8
                    r8_8 = rax_21
                
                result = sub_142bde950(arg1, rdx_9, r8_8)
            else
                if (&rbx[2] u> r15)
                    goto label_142bdddae
                
                result.b = r14[1] & 3
                
                if (result.b != 2)
                    goto label_142bdddae
                
                int32_t rdi_1 = arg1[3]
                rbx = &rbx[4]
                int32_t rsi_1 = arg1[2]
                r14 = &r14[2]
                int32_t rdx_6 = rbx[-4] * rdi_1 - rsi_1
                int32_t r8_5 = rbx[-3] * rdi_1 - rsi_1
                int32_t r9_3 = rbx[-2] * rdi_1 - rsi_1
                int32_t r11_5 = rbx[-1] * rdi_1 - rsi_1
                
                if (arg4 != 0)
                    int32_t rax_18 = rdx_6
                    rdx_6 = r8_5
                    r8_5 = rax_18
                    int32_t rax_19 = r9_3
                    r9_3 = r11_5
                    r11_5 = rax_19
                
                if (rbx u> r15)
                    result = sub_142bdd7b0(arg1, rdx_6, r8_5, r9_3, r11_5, r13_2, arg_10)
                    break
                
                int32_t rcx_5 = rdi_1 * *rbx - rsi_1
                int32_t r10_3 = rbx[1] * rdi_1 - rsi_1
                
                if (arg4 != 0)
                    int32_t rax_20 = rcx_5
                    rcx_5 = r10_3
                    r10_3 = rax_20
                
                result = sub_142bdd7b0(arg1, rdx_6, r8_5, r9_3, r11_5, rcx_5, r10_3)
            
            if (result.b != 0)
                goto label_142bdddb5_1
            
            if (rbx u>= r15)
                r11_2 = arg_10
                goto label_142bddd69
    
label_142bddd6e:
    
    if (result.b != 0)
    label_142bdddb5_1:
        result.b = 1

return result
