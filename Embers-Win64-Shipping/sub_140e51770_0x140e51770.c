// 函数: sub_140e51770
// 地址: 0x140e51770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d92c20(arg1)
int64_t* rdx = &arg1[0x26]
int64_t* rcx = &arg1[0x48]
*arg1 = &data_142ed7390
arg1[0x23] = &data_142ed7560
arg1[0x24] = 0
arg1[0x25] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[0x2a].d = 0xffffffff
*(arg1 + 0x154) = 0
arg1[0x2c] = 0
arg1[0x2d].d = 0
arg1[0x2e].w = 0x101
*(arg1 + 0x174) = 0x3f800000
__builtin_memset(&arg1[0x30], 0, 0x51)
arg1[0x3b] = 0
arg1[0x3c] = 0
arg1[0x3d].w = 0x100
__builtin_memset(&arg1[0x3e], 0, 0x50)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_1 = rcx[2]

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
rcx[1] = 0
arg1[0x4c].d = 0xffffffff
*(arg1 + 0x264) = 0
arg1[0x4e] = 0
arg1[0x4f].d = 0
arg1[0x50].d = 0xffffffff
__builtin_memset(&arg1[0x51], 0, 0x21)
arg1[0x56].d = 0
__builtin_memset(&arg1[0x57], 0, 0x30)
*(arg1 + 0x2ec) = -1
__builtin_memset(&arg1[0x5f], 0, 0x20)
arg1[0x63] = 2
__builtin_memset(&arg1[0x64], 0, 0x28)
void*** rax_2 = j_sub_140a82f30(8)
void*** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    *rbx = &data_142ed7ff8

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[1].d = 1
    *rax_3 = &data_142e1b260
    *(rax_3 + 0xc) = 1
    rax_3[2] = rbx

arg1[0x69] = rbx
arg1[0x6a] = rax_3
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t zmm0 = float.d(performanceCount) f* data_143d796f8
arg1[0x6c] = 0
arg1[0x6d].d = 0x3d088889
*(arg1 + 0x36c) = 0x3d088889
arg1[0x6b] = zmm0 f+ 16777216.0
arg1[0x6e] = 0
arg1[0x6f].d = 0
__builtin_memset(&arg1[0x70], 0, 0x1c)
arg1[0x74] = 0
arg1[0x75].d = 0
arg1[0x76] = 0
arg1[0x77].d = 0
arg1[0x78].d = 0
arg1[0x79] = 0
arg1[0x7a] = 0
arg1[0x7c].w = 0
arg1[0x7d].w = 0
arg1[0x7e] = 0
arg1[0x7f].d = 0
arg1[0x80] = 0
arg1[0x81].d = 0
arg1[0x82] = 0
arg1[0x83].d = 0
arg1[0x84].b = 0
*(arg1 + 0x424) = 0xffffffff
arg1[0x86] = 0
sub_140af2b60()
char rax_4

if (sub_140b21a10(&data_143dbb3f0, u"simmobile") != 0)
    rax_4 = 1
else
    sub_140af2b60()
    rax_4 = sub_140b21a10(&data_143dbb3f0, u"faketouches")
    
    if (rax_4 != 0)
        rax_4 = 1

arg1[0x87].b = rax_4
*(arg1 + 0x439) = 0
arg1[0x88] = 0
arg1[0x89].d = 0
arg1[0x8a] = 0
arg1[0x8b].d = 0
arg1[0x8c].w = 1
*(arg1 + 0x462) = 0
int64_t* rbx_1 = data_143e243c8
arg1[0x8d] = (*(*rbx_1 + 0x48))(rbx_1, *sub_140b58170(&performanceCount, "DefaultAppIcon", 1), 0)
arg1[0x8e] = 0
arg1[0x8f] = 0
arg1[0x90] = 2
arg1[0x91] = 0
arg1[0x92] = 0
void*** rax_7 = j_sub_140a82f30(0x108)
void*** rbx_2 = rax_7

if (rax_7 == 0)
    rbx_2 = nullptr
else
    rax_7[1].d = 1
    *(rax_7 + 0xc) = 1
    *rbx_2 = &data_142ed9c38
    sub_140e51040(&rbx_2[2])

arg1[0x93] = &rbx_2[2]
arg1[0x94] = rbx_2
sub_140918950(&arg1[0x93], &rbx_2[2])
void* r14 = &arg1[0x95]
*(r14 + 0x1c) = 0x80
*(r14 + 0x18) = 6
__builtin_memset(r14, 0, 0x18)
arg1[0x99] = 0
arg1[0x9a] = 0
arg1[0x9b] = 2
arg1[0x9c] = 0
arg1[0x9d] = 0
arg1[0x9e] = 2
arg1[0x9f] = 0
arg1[0xa0] = 0
arg1[0xa1] = 2
arg1[0xa2] = 0
arg1[0xa3] = 0
arg1[0xa4] = 2
arg1[0xa5] = 0
arg1[0xa6] = 0
arg1[0xa7] = 2
arg1[0xa8] = 0
arg1[0xa9] = 0
arg1[0xaa] = 2
InitializeCriticalSection(&arg1[0xab])
SetCriticalSectionSpinCount(&arg1[0xab], 0xfa0)
arg1[0xb0].d = 0
void* rdx_3 = &arg1[0xb8]
__builtin_memset(&arg1[0xb1], 0, 0x11)
__builtin_memset(&arg1[0xb4], 0, 0x20)
*(rdx_3 + 0x10) = 0
*(rdx_3 + 0x18) = 0
*(rdx_3 + 0x1c) = 0x80
void* rax_8 = *(rdx_3 + 0x10)

if (rax_8 != 0)
    rdx_3 = rax_8

*rdx_3 = 0
*(rdx_3 + 8) = 0
arg1[0xbc].d = 0xffffffff
*(arg1 + 0x5e4) = 0
arg1[0xbe] = 0
arg1[0xbf].d = 0
void*** rax_9 = j_sub_140a82f30(0x18)

if (rax_9 == 0)
    rax_9 = nullptr
else
    rax_9[1].d = 1
    *rax_9 = &data_142ed9c48
    *(rax_9 + 0xc) = 1
    rax_9[2] = &data_142ed7370

void*** var_38 = &rax_9[2]
arg1[0xc0] = var_38
arg1[0xc1] = rax_9

if (rax_9 != 0)
    rax_9[1].d += 1
    
    if (rax_9 != 0)
        rax_9[1].d -= 1
        
        if (rax_9[1].d == 1)
            (**rax_9)(rax_9)
            int32_t temp1_1 = *(rax_9 + 0xc)
            *(rax_9 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rax_9)[1](rax_9, 1)

void* rdx_4
rdx_4.b = 1
sub_140d77e40(sub_140e45790(0x3f800000, rdx_4.b, 5), &arg1[0x2f])
int32_t temp0_2 = __maxss_xmmss_memss(arg1[0x2f].d, 0x40a00000)
arg1[0x2f].d = temp0_2
void* rcx_11 = data_143ddb400
data_143e29e90 = temp0_2

if (rcx_11 != 0)
    sub_140af2fd0(rcx_11, u"MobileSlateUI", u"bTouchFallbackToMouse", &arg1[0x8c], &data_143de5780)
    sub_140af2fd0(data_143ddb400, CursorControl", bAllowSoftwareCursor", arg1 + 0x461, 
        &data_143de5780)

sub_140af2b60()
*(arg1 + 0x172) = sub_140b21a10(&data_143dbb3f0, u"RenderOffScreen")
int64_t rbx_4 = *sub_140b58260(&performanceCount, u"InputCore", 1)
j_sub_140b3db50()
j_sub_140b407e0(&data_143de7d78, rbx_4)
sub_140e82850()
sub_140e82c90()
void*** var_30
var_30.d = 0
*(arg1 + 0x3e9) = 1
var_38 = sub_1405948d0
int64_t* rax_16 = sub_140a84c80(0, 0x30, 0)

if (rax_16 != 0)
    int128_t zmm0_4 = var_38.o
    rax_16[1] = arg1
    *rax_16 = &data_142ed9048
    *(rax_16 + 0x10) = zmm0_4
    rax_16[5] = sub_140a387b0()

if (&var_38 != &arg1[0x7e])
    if (rax_16 != 0)
        (*(*rax_16 + 0x40))(rax_16, &arg1[0x7e])
    else if (arg1[0x7f].d != 0)
        int64_t* rcx_15 = arg1[0x7e]
        
        if (rcx_15 != 0)
            (*(*rcx_15 + 0x38))(rcx_15, 0)
            int64_t rcx_16 = arg1[0x7e]
            
            if (rcx_16 != 0)
                arg1[0x7e] = sub_140a84c80(rcx_16, 0, 0)
            
            arg1[0x7f].d = 0

if (rax_16 != 0)
    (*(*rax_16 + 0x38))(rax_16, 0)
    int64_t rax_22 = sub_140a84c80(rax_16, 0, 0)
    
    if (rax_22 != 0)
        sub_140a74f90(rax_22)

sub_140e83d80(arg1, &var_38, 0, 0)

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp3_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*var_30)[1](var_30, 1)

int64_t* rcx_23 = arg1[0x93]
(*(*rcx_23 + 0x18))(rcx_23)
void* rax_26 = *(r14 + 0x10)

if (rax_26 != 0)
    r14 = rax_26

*r14 |= 0x20
int64_t* rcx_24 = data_143db18d0

if (rcx_24 == 0)
    sub_140a53c40()
    rcx_24 = data_143db18d0

int64_t r8_1
r8_1.b = 1
int64_t* rax_28 = (*(*rcx_24 + 0xb0))(rcx_24, u"Slate.EnableGlobalInvalidation", r8_1)

if (rax_28 != 0)
    var_38 = nullptr
    void*** rax_29 = sub_140a84c80(0, 0x20, 0)
    var_38 = rax_29
    var_30.d = 2
    
    if (rax_29 != 0)
        rax_29[1] = arg1
        *rax_29 = &data_142ed9c58
        rax_29[3] = sub_140a387b0()
        *rax_29 = &data_142ed9cb0
    
    (*(*rax_28 + 0xa8))(rax_28, &var_38)
    void*** rax_33
    
    if (var_30.d == 0)
        rax_33 = var_38
    label_140e520f9:
        
        if (rax_33 != 0)
            sub_140a74f90(rax_33)
    else
        void*** rcx_26 = var_38
        
        if (rcx_26 != 0)
            (*rcx_26)[7](rcx_26, 0)
            rax_33 = var_38
            
            if (rax_33 != 0)
                rax_33 = sub_140a84c80(rax_33, 0, 0)
                var_38 = rax_33
            
            var_30.d = 0
            goto label_140e520f9

return arg1
