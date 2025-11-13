// 函数: sub_1422f07d0
// 地址: 0x1422f07d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143ddb400
int64_t var_58
__builtin_memset(&var_58, 0, 0x38)
var_58.b = 1
int64_t var_48
var_48.b = arg3.b
(*(*rcx + 0x10))(rcx)
int32_t rdi = 0
int16_t* var_78
TEB* gsbase

if (data_143f56ab0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f56ab0)
    
    if (data_143f56ab0 == 0xffffffff)
        int64_t var_68
        int16_t** rax_7 = sub_140b0f3a0(&var_68)
        int16_t* rcx_22 = *rax_7
        int32_t rdx_10 = rax_7[1].d
        int32_t rdx_11 = neg.d(rdx_10)
        *rax_7 = nullptr
        int32_t r8_10 = rax_7[1].d
        var_78 = rcx_22
        int32_t rcx_23 = *(rax_7 + 0xc)
        int32_t rdx_14 = sbb.d(rdx_11, rdx_11, rdx_10 != 0) + 0x11 + r8_10
        rax_7[1] = 0
        
        if (rdx_14 s> rcx_23)
            sub_1405947f0(&var_78, rdx_14)
        
        sub_140a20ba0(&var_78, u"CloudStorage.ini", 0x10)
        int64_t rcx_26 = var_68
        data_143f56aa0 = var_78
        data_143f56aa8 = r8_10
        data_143f56aac = rcx_23
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        atexit(&data_142d0cf30)
        _Init_thread_footer(&data_143f56ab0)

uint64_t var_38

if (arg3 == 1)
    bool cond:0_1 = data_143f56aa8 != 0
    int16_t* rsi_3 = &data_142d40450
    int16_t* const r14_3 = &data_142d40450
    var_78 = nullptr
    
    if (cond:0_1)
        r14_3 = data_143f56aa0
    
    int32_t rcx_12 = 0
    int32_t var_70_5 = 0
    int32_t var_6c_3 = 0
    
    if (r14_3 != 0 && *r14_3 != 0)
        int64_t rbx_7 = -1
        
        do
            rbx_7 += 1
        while (r14_3[rbx_7] != 0)
        
        if (rbx_7.d + 1 s> 0)
            sub_1405947f0(&var_78, rbx_7.d + 1)
            rcx_12 = var_6c_3
            rdi = var_70_5
        
        int32_t rax_5 = rbx_7.d + 1 + rdi
        int32_t var_70_6 = rax_5
        
        if (rax_5 s> rcx_12)
            sub_140594770(&var_78)
        
        UnDecorator::getReferenceType(var_78, r14_3, (rbx_7.d + 1) * 2)
    
    if (arg2[1].d != 0)
        rsi_3 = *arg2
    
    sub_140af3c10(data_143ddb400, u"CloudStorageEmulation", rsi_3, &var_48:4, &var_78)
label_1422f0a8b:
    int16_t* rcx_17 = var_78
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
else
    if (arg3 == 2)
        bool cond:1_1 = data_143f56aa8 != 0
        int16_t* rsi_2 = &data_142d40450
        int16_t* const r14_2 = &data_142d40450
        var_78 = nullptr
        
        if (cond:1_1)
            r14_2 = data_143f56aa0
        
        int32_t rcx_7 = 0
        int32_t var_70_3 = 0
        int32_t var_6c_2 = 0
        
        if (r14_2 != 0 && *r14_2 != 0)
            int64_t rbx_5 = -1
            
            do
                rbx_5 += 1
            while (r14_2[rbx_5] != 0)
            
            if (rbx_5.d + 1 s> 0)
                sub_1405947f0(&var_78, rbx_5.d + 1)
                rcx_7 = var_6c_2
                rdi = var_70_3
            
            int32_t rax_4 = rbx_5.d + 1 + rdi
            int32_t var_70_4 = rax_4
            
            if (rax_4 s> rcx_7)
                sub_140594770(&var_78)
            
            UnDecorator::getReferenceType(var_78, r14_2, (rbx_5.d + 1) * 2)
        
        if (arg2[1].d != 0)
            rsi_2 = *arg2
        
        int64_t var_40
        sub_140af3b00(data_143ddb400, u"CloudStorageEmulation", rsi_2, &var_40, &var_78)
        goto label_1422f0a8b
    
    if (arg3 == 3)
        bool cond:2_1 = data_143f56aa8 != 0
        int16_t* const rsi_1 = &data_142d40450
        int16_t* const r14_1 = &data_142d40450
        var_78 = nullptr
        
        if (cond:2_1)
            r14_1 = data_143f56aa0
        
        int32_t rcx_2 = 0
        int32_t var_70_1 = 0
        int32_t var_6c_1 = 0
        
        if (r14_1 != 0 && *r14_1 != 0)
            int64_t rbx_3 = -1
            
            do
                rbx_3 += 1
            while (r14_1[rbx_3] != 0)
            
            if (rbx_3.d + 1 s> 0)
                sub_1405947f0(&var_78, rbx_3.d + 1)
                rcx_2 = var_6c_1
                rdi = var_70_1
            
            int32_t rax_3 = rbx_3.d + 1 + rdi
            int32_t var_70_2 = rax_3
            
            if (rax_3 s> rcx_2)
                sub_140594770(&var_78)
            
            UnDecorator::getReferenceType(var_78, r14_1, (rbx_3.d + 1) * 2)
        
        if (arg2[1].d != 0)
            rsi_1 = *arg2
        
        sub_140af5b90(data_143ddb400, u"CloudStorageEmulation", rsi_1, &var_38, &var_78)
        goto label_1422f0a8b

int64_t* rcx_18 = data_143ddb400
(*(*rcx_18 + 8))(rcx_18)
sub_1422df290(arg1, 0, &var_58)
uint64_t rcx_20 = var_38

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t result
result.b = 1
return result
