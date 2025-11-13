// 函数: sub_140e2ff20
// 地址: 0x140e2ff20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_150 = -2
void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
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
void var_168
sub_14297d4e0(&var_168, *(arg1 + 0x3c), *(arg1 + 0x40), 0x3f800000, &performanceCount, 0x3f800000, 
    0, rcx_3)
int32_t r14 = 0

if (r15_1 != 0)
    do
        wchar32 const (** rdi_1)[0x1] = &data_1439b3688
        int32_t rcx_5 = sx.d(*(arg1 + 0x38))
        
        if (rcx_5 == 0)
            rdi_1 = &data_1439b3668
        else if (rcx_5 != 1 && rcx_5 == 2)
            rdi_1 = &data_1439b36a8
        
        char* rdi_2 = rdi_1[sx.q(r14)]
        int64_t* var_1b8
        var_1b8.b = 0
        void var_148
        int32_t* rax_5 = sub_14297bae0(&var_148, 1, 1, 1, var_1b8.b)
        sub_14297bf70(sub_14297e970(&var_168), rdi_2, rax_5)
        r14 += 1
    while (r14 u< r15_1)

struct Imf_2_3::OStream::VTable* var_f8
sub_14297ab50(&var_f8, &data_1437020ab)
var_f8 = &data_142ed6400
int64_t var_d0
__builtin_memset(&var_d0, 0, 0x20)
int64_t* var_178 = nullptr
int64_t var_170 = 0
var_178 = sub_140e348a0()
void (* var_1b8_1)(int64_t* arg1) = sub_1405e8840
void var_a8
`eh vector constructor iterator'(&var_a8, 0x18, 4)
int32_t rdi_3 = 0

if (r15_1 != 0)
    void* rbx_2 = &var_a8
    
    do
        wchar32 const (** r8_2)[0x1] = &data_1439b3688
        int32_t rdx_2 = sx.d(*(arg1 + 0x38))
        
        if (rdx_2.b == 0)
            r8_2 = &data_1439b3668
        else if (rdx_2 == 1)
            r8_2 = &data_1439b3688
        else if (rdx_2 == 2)
            r8_2 = &data_1439b36a8
        
        char* r14_1 = r8_2[sx.q(rdi_3)]
        uint64_t r9_1 = sx.q(*(arg1 + 0x40))
        uint64_t r11_1 = sx.q(*(arg1 + 0x3c))
        int64_t rax_10 = r11_1 * r9_1 * 2 + *(rbx_2 + 8)
        *(rbx_2 + 8) = rax_10
        
        if (rax_10 s> *(rbx_2 + 0x10))
            sub_140a4f990(rbx_2)
            rdx_2 = zx.d(*(arg1 + 0x38))
            r9_1 = zx.q(*(arg1 + 0x40))
            r11_1 = zx.q(*(arg1 + 0x3c))
        
        int64_t r8_4
        
        if (rdx_2.b s>= 0)
            r8_4 = 8
        
        if (rdx_2.b s< 0 || rdx_2.b s> 1)
            r8_4 = 2
        
        int64_t r10_1 = *rbx_2
        int16_t* rdx_4 = arg2 + (zx.q(rdi_3) << 1)
        int64_t r9_3 = sx.q(r11_1.d) * sx.q(r9_1.d)
        int64_t rcx_18 = 0
        
        if (r9_3 != 0)
            do
                *(r10_1 + (rcx_18 << 1)) = *rdx_4
                rcx_18 += 1
                rdx_4 += r8_4
            while (rcx_18 u< r9_3)
            
            r10_1 = *rbx_2
            r11_1 = zx.q(*(arg1 + 0x3c))
        
        int32_t var_1a0
        var_1a0.q = (zx.o(0)).q
        void var_138
        sub_142984980(&var_138, 1, r10_1, 2, sx.q(r11_1.d) * 2, 1, 1, var_1a0, 0, 0)
        sub_142984e30(&var_178, r14_1, &var_138)
        rdi_3 += 1
        rbx_2 += 0x18
    while (rdi_3 u< r15_1)

sub_142985be0(&performanceCount, &var_f8, &var_168, sub_142977840())
sub_142986d60(&performanceCount, &var_178)
uint64_t rdx_8 = sx.q(*(arg1 + 0x40))
int128_t var_c8
int64_t rax_17 = var_c8:8.q + ((sx.q(*(arg1 + 0x3c)) * rdx_8 * zx.q(r15_1)) << 1)
var_c8:8.q = rax_17
int64_t var_b8

if (rax_17 s> var_b8)
    sub_140a4f990(&var_c8)
    rdx_8 = zx.q(*(arg1 + 0x40))

sub_142987530(&performanceCount, rdx_8.d)
int64_t rbx_3 = var_d0
sub_1429860e0(&performanceCount)
int64_t rax_18 = *(arg1 + 0x28) + rbx_3
*(arg1 + 0x28) = rax_18

if (rax_18 s> *(arg1 + 0x30))
    sub_140a4f990(arg1 + 0x20)

memcpy(*(arg1 + 0x20), var_c8.q, rbx_3.d)
QueryPerformanceCounter(&performanceCount)
`eh vector vbase constructor iterator'(&var_a8, 0x18, 4)
sub_140e309f0(&var_178)
int64_t rcx_34 = var_c8.q

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

sub_14297ac20(&var_f8)
int64_t result = sub_14297d7d0(&var_168)
__security_check_cookie(rax_1 ^ &var_1d8)
return result
