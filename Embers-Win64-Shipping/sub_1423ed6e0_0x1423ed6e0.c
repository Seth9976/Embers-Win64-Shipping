// 函数: sub_1423ed6e0
// 地址: 0x1423ed6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(data_143f5b298 + 0x50)
float zmm0 = sub_142005cc0(r14) * 1.10000002f
int16_t* const rdi = &data_142d40450
int64_t* r15 = *(arg1 + 0x810)
float arg_30
float rsi = arg_30
int32_t r12 = int.d(zmm0)
int16_t* var_78
int32_t var_70
int16_t* var_68
int32_t var_60
void var_58

if (r15 != 0)
    int32_t rax_2 = (*(*r15 + 0x268))(r15)
    var_78 = r15[3]
    sub_140b63b70(&var_78, &var_68)
    void arg_8
    sub_142003d30(r14, 0x20, &arg_30, &arg_8)
    int16_t* const rdx_1 = &data_142d40450
    
    if (var_60 != 0)
        rdx_1 = var_68
    
    int32_t rax_3 = sub_142006f60(r14, rdx_1)
    int32_t r15_3 = arg5 - int.d(fconvert.t(arg_30)) - rax_3
    wchar16 const* const rdx_2
    
    if (rax_2 == 0)
        sub_140acc920(&var_58, &data_14399f638)
        rdx_2 = u"%s TC: Closed"
    label_1423ed820:
        int16_t* const r8_1 = &data_142d40450
        
        if (var_60 != 0)
            r8_1 = var_68
        
        sub_140a2e390(&var_78, rdx_2, r8_1)
        int16_t* r9_1 = &data_142d40450
        
        if (var_70 != 0)
            r9_1 = var_78
        
        int32_t var_90
        var_90.q = &var_58
        uint128_t zmm2_1 = _mm_cvtepi32_ps(zx.o(rsi))
        int32_t var_98
        var_98.q = r14
        sub_142409910(arg4, _mm_cvtepi32_ps(zx.o(r15_3)), zmm2_1, r9_1, var_98, var_90, 
            &data_14399f5e0)
        int16_t* rcx_13 = var_78
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
    else
        if (rax_2 == 1)
            sub_140acc920(&var_58, &data_14399f638)
            rdx_2 = u"%s TC: Error"
            goto label_1423ed820
        
        if (rax_2 == 2)
            sub_140acc920(&var_58, &data_14399f63c)
            rdx_2 = u"%s TC: Synchronized"
            goto label_1423ed820
        
        if (rax_2 == 3)
            sub_140acc920(&var_58, &data_14399f644)
            rdx_2 = u"%s TC: Synchronizing"
            goto label_1423ed820
    int16_t* rcx_14 = var_68
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)

int32_t rsi_1 = rsi i+ r12
sub_140acc920(&var_58, &data_14399f63c)
void var_48
int32_t* rax_4 = sub_140af61f0(&var_48)
int16_t* const r8_2
int32_t r9_2
int32_t r10_1

if (*rax_4 s< 0)
label_1423ed8cb:
    rax_4[3]
    r8_2 = &data_142e74850
    r10_1 = rax_4[2]
    r9_2 = rax_4[1]
else
    r9_2 = rax_4[1]
    
    if (r9_2 s< 0)
        goto label_1423ed8cb
    
    r10_1 = rax_4[2]
    
    if (r10_1 s< 0)
        goto label_1423ed8cb
    
    if (rax_4[3] s< 0)
        goto label_1423ed8cb
    
    r8_2 = &data_142d40450

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r10_1)
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(r9_2)
int32_t var_90_1 = (temp3 ^ temp2) - temp2
int32_t var_98_1 = (temp5 ^ temp4) - temp4
wchar16* rdx_6 = u"%s%02d;%02d;%02d;%02d"

if (rax_4[4].b == 0)
    rdx_6 = u"%s%02d:%02d:%02d:%02d"

sub_140a2e390(&var_68, rdx_6, r8_2)
int16_t* r8_3 = &data_142d40450

if (var_60 != 0)
    r8_3 = var_68

sub_140a2e390(&var_78, u"TC: %s", r8_3)

if (var_70 != 0)
    rdi = var_78

var_90_1.q = &var_58
uint128_t zmm2_2 = _mm_cvtepi32_ps(zx.o(rsi_1))
var_98_1.q = r14
sub_142409910(arg4, _mm_cvtepi32_ps(zx.o(arg5)), zmm2_2, rdi, var_98_1, var_90_1, &data_14399f5e0)
int16_t* rcx_21 = var_78

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int16_t* rcx_22 = var_68

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

return zx.q(r12 + rsi_1)
