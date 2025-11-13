// 函数: sub_1414942b0
// 地址: 0x1414942b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_1 = arg1 + 0x10
void* result_16 = *(result_1 + 0x68)
int64_t rdx = sx.q(arg2) * 5
void* result_3 = result_1

if (result_16 != 0)
    result_3 = result_16

int64_t r14 = rdx << 2
int32_t rdx_1 = *(result_3 + (rdx << 2))

if (rdx_1 != 0xffffffff)
    sub_1414942b0(arg1, rdx_1)
    result_16 = *(arg1 + 0x78)

void* result_4 = result_1

if (result_16 != 0)
    result_4 = result_16

int32_t rdx_2 = *(result_4 + r14 + 4)

if (rdx_2 != 0xffffffff)
    sub_1414942b0(arg1, rdx_2)
    result_16 = *(arg1 + 0x78)

void* result_10 = result_1

if (result_16 != 0)
    result_10 = result_16

int32_t i_1 = 0
int64_t rbp = sx.q(*(result_10 + r14))

if (rbp.d != 0xffffffff)
    int32_t rcx_2 = *(result_1 + 0x70)
    int32_t rax_2 = rcx_2 - rbp.d
    
    if (rax_2 != 1)
        memmove(result_10 + rbp * 0x14, result_10 + sx.q((rbp + 1).d) * 0x14, (rax_2 - 1) * 0x14)
        rcx_2 = *(result_1 + 0x70)
    
    *(result_1 + 0x70) = rcx_2 - 1
    sub_14149c5d0(result_1)
    int32_t i = 0
    
    if (*(arg1 + 0x80) s> 0)
        int64_t rdx_4 = 0
        
        do
            void* result_11 = *(result_1 + 0x68)
            void* result_5 = result_1
            
            if (result_11 != 0)
                result_5 = result_11
            
            int32_t rax_8 = *(result_5 + rdx_4)
            
            if (rax_8 s>= rbp.d)
                *(result_5 + rdx_4) = rax_8 - 1
            
            void* result_12 = *(result_1 + 0x68)
            void* result_6 = result_1
            
            if (result_12 != 0)
                result_6 = result_12
            
            int32_t rax_10 = *(result_6 + rdx_4 + 4)
            
            if (rax_10 s>= rbp.d)
                *(result_6 + rdx_4 + 4) = rax_10 - 1
            
            i += 1
            rdx_4 += 0x14
        while (i s< *(arg1 + 0x80))
    
    void* result_13 = *(result_1 + 0x68)
    void* result_7 = result_1
    
    if (result_13 != 0)
        result_7 = result_13
    
    *(result_7 + r14) = 0xffffffff

void* result = *(result_1 + 0x68)
void* result_2 = result_1

if (result != 0)
    result_2 = result

int64_t rbp_1 = sx.q(*(result_2 + r14 + 4))

if (rbp_1.d != 0xffffffff)
    int32_t rcx_8 = *(result_1 + 0x70)
    int32_t rax_13 = rcx_8 - rbp_1.d
    
    if (rax_13 != 1)
        memmove(result_2 + rbp_1 * 0x14, result_2 + sx.q((rbp_1 + 1).d) * 0x14, (rax_13 - 1) * 0x14)
        rcx_8 = *(result_1 + 0x70)
    
    *(result_1 + 0x70) = rcx_8 - 1
    sub_14149c5d0(result_1)
    
    if (*(arg1 + 0x80) s> 0)
        int64_t rdx_6 = 0
        
        do
            void* result_14 = *(result_1 + 0x68)
            void* result_8 = result_1
            
            if (result_14 != 0)
                result_8 = result_14
            
            int32_t rax_19 = *(result_8 + rdx_6)
            
            if (rax_19 s>= rbp_1.d)
                *(result_8 + rdx_6) = rax_19 - 1
            
            void* result_15 = *(result_1 + 0x68)
            void* result_9 = result_1
            
            if (result_15 != 0)
                result_9 = result_15
            
            int32_t rax_21 = *(result_9 + rdx_6 + 4)
            
            if (rax_21 s>= rbp_1.d)
                *(result_9 + rdx_6 + 4) = rax_21 - 1
            
            i_1 += 1
            rdx_6 += 0x14
        while (i_1 s< *(arg1 + 0x80))
    
    result = *(result_1 + 0x68)
    
    if (result != 0)
        result_1 = result
    
    *(result_1 + r14 + 4) = 0xffffffff

return result
