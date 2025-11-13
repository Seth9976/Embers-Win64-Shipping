// 函数: sub_1418ccbb0
// 地址: 0x1418ccbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = arg3
void* r15 = arg1

if (*(arg1 + 0x78) == 0)
    int64_t rax
    rax.b = 0
    return rax

void* r8 = *(arg2 + 0x158)
int64_t i_2 = 5
int64_t rbp
int64_t var_10 = rbp
void* rdx = *(*(r8 + 8) + 0x20)
void* var_78 = r8
int64_t i_4 = 5
int64_t* rdx_1 = r15 + 0xd0
int64_t* var_70 = rdx_1
int64_t r11_1 = zx.q(*(rdx + 0x14)) + *(*(*(rdx + 0x20) + 0x18) + 0x18)
int64_t rsi = *(*(r15 + 8) + 0xa30)
int64_t var_60 = r11_1
int64_t var_58 = rsi
uint64_t rax_5 = r15 + 0x1e8
int64_t* rcx_2 = *(*(r15 + 0xc8) + 0x80) + 0x30
uint64_t var_50 = rax_5
int64_t* var_48 = rcx_2
int64_t i

do
    uint64_t j_3 = *rax_5
    
    if (j_3 != 0)
        rbp.b = 0
        int16_t* r13_1 = *rcx_2
        int64_t* r14_2 = zx.q(rcx_2[2].w) * 0x58 + *(r15 + 0x98)
        int64_t r15_1 = 0
        uint64_t j
        
        do
            j = j_3
            
            if ((j_3.b & 1) != 0)
                int16_t rax_7 = *r13_1
                void* rdx_2 = *(r8 + 8)
                int64_t* r9_1 = *rdx_1 + r15_1
                uint64_t rax_8 = zx.q(*(rdx_2 + 0x18))
                int64_t r12_1 = sx.q(r9_1[1].d)
                
                if (rsi.d u>= rax_8.d)
                    rax_8 = zx.q(rsi.d)
                
                int64_t rsi_4 = (*(rdx_2 + 0x10) - 1 + zx.q(rax_8.d)) & not.q(rax_8 - 1)
                int64_t rax_11 = rsi_4 + r12_1
                
                if (rax_11 u> *(rdx_2 + 8))
                    void* rax_12 = *(rdx_2 + 0x28)
                    
                    if (rax_12 != 0)
                        *(rax_12 + 0x98)
                    
                    *(rdx_2 + 0x10) = r12_1
                    rsi_4 = 0
                    *(rdx_2 + 0x28) = r10
                    *(rdx_2 + 0x30) = *(r10 + 0xa0)
                else
                    *(rdx_2 + 0x10) = rax_11
                
                memcpy(rsi_4 + r11_1, *r9_1, r12_1.d)
                char r9_2 = 0
                uint64_t rdx_4 = zx.q(rax_7)
                void* rcx_6 = *(*(var_78 + 8) + 0x20)
                void* r8_2 = *(rcx_6 + 0x20)
                int64_t r11_3 = zx.q(*(rcx_6 + 0x14)) + rsi_4
                int64_t* r10_1 = *((zx.q(rdx_4.d) << 6) + *r14_2 + 0x30)
                
                if (data_1439c7a08 s> 1)
                    int64_t r8_3 = *(r8_2 + 0x60)
                    int64_t rdx_6 = *r10_1
                    *r10_1 = r8_3
                    bool cond:6_1 = r10_1[1] != r11_3
                    r10_1[1] = r11_3
                    uint64_t rcx_8
                    rcx_8.b = cond:6_1
                    bool cond:7_1 = r10_1[2] != r12_1
                    r10_1[2] = r12_1
                    int64_t rax_16
                    rax_16.b = cond:7_1
                    rax_16.b |= rcx_8.b
                    r9_2 = rax_16.b
                    
                    if (rdx_6 != r8_3)
                        r9_2 = 1
                else
                    int32_t* rdx_5 = r14_2[6] + rdx_4 * 0xc
                    int32_t rax_18 = *(r8_2 + 0x68)
                    
                    if (*rdx_5 != rax_18)
                        *rdx_5 = rax_18
                        r9_2 = 1
                        *r10_1 = *(r8_2 + 0x60)
                    
                    if (rdx_5[1] != r11_3.d)
                        rdx_5[1] = r11_3.d
                        r9_2 = 1
                        r10_1[1] = r11_3
                    
                    if (rdx_5[2] != r12_1.d)
                        rdx_5[2] = r12_1.d
                        r9_2 = 1
                        r10_1[2] = r12_1
                    
                    r14_2[0xa].b |= r9_2
                
                if (rbp.b != 0 || r9_2 != 0)
                    rbp.b = 1
                
                rsi = var_58
                j = j_3
                r11_1 = var_60
                r8 = var_78
                rdx_1 = var_70
                r10 = arg3
            
            j_3 u>>= 1
            r15_1 += 0x10
            r13_1 = &r13_1[1]
        while (j u>= 2)
        r15 = arg1
        rax_5 = var_50
        rcx_2 = var_48
        i_2 = i_4
        *(r15 + 0x90) |= rbp.b
        *(r15 + 0xc0) |= rbp.b
        *rax_5 = 0
    
    rax_5 += 8
    rcx_2 = &rcx_2[7]
    rdx_1 = &rdx_1[6]
    var_50 = rax_5
    i = i_2
    i_2 -= 1
    var_48 = rcx_2
    i_4 = i_2
    var_70 = rdx_1
while (i != 1)

if (data_1439c7a08 s> 1)
    r8.b = *(r15 + 0x90) != 0
    
    if (sub_1418babd0(r10, *(r15 + 0x60), r8.b, *(r15 + 0x68)).b != 0)
        uint32_t i_3 = *(r15 + 0x78)
        int32_t r11_4 = 0
        
        if (i_3 != 0)
            uint32_t i_1
            
            do
                i_1 = i_3
                
                if ((i_3.b & 1) != 0)
                    int64_t rcx_13 = sx.q(r11_4)
                    int64_t r9_5 = *(*(r15 + 0x68) + (rcx_13 << 3))
                    int32_t j_1 = 0
                    int64_t* r8_6 = rcx_13 * 0x58 + *(r15 + 0x98)
                    
                    if (r8_6[3].d u> 0)
                        do
                            uint64_t j_2 = zx.q(j_1)
                            j_1 += 1
                            *((j_2 << 6) + *r8_6 + 0x10) = r9_5
                        while (j_1 u< r8_6[3].d)
                
                r11_4 += 1
                i_3 u>>= 1
            while (i_1 u>= 2)
        
        data_143efb8e8(*(*(r15 + 8) + 8), zx.q(*(r15 + 0x48)), *(r15 + 0x40), 0, 0)
        *(r15 + 0x90) = 0
else if (*(r15 + 0x90) != 0)
    sub_1418e1b30(*(*(r15 + 8) + 0x460), sub_1418e1aa0(r15), *(r15 + 0x60), r15 + 0x98, 
        *(r15 + 0x68))
    *(r15 + 0x90) = 0

rax_5.b = 1
return rax_5
