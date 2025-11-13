// 函数: sub_141829490
// 地址: 0x141829490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0xa8)
int32_t r12 = 0
int32_t i_3 = *(arg1 + 0xb0)
int32_t* var_68 = nullptr
int32_t i_5 = i_3

if (i_3 != 0)
    sub_1405a4be0(&var_68, i_3, 0)
    void* rsi_2 = var_68 - rbx
    int32_t i
    
    do
        *(rsi_2 + rbx) = 0
        void* r15_1 = rsi_2 + rbx
        int32_t rdi_1 = *(rbx + 8)
        int64_t r12_1 = *rbx
        *(rsi_2 + rbx + 8) = rdi_1
        
        if (rdi_1 != 0)
            sub_1405a4c70(r15_1, rdi_1, 0)
            memcpy(*r15_1, r12_1, rdi_1 * 2)
            r12 = 0
        else
            r12 = 0
            *(rsi_2 + rbx + 0xc) = 0
        
        rbx += 0x10
        i = i_3
        i_3 -= 1
    while (i != 1)
else
    int32_t var_5c_1 = 0

sub_1418205a0(arg2, &var_68)
sub_140af3c10(data_143ddb400, u"Portal.BuildPatch", u"ChunkRetries", &arg2[2], &data_143de5780)
int32_t rcx_5 = arg2[2].d
int32_t rbx_1 = 0x3e8
int32_t rax

if (rcx_5 s>= 0xffffffff)
    rax = 0x3e8
    
    if (rcx_5 s< 0x3e8)
        rax = rcx_5
else
    rax = -1

arg2[2].d = rax
sub_140af3c10(data_143ddb400, Portal.BuildPatch", CloudSourcePreFetchMinimum", arg2 + 0x14, 
    &data_143de5780)
sub_140af3c10(data_143ddb400, Portal.BuildPatch", CloudSourcePreFetchMaximum", &arg2[3], 
    &data_143de5780)
int32_t rcx_8 = *(arg2 + 0x14)
int32_t rax_1

if (rcx_8 s>= 1)
    rax_1 = 0x3e8
    
    if (rcx_8 s< 0x3e8)
        rax_1 = rcx_8
else
    rax_1 = 1

int32_t rcx_9 = arg2[3].d
*(arg2 + 0x14) = rax_1

if (rcx_9 s>= rax_1)
    if (rcx_9 s< 0x3e8)
        rbx_1 = rcx_9
    
    rax_1 = rbx_1

arg2[3].d = rax_1
void* rcx_10 = data_143ddb400
int64_t* var_78 = nullptr
int32_t i_4 = 0
int128_t zmm6
int128_t zmm7
int128_t zmm8
zmm6, zmm7, zmm8 = sub_140af2c50(rcx_10, Portal.BuildPatch", RetryTimes", &var_78, &data_143de5780)
int64_t i_6 = sx.q(i_4)
int32_t* r15_2 = nullptr
var_68 = nullptr
int32_t var_5c_2 = 0
bool r14 = i_6.d s> 0
int32_t var_60 = i_6.d

if (i_6.d s> 0)
    sub_1406105e0(&var_68)
    r12 = var_5c_2
    r15_2 = var_68

double zmm0 = memset(r15_2, 0, i_6 << 2)
int32_t rsi_3 = 0

if (i_4 s> 0)
    int64_t rbx_2 = 0
    int32_t* rdi_2 = r15_2
    
    do
        if (r14 == 0)
            goto label_141829744
        
        int64_t* rax_2 = var_78
        wchar16* _String
        
        if (*(rax_2 + rbx_2 + 8) == 0)
            _String = &data_142d40450
        else
            _String = *(rax_2 + rbx_2)
        
        _wtof(_String)
        int32_t zmm1_1 = fconvert.s(zmm0)
        
        if (zmm1_1 f<= 0f)
            r14 = false
        else if (zmm1_1 f>= 0.5f)
            *rdi_2 = _mm_min_ss(zmm1_1, 0x43960000)
        else
            *rdi_2 = 0x3f000000
        
        rsi_3 += 1
        rbx_2 += 0x10
        rdi_2 = &rdi_2[1]
    while (rsi_3 s< i_4)

if (r14 != 0 && &arg2[4] != &var_68)
    int64_t rcx_13 = arg2[4]
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    arg2[4] = r15_2
    r15_2 = nullptr
    arg2[5].d = var_60
    *(arg2 + 0x2c) = r12

label_141829744:
var_68 = nullptr
var_60.q = 5
sub_1406105e0(&var_68)
int32_t* rbx_4 = var_68
__builtin_memset(rbx_4, 0, 0x14)
char rax_4
int512_t zmm6_1
int512_t zmm7_1
int512_t zmm8_1
rax_4, zmm6_1, zmm7_1, zmm8_1 = sub_140af3b00(data_143ddb400, Portal.BuildPatch", OKHealth"
    , &rbx_4[2], &data_143de5780)
zmm8_1.o = zmm8
zmm7_1.o = zmm7
zmm6_1.o = zmm6

if (rax_4 != 0 && sub_140af3b00(data_143ddb400, Portal.BuildPatch", GoodHealth", &rbx_4[3], 
        &data_143de5780) != 0 && sub_140af3b00(data_143ddb400, Portal.BuildPatch", ExcellentHealth"
        , &rbx_4[4], &data_143de5780) != 0 && &arg2[6] != &var_68)
    int64_t rcx_18 = arg2[6]
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    arg2[6] = rbx_4
    rbx_4 = nullptr
    arg2[7].d = var_60
    *(arg2 + 0x3c) = var_5c_2

sub_140af3b00(data_143ddb400, u"Portal.BuildPatch", u"DisconnectedDelay", &arg2[8], &data_143de5780)
float zmm0_1 = arg2[8].d
float zmm1_2 = 1f

if (not(zmm0_1 < 1f))
    zmm1_2 = __minss_xmmss_memss(zmm0_1, 0x41f00000)

arg2[8].d = zmm1_2
*(arg2 + 0x44) = 1

if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

if (r15_2 != 0)
    sub_140a74f90(r15_2)

int32_t i_2 = i_4
int64_t* rbx_5 = var_78

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_22 = *rbx_5
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        rbx_5 = &rbx_5[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rbx_5 = var_78

if (rbx_5 != 0)
    sub_140a74f90(rbx_5)

return arg2
