// 函数: sub_140e2fb20
// 地址: 0x140e2fb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_160 = -2
void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
struct Imf_2_3::GenericOutputFile::Imf_2_3::OutputFile::VTable* performanceCount
int32_t rcx_1 = QueryPerformanceCounter(&performanceCount)
char rax_2 = *(arg1 + 0x38)
int32_t r15_1

if (rax_2 s>= 0)
    r15_1 = 4

if (rax_2 s< 0 || rax_2 s> 1)
    r15_1 = 1

if (arg3 != 0 && r15_1 == 4)
    r15_1 = 3

int32_t rcx_3 = sbb.d(rcx_1, rcx_1, *(arg1 + 0x60) != 0) & 3
performanceCount = nullptr
int32_t r12 = 0
void var_178
sub_14297d4e0(&var_178, *(arg1 + 0x3c), *(arg1 + 0x40), 0x3f800000, &performanceCount, 0x3f800000, 
    0, rcx_3)
int32_t r14 = 0
wchar32 const (** rdi)[0x1] = &data_1439b3688

if (r15_1 != 0)
    do
        int32_t rcx_5 = sx.d(*(arg1 + 0x38))
        
        if (rcx_5 == 0)
            rdi = &data_1439b3668
        else if (rcx_5 == 1)
            rdi = &data_1439b3688
        else if (rcx_5 == 2)
            rdi = &data_1439b36a8
        
        char* rdi_1 = rdi[sx.q(r14)]
        int64_t* var_1c8
        var_1c8.b = 0
        void var_158
        int32_t* rax_5 = sub_14297bae0(&var_158, 1, 1, 1, var_1c8.b)
        sub_14297bf70(sub_14297e970(&var_178), rdi_1, rax_5)
        r14 += 1
        rdi = &data_1439b3688
    while (r14 u< r15_1)

struct Imf_2_3::OStream::VTable* var_108
sub_14297ab50(&var_108, &data_1437020ab)
var_108 = &data_142ed6400
int64_t var_e0
__builtin_memset(&var_e0, 0, 0x20)
int64_t* var_188 = nullptr
int64_t var_180 = 0
var_188 = sub_140e348a0()
void (* var_1c8_1)(int64_t* arg1) = sub_1405e8840
void var_b8
`eh vector constructor iterator'(&var_b8, 0x18, 4)

if (r15_1 != 0)
    void** rbx_2 = &var_b8
    
    do
        wchar32 const (** r8_2)[0x1] = &data_1439b3688
        int32_t rdx_2 = sx.d(*(arg1 + 0x38))
        
        if (rdx_2.b == 0)
            r8_2 = &data_1439b3668
        else if (rdx_2 != 1 && rdx_2 == 2)
            r8_2 = &data_1439b36a8
        
        char* rdi_2 = r8_2[sx.q(r12)]
        int64_t r9_1 = sx.q(*(arg1 + 0x40))
        uint64_t r10_1 = sx.q(*(arg1 + 0x3c))
        int64_t rax_10 = r10_1 * r9_1 * 2 + rbx_2[1]
        rbx_2[1] = rax_10
        
        if (rax_10 s> rbx_2[2])
            sub_140a4f990(rbx_2)
            rdx_2 = zx.d(*(arg1 + 0x38))
            r9_1 = zx.q(*(arg1 + 0x40))
            r10_1 = zx.q(*(arg1 + 0x3c))
        
        int64_t rdx_4
        
        if (rdx_2.b s>= 0)
            rdx_4 = 4
        
        if (rdx_2.b s< 0 || rdx_2.b s> 1)
            rdx_4 = 1
        
        sub_140e31840(zx.q(r12) + arg2, rdx_4, sx.q(r10_1.d), sx.q(r9_1.d), *rbx_2)
        int32_t var_1b0
        var_1b0.q = (zx.o(0)).q
        void var_148
        sub_142984980(&var_148, 1, *rbx_2, 2, sx.q(*(arg1 + 0x3c)) * 2, 1, 1, var_1b0, 0, 0)
        sub_142984e30(&var_188, rdi_2, &var_148)
        r12 += 1
        rbx_2 = &rbx_2[3]
    while (r12 u< r15_1)

sub_142985be0(&performanceCount, &var_108, &var_178, sub_142977840())
sub_142986d60(&performanceCount, &var_188)
uint64_t rdx_8 = sx.q(*(arg1 + 0x40))
int128_t var_d8
int64_t rax_16 = var_d8:8.q + ((sx.q(*(arg1 + 0x3c)) * rdx_8 * zx.q(r15_1)) << 1)
var_d8:8.q = rax_16
int64_t var_c8

if (rax_16 s> var_c8)
    sub_140a4f990(&var_d8)
    rdx_8 = zx.q(*(arg1 + 0x40))

sub_142987530(&performanceCount, rdx_8.d)
int64_t rbx_3 = var_e0
sub_1429860e0(&performanceCount)
int64_t rax_17 = *(arg1 + 0x28) + rbx_3
*(arg1 + 0x28) = rax_17

if (rax_17 s> *(arg1 + 0x30))
    sub_140a4f990(arg1 + 0x20)

memcpy(*(arg1 + 0x20), var_d8.q, rbx_3.d)
QueryPerformanceCounter(&performanceCount)
`eh vector vbase constructor iterator'(&var_b8, 0x18, 4)
sub_140e309f0(&var_188)
int64_t rcx_34 = var_d8.q

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

sub_14297ac20(&var_108)
int64_t result = sub_14297d7d0(&var_178)
__security_check_cookie(rax_1 ^ &var_1e8)
return result
