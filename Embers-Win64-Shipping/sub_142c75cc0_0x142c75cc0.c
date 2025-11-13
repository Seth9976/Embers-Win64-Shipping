// 函数: sub_142c75cc0
// 地址: 0x142c75cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg6
int64_t rbp = -1
int64_t i = arg4
char* rdi = arg3
*r13 = 0
*arg7 = 0

if (arg4 == 0)
    i = -1
    
    do
        i += 1
    while (arg3[i] != 0)

uint64_t rdx_1 = (i << 2) u/ 3
char* rax_1 = data_143ccb898(rdx_1 + 4, rdx_1)
char* rsi = rax_1

if (rax_1 == 0)
    return zx.q((&rax_1[0x1b]).d)

while (i != 0)
    int32_t rdx_2 = 0
    
    for (int64_t j = 0; j s< 3; j += 1)
        if (i == 0)
            if (j u>= 3)
                __report_rangecheckfailure()
                noreturn
            
            *(&arg6 + j) = 0
        else
            char rcx_2 = *rdi
            rdx_2 += 1
            rdi = &rdi[1]
            *(&arg6 + j) = rcx_2
            i -= 1
    
    char rcx_3 = arg6.b
    char r9 = arg6:1.b
    uint8_t r10_1 = rcx_3
    uint8_t r8 = arg6:2.b
    rcx_3 = (rcx_3 & 3) << 4 | r9 u>> 4
    r10_1 u>>= 2
    r9 = (r9 & 0xf) << 2 | r8 u>> 6
    
    if (rdx_2 == 1)
        int32_t var_48_3 = sx.d(*(zx.q(rcx_3) + arg1))
        arg5 = sub_142c564b0(rsi, 5, "%c%c==", zx.q(sx.d(*(zx.q(r10_1) + arg1))), arg5)
    else if (rdx_2 == 2)
        int32_t var_40_2 = sx.d(*(zx.q(r9) + arg1))
        int32_t var_48_2 = sx.d(*(zx.q(rcx_3) + arg1))
        arg5 = sub_142c564b0(rsi, 5, "%c%c%c=", zx.q(sx.d(*(zx.q(r10_1) + arg1))), arg5)
    else
        int32_t var_38_1 = sx.d(*((zx.q(r8) & 0x3f) + arg1))
        int32_t var_40_1 = sx.d(*(zx.q(r9) + arg1))
        int32_t var_48_1 = sx.d(*(zx.q(rcx_3) + arg1))
        arg5 = sub_142c564b0(rsi, 5, "%c%c%c%c", zx.q(sx.d(*(zx.q(r10_1) + arg1))), arg5)
    
    rsi = &rsi[4]

*rsi = 0
*r13 = rax_1
data_143ccb8a0(0)

do
    rbp += 1
while (rax_1[rbp] != 0)

*arg7 = rbp
return 0
