// 函数: sub_141e248b0
// 地址: 0x141e248b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = *(arg2 + 0xa0)
sub_140cea340()
char rax_1

if (*(arg1 + 0x40) != 0)
    rax_1 = sub_140d3e110(arg1 + 0x48)

if ((*(arg1 + 0x40) == 0 || rax_1 == 0) && *(arg1 + 0x58) != 0)
    void* rax_2 = sub_140cd0630(arg1 + 0x40, nullptr, 0)
    
    if (rax_2 != 0 && (data_143e1b828 & *(*(rax_2 + 8) + 0x10)) != 0)
        *(arg1 + 0x40) = rax_2
    else if (*(arg1 + 0x40) != 0)
        *(arg1 + 0x48) = 0xffffffff
        *(arg1 + 0x4c) = 0
        *(arg1 + 0x40) = 0

sub_140cea340()
bool rcx_4
void* rsi

if (*(arg1 + 0x60) == 0)
    rcx_4 = true
    rsi = nullptr
else
    char rax_3 = sub_140d3e110(arg1 + 0x68)
    rsi = *(arg1 + 0x60)
    rcx_4 = rax_3 == 0

if (rcx_4 != 0 && *(arg1 + 0x78) != 0)
    void* rax_4 = sub_140cd0630(arg1 + 0x60, nullptr, 0)
    rsi = rax_4
    
    if (rax_4 == 0 || (data_143e1b828 & *(*(rax_4 + 8) + 0x10)) == 0)
        rsi = *(arg1 + 0x60)
        
        if (rsi != 0)
            *(arg1 + 0x68) = 0xffffffff
            rsi = nullptr
            *(arg1 + 0x6c) = 0
            *(arg1 + 0x60) = 0
    else
        *(arg1 + 0x60) = rax_4

sub_140cea340()
int64_t rcx_16
void* r8

if (rsi == 0)
    bool rax_13
    
    if (*(arg1 + 0x40) == 0)
        rax_13 = true
        r8 = nullptr
    else
        rax_13 = sub_140d3e110(arg1 + 0x48)
        r8 = *(arg1 + 0x40)
        rax_13 = rax_13 == 0
    
    if (rax_13 != 0 && *(arg1 + 0x58) != 0)
        void* rax_14 = sub_140cd0630(arg1 + 0x40, nullptr, 0)
        r8 = rax_14
        
        if (rax_14 == 0 || (data_143e1b828 & *(*(rax_14 + 8) + 0x10)) == 0)
            r8 = *(arg1 + 0x40)
            
            if (r8 != 0)
                *(arg1 + 0x48) = 0xffffffff
                r8 = nullptr
                *(arg1 + 0x4c) = 0
                *(arg1 + 0x40) = 0
        else
            *(arg1 + 0x40) = rax_14
    
    rcx_16 = sx.q(*(r8 + 0x3c) * *(arg1 + 0x10)) + r15
else
    void* rax_6
    bool rcx_8
    
    if (*(arg1 + 0x40) == 0)
        rcx_8 = true
        rax_6 = nullptr
    else
        bool cond:0_1 = sub_140d3e110(arg1 + 0x48) == 0
        rax_6 = *(arg1 + 0x40)
        rcx_8 = cond:0_1
    
    if (rcx_8 != 0 && *(arg1 + 0x58) != 0)
        rax_6 = sub_140cd0630(arg1 + 0x40, nullptr, 0)
        
        if (rax_6 == 0 || (data_143e1b828 & *(*(rax_6 + 8) + 0x10)) == 0)
            rax_6 = *(arg1 + 0x40)
            
            if (rax_6 != 0)
                *(arg1 + 0x48) = 0xffffffff
                rax_6 = nullptr
                *(arg1 + 0x4c) = 0
                *(arg1 + 0x40) = 0
        else
            *(arg1 + 0x40) = rax_6
    
    int64_t rbx_2 = sx.q(*(rax_6 + 0x4c)) + r15
    sub_140cea340()
    bool rcx_11
    
    if (*(arg1 + 0x60) == 0)
        rcx_11 = true
        r8 = nullptr
    else
        char rax_7 = sub_140d3e110(arg1 + 0x68)
        r8 = *(arg1 + 0x60)
        rcx_11 = rax_7 == 0
    
    if (rcx_11 == 0 || *(arg1 + 0x78) == 0)
        rcx_16 = sx.q(*(r8 + 0x3c) * *(arg1 + 0x10)) + rbx_2
    else
        void* rax_8 = sub_140cd0630(arg1 + 0x60, nullptr, 0)
        r8 = rax_8
        
        if (rax_8 == 0 || (data_143e1b828 & *(*(rax_8 + 8) + 0x10)) == 0)
            r8 = *(arg1 + 0x60)
            
            if (r8 != 0)
                *(arg1 + 0x68) = 0xffffffff
                r8 = nullptr
                *(arg1 + 0x6c) = 0
                *(arg1 + 0x60) = 0
            
            rcx_16 = sx.q(*(r8 + 0x3c) * *(arg1 + 0x10)) + rbx_2
        else
            *(arg1 + 0x60) = rax_8
            rcx_16 = sx.q(*(rax_8 + 0x3c) * *(arg1 + 0x10)) + rbx_2

return sx.q(*(r8 + 0x4c)) + rcx_16
