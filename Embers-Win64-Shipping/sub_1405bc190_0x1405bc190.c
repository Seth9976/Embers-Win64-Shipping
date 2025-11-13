// 函数: sub_1405bc190
// 地址: 0x1405bc190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x290))()
int64_t* rcx = arg1[0x38]
void* const rsi = rax_1

if (rax_1 == 0 && arg1[0x21] == rcx)
    int64_t* rax_2 = sub_1405cc510()
    void* rcx_1 = rax_2[0x23]
    
    if (rcx_1 == 0)
        int64_t rdx_1 = *rax_2
        (*(rdx_1 + 0x390))(rax_2, rdx_1)
        rcx_1 = rax_2[0x23]
    
    void* rax_3 = sub_140d30a00(rcx_1 + 0x28, 0)
    rsi = rax_3
    void* rax_4
    int64_t rax_5
    void* rdx_2
    
    if (rax_3 != 0)
        rax_4 = sub_1425b3bb0()
        rdx_2 = *(rsi + 0x10)
        rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_3 == 0 || rax_5.d s> *(rdx_2 + 0x38)
            || *(*(rdx_2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
        rsi = nullptr
    
    rcx = arg1[0x39]
else if (arg1[0x21] != 0)
    if (sub_1405b37a0(&arg1[0xd], nullptr) == 0)
        return rsi
    
    int64_t rbx_3 = data_143cd5fe0
    void* const rcx_12
    
    if (arg1[0x2d].d == *(arg1 + 0x194))
    label_1405bc340:
        rcx_12 = nullptr
    else
        int32_t rax_13 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
        void* r8_4 = &arg1[0x33]
        void* rcx_10 = *(r8_4 + 8)
        
        if (rcx_10 != 0)
            r8_4 = rcx_10
        
        int32_t rax_15 = *(r8_4 + (((sx.q(arg1[0x35].d) - 1) & sx.q(rax_13)) << 2))
        
        if (rax_15 == 0xffffffff)
        label_1405bc340_1:
            rcx_12 = nullptr
        else
            int64_t r8_5 = arg1[0x2c]
            
            while (true)
                int64_t rdx_9 = sx.q(rax_15) * 3
                rcx_12 = r8_5 + (rdx_9 << 3)
                
                if (*(r8_5 + (rdx_9 << 3)) == rbx_3)
                    break
                
                rax_15 = *(rcx_12 + 0x10)
                
                if (rax_15 == 0xffffffff)
                    goto label_1405bc340_2
            
            if (rax_15 == 0xffffffff)
            label_1405bc340_2:
                rcx_12 = nullptr
    
    int64_t rbx_4 = *(rcx_12 + 8)
    void* rax_16 = sub_1405bd3f0(&arg1[0xd])
    
    if (rax_16 != 0)
        sub_142131d00(rax_16, rbx_4, rsi)
    
    void* rax_17 = sub_1405c4270(arg1, 0x3f800000)
    uint64_t rax_18 = sub_1405bd3f0(&arg1[0xd])
    
    if (rax_18 != 0)
        sub_1420bacc0(arg1, rax_17, rax_18)
        return rax_17
    
    uint64_t r8_8 = arg1[0x21]
    
    if (r8_8 != 0)
        sub_1420bacc0(arg1, rax_17, r8_8)
    
    return rax_17

void* rax_7 = arg1[0x3a]

if (rax_7 == 0 || *(rax_7 + 0xd0) != rcx)
    rax_7 = sub_142121cc0(rcx, arg1)
    arg1[0x3a] = rax_7

sub_142131d00(rax_7, data_143cd5fe8, rsi)
void* rax_8 = sub_1405c4270(arg1, 0x3f800000)
sub_1420bacc0(arg1, rax_8, arg1[0x3a])
return rax_8
