// 函数: sub_1406c4510
// 地址: 0x1406c4510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x50) == 0)
    return 

int64_t var_58 = 0
int32_t var_50_1 = 0
sub_1405947f0(&var_58, 0xd)
int32_t rax_1 = var_50_1 + 0xd
var_50_1 = rax_1

if (rax_1 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"  Duration: ", 0x1a)
int64_t rdx_2 = *(*(arg1 + 0x50) + 0x448)
int32_t var_68
int32_t var_60
int64_t var_48
int32_t var_40

if (rdx_2 == -0x8000000000000000)
    sub_140a20ba0(&var_58, &data_142d8dcd8, 3)
else
    int64_t rcx_3 = 0
    
    if (rdx_2 s<= 0x7fffffffffffec77)
        rcx_3 = 0x1388
    
    int64_t rcx_4 = rcx_3 + rdx_2
    int32_t r10_3 = (rcx_4 s/ 0xf4240).d
    int32_t r9_3 = r10_3 s/ 0x3c
    var_60 = (rcx_4.d - r10_3 * 0xf4240) * 0x64 s/ 0xf4240
    var_68 = r10_3 + r9_3 * 0xffffffc4
    sub_140a2e390(&var_48, u"%02d:%02d:%02d.%02d", zx.q(r9_3 s/ 0x3c))
    int32_t r8_4
    
    if (var_40 == 0)
        r8_4 = 0
    else
        r8_4 = var_40 - 1
    
    sub_140a20ba0(&var_58, var_48, r8_4)
    int64_t rcx_9 = var_48
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

if (*(*(arg1 + 0x50) + 0x440) != -0x8000000000000000)
    sub_140a20b00(&var_58, ", start: ", 9)
    int32_t rax_20
    int32_t rdx_14
    rdx_14:rax_20 = sx.o(*(*(arg1 + 0x50) + 0x440) s% 0xf4240)
    int32_t rax_23 = av_rescale(sx.q((rax_20 ^ rdx_14) - rdx_14), 0xf4240, 0xf4240)
    int32_t* const r8_7 = &data_142d404b0
    
    if (*(*(arg1 + 0x50) + 0x440) s>= 0)
        r8_7 = &data_142d40450
    
    var_68 = rax_23
    sub_140a2e390(&var_48, u"%s%d.%06d", r8_7)
    int32_t r8_8
    
    if (var_40 == 0)
        r8_8 = 0
    else
        r8_8 = var_40 - 1
    
    sub_140a20ba0(&var_58, var_48, r8_8)
    int64_t rcx_21 = var_48
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)

sub_140a20ba0(&var_58, u", bitrate: ", 0xb)
int64_t rcx_23 = *(*(arg1 + 0x50) + 0x450)

if (rcx_23 == 0)
    sub_140a20ba0(&var_58, &data_142d8dcd8, 3)
else
    sub_140a2e390(&var_48, u"0x%08x%08x kb/s", (rcx_23 s/ 0x3e8) s>> 0x20)
    int32_t r8_11
    
    if (var_40 == 0)
        r8_11 = 0
    else
        r8_11 = var_40 - 1
    
    sub_140a20ba0(&var_58, var_48, r8_11)
    int64_t rcx_26 = var_48
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)

sub_140a20ba0(&var_58, &data_142d576a0, 1)
uint64_t rbx_4 = 0
void* rdx_20 = *(arg1 + 0x50)
int64_t var_38
int32_t var_30

if (*(rdx_20 + 0x4a4) u> 0)
    do
        void* rdi_1 = *(*(rdx_20 + 0x4a8) + (rbx_4 << 3))
        sub_140a2e390(&var_48, u"    Chapter %d: ", zx.q(rbx_4.d))
        int32_t r8_14
        
        if (var_40 == 0)
            r8_14 = 0
        else
            r8_14 = var_40 - 1
        
        sub_140a20ba0(&var_58, var_48, r8_14)
        int64_t rcx_31 = var_48
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        int64_t rax_31 = *(rdi_1 + 4)
        int64_t var_28
        sub_140a2e390(&var_28, start %f, ", _mm_cvtepi32_pd(zx.q(rax_31.d)).q
            f/ _mm_cvtepi32_pd(zx.q((rax_31 u>> 0x20).d)).q f* float.d(*(rdi_1 + 0x10)))
        int32_t var_20
        int32_t r8_17
        
        if (var_20 == 0)
            r8_17 = 0
        else
            r8_17 = var_20 - 1
        
        sub_140a20ba0(&var_58, var_28, r8_17)
        int64_t rcx_34 = var_28
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
        
        int64_t rax_33 = *(rdi_1 + 4)
        sub_140a2e390(&var_38, end %f\n", _mm_cvtepi32_pd(zx.q(rax_33.d)).q
            f/ _mm_cvtepi32_pd(zx.q((rax_33 u>> 0x20).d)).q f* float.d(*(rdi_1 + 0x18)))
        int32_t r8_20
        
        if (var_30 == 0)
            r8_20 = 0
        else
            r8_20 = var_30 - 1
        
        sub_140a20ba0(&var_58, var_38, r8_20)
        int64_t rcx_37 = var_38
        
        if (rcx_37 != 0)
            sub_140a74f90(rcx_37)
        
        rbx_4 = zx.q(rbx_4.d + 1)
        rdx_20 = *(arg1 + 0x50)
    while (rbx_4.d u< *(rdx_20 + 0x4a4))

uint64_t rax = zx.q(*(rdx_20 + 0x484))

if (rax.d != 0)
    int32_t r14_1 = 0
    uint64_t rbx_5 = 0
    
    if (rax.d != 0)
        do
            void* rax_36 = av_dict_get(*(*(*(rdx_20 + 0x488) + (rbx_5 << 3)) + 0x20), "name", 0, 0, 
                var_68, var_60)
            
            if (rax_36 != 0)
                *(rax_36 + 8)
            
            sub_140a2e390(&var_38,   Program %d %s\n", 
                zx.q(**(*(*(arg1 + 0x50) + 0x488) + (rbx_5 << 3))))
            int32_t r8_23
            
            if (var_30 == 0)
                r8_23 = 0
            else
                r8_23 = var_30 - 1
            
            sub_140a20ba0(&var_58, var_38, r8_23)
            int64_t rcx_43 = var_38
            
            if (rcx_43 != 0)
                sub_140a74f90(rcx_43)
            
            rdx_20 = *(arg1 + 0x50)
            r14_1 += *(*(*(rdx_20 + 0x488) + (rbx_5 << 3)) + 0x18)
            rbx_5 = zx.q(rbx_5.d + 1)
        while (rbx_5.d u< *(rdx_20 + 0x484))
    
    if (r14_1 u< *(rdx_20 + 0x2c))
        sub_140a20ba0(&var_58, u"  No Program\n", 0xd)

int64_t rcx_46 = var_58

if (rcx_46 != 0)
    sub_140a74f90(rcx_46)
