// 函数: sub_1422f9d10
// 地址: 0x1422f9d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88
int32_t var_7c
TEB* gsbase

if (data_143f56ac8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f56ac8)
    
    if (data_143f56ac8 == 0xffffffff)
        int64_t var_78
        int64_t* rax_12 = sub_140b0f3a0(&var_78)
        int64_t rcx_31 = *rax_12
        int32_t rdx_13 = rax_12[1].d
        int32_t rdx_14 = neg.d(rdx_13)
        *rax_12 = 0
        int32_t r8_13 = rax_12[1].d
        var_88 = rcx_31
        int32_t rcx_32 = *(rax_12 + 0xc)
        int32_t rdx_17 = sbb.d(rdx_14, rdx_14, rdx_13 != 0) + 0x11 + r8_13
        var_7c = rcx_32
        rax_12[1] = 0
        
        if (rdx_17 s> rcx_32)
            sub_1405947f0(&var_88, rdx_17)
        
        sub_140a20ba0(&var_88, u"CloudStorage.ini", 0x10)
        int64_t rcx_35 = var_78
        data_143f56ab8 = var_88
        data_143f56ac0 = r8_13
        data_143f56ac4 = var_7c
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
        
        atexit(&data_142d0cf50)
        _Init_thread_footer(&data_143f56ac8)

int64_t* rcx = data_143ddb400
(*(*rcx + 0x10))(rcx)
uint32_t rcx_1 = zx.d(arg3[1].b)
int16_t* const rsi = &data_142d40450
int64_t rdi = -1
int32_t var_80

if (rcx_1 == 1)
    bool cond:0_1 = data_143f56ac0 != 0
    int16_t* const r14_3 = &data_142d40450
    var_88 = 0
    int32_t rdx_6 = 0
    
    if (cond:0_1)
        r14_3 = data_143f56ab8
    
    int32_t rcx_14 = 0
    var_80.q = 0
    
    if (r14_3 != 0 && *r14_3 != 0)
        int64_t rbx_5 = -1
        
        do
            rbx_5 += 1
        while (r14_3[rbx_5] != 0)
        
        if (rbx_5.d + 1 s> 0)
            sub_1405947f0(&var_88, rbx_5.d + 1)
            rcx_14 = var_7c
            rdx_6 = var_80
        
        int32_t rax_5 = rbx_5.d + 1 + rdx_6
        var_80 = rax_5
        
        if (rax_5 s> rcx_14)
            sub_140594770(&var_88)
        
        UnDecorator::getReferenceType(var_88, r14_3, (rbx_5.d + 1) * 2)
    
    int16_t* r8_8
    
    if (arg2[1].d == 0)
        r8_8 = &data_142d40450
    else
        r8_8 = *arg2
    
    sub_140b00a60(data_143ddb400, u"CloudStorageEmulation", r8_8, *(arg3 + 0xc), &var_88)
label_1422f9fb8:
    int64_t rcx_19 = var_88
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
else
    if (rcx_1 == 2)
        bool cond:1_1 = data_143f56ac0 != 0
        int16_t* const r14_2 = &data_142d40450
        var_88 = 0
        int32_t rdx_3 = 0
        
        if (cond:1_1)
            r14_2 = data_143f56ab8
        
        int32_t rcx_9 = 0
        var_80.q = 0
        
        if (r14_2 != 0 && *r14_2 != 0)
            int64_t rbx_3 = -1
            
            do
                rbx_3 += 1
            while (r14_2[rbx_3] != 0)
            
            if (rbx_3.d + 1 s> 0)
                sub_1405947f0(&var_88, rbx_3.d + 1)
                rcx_9 = var_7c
                rdx_3 = var_80
            
            int32_t rax_4 = rbx_3.d + 1 + rdx_3
            var_80 = rax_4
            
            if (rax_4 s> rcx_9)
                sub_140594770(&var_88)
            
            UnDecorator::getReferenceType(var_88, r14_2, (rbx_3.d + 1) * 2)
        
        int16_t* r8_5
        
        if (arg2[1].d == 0)
            r8_5 = &data_142d40450
        else
            r8_5 = *arg2
        
        sub_140b008a0(data_143ddb400, u"CloudStorageEmulation", r8_5, arg3[2].d, &var_88)
        goto label_1422f9fb8
    
    if (rcx_1 == 3)
        bool cond:3_1 = data_143f56ac0 != 0
        int16_t* const r14_1 = &data_142d40450
        var_88 = 0
        int32_t rdx = 0
        
        if (cond:3_1)
            r14_1 = data_143f56ab8
        
        int32_t rcx_4 = 0
        var_80.q = 0
        
        if (r14_1 != 0 && *r14_1 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (r14_1[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_88, rbx_1.d + 1)
                rcx_4 = var_7c
                rdx = var_80
            
            int32_t rax_3 = rbx_1.d + 1 + rdx
            var_80 = rax_3
            
            if (rax_3 s> rcx_4)
                sub_140594770(&var_88)
            
            UnDecorator::getReferenceType(var_88, r14_1, (rbx_1.d + 1) * 2)
        
        int16_t* r9_1
        
        if (arg3[4].d == 0)
            r9_1 = &data_142d40450
        else
            r9_1 = arg3[3]
        
        int16_t* r8_2
        
        if (arg2[1].d == 0)
            r8_2 = &data_142d40450
        else
            r8_2 = *arg2
        
        sub_140b00d80(data_143ddb400, u"CloudStorageEmulation", r8_2, r9_1, &var_88)
        goto label_1422f9fb8

int32_t rdx_9 = 0
int32_t rcx_20 = 0

if (data_143f56ac0 != 0)
    rsi = data_143f56ab8

var_88 = 0
var_80.q = 0

if (rsi != 0 && *rsi != 0)
    do
        rdi += 1
    while (rsi[rdi] != 0)
    
    if (rdi.d + 1 s> 0)
        sub_1405947f0(&var_88, rdi.d + 1)
        rcx_20 = var_7c
        rdx_9 = var_80
    
    int32_t rax_6 = rdi.d + 1 + rdx_9
    int32_t var_80_1 = rax_6
    
    if (rax_6 s> rcx_20)
        sub_140594770(&var_88)
    
    UnDecorator::getReferenceType(var_88, rsi, (rdi.d + 1) * 2)

sub_140af04f0(data_143ddb400, 0, &var_88)
int64_t rcx_25 = var_88

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

int64_t* rcx_26 = data_143ddb400
(*(*rcx_26 + 8))(rcx_26)
int64_t var_60 = *arg3
char var_58 = arg3[1].b
int32_t var_54 = *(arg3 + 0xc)
int32_t var_50 = arg3[2].d
uint64_t var_48 = 0
int64_t var_40 = 0
int64_t var_38 = 0
char var_68 = 1
sub_140597df0(&var_48, &arg3[3])
int64_t var_38_1 = arg3[5]
sub_1422df290(arg1, 1, &var_68)
uint64_t rcx_29 = var_48

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

int64_t result
result.b = 1
return result
