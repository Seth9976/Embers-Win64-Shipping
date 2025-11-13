// 函数: sub_142b99400
// 地址: 0x142b99400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = *arg2 + 0x158

if (arg3 == 3)
    int32_t r8 = *r9
    int32_t rdx = r9[2]
    int32_t rax_1 = rdx
    int32_t r10_1 = r9[4]
    
    if (r8 s> rdx)
        rax_1 = r8
    
    if (rax_1 s<= r10_1)
        rdx = r10_1
    else if (r8 s> rdx)
        rdx = r8
    
    *arg1 -= rdx
    int32_t r8_1 = *r9
    int32_t rdx_1 = r9[2]
    int32_t rax_2 = rdx_1
    int32_t r10_2 = r9[4]
    
    if (r8_1 s< rdx_1)
        rax_2 = r8_1
    
    if (rax_2 s>= r10_2)
        rdx_1 = r10_2
    else if (r8_1 s< rdx_1)
        rdx_1 = r8_1
    
    arg1[2] -= rdx_1
    int32_t r8_2 = r9[1]
    int32_t rdx_2 = r9[3]
    int32_t rax_3 = rdx_2
    int32_t r10_3 = r9[5]
    
    if (r8_2 s> rdx_2)
        rax_3 = r8_2
    
    if (rax_3 s<= r10_3)
        rdx_2 = r10_3
    else if (r8_2 s> rdx_2)
        rdx_2 = r8_2
    
    arg1[1] -= rdx_2
    int32_t r8_3 = r9[1]
    int32_t rdx_3 = r9[3]
    int32_t rax_4 = rdx_3
    int32_t r10_4 = r9[5]
    
    if (r8_3 s< rdx_3)
        rax_4 = r8_3
    
    if (rax_4 s>= r10_4)
        arg1[3] -= r10_4
        return 
    
    if (r8_3 s< rdx_3)
        rdx_3 = r8_3
    
    arg1[3] -= rdx_3
    return 

if (arg3 != 4)
    return 

int32_t r8_4 = r9[1]
int32_t rdx_5 = r9[3]
int32_t rax_5 = rdx_5
int32_t r10_5 = r9[5]

if (r8_4 s> rdx_5)
    rax_5 = r8_4

if (rax_5 s<= r10_5)
    rdx_5 = r10_5
else if (r8_4 s> rdx_5)
    rdx_5 = r8_4

*arg1 -= rdx_5
int32_t r8_5 = r9[1]
int32_t rdx_6 = r9[3]
int32_t rax_6 = rdx_6
int32_t r10_6 = r9[5]

if (r8_5 s< rdx_6)
    rax_6 = r8_5

if (rax_6 s>= r10_6)
    rdx_6 = r10_6
else if (r8_5 s< rdx_6)
    rdx_6 = r8_5

arg1[2] -= rdx_6
int32_t r8_6 = *r9
int32_t rdx_7 = r9[2]
int32_t rax_7 = rdx_7
int32_t r10_7 = r9[4]

if (r8_6 s< rdx_7)
    rax_7 = r8_6

if (rax_7 s>= r10_7)
    rdx_7 = r10_7
else if (r8_6 s< rdx_7)
    rdx_7 = r8_6

arg1[1] += rdx_7
int32_t r8_7 = *r9
int32_t rdx_8 = r9[2]
int32_t rax = rdx_8
int32_t r10_8 = r9[4]

if (r8_7 s> rdx_8)
    rax = r8_7

if (rax s> r10_8)
    if (r8_7 s> rdx_8)
        rdx_8 = r8_7
    
    arg1[3] += rdx_8
    return 

arg1[3] += r10_8
