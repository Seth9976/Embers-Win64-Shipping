// 函数: sub_140e7baa0
// 地址: 0x140e7baa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
arg1[0xb0].d += 1
int32_t r8 = *(arg2 + 0xc)
int32_t var_104
int32_t var_104_1 = var_104 & 0xffffff00
char var_1b8 = 0
int64_t var_1b0 = 0
int64_t var_1a8 = 0
char var_198 = 0
int64_t var_190
__builtin_memset(&var_190, 0, 0x88)
int32_t var_108 = 0x20702
void* var_1c8
sub_140e683e0(arg1, &var_1c8, r8)
void* rcx = var_1c8
int32_t var_1f8
void** var_1e8

if (*(rcx + 0x78) == 0)
    char** rax_3 = sub_140dbffe0(rcx + 0x58, &var_1f8, 0, 0, data_1439ae51c)
    int64_t* rbx_1 = rax_3[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (rcx + 0x78 == &var_1e8)
    label_140e7bbb7:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp6_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    else
        *(rcx + 0x78) = *rax_3
        int64_t* rdi_1 = *(rcx + 0x80)
        
        if (rbx_1 == rdi_1)
            goto label_140e7bbb7
        
        *(rcx + 0x80) = rbx_1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp9_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* var_1f0
    
    if (var_1f0 != 0)
        var_1f0[1].d -= 1
        
        if (var_1f0[1].d == 1)
            (**var_1f0)(var_1f0)
            int32_t temp8_1 = *(var_1f0 + 0xc)
            *(var_1f0 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*var_1f0 + 8))(var_1f0, 1)

int64_t* rbx_3 = *(rcx + 0x80)
void* rcx_8 = *(rcx + 0x78)

if (rbx_3 != 0)
    rbx_3[1].d += 1

void* var_1f0_1 = rcx_8
var_1f8 = *(rcx_8 + 0x130) - 1
int128_t zmm0 = var_1f8.o
int16_t var_1e0 = *(arg2 + 8)
char var_1de = *(arg2 + 0xa)
int32_t var_1dc = *(arg2 + 0xc)
int64_t var_1d8 = *(arg2 + 0x10)
var_1e8 = &data_142ecfd70
int16_t var_1d0 = *(arg2 + 0x18)
char var_218
void var_208
var_218.q = &var_208
var_1f8.o = zmm0
void var_f8
sub_140e4aa00(&var_f8, arg1, &var_1f8, &var_1e8)
sub_1405979f0(&var_1b8, &var_f8)
sub_140597700(&var_f8)
char rdi_2 = var_1b8

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* var_1c0

if (var_1c0 != 0)
    var_1c0[1].d -= 1
    
    if (var_1c0[1].d == 1)
        (**var_1c0)(var_1c0)
        int32_t temp4_1 = *(var_1c0 + 0xc)
        *(var_1c0 + 0xc) -= 1
        
        if (temp4_1 == 1)
            int64_t r8_3 = *var_1c0
            (*(r8_3 + 8))(var_1c0, 1, r8_3)

sub_140597700(&var_1b8)
arg1[0xb0].d -= 1
__security_check_cookie(rax_1 ^ &var_238)
return zx.q(rdi_2)
