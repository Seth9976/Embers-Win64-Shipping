// 函数: sub_1429e0260
// 地址: 0x1429e0260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg2

if (*(arg1 + 0x3760) == 0)
    return 

sub_1429e0700(arg1, arg3)
int32_t rcx_1 = r14 & 0xf

if (rcx_1 != 0)
    r14 += 0x10 - rcx_1

if (r14 s< 0x280)
    *(arg1 + 0x3784) = 1
else if (r14 s> 0x500)
    int32_t rax_2 = 0x20
    
    if (r14 s<= 0xa00)
        rax_2 = 0x10
    
    *(arg1 + 0x3784) = rax_2
else
    *(arg1 + 0x3784) = 8

int32_t r13_2 = r14 s>> 1
void* rax_4
int64_t r9_1
rax_4, r9_1 = sub_1429dde80(sx.q(*(arg1 + 0x1e74)) * 0x28)
*(arg1 + 0x3790) = rax_4

if (rax_4 == 0)
    sub_1429da010(arg1 + 0x12c0, (rax_4 + 2).d, "Failed to allocate pbi->pmutex", r9_1)

int32_t i_6 = 0

if (*(arg1 + 0x3790) != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x1e74) s> 0)
        do
            InitializeCriticalSectionEx(*(arg1 + 0x3790) + sx.q(i) * 0x28, 0, 0)
            i += 1
        while (i s< *(arg1 + 0x1e74))

void* rax_7
int64_t r9_2
rax_7, r9_2 = sub_1429dddd0(4, sx.q(*(arg1 + 0x1e74)))
*(arg1 + 0x3788) = rax_7

if (rax_7 == 0)
    sub_1429da010(arg1 + 0x12c0, (rax_7 + 2).d, "Failed to allocate (pbi->mt_current_mb_col)", r9_2)

void* rax_8
int64_t r9_3
rax_8, r9_3 = sub_1429dddd0(8, sx.q(*(arg1 + 0x1e74)))
*(arg1 + 0x37c0) = rax_8

if (rax_8 == 0)
    sub_1429da010(arg1 + 0x12c0, (rax_8 + 2).d, "Failed to allocate (pbi->mt_yabove_row)", r9_3)

int32_t i_1 = 0

if (*(arg1 + 0x1e74) s> 0)
    void** r14_1 = nullptr
    
    do
        void* rax_10
        int64_t r9_4
        rax_10, r9_4 = sub_1429ddec0(0x10, sx.q(r14 + 0x40))
        *(r14_1 + *(arg1 + 0x37c0)) = rax_10
        
        if (*(r14_1 + *(arg1 + 0x37c0)) == 0)
            sub_1429da010(arg1 + 0x12c0, 2, "Failed to allocate pbi->mt_yabove_row[i]", r9_4)
        
        i_1 += 1
        r14_1 = &r14_1[1]
    while (i_1 s< *(arg1 + 0x1e74))

void* rax_12
int64_t r9_5
rax_12, r9_5 = sub_1429dddd0(8, sx.q(*(arg1 + 0x1e74)))
*(arg1 + 0x37c8) = rax_12

if (rax_12 == 0)
    sub_1429da010(arg1 + 0x12c0, (rax_12 + 2).d, "Failed to allocate (pbi->mt_uabove_row)", r9_5)

int32_t i_2 = 0

if (*(arg1 + 0x1e74) s> 0)
    void** r14_2 = nullptr
    
    do
        void* rax_14
        int64_t r9_6
        rax_14, r9_6 = sub_1429ddec0(0x10, sx.q(r13_2 + 0x20))
        *(r14_2 + *(arg1 + 0x37c8)) = rax_14
        
        if (*(r14_2 + *(arg1 + 0x37c8)) == 0)
            sub_1429da010(arg1 + 0x12c0, 2, "Failed to allocate pbi->mt_uabove_row[i]", r9_6)
        
        i_2 += 1
        r14_2 = &r14_2[1]
    while (i_2 s< *(arg1 + 0x1e74))

void* rax_16
int64_t r9_7
rax_16, r9_7 = sub_1429dddd0(8, sx.q(*(arg1 + 0x1e74)))
*(arg1 + 0x37d0) = rax_16

if (rax_16 == 0)
    sub_1429da010(arg1 + 0x12c0, (rax_16 + 2).d, "Failed to allocate (pbi->mt_vabove_row)", r9_7)

int32_t i_3 = 0

if (*(arg1 + 0x1e74) s> 0)
    void** rsi_1 = nullptr
    
    do
        void* rax_18
        int64_t r9_8
        rax_18, r9_8 = sub_1429ddec0(0x10, sx.q(r13_2 + 0x20))
        *(rsi_1 + *(arg1 + 0x37d0)) = rax_18
        
        if (*(rsi_1 + *(arg1 + 0x37d0)) == 0)
            sub_1429da010(arg1 + 0x12c0, 2, "Failed to allocate pbi->mt_vabove_row[i]", r9_8)
        
        i_3 += 1
        rsi_1 = &rsi_1[1]
    while (i_3 s< *(arg1 + 0x1e74))

void* rax_20
int64_t r9_9
rax_20, r9_9 = sub_1429dddd0(8, sx.q(*(arg1 + 0x1e74)))
*(arg1 + 0x37d8) = rax_20

if (rax_20 == 0)
    sub_1429da010(arg1 + 0x12c0, (rax_20 + 2).d, "Failed to allocate (pbi->mt_yleft_col)", r9_9)

int32_t i_4 = 0

if (*(arg1 + 0x1e74) s> 0)
    void** rsi_2 = nullptr
    
    do
        void* rax_21
        int64_t r9_10
        rax_21, r9_10 = sub_1429dddd0(0x10, 1)
        *(rsi_2 + *(arg1 + 0x37d8)) = rax_21
        
        if (*(rsi_2 + *(arg1 + 0x37d8)) == 0)
            sub_1429da010(arg1 + 0x12c0, 2, "Failed to allocate pbi->mt_yleft_col[i]", r9_10)
        
        i_4 += 1
        rsi_2 = &rsi_2[1]
    while (i_4 s< *(arg1 + 0x1e74))

void* rax_23
int64_t r9_11
rax_23, r9_11 = sub_1429dddd0(8, sx.q(*(arg1 + 0x1e74)))
*(arg1 + 0x37e0) = rax_23

if (rax_23 == 0)
    sub_1429da010(arg1 + 0x12c0, (rax_23 + 2).d, "Failed to allocate (pbi->mt_uleft_col)", r9_11)

int32_t i_5 = 0

if (*(arg1 + 0x1e74) s> 0)
    void** rsi_3 = nullptr
    
    do
        void* rax_24
        int64_t r9_12
        rax_24, r9_12 = sub_1429dddd0(8, 1)
        *(rsi_3 + *(arg1 + 0x37e0)) = rax_24
        
        if (*(rsi_3 + *(arg1 + 0x37e0)) == 0)
            sub_1429da010(arg1 + 0x12c0, 2, "Failed to allocate pbi->mt_uleft_col[i]", r9_12)
        
        i_5 += 1
        rsi_3 = &rsi_3[1]
    while (i_5 s< *(arg1 + 0x1e74))

void* rax
int64_t r9_13
rax, r9_13 = sub_1429dddd0(8, sx.q(*(arg1 + 0x1e74)))
*(arg1 + 0x37e8) = rax

if (rax == 0)
    sub_1429da010(arg1 + 0x12c0, (rax + 2).d, "Failed to allocate (pbi->mt_vleft_col)", r9_13)

if (*(arg1 + 0x1e74) s<= 0)
    return 

int64_t* rsi_4 = nullptr

do
    void* rax_26
    int64_t r9_14
    rax_26, r9_14 = sub_1429dddd0(8, 1)
    *(rsi_4 + *(arg1 + 0x37e8)) = rax_26
    
    if (*(rsi_4 + *(arg1 + 0x37e8)) == 0)
        sub_1429da010(arg1 + 0x12c0, 2, "Failed to allocate pbi->mt_vleft_col[i]", r9_14)
    
    i_6 += 1
    rsi_4 = &rsi_4[1]
while (i_6 s< *(arg1 + 0x1e74))
