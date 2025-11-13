// 函数: sub_140ef2ea0
// 地址: 0x140ef2ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_488
int64_t rax_1 = __security_cookie ^ &var_488
int64_t* var_460 = arg1
char rbx = 0
int32_t var_464 = 0
sub_1407473e0(&arg1[0xb7], arg2 + 0x210)
int64_t r14 = *(arg2 + 0x1e0)

if (r14 == 0)
    r14 = *(arg2 + 0x1d0) + 8

int64_t rsi = *(arg2 + 0x1d8)

if (rsi == 0)
    rsi = *(arg2 + 0x1d0) + 0x280

int128_t var_438
int64_t var_420
int32_t var_418
void* rdx_1

if (*(arg2 + 0x1f8) == 0)
    void* rax_2 = *(arg2 + 0x1d0)
    rdx_1 = &var_438
    char var_428_1 = 1
    rbx = 1
    var_420 = 0
    var_418 = 0
    var_438 = *(rax_2 + 0x4e8)
else
    rdx_1 = arg2 + 0x1e8

int128_t zmm0_1 = *rdx_1
char rax_3 = *(rdx_1 + 0x10)
int64_t var_3e0 = 0
int32_t var_3d8 = 0
sub_140692f90(&var_3e0, rdx_1 + 0x18)

if ((rbx & 1) != 0)
    sub_140745b20(&var_420)

__builtin_memcpy(&var_438, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 
    0x11)
char var_410 = 1
var_420.o = zx.o(0)
int64_t var_408 = 0
int32_t var_400 = 0
char* (* var_448)(void* arg1, char* arg2) = sub_140f062b0
int32_t var_440 = 0
char var_468 = 0
char rax_4

if (*(arg2 + 0x223) == 0)
    rax_4 = var_464.b
else
    rax_4 = *(arg2 + 0x222)
    var_468 = 1

int64_t r13
r13.b = 0
char r12

if (*(arg2 + 0x221) == 0)
    r12 = var_464.b
else
    r12 = *(arg2 + 0x220)
    r13.b = 1

void var_3d0
int64_t* rax_5 = sub_14068cc20(&var_3d0)
sub_14065da90(&rax_5[0x3e], arg2 + 0x1a0)
rax_5[0x41].b = *(arg2 + 0x1b8)
sub_140692f90(&rax_5[0x42], arg2 + 0x1c0)
*(rax_5 + 0x1c8) = zmm0_1
rax_5[0x3b].b = rax_3
sub_140692f90(&rax_5[0x3c], &var_3e0)
int64_t* rdi_1 = var_460
var_448.o = var_448.o
rax_5[0x36] = r14
rax_5[0x37] = rsi
sub_140692f90(&rax_5[0x44], sub_140e45ef0(&var_460, rdi_1, &var_448))
int32_t var_458
int64_t* rax_8

if (var_458 == 0)
    rax_8 = var_460
label_140ef311b:
    
    if (rax_8 != 0)
        sub_140a74f90(rax_8)
else
    int64_t* rcx_11 = var_460
    
    if (rcx_11 != 0)
        (*(*rcx_11 + 0x38))(rcx_11, 0)
        rax_8 = var_460
        
        if (rax_8 != 0)
            rax_8 = sub_140a84c80(rax_8, 0, 0)
            var_460 = rax_8
        
        int32_t var_458_1 = 0
        goto label_140ef311b
sub_140693390(&rax_5[0x60], &var_438)
rax_5[0x65].b = var_410
sub_140692f90(&rax_5[0x66], &var_408)

if (&var_464 != &rax_5[0x71])
    if (*(rax_5 + 0x389) != 0)
        *(rax_5 + 0x389) = 0
    
    if (r13.b != 0)
        rax_5[0x71].b = r12
        *(rax_5 + 0x389) = 1

if (&var_464 != rax_5 + 0x38a)
    if (*(rax_5 + 0x38b) != 0)
        *(rax_5 + 0x38b) = 0
    
    if (var_468 != 0)
        *(rax_5 + 0x38a) = rax_4
        *(rax_5 + 0x38b) = 1

sub_140eed300(rdi_1, rax_5)
sub_1406905f0(&var_3d0)
sub_140745b20(&var_408)
int64_t* rbx_1 = var_418.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

uint64_t result = sub_140745b20(&var_3e0)
__security_check_cookie(rax_1 ^ &var_488)
return result
