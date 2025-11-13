// 函数: sub_14141ca60
// 地址: 0x14141ca60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi_2 = data_143ed3460 - data_143ed3450 - 2

if (rdi_2 s> 0)
    int64_t rsi_1 = sx.q(rdi_2)
    int64_t rbx_1 = 0
    
    do
        sub_140a74f90(*(data_143ed3458 + (rbx_1 << 3)))
        rbx_1 += 1
    while (rbx_1 s< rsi_1)
    
    int32_t rax_1 = data_143ed3460
    
    if (rax_1 != rdi_2)
        int64_t rcx_5 = data_143ed3458
        memmove(rcx_5, rcx_5 + (rsi_1 << 3), (rax_1 - rdi_2) << 3)
        rax_1 = data_143ed3460
    
    data_143ed3460 = rax_1 - rdi_2

int64_t* r14 = data_143ed3448
void* rbp = &r14[sx.q(data_143ed3450)]

while (r14 != rbp)
    void* rsi_2 = *r14
    sub_1405d16e0(rsi_2 + 0x10, nullptr)
    int64_t rcx_7 = *(rsi_2 + 0x15b0)
    
    if (rcx_7 != 0)
        *(rsi_2 + 0x15b0) = 0
        j_sub_140a74f90(rcx_7)
    
    *(rsi_2 + 0x26f8) = 0
    
    if (*(rsi_2 + 0x26fc) != 0)
        sub_141427b60(rsi_2 + 0x26f0, 0)
    
    void* rcx_9 = *(rsi_2 + 0x2700)
    
    if (rcx_9 != 0)
        int32_t rax_4 = 0
        
        if (0 == *(rcx_9 + 8))
            *(rcx_9 + 8) = 0
        else
            rax_4 = *(rcx_9 + 8)
        
        if (rax_4 == 1)
            void* rdi_3 = *(rsi_2 + 0x2700)
            
            if (*(rdi_3 + 0x11) != 0)
                if (data_143f0f1c7 != 0)
                    int64_t* rcx_10 = data_143f0f180
                    (*(*rcx_10 + 0x628))(rcx_10, rdi_3)
                
                *(rdi_3 + 0x11) = 0
    
    *(rsi_2 + 0x2718) = 0
    sub_1405d16e0(rsi_2 + 0x2700, nullptr)
    sub_1405d16e0(rsi_2 + 0x2708, nullptr)
    sub_1405d16e0(rsi_2 + 0x2710, nullptr)
    void* rcx_14 = *(rsi_2 + 0x2720)
    
    if (rcx_14 != 0)
        int32_t rax_6 = 0
        
        if (0 == *(rcx_14 + 8))
            *(rcx_14 + 8) = 0
        else
            rax_6 = *(rcx_14 + 8)
        
        if (rax_6 == 1)
            void* rbx_3 = *(rsi_2 + 0x2720)
            
            if (*(rbx_3 + 0x11) != 0)
                if (data_143f0f1c7 != 0)
                    int64_t* rcx_15 = data_143f0f180
                    (*(*rcx_15 + 0x638))(rcx_15, rbx_3)
                
                *(rbx_3 + 0x11) = 0
    
    *(rsi_2 + 0x2738) = 0
    sub_1405d16e0(rsi_2 + 0x2720, nullptr)
    sub_1405d16e0(rsi_2 + 0x2728, nullptr)
    sub_1405d16e0(rsi_2 + 0x2730, nullptr)
    
    for (int32_t i = 0; i s< 0x12; i += 1)
        sub_1412e9820(zx.q(i) * 0x1d0 + 0x2740 + rsi_2)
    
    void* rbx_4 = rsi_2 + 0x2818
    int64_t i_2 = 0x12
    int64_t i_1
    
    do
        int64_t rcx_22 = *(rbx_4 + 0x10)
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        int64_t rcx_23 = *rbx_4
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        sub_14108ca30(rbx_4 - 0x20)
        rbx_4 += 0x1d0
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    int64_t rbx_5 = sx.q(data_143ed3460)
    int32_t rax_9 = (rbx_5 + 1).d
    bool cond:1_1 = rax_9 s<= data_143ed3464
    data_143ed3460 = rax_9
    
    if (not(cond:1_1))
        sub_1405a4d70(&data_143ed3458)
    
    r14 = &r14[1]
    *(data_143ed3458 + (rbx_5 << 3)) = rsi_2

int32_t result = data_143ed3454
data_143ed3450 = 0

if (result s< 0 && result != 0)
    return sub_1405c5570(&data_143ed3448, 0) __tailcall

return result
