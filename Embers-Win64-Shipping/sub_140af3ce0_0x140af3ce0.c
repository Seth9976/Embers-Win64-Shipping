// 函数: sub_140af3ce0
// 地址: 0x140af3ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
uint64_t rcx = zx.q(data_14401b1a0)
uint64_t r12 = arg7
int64_t r14 = arg4
char* var_a8 = arg5
char* var_88 = arg8
uint64_t var_b8 = r12
TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (rcx << 3)) + 0x14

if (data_143de5c78 s> *rbx_1)
    _Init_thread_header(&data_143de5c78)
    
    if (data_143de5c78 == 0xffffffff)
        atexit(sub_142cbf3b0)
        _Init_thread_footer(&data_143de5c78)

if (data_143de5c90 s> *rbx_1)
    _Init_thread_header(&data_143de5c90)
    
    if (data_143de5c90 == 0xffffffff)
        atexit(sub_142cbf510)
        _Init_thread_footer(&data_143de5c90)

if (data_143de5ca8 s> *rbx_1)
    _Init_thread_header(&data_143de5ca8)
    
    if (data_143de5ca8 == 0xffffffff)
        atexit(sub_142cbf530)
        _Init_thread_footer(&data_143de5ca8)

int16_t* const r15 = &data_142d40450
int16_t* rdx

if (arg3[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg3

int16_t* const rcx_1 = &data_142d40450

if (data_143de5c70 != 0)
    rcx_1 = data_143de5c68

int64_t rbx_2 = -1
int64_t var_98

if (sub_140a54510(rcx_1, rdx) != 0)
    if (&data_143de5c68 != arg3)
        int32_t r14_1 = arg3[1].d
        int64_t r12_1 = *arg3
        int32_t r8 = data_143de5c74
        data_143de5c70 = r14_1
        
        if (r14_1 != 0 || r8 != 0)
            sub_1405a4c70(&data_143de5c68, r14_1, r8)
            memcpy(data_143de5c68, r12_1, r14_1 * 2)
        else
            data_143de5c74 = r8
        
        r12 = var_b8
    
    int16_t* const r14_2
    
    if (arg3[1].d == 0)
        r14_2 = &data_142d40450
    else
        r14_2 = *arg3
    
    int64_t* rax_10 = sub_140b13d10(&var_98)
    int16_t* const rcx_4
    
    if (rax_10[1].d == 0)
        rcx_4 = &data_142d40450
    else
        rcx_4 = *rax_10
    
    int16_t* const var_60_1 = r14_2
    int16_t* const var_68 = rcx_4
    wchar16 const* const var_58_1 = u"Config"
    var_b8 = 0
    int64_t var_b0_1 = 0
    sub_140b0f5f0(&var_b8, &var_68, 3)
    int64_t rcx_6 = data_143de5c80
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int64_t rcx_7 = var_98
    data_143de5c80 = var_b8
    data_143de5c88 = var_b0_1.d
    data_143de5c8c = var_b0_1:4.d
    int64_t var_b0_2 = 0
    var_b8 = 0
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int16_t* const rsi_1
    
    if (arg3[1].d == 0)
        rsi_1 = &data_142d40450
    else
        rsi_1 = *arg3
    
    int64_t* rax_14 = sub_140b25550(&var_98)
    int16_t* const rcx_9
    
    if (rax_14[1].d == 0)
        rcx_9 = &data_142d40450
    else
        rcx_9 = *rax_14
    
    int16_t* const var_60_2 = rsi_1
    var_68 = rcx_9
    wchar16 const* const var_58_2 = u"Config"
    var_b8 = 0
    int64_t var_b0_3 = 0
    sub_140b0f5f0(&var_b8, &var_68, 3)
    int64_t rcx_11 = data_143de5c98
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = var_98
    data_143de5c98 = var_b8
    data_143de5ca0 = var_b0_3.d
    data_143de5ca4 = var_b0_3:4.d
    int64_t var_b0_4 = 0
    var_b8 = 0
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    bool cond:6_1 = data_143de5c88 != 0
    int16_t* const r14_3 = &data_142d40450
    int32_t rdx_5 = 0
    var_b8 = 0
    
    if (cond:6_1)
        r14_3 = data_143de5c80
    
    int32_t rcx_13 = 0
    var_b0_4.d = 0
    var_b0_4:4.d = 0
    
    if (r14_3 != 0 && *r14_3 != 0)
        int64_t rsi_2 = -1
        
        do
            rsi_2 += 1
        while (r14_3[rsi_2] != 0)
        
        if (rsi_2.d + 1 s> 0)
            sub_1405947f0(&var_b8, rsi_2.d + 1)
            rcx_13 = var_b0_4:4.d
            rdx_5 = var_b0_4.d
        
        int32_t rax_18 = rsi_2.d + 1 + rdx_5
        var_b0_4.d = rax_18
        
        if (rax_18 s> rcx_13)
            sub_140594770(&var_b8)
        
        UnDecorator::getReferenceType(var_b8, r14_3, (rsi_2.d + 1) * 2)
    
    char rax_19 = sub_140b12f50(&var_b8)
    uint64_t rcx_18 = var_b8
    data_143de5cac = rax_19
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    bool cond:7_1 = data_143de5ca0 != 0
    int16_t* const r14_4 = &data_142d40450
    int32_t rdx_8 = 0
    var_b8 = 0
    
    if (cond:7_1)
        r14_4 = data_143de5c98
    
    int32_t rcx_19 = 0
    var_b0_4.d = 0
    var_b0_4:4.d = 0
    
    if (r14_4 != 0 && *r14_4 != 0)
        int64_t rsi_4 = -1
        
        do
            rsi_4 += 1
        while (r14_4[rsi_4] != 0)
        
        if (rsi_4.d + 1 s> 0)
            sub_1405947f0(&var_b8, rsi_4.d + 1)
            rcx_19 = var_b0_4:4.d
            rdx_8 = var_b0_4.d
        
        int32_t rax_20 = rsi_4.d + 1 + rdx_8
        var_b0_4.d = rax_20
        
        if (rax_20 s> rcx_19)
            sub_140594770(&var_b8)
        
        UnDecorator::getReferenceType(var_b8, r14_4, (rsi_4.d + 1) * 2)
    
    char rax_21 = sub_140b12f50(&var_b8)
    uint64_t rcx_24 = var_b8
    data_143de5cad = rax_21
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    r14 = arg4

wchar16* rax_22
rax_22.b = wcsstr(*(arg2 + 8), u"{PLATFORM}") != 0
*r12 = rax_22.b
wchar16* rax_23 = wcsstr(*(arg2 + 8), u"{PROJECT}")
char* rcx_27 = var_88
rax_23.b = rax_23 != 0
*rcx_27 = rax_23.b
*arg1 = 0
arg1[1] = 0
char rax_24 = *r12
char* rcx_52
int16_t* r8_9

if (*rcx_27 == 0)
    if (rax_24 == 0 || data_143de5cac == 0)
        int16_t* rsi_9 = *(arg2 + 8)
        var_a8 = nullptr
        int32_t rdx_23 = 0
        int32_t var_a0_5 = 0
        int32_t rcx_45 = 0
        int32_t var_9c_3 = 0
        
        if (rsi_9 != 0 && *rsi_9 != 0)
            do
                rbx_2 += 1
            while (rsi_9[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_a8, rbx_2.d + 1)
                rcx_45 = var_9c_3
                rdx_23 = var_a0_5
            
            int32_t rax_33 = rbx_2.d + 1 + rdx_23
            int32_t var_a0_6 = rax_33
            
            if (rax_33 s> rcx_45)
                sub_140594770(&var_a8)
            
            UnDecorator::getReferenceType(var_a8, rsi_9, (rbx_2.d + 1) * 2)
        
        int64_t* rax_34 = sub_140a300d0(&var_a8, &var_98, u"{ENGINE}", r14, 1)
        
        if (arg1 != rax_34)
            int64_t rcx_50 = *arg1
            
            if (rcx_50 != 0)
                sub_140a74f90(rcx_50)
            
            *arg1 = *rax_34
            *rax_34 = 0
            arg1[1].d = rax_34[1].d
            *(arg1 + 0xc) = *(rax_34 + 0xc)
            rax_34[1] = 0
    else
        int16_t* rsi_8 = *(arg2 + 0x10)
        
        if (data_143de5c88 != 0)
            r15 = data_143de5c80
        
        var_a8 = nullptr
        int32_t rdx_20 = 0
        int32_t var_a0_3 = 0
        int32_t rcx_41 = 0
        int32_t var_9c_2 = 0
        
        if (rsi_8 != 0 && *rsi_8 != 0)
            do
                rbx_2 += 1
            while (rsi_8[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_a8, rbx_2.d + 1)
                rcx_41 = var_9c_2
                rdx_20 = var_a0_3
            
            int32_t rax_32 = rbx_2.d + 1 + rdx_20
            int32_t var_a0_4 = rax_32
            
            if (rax_32 s> rcx_41)
                sub_140594770(&var_a8)
            
            UnDecorator::getReferenceType(var_a8, rsi_8, (rbx_2.d + 1) * 2)
        
        r8_9 = u"{EXTENGINE}"
    label_140af416a:
        sub_140597da0(arg1, sub_140a300d0(&var_a8, &var_98, r8_9, r15, 1))
    
    int64_t rcx_51 = var_98
    
    if (rcx_51 != 0)
        sub_140a74f90(rcx_51)
    
    rcx_52 = var_a8
else
    if (rax_24 != 0 && data_143de5cad != 0)
        int16_t* rsi_6 = *(arg2 + 0x10)
        
        if (data_143de5ca0 != 0)
            r15 = data_143de5c98
        
        var_a8 = nullptr
        int32_t rdx_11 = 0
        int32_t var_a0_1 = 0
        int32_t rcx_28 = 0
        int32_t var_9c_1 = 0
        
        if (rsi_6 != 0 && *rsi_6 != 0)
            do
                rbx_2 += 1
            while (rsi_6[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_a8, rbx_2.d + 1)
                rcx_28 = var_9c_1
                rdx_11 = var_a0_1
            
            int32_t rax_25 = rdx_11 + rbx_2.d + 1
            int32_t var_a0_2 = rax_25
            
            if (rax_25 s> rcx_28)
                sub_140594770(&var_a8)
            
            UnDecorator::getReferenceType(var_a8, rsi_6, (rbx_2.d + 1) * 2)
        
        r8_9 = u"{EXTPROJECT}"
        goto label_140af416a
    
    int16_t* rsi_7 = *(arg2 + 8)
    var_88 = nullptr
    int32_t rdx_16 = 0
    int32_t var_80_1 = 0
    int32_t rcx_34 = 0
    int32_t var_7c_1 = 0
    
    if (rsi_7 != 0 && *rsi_7 != 0)
        do
            rbx_2 += 1
        while (rsi_7[rbx_2] != 0)
        
        if (rbx_2.d + 1 s> 0)
            sub_1405947f0(&var_88, rbx_2.d + 1)
            rcx_34 = var_7c_1
            rdx_16 = var_80_1
        
        int32_t rax_27 = rbx_2.d + 1 + rdx_16
        int32_t var_80_2 = rax_27
        
        if (rax_27 s> rcx_34)
            sub_140594770(&var_88)
        
        UnDecorator::getReferenceType(var_88, rsi_7, (rbx_2.d + 1) * 2)
    
    int64_t* rax_28 = sub_140a300d0(&var_88, &var_98, u"{PROJECT}", var_a8, 1)
    
    if (arg1 != rax_28)
        int64_t rcx_39 = *arg1
        
        if (rcx_39 != 0)
            sub_140a74f90(rcx_39)
        
        *arg1 = *rax_28
        *rax_28 = 0
        arg1[1].d = rax_28[1].d
        *(arg1 + 0xc) = *(rax_28 + 0xc)
        rax_28[1] = 0
    
    int64_t rcx_40 = var_98
    
    if (rcx_40 != 0)
        sub_140a74f90(rcx_40)
    
    rcx_52 = var_88

if (rcx_52 != 0)
    sub_140a74f90(rcx_52)

int64_t* rax_38 = sub_140a300d0(arg1, &var_98, u"{TYPE}", arg6, 0)

if (arg1 != rax_38)
    int64_t rcx_54 = *arg1
    
    if (rcx_54 != 0)
        sub_140a74f90(rcx_54)
    
    *arg1 = *rax_38
    *rax_38 = 0
    arg1[1].d = rax_38[1].d
    *(arg1 + 0xc) = *(rax_38 + 0xc)
    rax_38[1] = 0

int64_t rcx_55 = var_98

if (rcx_55 != 0)
    sub_140a74f90(rcx_55)

int64_t* rax_43 = sub_140a300d0(arg1, &var_98, u"{USERSETTINGS}", sub_140b73bf0(), 0)

if (arg1 != rax_43)
    int64_t rcx_57 = *arg1
    
    if (rcx_57 != 0)
        sub_140a74f90(rcx_57)
    
    *arg1 = *rax_43
    *rax_43 = 0
    arg1[1].d = rax_43[1].d
    *(arg1 + 0xc) = *(rax_43 + 0xc)
    rax_43[1] = 0

int64_t rcx_58 = var_98

if (rcx_58 != 0)
    sub_140a74f90(rcx_58)

int64_t* rax_48 = sub_140a300d0(arg1, &var_98, u"{USER}", sub_140b738f0(), 0)

if (arg1 != rax_48)
    int64_t rcx_60 = *arg1
    
    if (rcx_60 != 0)
        sub_140a74f90(rcx_60)
    
    *arg1 = *rax_48
    *rax_48 = 0
    arg1[1].d = rax_48[1].d
    *(arg1 + 0xc) = *(rax_48 + 0xc)
    rax_48[1] = 0

int64_t rcx_63 = var_98

if (rcx_63 != 0)
    sub_140a74f90(rcx_63)

__security_check_cookie(rax_1 ^ &var_e8)
return arg1
