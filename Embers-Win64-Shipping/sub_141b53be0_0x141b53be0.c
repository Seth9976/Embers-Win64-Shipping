// 函数: sub_141b53be0
// 地址: 0x141b53be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t (* var_118)(int64_t* arg1, int32_t* arg2)
int64_t rbx = *sub_140b58170(&var_118, "ImageWrapper", 1)
j_sub_140b3db50()
j_sub_140b407e0(&data_143de7d78, rbx)
int32_t var_7c = 0x80
int64_t var_a8 = 0
int32_t var_a0 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x1c)
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int32_t var_78 = 0xffffffff
CRITICAL_SECTION criticalSection
InitializeCriticalSection(&criticalSection)
SetCriticalSectionSpinCount(&criticalSection, 0xfa0)
int32_t rbx_1 = *(arg2 + 8)

if (rbx_1 s> var_a0 - var_74)
    sub_141b64e10(&var_a8, rbx_1)
    int32_t rdx_3
    
    if (rbx_1 u< 4)
        rdx_3 = 1
    else
        uint32_t rbx_2 = rbx_1 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_2 + 8)
        int32_t rcx_4
        
        if (rbx_2 == 0xfffffff8)
            rcx_4 = 0x20
        else
            rcx_4 = 0x1f - temp0_2
        
        int32_t rcx_6 = rcx_4 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_2 + 7)
        char rdx_2
        
        if (rcx_6 == 0)
            rdx_2 = 0x20
        else
            rdx_2 = 0x1f - temp0_3
        
        rdx_3 = 1 << ((not.d(rcx_6)).b & (0x20 - rdx_2))
    
    if (var_60 == 0 || var_60 s< rdx_3)
        int32_t var_60_1 = rdx_3
        sub_14092ed80(&var_a8)

int32_t rcx_10 = *(arg2 + 8)
CRITICAL_SECTION* var_130 = &criticalSection
int64_t (** var_140)(int64_t* arg1, int32_t* arg2) = arg1
int64_t* var_128 = &var_a8
void* var_138 = arg2
var_118 = sub_141b4f780
int64_t (*** var_110)(int64_t* arg1, int32_t* arg2) = &var_140
sub_14077b750(rcx_10, &var_118, 0)
char var_148
char* var_108 = &var_148
char** var_120 = &var_108

if (var_a0 - var_74 s> 0)
    sub_1417c7e40(&var_a8)
    char r8_2 = var_148
    int64_t rcx_12 = var_a8
    var_118 = &var_120
    sub_141b48d30(rcx_12, var_a0 - var_74, r8_2)

sub_14092ed80(&var_a8)
int64_t* var_138_1 = &var_98
int32_t rcx_14 = 0
var_140.d = 0
int32_t r8_3 = 0
var_140:4.d = 1
var_130.d = 0xffffffff
var_130 = 0
int64_t* var_88
int32_t var_80

if (var_80 != 0)
    int64_t* r10_1 = &var_98
    
    if (var_88 != 0)
        r10_1 = var_88
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(var_80 - 1)
    int32_t rdx_9 = *r10_1
    
    if (rdx_9 != 0)
    label_141b53e1b:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_3
        int32_t temp0_4
        temp0_4, rflags_3 = _bit_scan_reverse(rax_18)
        var_140:4.d = rax_18
        int32_t rdi_1
        
        if (rax_18 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        int32_t rax_19 = r8_3 - rdi_1 + 0x1f
        
        if (rax_19 s> var_80)
            rax_19 = var_80
        
        var_130:4.d = rax_19
    else
        while (true)
            int64_t rdx_10 = sx.q(rcx_14)
            r8_3 += 0x20
            rcx_14 += 1
            var_128.d = r8_3
            var_140.d = rcx_14
            
            if (rdx_10.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                var_130:4.d = var_80
                break
            
            rdx_9 = *(r10_1 + (rdx_10 << 2) + 4)
            var_130.d = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141b53e1b

double zmm2[0x2] = var_130.o
double var_d0[0x2] = var_140.o
uint32_t rax_21 = (zmm2[0] u>> 0x20).d
double var_c0[0x2] = zmm2
double var_100[0x2] = (&var_a8).o
int64_t var_e0 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q

if (rax_21 s< var_80)
    int32_t i = var_d0[1]:4.d
    var_140 = &var_118
    char*** var_138_2 = &var_120
    
    do
        int64_t i_1 = sx.q(i)
        int64_t rcx_16 = *var_100[0]
        var_118 = *(rcx_16 + ((i_1 * 5 + 1) << 3) - 8)
        var_120 = sub_141b5f090(arg1, rcx_16 + ((i_1 * 5 + 1) << 3))
        sub_140bbe950(&arg1[2], &var_108, &var_140, nullptr)
        var_d0[1].d &= not.d(var_100[1]:4.d)
        sub_14059bdd0(&var_100[1])
        i = var_d0[1]:4.d
    while (i s< *(var_d0[0] i+ 0x18))

DeleteCriticalSection(&criticalSection)
int32_t var_60_2 = 0

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t result = sub_140d79fe0(&var_a8, 0)

if (var_88 != 0)
    result = sub_140a74f90(var_88)

int64_t rcx_24 = var_a8

if (rcx_24 != 0)
    result = sub_140a74f90(rcx_24)

__security_check_cookie(rax_1 ^ &var_168)
return result
