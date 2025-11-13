// 函数: sub_1423bd810
// 地址: 0x1423bd810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x318))() != 0)
    if (sub_140d23dc0(arg1, 0x30) == 0 && DBIQueryItsmForTi(sub_141f88540()) != 0)
        int64_t* rax_6 = sub_140963350(sub_141f88540())
        int64_t r8_1 = *rax_6
        (*(r8_1 + 0xd0))(rax_6, arg1, r8_1)
    
    *(arg1 + 0x3d) &= 0xf7
    void*** rax_7 = j_sub_140a82f30(0x68)
    
    if (rax_7 == 0)
        return 0
    
    int32_t r10 = arg1[7].d
    int64_t rcx_4 = *(arg1[0x1a] + 0x28)
    rax_7[1].d = 0xffffffff
    *(rax_7 + 0xc) = 4
    __builtin_memset(&rax_7[2], 0, 0x18)
    rax_7[5] = -0x3810000020000000
    __builtin_memset(&rax_7[6], 0, 0x14)
    *rax_7 = &data_14333b598
    rax_7[0xa] = rcx_4
    *(rax_7 + 0x44) = 0
    *(rax_7 + 0x46) = 0
    rax_7[9] = 0
    rax_7[0xb] = arg1
    rax_7[0xc].d = 0
    void* rcx_5 = rax_7[0xa]
    int32_t r8_2 = *(rcx_5 + 0x18)
    uint32_t r11 = divu.dp.d(0:(*(rcx_5 + 0xc) - 1 + r8_2), r8_2)
    uint32_t temp0_1 = divu.dp.d(0:(r8_2 - 1 + *(rcx_5 + 8)), r8_2)
    bool cond:1 = temp0_1 == r11
    
    if (temp0_1 u>= r11)
        r11 = temp0_1
    
    uint64_t rflags
    int32_t temp0_2
    temp0_2, rflags = _bit_scan_reverse(r11)
    int32_t rcx_7
    
    rcx_7 = cond:1 ? 0x20 : 0x1f - temp0_2
    
    int32_t rcx_9 = rcx_7 << 0x1a s>> 0x1f
    uint64_t rflags_1
    int32_t temp0_3
    temp0_3, rflags_1 = _bit_scan_reverse(r11 - 1)
    int32_t r8_3
    
    if (rcx_9 == 0)
        r8_3 = 0x20
    else
        r8_3 = 0x1f - temp0_3
    
    int32_t rdx_3 = (0x20 - r8_3) & not.d(rcx_9)
    
    if (rdx_3 s<= r10)
        r10 = rdx_3
    
    *(rax_7 + 0x64) = r10
    *(rax_7 + 0x46) = arg1[0xc].b & 1
    return rax_7

sub_140d3cb50(arg1)
int32_t rbp

if (arg1[0x1a] == 0)
    rbp = 0
else
    char rax_22 = (*(*arg1 + 0x318))(arg1)
    void* rcx_12 = arg1[0x1a]
    
    if (rax_22 == 0)
        rbp = *(rcx_12 + 0x20)
    else
        rbp = *(*(rcx_12 + 0x28) + 4)

int32_t r12 = 0
char rax_25 = DBIQueryItsmForTi(sub_141f88540())
char rax_26

if (rax_25 != 0)
    rax_26 = *(arg1 + 0x3d)

char rcx_14

if (rax_25 == 0 || (rax_26 & 2) != 0 || rbp s<= 1 || *(arg1 + 0x5f) == 0x10
        || (arg1[0x18].b & 1) != 0)
    rax_26 = *(arg1 + 0x3d)
    rcx_14 = 0
else
    rcx_14 = 8

rax_26 = (rax_26 & 0xf7) | rcx_14
*(arg1 + 0x3d) = rax_26

if ((rax_26 & 8) != 0 && rbp s> 0)
    void* r15_1 = arg1[0x1a]
    int32_t i = 0
    *(arg1 + 0x3d) = rax_26 & 0xf7
    
    if (*(r15_1 + 0x20) s> 0)
        int64_t* r14_1 = nullptr
        
        do
            if (sub_140bc3680(*(r14_1 + *(r15_1 + 0x18)) + 0x10) != 0)
                *(arg1 + 0x3d) |= 8
                break
            
            i += 1
            r14_1 = &r14_1[1]
        while (i s< *(r15_1 + 0x20))

int32_t* rcx_17 = arg1[0x1a]
int32_t rax_30
uint32_t rdx_4
int32_t r8_4

if (rcx_17 == 0)
    rdx_4 = 0
    rax_30 = 0
    r8_4 = 0
else
    void* rax_29 = *(rcx_17 + 0x28)
    
    if (rax_29 == 0)
        rdx_4 = rcx_17[3]
        rax_30 = rcx_17[1]
        r8_4 = *rcx_17
    else
        rdx_4 = zx.d(*(rax_29 + 0x20))
        rax_30 = rcx_17[1]
        r8_4 = *rcx_17

if (rbp == 1 && r8_4 s>= rax_30)
    rax_30 = r8_4

void*** rsi_2

if (rbp == 1 && rax_30 s> data_1439c7a78)
    *(arg1 + 0x3d) &= 0xf7
    rsi_2 = nullptr
else
    if (rbp != 0 && (&data_1439c8600)[sx.q(rdx_4) * 0x28] != 0)
        int32_t rdx_6 = rbp
        int32_t rsi_1
        int32_t r8_5
        int32_t r9_3
        
        if ((*(arg1 + 0x3d) & 8) == 0)
            r9_3 = data_1439c7a00
            rsi_1 = r9_3
            r8_5 = data_143a30254
        else if (rcx_17 == 0)
            r8_5 = data_143a30254
            int32_t rax_33 = 0
            r9_3 = data_1439c7a00
            rdx_6 = 0
            
            if (r8_5 s>= 0)
                rax_33 = r8_5
            
            if (rax_33 s<= 0)
                rax_33 = 0
            
            if (rax_33 s<= 0)
                rdx_6 = rax_33
            
            rsi_1 = rdx_6
        else
            int32_t rax_32 = sub_1423c1b40(rcx_17)
            r8_5 = data_143a30254
            rdx_6 = rax_32
            r9_3 = data_1439c7a00
            rsi_1 = rax_32
        
        int32_t rcx_19 = rbp - arg1[7].d
        int32_t rax_34 = rcx_19
        
        if (r8_5 s>= rcx_19)
            rax_34 = r8_5
        
        if (rax_34 s<= rdx_6)
            rdx_6 = rax_34
        
        if (rdx_6 s<= rbp)
            rbp = rdx_6
        
        int32_t rax_35 = rbp
        
        if (rcx_19 s>= rbp)
            rax_35 = rcx_19
        
        int64_t* rcx_20 = arg1[0x1b]
        
        if (rax_35 s<= r9_3)
            r9_3 = rax_35
        
        int32_t rax_36 = r9_3
        
        if (rbp s<= r9_3)
            rax_36 = rbp
        
        if (r9_3 s<= rsi_1)
            rsi_1 = r9_3
        
        if (rax_36 s>= rsi_1)
            rsi_1 = rax_36
        
        if (rcx_20 != 0)
            int32_t rax_38 = (*(*rcx_20 + 0x30))(rcx_20, rdx_6, r8_5)
            
            if (rsi_1 s>= rax_38)
                rax_38 = rsi_1
            
            rsi_1 = rax_38
        
        if (rsi_1 s>= 0)
            r12 = rsi_1
    
    if (r12 s<= 0)
        *(arg1 + 0x3d) &= 0xf7
        rsi_2 = nullptr
    else
        void*** rax_39 = j_sub_140a82f30(0xf0)
        
        if (rax_39 == 0)
            rsi_2 = nullptr
            arg1[0x1b] = 0
        else
            rsi_2 = sub_1423b9830(rax_39, arg1, r12)
            arg1[0x1b] = 0

if (sub_140d23dc0(arg1, 0x30) == 0 && DBIQueryItsmForTi(sub_141f88540()) != 0)
    int64_t* rax_45 = sub_140963350(sub_141f88540())
    int64_t r8_7 = *rax_45
    (*(r8_7 + 0xd0))(rax_45, arg1, r8_7)

if ((*(arg1 + 0x3d) & 8) != 0)
    if (sub_140d23dc0(arg1, 0x30) == 0 && DBIQueryItsmForTi(sub_141f88540()) != 0
            && sub_1423b27f0(arg1) != 0)
        int64_t* rax_51 = sub_140963350(sub_141f88540())
        int64_t r8_8 = *rax_51
        (*(r8_8 + 0xc8))(rax_51, arg1, r8_8)
        return rsi_2
    
    *(arg1 + 0x34) = 0xffffffff

return rsi_2
