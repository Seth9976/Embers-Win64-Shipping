// 函数: sub_1426fef90
// 地址: 0x1426fef90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t var_158 = 0
int32_t var_150 = 0
sub_1405947f0(&var_158, 4)
int32_t rax_2 = var_150 + 4
var_150 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_158)

sub_1405a7220(var_158, 4, "hit", 4, 0x3f)
int64_t var_168 = 0
int32_t var_160 = 0
sub_1405947f0(&var_168, 8)
int32_t rax_3 = var_160 + 8
var_160 = rax_3

if (rax_3 s> 0)
    sub_140594770(&var_168)

sub_1405a7220(var_168, 8, "{0}\n{1}", 8, 0x3f)
void var_e0
int64_t* rax_4 = sub_1426cfca0(arg1, &var_e0, &var_158)
void var_c8
int64_t* rax_5 = sub_1426ee160(arg1 + 0x1f8, &var_c8, 1)
void var_108
char* var_f0
char** rax_7 = sub_140a96390(&var_f0, sub_140aae2f0(&var_108, &var_168))
int32_t var_a8 = 4
int64_t var_98 = *rax_5
void* rax_9 = rax_5[1]
void* var_90 = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

int32_t var_88 = rax_5[2].d
int64_t var_68 = *rax_4
void* rax_12 = rax_4[1]
char var_80 = 1
int32_t var_78 = 4
void* var_60 = rax_12

if (rax_12 != 0)
    *(rax_12 + 8) += 1

int64_t i_1 = 2
int32_t var_58 = rax_4[2].d
char var_50 = 1
void* var_148 = nullptr
int32_t var_140 = 2
sub_1405a4b40(&var_148, 2, 0)
void var_a0
void* rdx_6 = &var_a0
int64_t* rcx_12 = var_148 + 8
int32_t i_2 = 2
int32_t i

do
    rcx_12[-1].d = *(rdx_6 - 8)
    *rcx_12 = *rdx_6
    *rcx_12 = *rdx_6
    *rcx_12 = *rdx_6
    *rcx_12 = *rdx_6
    rcx_12[4].b = 0
    
    if (*(rdx_6 + 0x20) != 0)
        rcx_12[1] = *(rdx_6 + 8)
        void* rax_20 = *(rdx_6 + 0x10)
        rcx_12[2] = rax_20
        
        if (rax_20 != 0)
            *(rax_20 + 8) += 1
        
        rcx_12[3].d = *(rdx_6 + 0x18)
        rcx_12[4].b = 1
    
    rcx_12 = &rcx_12[6]
    rdx_6 += 0x30
    i = i_2
    i_2 -= 1
while (i != 1)
char* var_130 = *rax_7
void* rax_23 = rax_7[1]
void* var_128 = rax_23

if (rax_23 != 0)
    *(rax_23 + 8) += 1

void var_120
int64_t* rax_24 = sub_140aac870(&var_120, &var_130, &var_148)
*arg2 = *rax_24
void* rax_26 = rax_24[1]
arg2[1] = rax_26

if (rax_26 != 0)
    *(rax_26 + 8) += 1

arg2[2].d = rax_24[2].d
int64_t* var_118

if (var_118 != 0)
    var_118[1].d -= 1
    
    if (var_118[1].d == 1)
        (**var_118)(var_118)
        int32_t rax_30 = *(var_118 + 0xc)
        *(var_118 + 0xc) -= 1
        
        if (rax_30 == 1)
            (*(*var_118 + 8))(var_118, 1)

sub_140596f50(&var_148)
int64_t __saved_r12
int64_t* rsi = &__saved_r12

do
    i_1 -= 1
    rsi = &rsi[-6]
    
    if (*rsi != 0)
        *rsi = 0
        int64_t* rbx_3 = rsi[-2]
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t rax_34 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_34 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
while (i_1 != 0)

int64_t* rbx_4 = rax_7[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t rax_38 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rax_38 == 1)
            (*(*rbx_4 + 8))(rbx_4, zx.q((i_1 + 1).d))

int64_t* rbx_6 = rax_5[1]

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t rax_42 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (rax_42 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

int64_t* rbx_7 = rax_4[1]

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        (**rbx_7)(rbx_7)
        int32_t rax_46 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (rax_46 == 1)
            (*(*rbx_7 + 8))(rbx_7, 1)

int64_t* var_100

if (var_100 != 0)
    var_100[1].d -= 1
    
    if (var_100[1].d == 1)
        (**var_100)(var_100)
        int32_t rdi_1 = *(var_100 + 0xc)
        *(var_100 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_100 + 8))(var_100, zx.q(rdi_1))

int64_t rcx_28 = var_168

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

int64_t rcx_29 = var_158

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

__security_check_cookie(rax_1 ^ &var_198)
return arg2
