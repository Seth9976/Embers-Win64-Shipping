// 函数: sub_141fc7370
// 地址: 0x141fc7370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x18)
void* r14 = *(*(arg1 + 0x50) + 0x58)
void** const var_98 = &data_14328ac98
int64_t var_60 = 0
int64_t* var_58 = nullptr
int64_t rax_3 = *(arg1 + 0x10)
void* var_90 = r14
int128_t var_88
__builtin_memset(&var_88, 0, 0x21)

if (rbx != 0)
    rbx[1].d += 1

int64_t* var_a0 = rbx

if (rbx != 0)
    rbx[1].d += 1

int64_t* rdi = _mm_bsrli_si128(var_60.o, 8).q
var_60.o = rax_3.o

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t var_e8 = arg2
int64_t var_130 = 0
int32_t var_f0 = 0
char var_ec = 0
char var_e9 = 0
int64_t var_e0
__builtin_memset(&var_e0, 0, 0x18)
int64_t var_c0 = 0
int64_t var_b8 = 0
void* rax_8 = *(arg1 + 0x50)
int128_t var_108 = zx.o(0)
int64_t var_138 = arg4
int64_t var_118 = *(rax_8 + 0x68)
int64_t var_120 = *arg6
int64_t var_128 = arg5
void** const* var_f8 = &var_98

if (r14 == 0)
    char var_eb_2 = 0
else
    void* rcx_5 = *(r14 + 0x140)
    
    if (rcx_5 == 0)
        var_eb_2 = 0
    else
        char var_eb_1 = 1
        
        if (sub_14243aea0(rcx_5) == 0)
            var_eb_2 = 0

int16_t var_c8 = arg3
uint8_t var_ea = (*(arg1 + 8) u>> 4).b & 1
void* rax_15 = *(arg1 + 0x50)
void* var_110 = rax_15
uint8_t var_e9_1 = (*(rax_15 + 0xa4) u>> 1).b & 1
uint8_t rax_16 = sub_1422cfe90(*(arg1 + 0x20), &var_138, arg3)

if (var_c0 != 0)
    sub_140a74f90(var_c0)

if (var_58 != 0)
    var_58[1].d -= 1
    
    if (var_58[1].d == 1)
        (**var_58)(var_58)
        int32_t temp6_1 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*var_58 + 8))(var_58, 1)

int128_t var_78
int64_t* rbx_2 = var_78:8.q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp7_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return zx.q(rax_16)
