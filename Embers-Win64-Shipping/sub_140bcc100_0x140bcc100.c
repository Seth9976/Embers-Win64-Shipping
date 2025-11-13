// 函数: sub_140bcc100
// 地址: 0x140bcc100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = arg3

if (data_14399fa4c == 0)
    return 

TEB* gsbase

if (data_143e1aa90 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1aa90)
    
    if (data_143e1aa90 == 0xffffffff)
        sub_140b58260(&data_143e1aa88, u"/Script/CoreUObject", 1)
        _Init_thread_footer(&data_143e1aa90)

int32_t* var_70
sub_140b58260(&var_70, arg2, 1)

if (var_70 == data_143e1aa88)
    return 

EnterCriticalSection(arg1 + 0xd8)
int32_t** var_88 = nullptr
int32_t** r13_1 = nullptr
int64_t var_80_1 = 0
int32_t r15_1 = 0
int32_t r12_1 = 0
int64_t rsi_1 = -1

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_88, rbx_1.d + 1)
        r12_1 = var_80_1:4.d
        r15_1 = var_80_1.d
        r13_1 = var_88
    
    r15_1 += rbx_1.d + 1
    var_80_1.d = r15_1
    
    if (r15_1 s> r12_1)
        sub_140594770(&var_88)
        r12_1 = var_80_1:4.d
        r15_1 = var_80_1.d
        r13_1 = var_88
    
    UnDecorator::getReferenceType(r13_1, arg2, (rbx_1.d + 1) * 2)
    rbx = arg3

do
    rsi_1 += 1
while (rbx[rsi_1] != 0)

int32_t rax_4

if (r15_1 == 0)
    rax_4 = r15_1 + 2

if (r15_1 != 0 || (rsi_1 + 1).d == 0)
    rax_4 = 1

int32_t** var_68 = r13_1
int32_t rdx_5 = r15_1 + rax_4 + rsi_1.d
int32_t var_5c_1 = r12_1

if (rdx_5 s> r12_1)
    sub_1405947f0(&var_68, rdx_5)

sub_140a2cf70(&var_68, rbx, rsi_1.d)
int16_t* const r14_1 = &data_142d40450
int16_t* const rdx_7 = &data_142d40450

if (r15_1 != 0)
    rdx_7 = var_68

int32_t** var_78
sub_140b58260(&var_78, rdx_7, 1)
int32_t** rcx_8 = var_68

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int32_t* rbx_3 = var_70
void* const rcx_12

if (*(arg1 + 0x10) == *(arg1 + 0x3c))
label_140bcc32c:
    rcx_12 = nullptr
else
    var_88 = rbx_3
    int32_t rax_7 = sub_140b5ead0(rbx_3.d) + var_88:4.d
    void* r8_3 = arg1 + 0x40
    void* rcx_10 = *(r8_3 + 8)
    
    if (rcx_10 != 0)
        r8_3 = rcx_10
    
    int32_t rax_9 = *(r8_3 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_7)) << 2))
    
    if (rax_9 == 0xffffffff)
    label_140bcc32c_1:
        rcx_12 = nullptr
    else
        int64_t r8_4 = *(arg1 + 8)
        
        while (true)
            int64_t rdx_11 = sx.q(rax_9) * 5
            rcx_12 = r8_4 + (rdx_11 << 3)
            
            if (*(r8_4 + (rdx_11 << 3)) == rbx_3)
                break
            
            rax_9 = *(rcx_12 + 0x20)
            
            if (rax_9 == 0xffffffff)
                goto label_140bcc32c_2
        
        if (rax_9 == 0xffffffff)
        label_140bcc32c_2:
            rcx_12 = nullptr

void* r15_2 = rcx_12 + 8
int32_t** rbx_4 = var_78

if (rcx_12 == 0)
    r15_2 = nullptr

void* const rcx_16

if (*(arg1 + 0x10) == *(arg1 + 0x3c))
label_140bcc3aa:
    rcx_16 = nullptr
else
    var_88 = rbx_4
    int32_t rax_12 = sub_140b5ead0(rbx_4.d) + var_88:4.d
    void* r8_5 = arg1 + 0x40
    void* rcx_14 = *(r8_5 + 8)
    
    if (rcx_14 != 0)
        r8_5 = rcx_14
    
    int32_t rax_14 = *(r8_5 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_12)) << 2))
    
    if (rax_14 == 0xffffffff)
    label_140bcc3aa_1:
        rcx_16 = nullptr
    else
        int64_t r8_6 = *(arg1 + 8)
        
        while (true)
            int64_t rdx_15 = sx.q(rax_14) * 5
            rcx_16 = r8_6 + (rdx_15 << 3)
            
            if (*(r8_6 + (rdx_15 << 3)) == rbx_4)
                break
            
            rax_14 = *(rcx_16 + 0x20)
            
            if (rax_14 == 0xffffffff)
                goto label_140bcc3aa_2
        
        if (rax_14 == 0xffffffff)
        label_140bcc3aa_2:
            rcx_16 = nullptr

void* rbx_5 = rcx_16 + 8

if (rcx_16 == 0)
    rbx_5 = nullptr

if (rbx_5 != 0)
    if (*(rbx_5 + 4) + 1 != arg5 && data_143de5452 != 0)
        int64_t* rax_19 = sub_140b63b70(&var_78, &var_68)
        int16_t* const rax_20
        
        if (rax_19[1].d == 0)
            rax_20 = &data_142d40450
        else
            rax_20 = *rax_19
        
        int16_t* const var_90_1 = rax_20
        int32_t var_98_1 = arg5
        sub_140af98a0("Unknown", 0x80, 
            Invalid state transition %d %d with %s when it has already been processed.", 
            zx.q(*(rbx_5 + 4)))
        int32_t** rcx_22 = var_68
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        sub_140afbb40()
    
    if (*rbx_5 != arg4 && data_143de5452 != 0)
        int64_t* rax_21 = sub_140b63b70(&var_78, &var_68)
        
        if (rax_21[1].d != 0)
            r14_1 = *rax_21
        
        int16_t* const var_90_2 = r14_1
        int32_t var_98_2 = arg4
        sub_140af98a0("Unknown", 0x84, 
            Multiple types %d %d with %s when it has already been processed.", zx.q(*rbx_5))
        int32_t** rcx_24 = var_68
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        sub_140afbb40()
    
    *(rbx_5 + 4) = arg5
    
    if (arg5 == 2)
        *(rbx_5 + 8) = 0
        int64_t r14_2 = sx.q(*(arg1 + 0xb0))
        int32_t rax_22 = (r14_2 + 1).d
        *(arg1 + 0xb0) = rax_22
        
        if (rax_22 s> *(arg1 + 0xb4))
            sub_1405a4d70(arg1 + 0xa8)
        
        *(*(arg1 + 0xa8) + (r14_2 << 3)) = var_78
    
    if (r15_2 != 0 && arg5 s> *(r15_2 + 4))
        *(r15_2 + 4) = arg5
        
        if (arg5 == 2)
            int64_t rsi_3 = sx.q(*(arg1 + 0xb0))
            int32_t rax_23 = (rsi_3 + 1).d
            *(arg1 + 0xb0) = rax_23
            
            if (rax_23 s> *(arg1 + 0xb4))
                sub_1405a4d70(arg1 + 0xa8)
            
            *(*(arg1 + 0xa8) + (rsi_3 << 3)) = var_70
else
    if (arg5 != 0)
        int64_t* rax_15 = sub_140b63b70(&var_78, &var_68)
        
        if (rax_15[1].d != 0)
            r14_1 = *rax_15
        
        sub_140af98a0("Unknown", 0x6d, u"Attempt to process %s before it has been added.", r14_1)
        int32_t** rcx_18 = var_68
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        sub_140afbb40()
    
    int64_t var_50_1 = arg6
    char var_48_1 = arg7
    var_68 = &var_78
    int32_t var_60_1
    int32_t var_58
    var_60_1.q = &var_58
    int32_t var_54_1 = arg5
    var_58 = arg4
    sub_140bbeab0(arg1 + 8, &var_88, &var_68, nullptr)
    
    if (r15_2 == 0)
        var_58 = 4
        var_68 = &var_70
        var_60_1.q = &var_58
        sub_140bbeab0(arg1 + 8, &var_88, &var_68, nullptr)

if (arg1 != -0xd8)
    LeaveCriticalSection(arg1 + 0xd8)
