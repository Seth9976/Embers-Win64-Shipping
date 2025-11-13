// 函数: sub_141cbc9b0
// 地址: 0x141cbc9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg2, 0, 0x208)
int32_t r8 = 0
int16_t* r9 = arg2
int16_t* r10 = nullptr

while (true)
    int32_t rcx_1 = data_143f024c0
    int32_t rcx_2
    
    if (rcx_1 == 0)
        rcx_2 = 0
    else
        rcx_2 = rcx_1 - 1
    
    int32_t rax_1 = 0x103
    
    if (rcx_2 s<= 0x103)
        rax_1 = rcx_2
    
    if (r8 s>= rax_1)
        break
    
    r8 += 1
    *r9 = *(r10 + data_143f024b8)
    r9 = &r9[1]
    r10 = &r10[1]

void* rbx = &arg2[0x104]
memset(rbx, 0, 0x208)
int32_t rdx = 0
int16_t* r8_1 = nullptr

while (true)
    int32_t rcx_5 = data_143f024d0
    int32_t rcx_6
    
    if (rcx_5 == 0)
        rcx_6 = 0
    else
        rcx_6 = rcx_5 - 1
    
    int32_t rax_3 = 0x103
    
    if (rcx_6 s<= 0x103)
        rax_3 = rcx_6
    
    if (rdx s>= rax_3)
        break
    
    rdx += 1
    *rbx = *(r8_1 + data_143f024c8)
    rbx += 2
    r8_1 = &r8_1[1]

void* rbx_1 = &arg2[0x208]
memset(rbx_1, 0, 0x208)
int32_t rdx_1 = 0
int16_t* r8_2 = nullptr

while (true)
    int32_t rcx_9 = data_143f024e0
    int32_t rcx_10
    
    if (rcx_9 == 0)
        rcx_10 = 0
    else
        rcx_10 = rcx_9 - 1
    
    int32_t rax_5 = 0x103
    
    if (rcx_10 s<= 0x103)
        rax_5 = rcx_10
    
    if (rdx_1 s>= rax_5)
        break
    
    rdx_1 += 1
    *rbx_1 = *(r8_2 + data_143f024d8)
    rbx_1 += 2
    r8_2 = &r8_2[1]

void* rbx_2 = &arg2[0x30c]
memset(rbx_2, 0, 0x208)
int32_t rdx_2 = 0
int16_t* r8_3 = nullptr
int32_t result

while (true)
    int32_t rcx_13 = data_143f024f0
    int32_t result_1
    
    if (rcx_13 == 0)
        result_1 = 0
    else
        result_1 = rcx_13 - 1
    
    result = 0x103
    
    if (result_1 s<= 0x103)
        result = result_1
    
    if (rdx_2 s>= result)
        break
    
    rdx_2 += 1
    *rbx_2 = *(r8_3 + data_143f024e8)
    rbx_2 += 2
    r8_3 = &r8_3[1]

return result
