// 函数: sub_142bda650
// 地址: 0x142bda650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rax
int32_t* rdi

if (arg7 == 0)
    rdi = arg1
    rax = 0x204
else
    rdi = &arg1[0x102]
    rax = 0x60c

int32_t* r14 = rax + arg1
*rdi = 0
*r14 = 0
sub_142bda7d0(arg1, 0, arg2, arg3, rdi, r14)
int32_t result = sub_142bda7d0(arg1, 1, arg4, arg5, rdi, r14)
int32_t i_7 = *rdi
int32_t i_6 = *r14

if (i_7 != 0)
    void* rdx_1 = &rdi[1]
    int32_t i_3 = i_7
    int32_t i
    
    do
        if (i_3 u> 1)
            result = *(rdx_1 + 0x20) - *rdx_1
            
            if (*(rdx_1 + 4) s> result)
                *(rdx_1 + 4) = result
        
        int32_t rcx_1 = *rdx_1
        *(rdx_1 + 0xc) = rcx_1
        *(rdx_1 + 8) = rcx_1 + *(rdx_1 + 4)
        rdx_1 += 0x20
        i = i_3
        i_3 -= 1
    while (i != 1)

if (i_6 != 0)
    void* rdx_2 = &r14[1]
    int32_t i_4 = i_6
    int32_t i_1
    
    do
        if (i_4 u> 1)
            result = *rdx_2 - *(rdx_2 + 0x20)
            
            if (*(rdx_2 + 4) s< result)
                *(rdx_2 + 4) = result
        
        int32_t rcx_3 = *rdx_2
        *(rdx_2 + 8) = rcx_3
        *(rdx_2 + 0xc) = rcx_3 + *(rdx_2 + 4)
        rdx_2 += 0x20
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

void* rcx_5 = &rdi[1]
int32_t rbx_1 = 1
int32_t temp1_1

do
    if (i_7 != 0)
        *(rcx_5 + 0xc) -= arg6
        int32_t r8_2 = *(rcx_5 + 8)
        int32_t i_5 = i_7 - 1
        
        if (i_7 != 1)
            int32_t i_2
            
            do
                int32_t r9_2 = *(rcx_5 + 0x2c)
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(r9_2 - r8_2)
                int32_t rax_7 = (temp5_1 - temp4_1) s>> 1
                int32_t rax_8
                
                if (rax_7 s>= arg6)
                    rax_8 = r8_2 + arg6
                    *(rcx_5 + 0x2c) = r9_2 - arg6
                else
                    rax_8 = rax_7 + r8_2
                    *(rcx_5 + 0x2c) = rax_8
                
                *(rcx_5 + 8) = rax_8
                rcx_5 += 0x20
                r8_2 = *(rcx_5 + 8)
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        result = r8_2 + arg6
        *(rcx_5 + 8) = result
    
    temp1_1 = rbx_1
    rbx_1 -= 1
    rcx_5 = &r14[1]
    i_7 = i_6
while (temp1_1 - 1 s>= 0)
return result
