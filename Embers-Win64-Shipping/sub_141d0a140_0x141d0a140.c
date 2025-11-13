// 函数: sub_141d0a140
// 地址: 0x141d0a140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t r14 = 0
int32_t var_d0 = 0
void* var_e0 = nullptr
int32_t i_2 = 0
int32_t r13 = 0
sub_141d01db0(*(arg1 + 8), arg2, arg3, &var_e0)
int128_t* var_f0

if (i_2 == 0)
    var_f0 = nullptr
    int32_t var_e8_1 = 0
    sub_1405947f0(&var_f0, 6)
    int32_t rax_2 = var_e8_1 + 6
    var_e8_1 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_f0)
    
    sub_1405a7220(var_f0, 6, "*.pak", 6, 0x3f)
    sub_141d01db0(*(arg1 + 8), arg2, &var_f0, &var_e0)
    int128_t* rcx_5 = var_f0
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

char var_f8
sub_141cf4640(var_e0, i_2, var_f8)
var_f0 = nullptr
int32_t var_e8_2 = 0
int128_t* r12 = nullptr
int32_t rsi = 0
EnterCriticalSection(arg1 + 0x38)
int64_t rdi_1 = sx.q(*(arg1 + 0x18))
int32_t rax_3 = 0
int32_t temp0 = rdi_1.d

if (temp0 != 0)
    if (temp0 s> 0)
        sub_1405a5410(&var_f0, rdi_1.d)
        rsi = var_e8_2
        r12 = var_f0
    
    memcpy(&r12[sx.q(rsi)], *(arg1 + 0x10), (rdi_1 << 4).d)
    rax_3 = rsi + rdi_1.d
    r14 = rax_3

if (arg1 != -0x38)
    LeaveCriticalSection(arg1 + 0x38)
    rax_3 = r14

int64_t rcx_13 = 0
void* rsi_3 = &r12[sx.q(rax_3)]
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int128_t* rdi_2 = r12
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int16_t var_108
int32_t var_b0

if (r12 != rsi_3)
    do
        int64_t var_c0
        var_c0.o = *rdi_2
        sub_140598750(&var_98, &var_b0)
        int64_t* var_a8
        sub_140596d10(var_a8, _mm_bsrli_si128(var_c0.o, 8).q + 8)
        var_a8[2].d = 0xffffffff
        int32_t rax_4 = var_a8[1].d
        int16_t* rdx_9
        
        if (rax_4 == 0)
            rdx_9 = &data_142d40450
        else
            rdx_9 = *var_a8
        
        int32_t rcx_16 = rax_4 - 1
        
        if (rax_4 == 0)
            rcx_16 = 0
        
        int32_t rax_5 = sub_1405969c0(rcx_16, rdx_9)
        var_108.d = var_b0
        sub_14059a6d0(&var_98, &var_d0, rax_5, var_a8, var_108, nullptr)
        rdi_2 = &rdi_2[1]
    while (rdi_2 != rsi_3)
    
    rcx_13 = var_58

int32_t rdi_3 = 0

if (i_2 s> 0)
    int64_t rsi_4 = 0
    
    do
        int16_t** rbx_4 = var_e0 + rsi_4
        
        if (*sub_140960120(&var_98, &var_d0, rbx_4) == 0xffffffff)
            int32_t rax_8
            int512_t zmm1_1
            rax_8, zmm1_1 = sub_141d04460(rbx_4)
            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_b0)
            int16_t* rdx_13
            
            if (rbx_4[1].d == 0)
                rdx_13 = &data_142d40450
            else
                rdx_13 = *rbx_4
            
            var_108.b = 1
            
            if (sub_141d093d0(arg1, rdx_13, rax_8, nullptr, zmm1_1, var_108.b) != 0)
                r13 += 1
            
            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                &var_b0)
        
        rdi_3 += 1
        rsi_4 += 0x10
    while (rdi_3 s< i_2)
    
    rcx_13 = var_58
    r12 = var_f0

int32_t var_50_1 = 0

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

sub_140669e00(&var_98)

if (r12 != 0)
    sub_140a74f90(r12)

int32_t i_1 = i_2
void* rbx_5 = var_e0

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_26 = *rbx_5
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        rbx_5 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_5 = var_e0

if (rbx_5 != 0)
    sub_140a74f90(rbx_5)

__security_check_cookie(rax_1 ^ &var_128)
return zx.q(r13)
