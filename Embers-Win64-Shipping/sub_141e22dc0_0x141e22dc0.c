// 函数: sub_141e22dc0
// 地址: 0x141e22dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** r14 = *(arg2 + 0xa0)
sub_140cea340()
void* result = nullptr
bool rcx
void* rsi

if (*(arg1 + 0x18) == 0)
    rcx = true
    rsi = nullptr
else
    char rax_1 = sub_140d3e110(arg1 + 0x20)
    rsi = *(arg1 + 0x18)
    rcx = rax_1 == 0

if (rcx == 0 || *(arg1 + 0x30) == 0)
    goto label_141e22e46

void* rax_2 = sub_140cd0630(arg1 + 0x18, nullptr, 0)
rsi = rax_2

if (rax_2 != 0 && (data_143e1b828 & *(*(rax_2 + 8) + 0x10)) != 0)
    *(arg1 + 0x18) = rax_2
label_141e22e46:
    
    if (rsi == 0 || ((zx.q(*(*(rsi + 8) + 0x10)) u>> 0x15).b & 1) == 0)
        rsi = nullptr
else if (*(arg1 + 0x18) == 0)
    rsi = nullptr
else
    *(arg1 + 0x20) = 0xffffffff
    *(arg1 + 0x24) = 0
    *(arg1 + 0x18) = 0
    rsi = nullptr

char rax_4 = *(arg1 + 0x14)

if (rsi != 0)
    if (rax_4 != 0)
        if (r14[1].d == 0)
            return result
        
        void* rax_11 = *r14
        
        if ((not.b((*(rsi + 0x80)).b) & 1) == 0 && (rax_11.b & 1) != 0)
            rax_11 = (rax_11 s>> 1) + r14
        
        return sx.q(*(*(rsi + 0x78) + 0x3c) * *(arg1 + 0x38)) + rax_11
    
    void* rbp_2 = sx.q(*(arg3 + 0x4c)) + r14
    sub_140cea340()
    void* rax_6
    bool rcx_6
    
    if (*(arg1 + 0x18) == 0)
        rcx_6 = true
        rax_6 = nullptr
    else
        bool cond:2_1 = sub_140d3e110(arg1 + 0x20) == 0
        rax_6 = *(arg1 + 0x18)
        rcx_6 = cond:2_1
    
    if (rcx_6 != 0 && *(arg1 + 0x30) != 0)
        rax_6 = sub_140cd0630(arg1 + 0x18, nullptr, 0)
        
        if (rax_6 == 0 || (data_143e1b828 & *(*(rax_6 + 8) + 0x10)) == 0)
            rax_6 = *(arg1 + 0x18)
            
            if (rax_6 != 0)
                *(arg1 + 0x20) = 0xffffffff
                rax_6 = nullptr
                *(arg1 + 0x24) = 0
                *(arg1 + 0x18) = 0
        else
            *(arg1 + 0x18) = rax_6
    
    void** rcx_11 = sx.q(*(rax_6 + 0x4c)) + rbp_2
    
    if (rcx_11[1].d == 0)
        return result
    
    void* rax_8 = *rcx_11
    
    if ((not.b((*(rsi + 0x80)).b) & 1) == 0 && (rax_8.b & 1) != 0)
        rax_8 = (rax_8 s>> 1) + rcx_11
    
    return sx.q(*(*(rsi + 0x78) + 0x3c) * *(arg1 + 0x38)) + rax_8

if (rax_4 != 0)
    sub_140cea340()
    void* rax_20
    bool rcx_17
    
    if (*(arg1 + 0x18) == 0)
        rcx_17 = true
        rax_20 = nullptr
    else
        bool cond:0_1 = sub_140d3e110(arg1 + 0x20) == 0
        rax_20 = *(arg1 + 0x18)
        rcx_17 = cond:0_1
    
    if (rcx_17 != 0 && *(arg1 + 0x30) != 0)
        rax_20 = sub_140cd0630(arg1 + 0x18, nullptr, 0)
        
        if (rax_20 == 0 || (data_143e1b828 & *(*(rax_20 + 8) + 0x10)) == 0)
            rax_20 = *(arg1 + 0x18)
            
            if (rax_20 != 0)
                *(arg1 + 0x20) = 0xffffffff
                rax_20 = nullptr
                *(arg1 + 0x24) = 0
                *(arg1 + 0x18) = 0
        else
            *(arg1 + 0x18) = rax_20
    
    return sx.q(*(rax_20 + 0x4c)) + r14

void* rsi_3 = sx.q(*(arg3 + 0x4c)) + r14
sub_140cea340()
void* const rax_14
bool rcx_13

if (*(arg1 + 0x18) == 0)
    rcx_13 = true
    rax_14 = nullptr
else
    bool cond:1_1 = sub_140d3e110(arg1 + 0x20) == 0
    rax_14 = *(arg1 + 0x18)
    rcx_13 = cond:1_1

if (rcx_13 != 0 && *(arg1 + 0x30) != 0)
    void* rax_15 = sub_140cd0630(arg1 + 0x18, nullptr, 0)
    
    if (rax_15 != 0 && (data_143e1b828 & *(*(rax_15 + 8) + 0x10)) != 0)
        *(arg1 + 0x18) = rax_15
        return sx.q(*(rax_15 + 0x4c)) + rsi_3
    
    rax_14 = *(arg1 + 0x18)
    
    if (rax_14 != 0)
        *(arg1 + 0x20) = 0xffffffff
        rax_14 = nullptr
        *(arg1 + 0x24) = 0
        *(arg1 + 0x18) = 0

return sx.q(*(rax_14 + 0x4c)) + rsi_3
