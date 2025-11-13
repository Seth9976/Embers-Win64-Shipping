// 函数: sub_1418bdb70
// 地址: 0x1418bdb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
EnterCriticalSection(&data_143efb2a8)
int64_t* i_2 = &arg1[0x15]
void* i = &i_2[0x10]

if (i_2 != i)
    int32_t* rdi_1 = &i_2[1]
    
    do
        int32_t rax_3 = *rdi_1
        
        if (rax_3 s> 0)
            int64_t* rcx = *(rdi_1 - 8)
            int32_t rdx_1 = rax_3 - 1
            
            if (rdx_1 s>= 1)
                rdx_1 = 1
            
            rsi = *rcx
            
            if (rdx_1 != 0)
                memcpy(rcx, &rcx[sx.q(rax_3 - rdx_1)], rdx_1 << 3)
                rax_3 = *rdi_1
            
            *rdi_1 = rax_3 - 1
        
        rdi_1 = &rdi_1[4]
    while (&rdi_1[-2] != i)

int32_t result = LeaveCriticalSection(&data_143efb2a8)

if (rsi != 0)
    (*(*rsi + 0x10))(rsi, *arg1)
    sub_1418beb20(*arg1 + 0x10, &rsi[3])
    result = (**rsi)(rsi, 1)

void* i_1 = &arg1[5]

for (void* r14 = i_1 + 0x80; i_1 != r14; i_1 += 0x10)
    int32_t rax_8 = *(i_1 + 8)
    result = rax_8 - 1
    int64_t result_1 = sx.q(result)
    
    if (rax_8 - 1 s>= 0)
        int64_t result_2
        
        do
            int64_t* rdi_2 = *(*i_1 + (result_1 << 3))
            EnterCriticalSection(&data_143efb2d0)
            LeaveCriticalSection(&data_143efb2d0)
            (*(*rdi_2 + 0x10))(rdi_2, *arg1)
            sub_1418beb20(*arg1 + 0x10, &rdi_2[3])
            result = (**rdi_2)(rdi_2, 1)
            result_2 = result_1
            result_1 -= 1
        while (result_2 - 1 s>= 0)
    
    *(i_1 + 8) = 0
    
    if (*(i_1 + 0xc) != 0)
        result = sub_1405c5570(i_1, 0)

for (; i_2 != i; i_2 = &i_2[2])
    int32_t j = 0
    
    if (i_2[1].d s> 0)
        int64_t* r14_1 = nullptr
        
        do
            int64_t* rdi_3 = *(r14_1 + *i_2)
            (*(*rdi_3 + 0x10))(rdi_3, *arg1)
            sub_1418beb20(*arg1 + 0x10, &rdi_3[3])
            result = (**rdi_3)(rdi_3, 1)
            j += 1
            r14_1 = &r14_1[1]
        while (j s< i_2[1].d)
    
    i_2[1].d = 0
    
    if (*(i_2 + 0xc) != 0)
        result = sub_1405c5570(i_2, 0)

return result
