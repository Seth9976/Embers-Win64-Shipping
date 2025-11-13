// 函数: sub_14194ba20
// 地址: 0x14194ba20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_140b21160(arg2, 0x78, 0)
void* rsi = &arg1[7]
void* rdx = *(rsi + 8)
int64_t rbp = sx.q(arg1[9].d - 1)
int32_t r11 = 0
void* rax_2 = rsi
int64_t rcx_4 = sx.q(rax_1) & rbp

if (rdx != 0)
    rax_2 = rdx

void* r9 = rax_2 + (rcx_4 << 2)
int32_t rax_3 = *(rax_2 + (rcx_4 << 2))

if (rax_3 != 0xffffffff)
    void* r10_1 = *arg1
    
    while (true)
        int32_t i = 0
        int64_t rax_4
        rax_4.b = 1
        void* r8_2 = sx.q(rax_3) * 0x88 + r10_1
        
        do
            if (rax_4.b == 0)
                goto label_14194bade
            
            uint64_t rcx_5 = zx.q(i) * 5
            int64_t rax_6 = *(r8_2 + (rcx_5 << 2))
            rax_4 = rax_6 - *(arg2 + (rcx_5 << 2))
            
            if (rax_6 == *(arg2 + (rcx_5 << 2)))
                int64_t rax_7 = *(r8_2 + (rcx_5 << 2) + 8)
                rax_4 = rax_7 - *(arg2 + (rcx_5 << 2) + 8)
                
                if (rax_7 == *(arg2 + (rcx_5 << 2) + 8))
                    rax_4 =
                        zx.q(*(r8_2 + (rcx_5 << 2) + 0x10)) - zx.q(*(arg2 + (rcx_5 << 2) + 0x10))
            
            rax_4.b = rax_4 == 0
            i += 1
        while (i u< 6)
        
        if (rax_4.b != 0)
            break
        
    label_14194bade:
        r9 = r8_2 + 0x80
        rax_3 = *r9
        
        if (rax_3 == 0xffffffff)
            return 0
    
    int64_t rcx_7 = sx.q(*r9)
    
    if (arg1[1].d != *(arg1 + 0x34))
        void* rax_11 = *(rsi + 8)
        int64_t r9_1 = rcx_7 * 0x88
        int64_t rdx_2 = sx.q(*(r9_1 + r10_1 + 0x84)) & rbp
        
        if (rax_11 != 0)
            rsi = rax_11
        
        int32_t i_1 = *(rsi + (rdx_2 << 2))
        void* r8_3 = rsi + (rdx_2 << 2)
        
        for (; i_1 != 0xffffffff; i_1 = *r8_3)
            if (i_1 == rcx_7.d)
                *r8_3 = *(r9_1 + r10_1 + 0x80)
                break
            
            r8_3 = r10_1 + 0x80 + sx.q(i_1) * 0x88
    
    r11 = 1
    void* r9_2 = &arg1[2]
    
    if (*(arg1 + 0x34) != 0)
        *(sx.q(arg1[6].d) * 0x88 + *arg1) = rcx_7.d
    
    int32_t rdx_5 = -1
    int32_t* rax_17 = rcx_7 * 0x88 + *arg1
    *rax_17 = 0xffffffff
    
    if (*(arg1 + 0x34) s> 0)
        rdx_5 = arg1[6].d
    
    rax_17[1] = rdx_5
    *(arg1 + 0x34) += 1
    arg1[6].d = rcx_7.d
    void* rax_18 = *(r9_2 + 0x10)
    
    if (rax_18 != 0)
        r9_2 = rax_18
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(rcx_7.d)
    int64_t rcx_8 = sx.q((temp5_1 + (temp4_1 & 0x1f)) s>> 5)
    *(r9_2 + (rcx_8 << 2)) &= not.d(rol.d(1, rcx_7.b))

return zx.q(r11)
