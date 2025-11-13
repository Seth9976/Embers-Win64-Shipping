// 函数: sub_140b41450
// 地址: 0x140b41450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140a23cf0(arg1, &data_142d404c4, 1, 0, 0xffffffff)
int32_t rax_1

if (rax == 0xffffffff)
    rax_1 = sub_140a23cf0(arg1, &data_142d7fa60, 1, 0, 0xffffffff)

int64_t r15

if (rax != 0xffffffff || rax_1 != 0xffffffff)
    r15.b = 1
else
    r15.b = 0

int32_t rdi = arg1[1].d
int32_t r14 = 0
int64_t rbx_1 = *arg1
int64_t var_48 = 0
int32_t var_40 = rdi

if (rdi != 0)
    sub_1405a4c70(&var_48, rdi, 0)
    memcpy(var_48, rbx_1, rdi * 2)
else
    int32_t var_3c_1 = 0

sub_140a306e0(&var_48, &data_142d404c4, &data_142d84ee0, 1)
sub_140a306e0(&var_48, &data_142d7fa60, &data_142d84ee0, 1)
char rax_2 = sub_140a32ae0(&var_48, &data_142d404b0, 1)
sub_140a306e0(&var_48, &data_142d404b0, &data_142d84ee0, 1)
sub_140a306e0(&var_48, &data_142e5c1c0, &data_142d84ee0, 1)
int64_t* var_58 = nullptr
int64_t var_50 = 0
sub_140a2ccb0(&var_48, &var_58, U":\t", 1)

if (r15.b == 0)
    int64_t rbx_2 = sx.q(var_50.d)
    int32_t rax_3 = (rbx_2 + 1).d
    var_50.d = rax_3
    
    if (rax_3 s> 0)
        sub_1405a4f90(&var_58)
    
    int64_t* rax_6 = &var_58[rbx_2 * 2]
    *rax_6 = 0
    rax_6[1] = 0

int64_t* rbx_3 = var_58
int64_t rsi = sx.q(var_50.d)
void* _String_4 = &rbx_3[rsi * 2]

if (rbx_3 != _String_4)
    while (rbx_3[1].d s<= 1 || sub_140a24720(rbx_3) != 0)
        rbx_3 = &rbx_3[2]
        
        if (rbx_3 == _String_4)
            rsi = zx.q(var_50.d)
            rbx_3 = var_58
            goto label_140b41616
    
    goto label_140b418f0

label_140b41616:

if (rsi.d s< 5)
    var_50.d = 5 + 0
    
    if (5 + 0 s> var_50:4.d)
        sub_1405a4f90(&var_58)
        rbx_3 = var_58
    
    memmove(&rbx_3[sx.q(5 - rsi.d) * 2], rbx_3, rsi.d << 4)
    memset(var_58, 0, sx.q(5 - rsi.d) << 4)
    rbx_3 = var_58
    goto label_140b41673

if (rsi.d s> 5)
    _String_4.b = 0
else
label_140b41673:
    
    if (r15.b != 0)
        int32_t rax_9 = rbx_3[9].d
        int32_t rsi_1 = rax_9 - 1
        
        if (rax_9 == 0)
            rsi_1 = 0
        
        if (rsi_1 s> 9)
            int32_t rcx_14 = rax_9 - 1
            int32_t rdi_6 = rax_9 - 1
            
            if (rax_9 == 0)
                rcx_14 = -1
            
            if (rax_9 == 0)
                rcx_14 = 0
            
            int32_t r10_1 = rcx_14
            
            if (rcx_14 s> 9)
                r10_1 = 9
            
            if (rax_9 == 0)
                rdi_6 = -1
            
            if (rax_9 == 0)
                rdi_6 = 0
            
            int32_t rdi_7 = rdi_6 - r10_1
            int32_t rcx_15 = rcx_14 - r10_1
            
            if (rcx_14 - r10_1 s>= 0)
                if (rcx_15 s< rdi_7)
                    rdi_7 = rcx_15
                
                if (rdi_7 != 0)
                    int32_t rcx_17 = rax_9 - rdi_7
                    
                    if (rcx_17 != r10_1)
                        int64_t r9_1 = rbx_3[8]
                        memmove(r9_1 + (sx.q(r10_1) << 1), r9_1 + (sx.q(rdi_7 + r10_1) << 1), 
                            (rcx_17 - r10_1) * 2)
                        rax_9 = rbx_3[9].d
                    
                    rbx_3[9].d = rax_9 - rdi_7
                    rbx_3 = var_58
        else if (rsi_1 s< 9)
            int64_t var_38 = 0
            int32_t var_30_1 = 0
            sub_1405947f0(&var_38, 0xa)
            int32_t rbx_4 = var_30_1 + 0xa
            
            if (rbx_4 s> 0)
                sub_140594770(&var_38)
            
            int64_t rdi_8 = var_38
            UnDecorator::getReferenceType(rdi_8, u"000000000", 0x14)
            int32_t rcx_24 = rbx_4 - 1
            
            if (rbx_4 == 0)
                rcx_24 = 0
            
            int32_t r9_2
            
            if (9 - rsi_1 s>= 0)
                r9_2 = rcx_24
                
                if (9 - rsi_1 s< rcx_24)
                    r9_2 = 9 - rsi_1
            else
                r9_2 = 0
            
            int32_t rcx_25 = rcx_24 - r9_2
            int32_t rax_13 = rbx_4 - 1
            
            if (rbx_4 == 0)
                rax_13 = 0
            
            int32_t rax_14 = rax_13 - r9_2
            
            if (rcx_25 s>= 0)
                if (rcx_25 s< rax_14)
                    rax_14 = rcx_25
                
                if (rax_14 != 0)
                    rbx_4 -= rax_14
                    
                    if (rbx_4 != r9_2)
                        memmove(rdi_8 + (sx.q(r9_2) << 1), rdi_8 + (sx.q(rax_14 + r9_2) << 1), 
                            (rbx_4 - r9_2) * 2)
            
            if (rbx_4 != 0)
                r14 = rbx_4 - 1
            
            sub_140a20ba0(&var_58[8], rdi_8, r14)
            
            if (rdi_8 != 0)
                sub_140a74f90(rdi_8)
            
            rbx_3 = var_58
    
    _String_4 = &data_142d40450
    wchar16* _String
    
    if (rbx_3[1].d == 0)
        _String = &data_142d40450
    else
        _String = *rbx_3
    
    int32_t rax_17 = _wtoi(_String)
    int64_t* rcx_33 = var_58
    int64_t r15_1 = sx.q(rax_17)
    wchar16* _String_1
    
    if (rcx_33[3].d == 0)
        _String_1 = &data_142d40450
    else
        _String_1 = rcx_33[2]
    
    int32_t rax_18 = _wtoi(_String_1)
    int64_t* rcx_34 = var_58
    int64_t r14_1 = sx.q(rax_18)
    wchar16* _String_2
    
    if (rcx_34[5].d == 0)
        _String_2 = &data_142d40450
    else
        _String_2 = rcx_34[4]
    
    int32_t rax_19 = _wtoi(_String_2)
    int64_t* rcx_35 = var_58
    int64_t rsi_2 = sx.q(rax_19)
    wchar16* _String_3
    
    if (rcx_35[7].d == 0)
        _String_3 = &data_142d40450
    else
        _String_3 = rcx_35[6]
    
    int32_t rax_20 = _wtoi(_String_3)
    int64_t* rcx_36 = var_58
    int64_t rbx_5 = sx.q(rax_20)
    
    if (rcx_36[9].d != 0)
        _String_4 = rcx_36[8]
    
    int64_t r9_3 = sx.q(_wtoi(_String_4))
    
    if (r15_1.d s> 0xa2e3fe || r14_1.d s> 0x17 || rsi_2.d s> 0x3b || rbx_5.d s> 0x3b
        || r9_3.d s> 0x3b9ac9ff)
    label_140b418f0:
        rsi = zx.q(var_50.d)
        rbx_3 = var_58
        _String_4.b = 0
    else
        int64_t rax_22
        int64_t rdx_13
        rdx_13:rax_22 = muls.dp.q(-0x5c28f5c28f5c28f5, r9_3)
        int64_t rdx_15 = (rdx_13 + r9_3) s>> 6
        int64_t rcx_44 = (((r14_1 + r15_1 * 0x18) * 0x3c + rsi_2) * 0x3c + rbx_5) * 0x989680
            + rdx_15 + (rdx_15 u>> 0x3f)
        *arg2 = rcx_44
        
        if (rax_2 != 0)
            *arg2 = neg.q(rcx_44)
        
        rsi = zx.q(var_50.d)
        _String_4.b = 1
        rbx_3 = var_58

if (rsi.d != 0)
    int32_t i
    
    do
        int64_t rcx_46 = *rbx_3
        
        if (rcx_46 != 0)
            sub_140a74f90(rcx_46)
        
        rbx_3 = &rbx_3[2]
        i = rsi.d
        rsi = zx.q(rsi.d - 1)
    while (i != 1)
    rbx_3 = var_58

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int64_t rcx_48 = var_48

if (rcx_48 != 0)
    sub_140a74f90(rcx_48)

return zx.q(_String_4.b)
