// 函数: sub_140eb41f0
// 地址: 0x140eb41f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_428
int64_t rax_1 = __security_cookie ^ &var_428
void var_3b8
int128_t zmm1 = sub_14068cc20(&var_3b8)
int64_t var_208 = *(arg2 + 0x1b0)
int32_t var_148 = *(arg2 + 0x1b8)
int64_t var_408 = *(arg2 + 0x30)
void* rax_5 = *(arg2 + 0x38)
void* var_400 = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

sub_140edd9b0(&var_3b8, &var_408, zmm1)
int64_t var_3e0 = 0
int128_t var_3f8
__builtin_memcpy(&var_3f8, "\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x00\x40\x01", 
    0x11)
int32_t var_3d8 = 0
int128_t var_1f0
__builtin_memcpy(&var_1f0, "\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x00\x40\x01", 
    0x11)
void var_1d8
sub_140692f90(&var_1d8, &var_3e0)
sub_140745b20(&var_3e0)
__builtin_memcpy(&var_3f8, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 
    0x11)
char var_3d0 = 1
var_3e0.o = zx.o(0)
int64_t var_3c8 = 0
int32_t var_3c0 = 0
void var_b8
sub_140693390(&var_b8, &var_3f8)
char var_90 = var_3d0
void var_88
sub_140692f90(&var_88, &var_3c8)
int128_t zmm1_1 = sub_140745b20(&var_3c8)
int64_t* rbx = var_3d8.q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

var_408 = *(arg2 + 0x1a0)
void* rax_10 = *(arg2 + 0x1a8)
void* var_400_1 = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

int64_t* var_198

if (arg2 + 0x1c0 != &var_198)
    int64_t* rcx_9
    
    if (*(arg2 + 0x1c8) != 0)
        rcx_9 = *(arg2 + 0x1c0)
    
    int32_t var_190
    
    if (*(arg2 + 0x1c8) != 0 && rcx_9 != 0)
        (*(*rcx_9 + 0x40))(rcx_9, &var_198)
    else if (var_190 != 0)
        int64_t* rcx_10 = var_198
        
        if (rcx_10 != 0)
            (*(*rcx_10 + 0x38))(rcx_10, 0)
            int64_t* rcx_11 = var_198
            
            if (rcx_11 != 0)
                var_198 = sub_140a84c80(rcx_11, 0, 0)
            
            int32_t var_190_1 = 0

sub_1406936e0(&var_3b8, &var_408, zmm1_1)
sub_140eed300(arg1, &var_3b8)
arg1[0xb7].d = 0
int64_t result = sub_1406905f0(&var_3b8)
__security_check_cookie(rax_1 ^ &var_428)
return result
