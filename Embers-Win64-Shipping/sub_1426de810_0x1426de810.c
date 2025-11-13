// 函数: sub_1426de810
// 地址: 0x1426de810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* const rbx = *(arg1 + 0x160)

if (rbx == 0)
    rbx = nullptr
else
    void* rax_2 = sub_142736ba0()
    
    if (rax_2 == 0)
        rbx = nullptr
    else
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            rbx = nullptr

int64_t var_100
sub_1426dff30(&var_100, rbx)
int64_t var_118
sub_1426dff30(&var_118, arg1)
void var_c0
char* var_a8
char** rax_6 = sub_140a96390(&var_a8, _vfprintf_p_l(&var_c0, {0}: generate in front of {1}", 
    EnvQueryGenerator"))
int64_t var_88 = var_118
int32_t var_98 = 4
int64_t* var_110
int64_t* var_80 = var_110

if (var_110 != 0)
    var_110[1].d += 1

int32_t var_108
int32_t var_78 = var_108
int64_t var_58 = var_100
char var_70 = 1
int32_t var_68 = 4
int64_t* var_f8
int64_t* var_50 = var_f8

if (var_f8 != 0)
    var_f8[1].d += 1

int64_t i_1 = 2
int32_t var_f0
int32_t var_48 = var_f0
char var_40 = 1
void* var_128 = nullptr
int32_t var_120 = 2
sub_1405a4b40(&var_128, 2, 0)
void var_90
void* rdx_4 = &var_90
int64_t* rcx_8 = var_128 + 8
int32_t i_2 = 2
int32_t i

do
    rcx_8[-1].d = *(rdx_4 - 8)
    *rcx_8 = *rdx_4
    *rcx_8 = *rdx_4
    *rcx_8 = *rdx_4
    *rcx_8 = *rdx_4
    rcx_8[4].b = 0
    
    if (*(rdx_4 + 0x20) != 0)
        rcx_8[1] = *(rdx_4 + 8)
        void* rax_18 = *(rdx_4 + 0x10)
        rcx_8[2] = rax_18
        
        if (rax_18 != 0)
            *(rax_18 + 8) += 1
        
        rcx_8[3].d = *(rdx_4 + 0x18)
        rcx_8[4].b = 1
    
    rcx_8 = &rcx_8[6]
    rdx_4 += 0x30
    i = i_2
    i_2 -= 1
while (i != 1)
char* var_e8 = *rax_6
void* rax_21 = rax_6[1]
void* var_e0 = rax_21

if (rax_21 != 0)
    *(rax_21 + 8) += 1

void var_d8
int64_t* rax_22 = sub_140aac870(&var_d8, &var_e8, &var_128)
*arg2 = *rax_22
void* rax_24 = rax_22[1]
arg2[1] = rax_24

if (rax_24 != 0)
    *(rax_24 + 8) += 1

arg2[2].d = rax_22[2].d
int64_t* var_d0

if (var_d0 != 0)
    var_d0[1].d -= 1
    
    if (var_d0[1].d == 1)
        (**var_d0)(var_d0)
        int32_t rax_28 = *(var_d0 + 0xc)
        *(var_d0 + 0xc) -= 1
        
        if (rax_28 == 1)
            (*(*var_d0 + 8))(var_d0, 1)

sub_140596f50(&var_128)
int64_t __saved_rdi
int64_t* rdi_1 = &__saved_rdi

do
    i_1 -= 1
    rdi_1 = &rdi_1[-6]
    
    if (*rdi_1 != 0)
        *rdi_1 = 0
        int64_t* rbx_2 = rdi_1[-2]
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rax_32 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_32 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
while (i_1 != 0)

int64_t* rbx_3 = rax_6[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rax_36 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rax_36 == 1)
            (*(*rbx_3 + 8))(rbx_3, zx.q((i_1 + 1).d))

if (var_110 != 0)
    var_110[1].d -= 1
    
    if (var_110[1].d == 1)
        (**var_110)(var_110)
        int32_t rax_40 = *(var_110 + 0xc)
        *(var_110 + 0xc) -= 1
        
        if (rax_40 == 1)
            (*(*var_110 + 8))(var_110, 1)

if (var_f8 != 0)
    var_f8[1].d -= 1
    
    if (var_f8[1].d == 1)
        (**var_f8)(var_f8)
        int32_t rax_44 = *(var_f8 + 0xc)
        *(var_f8 + 0xc) -= 1
        
        if (rax_44 == 1)
            (*(*var_f8 + 8))(var_f8, 1)

int64_t* var_b8

if (var_b8 != 0)
    var_b8[1].d -= 1
    
    if (var_b8[1].d == 1)
        (**var_b8)(var_b8)
        int32_t rsi_1 = *(var_b8 + 0xc)
        *(var_b8 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_2 = *var_b8
            (*(r8_2 + 8))(var_b8, zx.q(rsi_1), r8_2)

__security_check_cookie(rax_1 ^ &var_148)
return arg2
