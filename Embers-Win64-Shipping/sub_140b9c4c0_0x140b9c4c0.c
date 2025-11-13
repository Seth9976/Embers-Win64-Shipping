// 函数: sub_140b9c4c0
// 地址: 0x140b9c4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
uint32_t rax_1

if (data_143de5480 != 0)
    rax_1.b = GetCurrentThreadId() == data_143de5470

if (data_143de5480 == 0 || rax_1.b != 0)
    int32_t rax_2 = *(arg1 + 0x3a8)
    data_143e1a570 += 1
    data_1439a965c = rax_2
    r12.b = 1

if (data_143de5452 != 0)
    while (true)
        void* rdi_1 = *(arg1 + 0x3a0)
        
        if (*(rdi_1 + 0xa0) == *(rdi_1 + 0xcc) && *(rdi_1 + 0xf0) == *(rdi_1 + 0x11c))
            break
        
        EnterCriticalSection(rdi_1 + 0x40)
        
        if (*(rdi_1 + 0x70) != 0 || *(rdi_1 + 0x80) != 0)
        label_140b9c5d1:
            
            if (rdi_1 != -0x40)
                LeaveCriticalSection(rdi_1 + 0x40)
        else
            if (*(rdi_1 + 0x90) == 0)
                *(rdi_1 + 0x90) = sub_140a491d0(0)
            
            *(rdi_1 + 0x88) = 1
            
            if (rdi_1 != -0x40)
                LeaveCriticalSection(rdi_1 + 0x40)
            
            int64_t* rcx_2 = *(rdi_1 + 0x90)
            
            if ((*(*rcx_2 + 0x20))(rcx_2, 0x2710, 0) == 0)
                EnterCriticalSection(rdi_1 + 0x40)
                
                if (*(rdi_1 + 0x88) == 0)
                    int64_t* rcx_4 = *(rdi_1 + 0x90)
                    (*(*rcx_4 + 0x18))(rcx_4)
                else
                    *(rdi_1 + 0x88) = 0
                
                goto label_140b9c5d1
        
        _Wcsftime_l(*(arg1 + 0x3a0))

EnterCriticalSection(arg1 + 0x58)
int64_t rdi_2 = 0
int32_t rax_12

if (arg1 + 0x2c8 == arg1 + 0x48)
    rax_12 = *(arg1 + 0x54)
else
    int64_t rcx_8 = *(arg1 + 0x2c8)
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    *(arg1 + 0x2c8) = *(arg1 + 0x48)
    *(arg1 + 0x48) = 0
    *(arg1 + 0x2d0) = *(arg1 + 0x50)
    *(arg1 + 0x2d4) = *(arg1 + 0x54)
    rax_12 = 0
    *(arg1 + 0x54) = 0

*(arg1 + 0x50) = 0

if (rax_12 s< 0 && *(arg1 + 0x54) != 0)
    sub_1405c5570(arg1 + 0x48, 0)

if (arg1 != -0x58)
    LeaveCriticalSection(arg1 + 0x58)

sub_140b90c60(arg1 + 0x2d8, arg1 + 0x120)
sub_140b90c60(arg1 + 0x2d8, arg1 + 0x208)
sub_140b90c60(arg1 + 0x2d8, arg1 + 0x1a8)
int32_t rax_13 = *(arg1 + 0x214)
*(arg1 + 0x210) = 0

if (rax_13 s< 0 && rax_13 != 0)
    sub_1405c5570(arg1 + 0x208, 0)

int32_t rax_14 = *(arg1 + 0x1b4)
*(arg1 + 0x1b0) = 0

if (rax_14 s< 0 && rax_14 != 0)
    sub_1405c5570(arg1 + 0x1a8, 0)

sub_1408d84f0(arg1 + 0x1b8)
EnterCriticalSection(arg1 + 0xe8)
sub_140b90c60(arg1 + 0x2d8, arg1 + 0x88)
int32_t rax_15 = *(arg1 + 0x94)
*(arg1 + 0x90) = 0

if (rax_15 s< 0 && rax_15 != 0)
    sub_1405c5570(arg1 + 0x88, 0)

sub_1408d84f0(arg1 + 0x98)

if (arg1 != -0xe8)
    LeaveCriticalSection(arg1 + 0xe8)

EnterCriticalSection(arg1 + 0x180)
sub_140b90c60(arg1 + 0x2d8, arg1 + 0x110)
int32_t rax_16 = *(arg1 + 0x11c)
*(arg1 + 0x118) = 0

if (rax_16 s< 0 && rax_16 != 0)
    sub_1405c5570(arg1 + 0x110, 0)

sub_1408d84f0(arg1 + 0x130)

if (arg1 != -0x180)
    LeaveCriticalSection(arg1 + 0x180)

*(arg1 + 0x2bc) = 0
*(arg1 + 0x2b8)
*(arg1 + 0x2b8) = 0
int32_t i_3 = *(arg1 + 0x338)

if (i_3 != 0)
    int64_t* rbx_6 = *(arg1 + 0x330) + 0x20
    int32_t i
    
    do
        if (rbx_6[-2] != 0)
            void* rax_18 = *rbx_6
            void* rcx_27 = &rbx_6[2]
            
            if (rax_18 != 0)
                rcx_27 = rax_18
            
            (*(*rcx_27 + 0x10))(rcx_27)
        
        rbx_6 = &rbx_6[0xa]
        i = i_3
        i_3 -= 1
    while (i != 1)

*(arg1 + 0x338) = 0

if (*(arg1 + 0x33c) != 0)
    sub_1405a5310(arg1 + 0x330, 0)

*(arg1 + 0x348) = 0

if (*(arg1 + 0x34c) != 0)
    sub_1405a5410(arg1 + 0x340, 0)

*(arg1 + 0x374) = 0
*(arg1 + 0x370) = 0xffffffff
sub_14059a8e0(arg1 + 0x350, 0)
int32_t i_6 = *(arg1 + 0x388)

if (i_6 s> 0)
    int64_t r8_1 = 0
    uint64_t i_5 = zx.q(i_6)
    uint64_t i_1
    
    do
        void* rcx_31 = *(arg1 + 0x380)
        void* rax_20 = arg1 + 0x378
        int64_t rdx_7 = (sx.q(*(arg1 + 0x388)) - 1) & r8_1
        
        if (rcx_31 != 0)
            rax_20 = rcx_31
        
        r8_1 += 1
        *(rax_20 + (rdx_7 << 2)) = 0xffffffff
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

EnterCriticalSection(arg1 + 0x290)
*(arg1 + 0x248) = 0

if (*(arg1 + 0x24c) != 0)
    sub_140638cc0(arg1 + 0x240, 0)

*(arg1 + 0x270) = 0xffffffff
*(arg1 + 0x274) = 0
sub_14059a8e0(arg1 + 0x250, 0)
int32_t i_7 = *(arg1 + 0x288)

if (i_7 s> 0)
    uint64_t i_4 = zx.q(i_7)
    uint64_t i_2
    
    do
        void* rcx_35 = *(arg1 + 0x280)
        void* rax_21 = arg1 + 0x278
        int64_t rdx_10 = (sx.q(*(arg1 + 0x288)) - 1) & rdi_2
        
        if (rcx_35 != 0)
            rax_21 = rcx_35
        
        rdi_2 += 1
        *(rax_21 + (rdx_10 << 2)) = 0xffffffff
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

if (arg1 != -0x290)
    LeaveCriticalSection(arg1 + 0x290)

int64_t* rcx_37 = *(arg1 + 0x30)
int32_t result = (*(*rcx_37 + 0x10))(rcx_37)

if (r12.b != 0)
    int32_t temp3_1 = data_143e1a570
    data_143e1a570 -= 1
    result = data_1439a965c
    
    if (temp3_1 == 1)
        result = -1
    
    data_1439a965c = result

return result
