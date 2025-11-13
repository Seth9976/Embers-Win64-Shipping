// 函数: sub_141ec4d00
// 地址: 0x141ec4d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const r14 = &data_142d40450
int16_t* const r8

if (arg1[4].d == 0)
    r8 = &data_142d40450
else
    r8 = arg1[3]

int64_t var_48
sub_140a2e390(&var_48, u"--- Begin : FPS chart dump for level '%s'", r8)
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_2 = var_48

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t var_28
void arg_8
int64_t* rax_2 = sub_140b29020(sub_140b21590(&arg_8), &var_28)
int16_t* const r15

if (rax_2[1].d == 0)
    r15 = &data_142d40450
else
    r15 = *rax_2

int32_t rax_3 = sub_140b50b30()
int64_t rax_5 = sub_140a4af10(sub_140ab2200())
j_sub_140a1b080()
int32_t var_60 = rax_3
int64_t var_68 = rax_5
sub_140a2e390(&var_48, 
    Dumping FPS chart at %s using build %s in config %s built from changelist %i", r15)
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_8 = var_48

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = var_28

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int32_t rbx_1 = 0
var_48 = 0
int32_t var_40 = 0
sub_1405947f0(&var_48, 0xe)
int32_t rax_7 = var_40 + 0xe

if (rax_7 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"Machine info:", 0x1c)
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_14 = var_48

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

if (arg1[0x1f].d != 0)
    arg1[0x1e]

int16_t* const r8_2

if (arg1[0x1d].d == 0)
    r8_2 = &data_142d40450
else
    r8_2 = arg1[0x1c]

sub_140a2e390(&var_48, u"\tOS: %s %s", r8_2)
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_17 = var_48

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

if (arg1[0x23].d != 0)
    arg1[0x22]

int16_t* const r8_3

if (arg1[0x21].d == 0)
    r8_3 = &data_142d40450
else
    r8_3 = arg1[0x20]

sub_140a2e390(&var_48, u"\tCPU: %s %s", r8_3)
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_20 = var_48

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int16_t* const r8_4

if (arg1[6].d == 0)
    r8_4 = &data_142d40450
else
    r8_4 = arg1[5]

sub_140a2e390(&var_48, u"\tDeviceProfile: %s", r8_4)
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_23 = var_48

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int16_t* const r8_5

if (arg1[0x27].d == 0)
    r8_5 = &data_142d40450
else
    r8_5 = arg1[0x26]

int64_t var_38
sub_140a2e390(&var_38, u"\tGPU: %s", r8_5)
int16_t* rdx_8

if (arg1[0x25].d == 0)
    rdx_8 = &data_142d40450
else
    rdx_8 = arg1[0x24]

int16_t* const rcx_25

if (arg1[0x27].d == 0)
    rcx_25 = &data_142d40450
else
    rcx_25 = arg1[0x26]

if (sub_140a54510(rcx_25, rdx_8) != 0)
    int16_t* const r8_6
    
    if (arg1[0x25].d == 0)
        r8_6 = &data_142d40450
    else
        r8_6 = arg1[0x24]
    
    sub_140a2e390(&var_48, u" (desktop adapter %s)", r8_6)
    
    if (rax_7 != 0)
        rbx_1 = rax_7 - 1
    
    sub_140a20ba0(&var_38, var_48, rbx_1)
    int64_t rcx_28 = var_48
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)

(*(*arg1 + 8))(arg1, &var_38)
sub_140a2e390(&var_48, u"\tResolution Quality: %.2f", _mm_cvtps_pd(arg1[0xf].d))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_32 = var_48

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

sub_140a2e390(&var_48, u"\tView Distance Quality: %d", zx.q(*(arg1 + 0x7c)))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_35 = var_48

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

sub_140a2e390(&var_48, u"\tAnti-Aliasing Quality: %d", zx.q(arg1[0x10].d))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_38 = var_48

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

sub_140a2e390(&var_48, u"\tShadow Quality: %d", zx.q(*(arg1 + 0x84)))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_41 = var_48

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

sub_140a2e390(&var_48, u"\tPost-Process Quality: %d", zx.q(arg1[0x11].d))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_44 = var_48

if (rcx_44 != 0)
    sub_140a74f90(rcx_44)

sub_140a2e390(&var_48, u"\tTexture Quality: %d", zx.q(*(arg1 + 0x8c)))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_47 = var_48

if (rcx_47 != 0)
    sub_140a74f90(rcx_47)

sub_140a2e390(&var_48, u"\tEffects Quality: %d", zx.q(arg1[0x12].d))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_50 = var_48

if (rcx_50 != 0)
    sub_140a74f90(rcx_50)

sub_140a2e390(&var_48, u"\tFoliage Quality: %d", zx.q(*(arg1 + 0x94)))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_53 = var_48

if (rcx_53 != 0)
    sub_140a74f90(rcx_53)

sub_140a2e390(&var_48, u"\tHair Quality: %d", zx.q(arg1[0x13].d))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_56 = var_48

if (rcx_56 != 0)
    sub_140a74f90(rcx_56)

if (arg1[0x1b].d != 0)
    r14 = arg1[0x1a]

sub_140a2e390(&var_48, u"\tWindow Mode: %s", r14)
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_59 = var_48

if (rcx_59 != 0)
    sub_140a74f90(rcx_59)

*(arg1 + 0xcc)
sub_140a2e390(&var_48, u"\tResolution: %dx%d", zx.q(arg1[0x19].d))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_62 = var_48

if (rcx_62 != 0)
    sub_140a74f90(rcx_62)

void* rcx_63 = arg1[1]
arg1[2]
int64_t r8_19 = *(rcx_63 + 0x30)
int64_t var_58 = float.d(r8_19) f/ *(rcx_63 + 0x28)
int32_t var_60_1 = *(rcx_63 + 0x168)
int64_t var_68_1 = *(rcx_63 + 0x160)
sub_140a2e390(&var_48, 
    %i frames collected over %4.2f seconds, disregarding %4.2f seconds (%d frames) for a %4.2f FPS "
"average", r8_19)
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_66 = var_48

if (rcx_66 != 0)
    sub_140a74f90(rcx_66)

sub_140a2e390(&var_48, u"Average GPU frametime: %4.2f ms", _mm_cvtps_pd(arg1[7].d))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_69 = var_48

if (rcx_69 != 0)
    sub_140a74f90(rcx_69)

sub_140a2e390(&var_48, u"Average RenderThread frametime: %4.2f ms", _mm_cvtps_pd(*(arg1 + 0x3c)))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_72 = var_48

if (rcx_72 != 0)
    sub_140a74f90(rcx_72)

sub_140a2e390(&var_48, u"Average GameThread frametime: %4.2f ms", _mm_cvtps_pd(arg1[8].d))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_75 = var_48

if (rcx_75 != 0)
    sub_140a74f90(rcx_75)

sub_140a2e390(&var_48, u"Total time spent flushing async loading: %4.2f ms", arg1[9])
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_78 = var_48

if (rcx_78 != 0)
    sub_140a74f90(rcx_78)

sub_140a2e390(&var_48, u"Total flushing async loading calls: %d", zx.q(arg1[0xa].d))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_81 = var_48

if (rcx_81 != 0)
    sub_140a74f90(rcx_81)

sub_140a2e390(&var_48, u"Max flush async loading time: %4.2f ms", arg1[0xb])
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_84 = var_48

if (rcx_84 != 0)
    sub_140a74f90(rcx_84)

sub_140a2e390(&var_48, u"Average flush async loading time: %4.2f ms", arg1[0xc])
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_87 = var_48

if (rcx_87 != 0)
    sub_140a74f90(rcx_87)

sub_140a2e390(&var_48, u"Total sync loads: %d", zx.q(arg1[0xd].d))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_90 = var_48

if (rcx_90 != 0)
    sub_140a74f90(rcx_90)

sub_140a2e390(&var_48, u"BoundGameThreadPct: %4.2f", _mm_cvtps_pd(*(arg1 + 0x6c)))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_93 = var_48

if (rcx_93 != 0)
    sub_140a74f90(rcx_93)

sub_140a2e390(&var_48, u"BoundRenderThreadPct: %4.2f", _mm_cvtps_pd(arg1[0xe].d))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_96 = var_48

if (rcx_96 != 0)
    sub_140a74f90(rcx_96)

sub_140a2e390(&var_48, u"BoundGPUPct: %4.2f", _mm_cvtps_pd(*(arg1 + 0x74)))
(*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_99 = var_48

if (rcx_99 != 0)
    sub_140a74f90(rcx_99)

sub_140a2e390(&var_48, u"ExcludeIdleTime: %d", zx.q(*data_143f3a4a8))
int64_t result = (*(*arg1 + 8))(arg1, &var_48)
int64_t rcx_102 = var_48

if (rcx_102 != 0)
    result = sub_140a74f90(rcx_102)

int64_t rcx_103 = var_38

if (rcx_103 == 0)
    return result

return sub_140a74f90(rcx_103)
