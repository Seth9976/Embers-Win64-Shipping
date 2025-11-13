// 函数: sub_141889040
// 地址: 0x141889040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
uint64_t var_38 = __security_cookie ^ &var_2d8
int32_t var_288 = 0
int64_t* rbx
int64_t* rsi
int64_t r12
int64_t* r14
int32_t r15

if (*(arg2 + 0x28) == 0 || *(arg2 + 0x10) != 0)
    rbx = arg1
    r14 = nullptr
    r12 = 0
    rsi = nullptr
    r15 = 2
else
    rbx = *(arg2 + 0x20)
    r12 = *(arg2 + 0x18)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    r14 = arg1
    r15 = 1
    rsi = rbx
    
    if (rbx != 0)
        rbx[1].d += 1

uint64_t rax_1

if ((r15.b & 2) != 0)
    r15 &= 0xfffffffd
    
    if (r14 != 0)
        r14[1].d -= 1
        
        if (r14[1].d == 1)
            (**r14)(r14)
            rax_1 = zx.q(*(r14 + 0xc))
            *(r14 + 0xc) -= 1
            
            if (rax_1.d == 1)
                (*(*r14 + 8))(r14, 1)

if ((r15.b & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        rax_1 = zx.q(*(rbx + 0xc))
        *(rbx + 0xc) -= 1
        
        if (rax_1.d == 1)
            (*(*rbx + 8))(rbx, 1)

rax_1.b = arg1[0x2d] != r12
arg1[0x32].b = rax_1.b

if (r12 != 0)
    int64_t var_2b0 = r12
    int64_t* rcx_5 = rsi
    int64_t* var_2a8_1 = rcx_5
    
    if (rsi != 0)
        rsi[1].d += 1
        rcx_5 = var_2a8_1
    
    if (&var_2b0 != &arg1[0x2d])
        int128_t zmm1 = var_2b0.o
        int128_t var_210_1 = zmm1
        var_2b0.o = *(arg1 + 0x168)
        rcx_5 = var_2a8_1
        *(arg1 + 0x168) = zmm1
    
    if (rcx_5 != 0)
        rcx_5[1].d -= 1
        
        if (rcx_5[1].d == 1)
            (**var_2a8_1)(var_2a8_1)
            int32_t rax_8 = *(var_2a8_1 + 0xc)
            *(var_2a8_1 + 0xc) -= 1
            
            if (rax_8 == 1)
                (*(*var_2a8_1 + 8))(var_2a8_1, 1)

int64_t* rbx_2 = arg1[0x2e]

if (rbx_2 != 0)
    rbx_2[1].d += 1

int64_t var_280 = arg1[0x2d]

if (rbx_2 != 0)
    rbx_2[1].d += 1

int32_t var_244 = 0x80
int64_t var_270
__builtin_memset(&var_270, 0, 0x2c)
int32_t var_23c = 0
int64_t var_230 = 0
int32_t var_228 = 0
int32_t var_240 = 0xffffffff
void var_1f8
void var_b8
sub_14181f5b0(&var_1f8, sub_141843fc0(&var_b8, &var_280, &var_270))
sub_1409f6120(&var_b8)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rax_14 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rax_14 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rax_18 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rax_18 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

void* var_298 = &var_1f8
void var_c0
void* var_290 = &var_c0
var_298.o = var_298.o
void var_220
void*** rax_21 = sub_141830c90(sub_14185efc0(&var_220, &var_298))
int64_t* rcx_17 = arg1[0x31]

if (rcx_17 != rax_21)
    arg1[0x31] = rax_21
    
    if (rcx_17 != 0)
        (**rcx_17)(rcx_17, 1)

int32_t var_c8 = 0
int64_t var_d0

if (var_d0 != 0)
    sub_140a74f90(var_d0)

int64_t var_110
sub_14059ad90(&var_110, 0)
int64_t var_f0

if (var_f0 != 0)
    sub_140a74f90(var_f0)

int64_t rcx_21 = var_110

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int32_t var_118 = 0
int64_t var_120

if (var_120 != 0)
    sub_140a74f90(var_120)

int64_t var_160
sub_14059ad90(&var_160, 0)
int64_t var_140

if (var_140 != 0)
    sub_140a74f90(var_140)

int64_t rcx_25 = var_160

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

int64_t* var_168

if (var_168 != 0)
    var_168[1].d -= 1
    
    if (var_168[1].d == 1)
        (**var_168)(var_168)
        int32_t rax_25 = *(var_168 + 0xc)
        *(var_168 + 0xc) -= 1
        
        if (rax_25 == 1)
            (*(*var_168 + 8))(var_168, 1)

int64_t* var_178

if (var_178 != 0)
    var_178[1].d -= 1
    
    if (var_178[1].d == 1)
        (**var_178)(var_178)
        int32_t rax_29 = *(var_178 + 0xc)
        *(var_178 + 0xc) -= 1
        
        if (rax_29 == 1)
            (*(*var_178 + 8))(var_178, 1)

sub_1409f6120(&var_1f8)
int64_t* rcx_31 = arg1[0x42]
(*(*rcx_31 + 0x10))(rcx_31, arg1[0x31])
int64_t* rcx_32 = arg1[0x3d]
(*(*rcx_32 + 0x10))(rcx_32, arg1[0x2d])
int32_t result = sub_1418774e0(arg1)

if (rsi != 0)
    result = rsi[1].d
    rsi[1].d -= 1
    
    if (result == 1)
        result = (**rsi)(rsi)
        int32_t rdi_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*rsi + 8))(rsi, zx.q(rdi_1))

__security_check_cookie(var_38 ^ &var_2d8)
return result
