// 函数: sub_14181e660
// 地址: 0x14181e660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2] = 0
arg1[3] = 0
*arg1 = &data_142fe39d0
arg1[1] = &data_142fe3ab0
sub_140b214c0(&arg1[4])
__builtin_memset(&arg1[6], 0, 0x14)

if (arg6 != &arg1[7] && arg6[1].d != 0)
    int64_t* rcx_1 = *arg6
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1)

arg1[9] = 0
arg1[0xa].d = 0

if (arg7 != &arg1[9] && arg7[1].d != 0)
    int64_t* rcx_2 = *arg7
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x40))(rcx_2)

sub_14181db00(&arg1[0xb], arg2)
arg1[0x19] = 0
arg1[0x1a] = 0
int32_t rax_3 = arg1[0x10].d
arg1[0x1b] = 0
int32_t rbx_1 = arg1[0x10].d
int64_t rdi_1 = arg1[0xf]
arg1[0x1c].d = rbx_1
sub_1405a4c70(&arg1[0x1b], rbx_1 + sbb.d((&arg1[0xb]).d, (&arg1[0xb]).d, rax_3 != 0) + 0xb, 0)
memcpy(arg1[0x1b], rdi_1, rbx_1 * 2)
int32_t rcx_9 = sub_140a2cf70(&arg1[0x1b], u"PatchData", 9)
int32_t rax_5 = arg1[0x10].d
arg1[0x1d] = 0
int32_t rbx_2 = arg1[0x10].d
int64_t rdi_2 = arg1[0xf]
arg1[0x1e].d = rbx_2
sub_1405a4c70(&arg1[0x1d], sbb.d(rcx_9, rcx_9, rax_5 != 0) + 9 + rbx_2, 0)
memcpy(arg1[0x1d], rdi_2, rbx_2 * 2)
int32_t rcx_14 = sub_140a2cf70(&arg1[0x1d], u"Install", 7)
int32_t rax_7 = arg1[0x10].d
arg1[0x1f] = 0
int32_t rbx_3 = arg1[0x10].d
int64_t rdi_3 = arg1[0xf]
arg1[0x20].d = rbx_3
sub_1405a4c70(&arg1[0x1f], sbb.d(rcx_14, rcx_14, rax_7 != 0) + 6 + rbx_3, 0)
memcpy(arg1[0x1f], rdi_3, rbx_3 * 2)
int32_t rcx_19 = sub_140a2cf70(&arg1[0x1f], u"Meta", 4)
int32_t rax_9 = arg1[0xe].d
arg1[0x21] = 0
int32_t rbx_4 = arg1[0xe].d
int64_t rdi_4 = arg1[0xd]
arg1[0x22].d = rbx_4
sub_1405a4c70(&arg1[0x21], sbb.d(rcx_19, rcx_19, rax_9 != 0) + 0xe + rbx_4, 0)
memcpy(arg1[0x21], rdi_4, rbx_4 * 2)
sub_140a2cf70(&arg1[0x21], u"$movedMarker", 0xc)
InitializeCriticalSection(&arg1[0x23])
SetCriticalSectionSpinCount(&arg1[0x23], 0xfa0)
arg1[0x28].d = 0
*(arg1 + 0x144) = 0
arg1[0x29].d = 0
*(arg1 + 0x14c) = 1
__builtin_memset(&arg1[0x2a], 0, 0x5c)
arg1[0x36] = 0
arg1[0x37] = 0
arg1[0x38] = -0x4010000000000000
arg1[0x39].d = 0
__builtin_memset(&arg1[0x3a], 0, 0x5d)
arg1[0x46].d = 0
*(arg1 + 0x234) = 9
__builtin_memset(&arg1[0x47], 0, 0x30)
sub_140a96170(&arg1[0x4d])
__builtin_memset(&arg1[0x50], 0, 0x40)
arg1[0x58] = &data_142fe3168
arg1[0x67].d = 0
InitializeCriticalSection(&arg1[0x68])
SetCriticalSectionSpinCount(&arg1[0x68], 0xfa0)
arg1[0x65].d = 0
arg1[0x66] = 0
*(arg1 + 0x32c) = 0
arg1[0x67].d
arg1[0x67].d = 0
__builtin_memset(&arg1[0x59], 0, 0x30)
arg1[0x5f].d = 0x3f800000
*(arg1 + 0x2fc) = 0x3f800000
arg1[0x60].d = 0x3f800000
*(arg1 + 0x304) = 0x3f800000
arg1[0x61].d = 0x3f800000
*(arg1 + 0x30c) = 0x3f800000
arg1[0x62].d = 0x3f800000
*(arg1 + 0x314) = 0x3f800000
arg1[0x63].d = 0x3f800000
*(arg1 + 0x31c) = 0x3f800000
arg1[0x64].d = 0x3f800000
*(arg1 + 0x324) = 0x3f800000
float zmm0 = *(arg1 + 0x304)
arg1[0x65].d = zmm0
zmm0 = zmm0 f+ arg1[0x61].d
arg1[0x65].d = zmm0
zmm0 = zmm0 f+ *(arg1 + 0x30c)
arg1[0x65].d = zmm0
zmm0 = zmm0 f+ arg1[0x62].d
arg1[0x65].d = zmm0
arg1[0x65].d = zmm0 f+ *(arg1 + 0x314)
sub_141851f90(&arg1[0x58])
arg1[0x6d].w = 0
void* rcx_30 = &arg1[0x72]
__builtin_memset(&arg1[0x6e], 0, 0x20)
*(rcx_30 + 0x10) = 0
*(rcx_30 + 0x18) = 0
*(rcx_30 + 0x1c) = 0x80
void* rax_12 = *(rcx_30 + 0x10)

if (rax_12 != 0)
    rcx_30 = rax_12

*rcx_30 = 0
*(rcx_30 + 8) = 0
void* rcx_31 = &arg1[0x7c]
arg1[0x76].d = 0xffffffff
*(arg1 + 0x3b4) = 0
arg1[0x78] = 0
arg1[0x79].d = 0
arg1[0x7a] = 0
arg1[0x7b] = 0
*(rcx_31 + 0x10) = 0
*(rcx_31 + 0x18) = 0
*(rcx_31 + 0x1c) = 0x80
void* rax_13 = *(rcx_31 + 0x10)

if (rax_13 != 0)
    rcx_31 = rax_13

*rcx_31 = 0
*(rcx_31 + 8) = 0
void* rcx_32 = &arg1[0x86]
arg1[0x80].d = 0xffffffff
*(arg1 + 0x404) = 0
arg1[0x82] = 0
arg1[0x83].d = 0
arg1[0x84] = 0
arg1[0x85] = 0
*(rcx_32 + 0x10) = 0
*(rcx_32 + 0x18) = 0
*(rcx_32 + 0x1c) = 0x80
void* rax_14 = *(rcx_32 + 0x10)

if (rax_14 != 0)
    rcx_32 = rax_14

*rcx_32 = 0
*(rcx_32 + 8) = 0
arg1[0x8a].d = 0xffffffff
*(arg1 + 0x454) = 0
arg1[0x8c] = 0
arg1[0x8d].d = 0
arg1[0x8e] = 0
arg1[0x8f] = 0
void* rcx_33 = &arg1[0x90]
*(rcx_33 + 0x10) = 0
*(rcx_33 + 0x18) = 0
*(rcx_33 + 0x1c) = 0x80
void* rax_15 = *(rcx_33 + 0x10)

if (rax_15 != 0)
    rcx_33 = rax_15

*rcx_33 = 0
*(rcx_33 + 8) = 0
void* rcx_34 = &arg1[0x9a]
arg1[0x94].d = 0xffffffff
*(arg1 + 0x4a4) = 0
arg1[0x96] = 0
arg1[0x97].d = 0
arg1[0x98] = 0
arg1[0x99] = 0
*(rcx_34 + 0x1c) = 0x80
void* rax_16 = *(rcx_34 + 0x10)

if (rax_16 != 0)
    rcx_34 = rax_16

__builtin_memset(rcx_34, 0, 0x1c)
arg1[0x9e].d = 0xffffffff
*(arg1 + 0x4f4) = 0
arg1[0xa0] = 0
arg1[0xa1].d = 0
sub_141823680(&arg1[0x98], arg3)

if (arg3[8] == 0)
    memmove(&arg1[0x9f], &arg3[7], 4)

int64_t rcx_37 = arg1[0xa0]

if (rcx_37 != 0)
    sub_140a74f90(rcx_37)

arg1[0xa0] = arg3[8]
arg3[8] = 0
arg1[0xa1].d = arg3[9].d
arg3[9].d = 0
sub_140596d10(&arg1[0xa2], arg4)
void*** rax_19 = j_sub_140a82f30(0x10)
void*** rbx_6 = rax_19

if (rax_19 == 0)
    rbx_6 = nullptr
else
    *rbx_6 = &data_142fe55b0
    rbx_6[1] = sub_141802500()

arg1[0xa4] = rbx_6
void*** rax_21 = j_sub_140a82f30(0x18)
void*** rbx_7 = rax_21

if (rax_21 == 0)
    rbx_7 = nullptr
else
    *rbx_7 = &data_142fe5510
    sub_140a464c0()
    rbx_7[1] = &data_14399ea08
    sub_140b6b7d0()
    rbx_7[2] = &data_1439a9568

arg1[0xa5] = rbx_7
void*** rax_22 = j_sub_140a82f30(8)

if (rax_22 == 0)
    rax_22 = nullptr
else
    *rax_22 = &data_142fe39b0

arg1[0xa6] = rax_22
arg1[0xa7] = sub_1418a0e20()
arg1[0xa8] = *arg5
arg1[0xa9] = arg5[1]
arg5[1] = 0
*arg5 = 0
arg1[0xaa] = sub_1418a0cd0(arg1[0xa8])
void*** rax_28 = sub_1418a0b40(sub_140b18f30())
arg1[0xab] = rax_28
arg1[0xac] = sub_1418a1150(rax_28)
arg1[0xad] = sub_1418a0760(arg1[0xaa], arg1[0xab])
arg1[0xae] = sub_141830f70()
arg1[0xaf] = sub_141830f70()
arg1[0xb0] = sub_141830f70()
arg1[0xb1] = sub_141830f70()
void*** rax_35 = j_sub_140a82f30(0x58)
void*** rdx_18 = rax_35

if (rax_35 == 0)
    rdx_18 = nullptr
else
    int64_t* rcx_43 = &rdx_18[3]
    __builtin_memset(&rdx_18[3], 0, 0x40)
    *rdx_18 = &data_142fe54e8
    rdx_18[1] = 0
    rdx_18[2] = 0
    rcx_43[2] = 0
    rcx_43[3].d = 0
    *(rcx_43 + 0x1c) = 0x80
    int64_t* rax_36 = rcx_43[2]
    
    if (rax_36 != 0)
        rcx_43 = rax_36
    
    *rcx_43 = 0
    rcx_43[1] = 0
    rdx_18[7].d = 0xffffffff
    *(rdx_18 + 0x3c) = 0
    rdx_18[9] = 0
    rdx_18[0xa].d = 0

arg1[0xb2] = rdx_18
arg1[0xb3] = sub_1418a07c0(arg1[0xae], rdx_18, arg1[0xaa])
arg1[0xb4] = sub_1418a0620(arg1[0xb1], arg1[0xab])
arg1[0xb5] = sub_1418a0c50(arg1[0xaf], arg1[0xaa], arg1[0xab])
arg1[0xb6] = sub_1418a0680(arg1[0xaa], &arg1[0x58], arg1[0xab])
arg1[0xb7] = sub_1418a0a50(arg1[0xaf], arg1[0xb0], &arg1[0x58], arg1[0xab])
arg1[0xb8] = sub_1418a14d0(arg1[0xaf], &arg1[0x58], arg1[0xab])
arg1[0xb9] = sub_14187ca40(sub_140b18f30(), arg1[0xa4], arg1[0xa5], arg1[0xb3], arg1[0xaa])
arg1[0xba] = sub_1418a1240()
__builtin_memset(&arg1[0xbb], 0, 0x40)
InitializeCriticalSection(&arg1[0xc3])
SetCriticalSectionSpinCount(&arg1[0xc3], 0xfa0)
__builtin_memset(&arg1[0xc8], 0, 0x12)
InitializeCriticalSection(&arg1[0xcb])
SetCriticalSectionSpinCount(&arg1[0xcb], 0xfa0)
__builtin_memset(&arg1[0xd0], 0, 0x12)
InitializeCriticalSection(&arg1[0xd3])
SetCriticalSectionSpinCount(&arg1[0xd3], 0xfa0)
__builtin_memset(&arg1[0xd8], 0, 0x12)
InitializeCriticalSection(&arg1[0xdb])
SetCriticalSectionSpinCount(&arg1[0xdb], 0xfa0)
__builtin_memset(&arg1[0xe0], 0, 0x12)
InitializeCriticalSection(&arg1[0xe3])
SetCriticalSectionSpinCount(&arg1[0xe3], 0xfa0)
__builtin_memset(&arg1[0xe8], 0, 0x12)
InitializeCriticalSection(&arg1[0xeb])
SetCriticalSectionSpinCount(&arg1[0xeb], 0xfa0)
__builtin_memset(&arg1[0xf0], 0, 0x12)
InitializeCriticalSection(&arg1[0xf3])
SetCriticalSectionSpinCount(&arg1[0xf3], 0xfa0)
__builtin_memset(&arg1[0xf8], 0, 0x12)
InitializeCriticalSection(&arg1[0xfb])
SetCriticalSectionSpinCount(&arg1[0xfb], 0xfa0)
__builtin_memset(&arg1[0x100], 0, 0x12)
InitializeCriticalSection(&arg1[0x103])
SetCriticalSectionSpinCount(&arg1[0x103], 0xfa0)
__builtin_memset(&arg1[0x108], 0, 0x12)
InitializeCriticalSection(&arg1[0x10b])
SetCriticalSectionSpinCount(&arg1[0x10b], 0xfa0)
__builtin_memset(&arg1[0x110], 0, 0x12)
void* rcx_71 = &arg1[0x115]
arg1[0x113] = 0
arg1[0x114] = 0
*(rcx_71 + 0x10) = 0
*(rcx_71 + 0x18) = 0
*(rcx_71 + 0x1c) = 0x80
void* rax_46 = *(rcx_71 + 0x10)
int64_t var_78 = 0
void*** var_60 = arg1

if (rax_46 != 0)
    rcx_71 = rax_46

void** const var_68 = &data_142da2668
int64_t (* var_88)(int64_t* arg1) = sub_14182a5a0
*rcx_71 = 0
*(rcx_71 + 8) = 0
arg1[0x119].d = 0xffffffff
*(arg1 + 0x8cc) = 0
arg1[0x11b] = 0
arg1[0x11c].d = 0
int64_t* rcx_72 = arg1[0xa7]
(*(*rcx_72 + 0x40))(rcx_72, &var_88)
int64_t rbx_9 = sx.q(arg1[0xc0].d)
int32_t rax_48 = (rbx_9 + 1).d
arg1[0xc0].d = rax_48

if (rax_48 s> *(arg1 + 0x604))
    sub_1405a4d70(&arg1[0xbf])

arg1[0xbf][rbx_9] = &arg1[0x58]
int32_t rbx_10 = arg1[0xe].d
int64_t rdi_8 = arg1[0xd]
int64_t var_f0 = 0
int32_t var_e8 = rbx_10

if (rbx_10 != 0)
    sub_1405a4c70(&var_f0, rbx_10, 0)
    memcpy(var_f0, rdi_8, rbx_10 * 2)
else
    int32_t var_e4_1 = 0

sub_140b214e0(&var_f0)
Concurrency::details::UMSThreadProxy::InternalSwitchTo(&var_f0)
int64_t* r12_2 = arg1[0xb]
int64_t* var_f8_1 = r12_2
void* rax_51 = sx.q(arg1[0xc].d) * 0x78 + r12_2

while (r12_2 != rax_51)
    int64_t rbx_11 = sx.q(arg1[0x1a].d)
    int32_t rax_52 = (rbx_11 + 1).d
    arg1[0x1a].d = rax_52
    
    if (rax_52 s> *(arg1 + 0xd4))
        sub_141846bb0(&arg1[0x19])
    
    int64_t* r14_3 = &arg1[0x19][rbx_11 * 0x27]
    sub_14181f5b0(r14_3, r12_2)
    int64_t r12_3 = r14_3[0xf]
    
    if (r12_3 != 0)
        int64_t* rdi_9 = r14_3[0x10]
        int64_t* rsi_2 = rdi_9
        
        if (rdi_9 != 0)
            rdi_9[1].d += 1
            rsi_2 = rdi_9
        
        int32_t var_98
        sub_14098dfb0(&arg1[0x98], &var_98)
        int64_t* var_90
        int64_t* rbx_12 = var_90
        sub_140596d10(rbx_12, &var_f0)
        rbx_12[2] = r12_3
        rbx_12[3] = rsi_2
        
        if (rdi_9 != 0)
            rdi_9[1].d += 1
            rsi_2 = rdi_9
            rbx_12 = var_90
        
        rbx_12[4].d = 0xffffffff
        int32_t rax_53 = rbx_12[1].d
        int16_t* rdx_33
        
        if (rax_53 == 0)
            rdx_33 = &data_142d40450
        else
            rdx_33 = *rbx_12
        
        int32_t rcx_83 = rax_53 - 1
        
        if (rax_53 == 0)
            rcx_83 = 0
        
        int32_t rax_54 = sub_1405969c0(rcx_83, rdx_33)
        int64_t var_108
        var_108.d = var_98
        void var_d0
        sub_141836db0(&arg1[0x98], &var_d0, rax_54, rbx_12, var_108.d, nullptr)
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d == 1)
                (**rdi_9)(rdi_9)
                int32_t rax_57 = *(rdi_9 + 0xc)
                *(rdi_9 + 0xc) -= 1
                
                if (rax_57 == 1)
                    (*(*rdi_9 + 8))(rdi_9, 1)
    
    int64_t* rcx_88 = arg1[0xb2]
    (*(*rcx_88 + 0x10))(rcx_88, r14_3[0xf])
    int64_t* rcx_89 = arg1[0xb2]
    (*(*rcx_89 + 0x10))(rcx_89, r14_3[0x11])
    r12_2 = &var_f8_1[0xf]
    var_f8_1 = r12_2

int64_t rcx_90 = var_f0

if (rcx_90 != 0)
    sub_140a74f90(rcx_90)

sub_1409f6060(arg2)
arg3[9].d = 0
int64_t rcx_92 = arg3[8]

if (rcx_92 != 0)
    sub_140a74f90(rcx_92)

sub_141837530(arg3, 0)
int64_t rcx_94 = arg3[4]

if (rcx_94 != 0)
    sub_140a74f90(rcx_94)

int64_t rcx_95 = *arg3

if (rcx_95 != 0)
    sub_140a74f90(rcx_95)

int64_t* rbx_16 = arg5[1]

if (rbx_16 != 0)
    rbx_16[1].d -= 1
    
    if (rbx_16[1].d == 1)
        (**rbx_16)(rbx_16)
        int32_t temp6_1 = *(rbx_16 + 0xc)
        *(rbx_16 + 0xc) -= 1
        
        if (temp6_1 == 1)
            int64_t r8_17 = *rbx_16
            (*(r8_17 + 8))(rbx_16, 1, r8_17)

sub_140745b20(arg6)
sub_140745b20(arg7)
return arg1
