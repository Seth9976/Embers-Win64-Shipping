// 函数: sub_1423dd3b0
// 地址: 0x1423dd3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* arg_8 = arg1
bool r14 = false
int32_t rax = 0
int32_t var_84 = 0
int32_t r15 = 0
int64_t var_90 = 0
int32_t var_88 = 0

if (arg1 != 0 && *arg1 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg1[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_90, rbx_1.d + 1)
        rax = var_84
        r15 = var_88
    
    int32_t r15_1 = r15 + rbx_1.d + 1
    var_88 = r15_1
    
    if (r15_1 s> rax)
        sub_140594770(&var_90)
    
    UnDecorator::getReferenceType(var_90, arg1, (rbx_1.d + 1) * 2)

int64_t* var_80 = nullptr
int32_t var_74 = 0
int64_t* rsi = nullptr
int16_t* var_a0 = nullptr
int32_t i_2 = 0
int32_t var_98 = 0
int32_t r13 = 0
sub_1405947f0(&var_a0, 0xa)
int32_t rax_1 = var_98 + 0xa

if (rax_1 s> 0)
    sub_140594770(&var_a0)

UnDecorator::getReferenceType(var_a0, u"filename=", 0x14)
int16_t* const _String_1 = &data_142d40450
int16_t* rdx_4 = &data_142d40450

if (rax_1 != 0)
    rdx_4 = var_a0

sub_140b2acc0(arg_8, rdx_4, arg10, 1)
uint64_t var_70 = 0
int32_t var_68 = 0
uint64_t var_a8

if (sub_140b295a0(&arg_8, &var_70, 1) != 0)
    char i
    
    do
        if (sub_140a32a50(&var_70, &var_a0, 1) == 0)
            int64_t i_3 = sx.q(i_2)
            i_2 = (i_3 + 1).d
            
            if (i_2 s> r13)
                sub_1405a4f90(&var_80)
                r13 = var_74
                rsi = var_80
            
            void* rbx_4 = &rsi[i_3 * 2]
            *rbx_4 = 0
            var_a8 = var_70
            *(rbx_4 + 8) = var_68
            
            if (var_68 != 0)
                sub_1405a4c70(rbx_4, var_68, 0)
                memcpy(*rbx_4, var_a8, var_68 * 2)
            else
                *(rbx_4 + 0xc) = 0
        
        i = sub_140b295a0(&arg_8, &var_70, 1)
    while (i != 0)

if (var_88 != 0 && var_88 - 1 s> 0)
    int64_t i_4 = sx.q(i_2)
    i_2 = (i_4 + 1).d
    
    if (i_2 s> r13)
        sub_1405a4f90(&var_80)
        rsi = var_80
    
    void* rbx_6 = &rsi[i_4 * 2]
    *rbx_6 = 0
    *(rbx_6 + 8) = var_88
    sub_1405a4c70(rbx_6, var_88, 0)
    memcpy(*rbx_6, var_90, var_88 * 2)

if (i_2 s< 1)
    sub_140b1f640(arg2, 
        Error: Bad input. Input should be in either the form "HighResShot 1920x1080" or "HighResShot 2"")
else
    int16_t* const rcx_16
    
    if (rsi[1].d == 0)
        rcx_16 = &data_142d40450
    else
        rcx_16 = *rsi
    
    char rax_6
    double zmm0_1
    rax_6, zmm0_1 = sub_1423ea040(rcx_16, arg3, arg4, &var_a8)
    
    if (rax_6 != 0)
        int32_t rcx_19 = *arg3
        int32_t rax_9
        
        if (rcx_19 != 0)
            rax_9 = *arg4
        
        if (rcx_19 == 0 || rax_9 == 0)
            sub_140b1f640(arg2, u"Error: Values must be greater than 0 in both dimensions")
        else
            uint64_t r8_10 = zx.q(data_1439c7a78)
            
            if (rcx_19 u<= r8_10.d && rax_9 u<= r8_10.d)
                goto label_1423dd6b5
            
            sub_140b1f700(arg2, 
                Error: Screenshot size exceeds the maximum allowed texture size (%d x %d)", r8_10)
    else
        wchar16* _String
        
        if (rsi[1].d == 0)
            _String = &data_142d40450
        else
            _String = *rsi
        
        _wtof(_String)
        int32_t zmm6_1 = fconvert.s(zmm0_1)
        char rax_7
        
        if (not(zmm6_1 f<= 0f))
            rax_7 = sub_140a24720(rsi)
        
        if (zmm6_1 f<= 0f || rax_7 == 0)
            sub_140b1f640(arg2, 
                Error: Bad input. Input should be in either the form "HighResShot 1920x1080" or "
            ""HighResShot 2"")
        else
            *arg5 = zmm6_1
        label_1423dd6b5:
            int32_t r15_5
            
            if (i_2 s<= 1)
                r15_5 = 0
            else if (rsi[3].d == 0)
                r15_5 = _wtoi(&data_142d40450)
            else
                r15_5 = _wtoi(rsi[2])
            
            int32_t rbx_8
            
            if (i_2 s<= 2)
                rbx_8 = 0
            else if (rsi[5].d == 0)
                rbx_8 = _wtoi(&data_142d40450)
            else
                rbx_8 = _wtoi(rsi[4])
            
            int32_t r13_1
            
            if (i_2 s<= 3)
                r13_1 = 0
            else if (rsi[7].d == 0)
                r13_1 = _wtoi(&data_142d40450)
            else
                r13_1 = _wtoi(rsi[6])
            
            int32_t rdx_15
            
            if (i_2 s<= 4)
                rdx_15 = 0
            else if (rsi[9].d == 0)
                rdx_15 = _wtoi(&data_142d40450)
            else
                rdx_15 = _wtoi(rsi[8])
            
            *arg6 = r15_5
            arg6[1] = rbx_8
            arg6[2] = r15_5 + r13_1
            arg6[3] = rdx_15 + rbx_8
            bool rcx_26
            
            if (i_2 s<= 5)
                rcx_26 = false
            else if (rsi[0xb].d == 0)
                rcx_26 = _wtoi(&data_142d40450) != 0
            else
                rcx_26 = _wtoi(rsi[0xa]) != 0
            
            *arg7 = rcx_26
            bool rcx_28
            
            if (i_2 s<= 6)
                rcx_28 = false
            else if (rsi[0xd].d == 0)
                rcx_28 = _wtoi(&data_142d40450) != 0
            else
                rcx_28 = _wtoi(rsi[0xc]) != 0
            
            *arg8 = rcx_28
            bool rcx_30
            
            if (i_2 s<= 7)
                rcx_30 = false
            else if (rsi[0xf].d == 0)
                rcx_30 = _wtoi(&data_142d40450) != 0
            else
                rcx_30 = _wtoi(rsi[0xe]) != 0
            
            *arg9 = rcx_30
            
            if (i_2 s> 8)
                if (rsi[0x11].d != 0)
                    _String_1 = rsi[0x10]
                
                r14 = _wtoi(_String_1) != 0
            
            *arg11 = r14
            r14 = true

uint64_t rcx_35 = var_70

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

int16_t* rcx_36 = var_a0

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

int64_t* rbx_9 = rsi

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_37 = *rbx_9
        
        if (rcx_37 != 0)
            sub_140a74f90(rcx_37)
        
        rbx_9 = &rbx_9[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (rsi != 0)
    sub_140a74f90(rsi)

int64_t rax_31 = var_90

if (rax_31 != 0)
    sub_140a74f90(rax_31)

return zx.q(r14)
