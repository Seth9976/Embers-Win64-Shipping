// 函数: sub_142bc6d30
// 地址: 0x142bc6d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r11 = arg1
int32_t rcx = *arg5

if (rcx == 0)
    return 0

int32_t r14 = arg5[1]

if (r14 == 0)
    return 0

char* rbx = *(arg5 + 0x10)
int32_t i_2 = rcx * r14
int32_t rsi = arg5[2]
char* var_28 = rbx
int32_t var_20 = rsi
int32_t i_3 = i_2
int32_t var_1c = r14
int32_t var_18 = rcx

if (arg4 == 0)
    rbx = &rbx[sx.q((rcx - 1) * rsi)]
    rsi = neg.d(rsi)
    var_28 = rbx
    int32_t var_20_1 = rsi

if (arg3 == 0)
    int32_t i_1 = (arg2.d - r11.d) << 3
    uint32_t r10_2 = 0
    int32_t rdx_2 = 0
    int32_t rdi_1 = r14
    char* r9 = rbx
    uint32_t rcx_3 = 0x80
    
    if (i_1 u> i_2)
        i_1 = i_2
    
    int32_t rbp_2 = i_1 & 7
    
    if (i_1 != 0)
        int32_t i
        
        do
            if ((i_1 & 7) == rbp_2)
                r10_2 = zx.d(*r11)
                r11 = &r11[1]
            
            if (r10_2.b s< 0)
                rdx_2 |= rcx_3
            
            r10_2 *= 2
            rcx_3 u>>= 1
            int32_t temp1_1 = rdi_1
            rdi_1 -= 1
            
            if (temp1_1 == 1)
                *r9 = rdx_2.b
                rdi_1 = r14
                rbx = &rbx[sx.q(rsi)]
                r9 = rbx
                rdx_2 = 0
                rcx_3 = 0x80
            else if (rcx_3 == 0)
                *r9 = rdx_2.b
                rdx_2 = 0
                r9 = &r9[1]
                rcx_3 = 0x80
            
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (rcx_3 != 0x80)
            *r9 = rdx_2.b
else if (arg3 == 1)
    sub_142bc5f00(&var_28, r11, arg2)
else if (arg3 == 2)
    sub_142bc5ff0(&var_28, r11, arg2)

return 0
