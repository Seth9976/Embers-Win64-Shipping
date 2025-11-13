// 函数: sub_140b47910
// 地址: 0x140b47910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg1
int16_t* r12 = arg3
EnterCriticalSection(&arg1[0xc])
int32_t rsi = 0
int64_t var_90 = 0
int32_t rdx = 0
int32_t var_88 = 0
int32_t rcx_1 = 0
int32_t var_84 = 0
int64_t r13 = 0
void* rdi = -ffffffffffffffff

if (arg2 != 0 && *arg2 != 0)
    int64_t r15_1 = -1
    
    do
        r15_1 += 1
    while (arg2[r15_1] != 0)
    
    if (r15_1.d + 1 s> 0)
        sub_1405947f0(&var_90, r15_1.d + 1)
        rcx_1 = var_84
        rdx = var_88
        r13 = var_90
    
    int32_t rax_1 = r15_1.d + 1 + rdx
    int32_t var_88_1 = rax_1
    
    if (rax_1 s> rcx_1)
        sub_140594770(&var_90)
        r13 = var_90
    
    UnDecorator::getReferenceType(r13, arg2, (r15_1.d + 1) * 2)
    r15 = arg1

int32_t arg_10
sub_1408f1b50(r15, &arg_10, &var_90)
int64_t rax_2 = sx.q(arg_10)
int64_t rcx_7

if (rax_2.d != 0xffffffff)
    rcx_7 = rax_2 << 5

void* const r15_3

if (rax_2.d == 0xffffffff || rcx_7 == neg.q(*r15))
    r15_3 = nullptr
else
    r15_3 = *(rcx_7 + *r15 + 0x10)

if (r13 != 0)
    sub_140a74f90(r13)

if (r15_3 == 0)
label_140b47ab1:
    void*** rax_5 = j_sub_140a82f30(0x1068)
    void*** r15_6 = rax_5
    
    if (rax_5 == 0)
        r15_6 = nullptr
    else
        *r15_6 = &data_142e77b10
        r15_6[0x101] = 0
        void* rdx_9 = &r15_6[1] - r12
        r15_6[0x102] = 0
        r15_6[0x207] = 0
        r15_6[0x208] = 0
        int16_t i
        
        do
            i = *r12
            *(r12 + rdx_9) = i
            r12 = &r12[1]
        while (i != 0)
        r15_6[0x209].b = arg6
        sub_140b30f50(&r15_6[0x101], arg4)
        
        if (arg5 != 0)
            sub_140597df0(&r15_6[0x207], arg5)
        
        r15_6[0x20a].d = 0
        r15_6[0x20b] = 0
        r15_6[0x20c] = 0
    
    void*** var_98 = r15_6
    int32_t rdx_19 = 0
    int32_t var_68_1 = 0
    int32_t rcx_30 = 0
    int32_t var_64_1 = 0
    int64_t var_70 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        do
            rdi += 1
        while (arg2[rdi] != 0)
        
        if (rdi.d + 1 s> 0)
            sub_1405947f0(&var_70, rdi.d + 1)
            rcx_30 = var_64_1
            rdx_19 = var_68_1
        
        int32_t rax_20 = rdi.d + 1 + rdx_19
        int32_t var_68_2 = rax_20
        
        if (rax_20 s> rcx_30)
            sub_140594770(&var_70)
        
        UnDecorator::getReferenceType(var_70, arg2, (rdi.d + 1) * 2)
    
    void** rax_21 = sub_140b2c990(arg1, &var_70, &var_98)
    int64_t rcx_35 = var_70
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)
    
    int64_t rcx_36 = data_143db7ac8
    rdi = *rax_21
    *(rdi + 0x1050) += 1
    *(rdi + 0x1060) = rcx_36
    void*** rcx_37 = *(rdi + 0x1058)
    
    if (rcx_36 == 0)
        sub_140a4fc50(rcx_37)
        *(rdi + 0x1058) = 0
        sub_140b367a0(rdi)
    else
        if (rcx_37 == 0)
            rcx_37.b = 1
            void*** rax_22 = sub_140a491d0(rcx_37.b)
            *(rdi + 0x1058) = rax_22
            rcx_37 = rax_22
        
        (*rcx_37)[3](rcx_37)
        int64_t* rcx_38 = *(rdi + 0x1060)
        (*(*rcx_38 + 0x10))(rcx_38, rdi)
    
    rdi.b = 1
else if (arg6 != 0)
label_140b47ca0:
    rdi.b = 0
else
    if (sub_140b40290(r15_3) != 0)
        int64_t var_80 = 0
        int32_t rdx_4 = 0
        int32_t var_78_1 = 0
        int32_t rcx_11 = 0
        int32_t var_74_1 = 0
        int64_t r13_1 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t r15_4 = -1
            
            do
                r15_4 += 1
            while (arg2[r15_4] != 0)
            
            if (r15_4.d + 1 s> 0)
                sub_1405947f0(&var_80, r15_4.d + 1)
                rcx_11 = var_74_1
                rdx_4 = var_78_1
                r13_1 = var_80
            
            int32_t rax_4 = r15_4.d + 1 + rdx_4
            int32_t var_78_2 = rax_4
            
            if (rax_4 s> rcx_11)
                sub_140594770(&var_80)
                r13_1 = var_80
            
            UnDecorator::getReferenceType(r13_1, arg2, (r15_4.d + 1) * 2)
        
        sub_1408f2170(arg1, &var_80)
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        goto label_140b47ab1
    
    int64_t* r15_7 = arg5
    
    if (r15_7[1].d == 0)
        arg_10.q = &data_142d40450
    else
        arg_10.q = *r15_7
    
    int32_t i_1 = 0
    
    if (arg1[0xb].d s> 0)
        int16_t** r15_8 = nullptr
        
        do
            int64_t rax_8 = arg1[0xa]
            int16_t* rdx_12
            
            if (*(r15_8 + rax_8 + 8) == 0)
                rdx_12 = &data_142d40450
            else
                rdx_12 = *(r15_8 + rax_8)
            
            if (sub_140a54510(arg2, rdx_12) == 0)
                int64_t rax_10 = arg1[0xa]
                int16_t* rdx_13
                
                if (*(rax_10 + r15_8 + 0x18) == 0)
                    rdx_13 = &data_142d40450
                else
                    rdx_13 = *(rax_10 + r15_8 + 0x10)
                
                if (sub_140a54510(arg_10.q, rdx_13) == 0)
                    goto label_140b47ca0_1
            
            i_1 += 1
            r15_8 = &r15_8[4]
        while (i_1 s< arg1[0xb].d)
        
        r15_7 = arg5
    
    int64_t var_60
    __builtin_memset(&var_60, 0, 0x20)
    int32_t rcx_21 = 0
    int32_t var_58
    int32_t var_54
    
    if (arg2 != 0)
        int32_t rdi_1
        
        if (*arg2 == 0)
            rdi_1 = 0
        else
            do
                rdi += 1
            while (arg2[rdi] != 0)
            
            rdi_1 = rdi.d + 1
        
        if (rdi_1 != 0)
            sub_1405947f0(&var_60, rdi_1)
            rcx_21 = var_54
            rsi = var_58
        
        int32_t rax_12 = rsi + rdi_1
        var_58 = rax_12
        
        if (rax_12 s> rcx_21)
            sub_140594770(&var_60)
        
        if (rdi_1 != 0)
            memcpy(var_60, arg2, rdi_1 * 2)
    
    uint64_t var_50
    sub_140597df0(&var_50, r15_7)
    int64_t rsi_1 = sx.q(arg1[0xb].d)
    int32_t rax_13 = (rsi_1 + 1).d
    arg1[0xb].d = rax_13
    
    if (rax_13 s> *(arg1 + 0x5c))
        sub_1405c4e40(&arg1[0xa])
    
    int64_t* rcx_29 = (rsi_1 << 5) + arg1[0xa]
    *rcx_29 = var_60
    rcx_29[1].d = var_58
    *(rcx_29 + 0xc) = var_54
    rcx_29[2] = var_50
    int64_t var_48
    rcx_29[3].d = var_48.d
    *(rcx_29 + 0x1c) = var_48:4.d
label_140b47ca0_1:
    rdi.b = 0

if (arg1 != -0x60)
    LeaveCriticalSection(&arg1[0xc])

return zx.q(rdi.b)
