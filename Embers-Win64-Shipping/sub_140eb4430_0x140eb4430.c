// 函数: sub_140eb4430
// 地址: 0x140eb4430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_438
int64_t rax_1 = __security_cookie ^ &var_438
arg1[0xb7].b = *(arg2 + 0x1f0)
*(arg1 + 0x5b9) = *(arg2 + 0x1f1)
sub_140692f90(&arg1[0xb8], arg2 + 0x1f8)
void var_3b8
sub_14068cc20(&var_3b8)
void var_1c8
sub_14065da90(&var_1c8, arg2 + 0x1a0)
char var_1b0 = *(arg2 + 0x1b8)
void var_1a8
sub_140692f90(&var_1a8, arg2 + 0x1c0)
int128_t* (* var_418)(int64_t* arg1, int128_t* arg2) = sub_140ec1410
int32_t var_410 = 0
int128_t var_3c8 = var_418.o
int64_t* rax_5 = sub_140e45dd0(&var_418, arg1, &var_3c8)
char var_3e0 = 1
int128_t var_408
__builtin_memcpy(&var_408, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 
    0x11)
int64_t var_3d8 = 0
int128_t var_3f0 = zx.o(0)
int32_t var_3d0 = 0
sub_140692f90(&var_3d8, rax_5)
void var_b8
sub_140693390(&var_b8, &var_408)
char var_90 = var_3e0
void var_88
sub_1407473e0(&var_88, &var_3d8)
sub_140745b20(&var_3d8)
int64_t* rbx = var_3f0:8.q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int128_t* (* rax_10)(int64_t* arg1, int128_t* arg2)

if (var_410 == 0)
    rax_10 = var_418
label_140eb45d7:
    
    if (rax_10 != 0)
        sub_140a74f90(rax_10)
else
    int128_t* (* rcx_11)(int64_t* arg1, int128_t* arg2) = var_418
    
    if (rcx_11 != 0)
        (*(*rcx_11 + 0x38))(rcx_11, 0)
        rax_10 = var_418
        
        if (rax_10 != 0)
            rax_10 = sub_140a84c80(rax_10, 0, 0)
            var_418 = rax_10
        
        var_410 = 0
        goto label_140eb45d7
int64_t var_1f8 = 0
__builtin_memcpy(&var_408, "\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x00\x40\x01", 
    0x11)
int128_t var_1f0
__builtin_memcpy(&var_1f0, "\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x00\x40\x01", 
    0x11)
var_3f0.q = 0
var_3f0:8.d = 0
void var_1d8
sub_140692f90(&var_1d8, &var_3f0)
int128_t zmm1 = sub_140745b20(&var_3f0)
int64_t rcx_16 = *(arg2 + 0x208)
int64_t var_208
int64_t rax_11 = var_208

if (rcx_16 != 0)
    rax_11 = rcx_16

int64_t var_208_1 = rax_11
int64_t* var_198

if (arg2 + 0x1d0 != &var_198)
    int64_t* rcx_18
    
    if (*(arg2 + 0x1d8) != 0)
        rcx_18 = *(arg2 + 0x1d0)
    
    int32_t var_190
    
    if (*(arg2 + 0x1d8) != 0 && rcx_18 != 0)
        (*(*rcx_18 + 0x40))(rcx_18, &var_198)
    else if (var_190 != 0)
        int64_t* rcx_19 = var_198
        
        if (rcx_19 != 0)
            (*(*rcx_19 + 0x38))(rcx_19, 0)
            int64_t* rcx_20 = var_198
            
            if (rcx_20 != 0)
                var_198 = sub_140a84c80(rcx_20, 0, 0)
            
            int32_t var_190_1 = 0

var_418 = *(arg2 + 0x1e0)
void* rax_16 = *(arg2 + 0x1e8)
var_410.q = rax_16

if (rax_16 != 0)
    *(rax_16 + 8) += 1

int32_t var_148 = 1
sub_1406936e0(&var_3b8, &var_418, zmm1)
sub_140eed300(arg1, &var_3b8)
int64_t result = sub_1406905f0(&var_3b8)
__security_check_cookie(rax_1 ^ &var_438)
return result
