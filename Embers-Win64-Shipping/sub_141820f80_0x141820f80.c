// 函数: sub_141820f80
// 地址: 0x141820f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
*arg1 = arg2
arg1[1] = arg3
sub_140596d10(&arg1[2], arg4)
sub_140596d10(&arg1[4], arg5)
int64_t* rcx_2 = &arg1[8]
arg1[6] = 0
arg1[7] = 0
rcx_2[2] = 0
rcx_2[3].d = 0
*(rcx_2 + 0x1c) = 0x80
int64_t* rax_2 = rcx_2[2]

if (rax_2 != 0)
    rcx_2 = rax_2

*rcx_2 = 0
rcx_2[1] = 0
void* rcx_3 = &arg1[0x12]
arg1[0xc].d = 0xffffffff
*(arg1 + 0x64) = 0
arg1[0xe] = 0
arg1[0xf].d = 0
arg1[0x10] = 0
arg1[0x11] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_3 = *(rcx_3 + 0x10)

if (rax_3 != 0)
    rcx_3 = rax_3

*rcx_3 = 0
*(rcx_3 + 8) = 0
void* rcx_4 = &arg1[0x1c]
arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
arg1[0x18] = 0
arg1[0x19].d = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_4 = *(rcx_4 + 0x10)

if (rax_4 != 0)
    rcx_4 = rax_4

*rcx_4 = 0
*(rcx_4 + 8) = 0
void* rcx_5 = &arg1[0x26]
arg1[0x20].d = 0xffffffff
*(arg1 + 0x104) = 0
arg1[0x22] = 0
arg1[0x23].d = 0
arg1[0x24] = 0
arg1[0x25] = 0
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax_5 = *(rcx_5 + 0x10)

if (rax_5 != 0)
    rcx_5 = rax_5

*rcx_5 = 0
*(rcx_5 + 8) = 0
arg1[0x2a].d = 0xffffffff
*(arg1 + 0x154) = 0
arg1[0x2c] = 0
arg1[0x2d].d = 0
arg1[0x2e].b = 0
int16_t* const rdx_2

if (arg1[5].d == 0)
    rdx_2 = &data_142d40450
else
    rdx_2 = arg1[4]

int64_t* rcx_6 = *arg1
char rax_7 = (*(*rcx_6 + 0x80))(rcx_6, rdx_2)
arg1[0x2e].b = rax_7
wchar16 const* const rbx_1 = u"false"

if (rax_7 != 0)
    rbx_1 = u"true"

sub_140b19e60()
sub_140b1f700(&data_1439a8bd0, u"BuildPatchResumeData file found: %s", rbx_1)

if (arg1[0x2e].b != 0)
    int64_t var_b8 = 0
    int64_t var_b0_1 = 0
    int64_t* i_2 = nullptr
    int32_t i_4 = 0
    int16_t* const rdx_3
    
    if (arg1[5].d == 0)
        rdx_3 = &data_142d40450
    else
        rdx_3 = arg1[4]
    
    int64_t* rcx_7 = *arg1
    (*(*rcx_7 + 0x58))(rcx_7, rdx_3, &var_b8)
    sub_140a2cec0(&var_b8, &i_2, 1)
    int64_t* rcx_9 = arg1[1]
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x2c)
    int64_t r8_3
    r8_3.b = 1
    int32_t var_5c_1 = 0x80
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    (*(*rcx_9 + 8))(rcx_9, &var_88, r8_3)
    int32_t i_6 = i_4
    
    if (i_6 s> arg1[7].d - *(arg1 + 0x64))
        sub_140976540(&arg1[6], i_6)
        int32_t rax_14
        
        if (i_6 u< 4)
            rax_14 = 1
        else
            uint32_t rdi_1 = i_6 u>> 1
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rdi_1 + 8)
            int32_t rcx_11
            
            if (rdi_1 == 0xfffffff8)
                rcx_11 = 0x20
            else
                rcx_11 = 0x1f - temp0_2
            
            int32_t rcx_13 = rcx_11 << 0x1a s>> 0x1f
            uint64_t rflags_2
            char temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rdi_1 + 7)
            
            if (rcx_13 == 0)
                rax_14 = 1
            else
                rax_14 = 1 << ((not.d(rcx_13)).b & (0x20 - (0x1f - temp0_3)))
        
        int32_t rcx_16 = arg1[0xf].d
        
        if (rcx_16 == 0 || rcx_16 s< rax_14)
            arg1[0xf].d = rax_14
            sub_1405a4480(&arg1[6])
        
        i_6 = i_4
    
    for (int64_t* i = i_2; i != &i[sx.q(i_6) * 2]; i = &i[2])
        _DeleteExceptionPtr(i)
        int32_t var_a0
        sub_140598750(&arg1[6], &var_a0)
        int64_t* var_98
        sub_140596d10(var_98, i)
        var_98[2].d = 0xffffffff
        int32_t rax_15 = var_98[1].d
        int16_t* rdx_10
        
        if (rax_15 == 0)
            rdx_10 = &data_142d40450
        else
            rdx_10 = *var_98
        
        int32_t rcx_21 = rax_15 - 1
        
        if (rax_15 == 0)
            rcx_21 = 0
        
        void var_a8
        sub_14059a6d0(&arg1[6], &var_a8, sub_1405969c0(rcx_21, rdx_10), var_98, var_a0, nullptr)
        void var_a4
        
        if (*sub_140960120(&var_88, &var_a4, i) != 0xffffffff)
            arg1[0x2e].b = 1
            int16_t* const rdi_4
            
            if (i[1].d == 0)
                rdi_4 = &data_142d40450
            else
                rdi_4 = *i
            
            sub_140b19e60()
            sub_140b1f700(&data_1439a8bd0, u"BuildPatchResumeData version matched %s", rdi_4)
    
    int32_t var_40_2 = 0
    
    if (var_48_1 != 0)
        sub_140a74f90(var_48_1)
    
    sub_14059ad90(&var_88, 0)
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    int64_t rcx_27 = var_88
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    int32_t i_3 = i_4
    int64_t* i_5 = i_2
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            int64_t rcx_28 = *i_5
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
            
            i_5 = &i_5[2]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        i_5 = i_2
    
    if (i_5 != 0)
        sub_140a74f90(i_5)
    
    int64_t rcx_30 = var_b8
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)

__security_check_cookie(rax_1 ^ &var_f8)
return arg1
