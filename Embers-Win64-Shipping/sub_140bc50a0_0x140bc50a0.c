// 函数: sub_140bc50a0
// 地址: 0x140bc50a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_428
int64_t rax_1 = __security_cookie ^ &var_428
void* rcx = data_143e1a8d8
int64_t r14 = 0
int64_t var_3f8 = 0
int64_t var_3e8 = 0
int32_t var_3e0 = 0
int64_t var_3f0 = -1
int128_t var_3d0
sub_140ab5640(rcx, &var_3d0)
void* rax_2 = *(arg1 + 0x148)
void* rbx = arg1 + 8

if (rax_2 != 0)
    rbx = rax_2

void* rdi = rbx + sx.q(*(arg1 + 0x150)) * 0x28

if (rbx != rdi)
    int128_t zmm7 = var_3f8.o
    
    do
        int128_t var_3a8 = zmm7
        int128_t var_398_1 = var_3e8.o
        void* var_3b8
        *(rbx + 0x20) = *sub_140ab9960(&var_3d0, &var_3b8, rbx, &var_3a8)
        rbx += 0x28
    while (rbx != rdi)

sub_140ab4030(&var_3d0)
label_140bc51a0:
void* i_3 = *(arg1 + 0x148)
void* i_4 = arg1 + 8

if (i_3 != 0)
    i_4 = i_3

void* rsi_1 = i_4 + sx.q(*(arg1 + 0x150)) * 0x28

if (i_4 != rsi_1)
    do
        void var_168
        
        if (*sub_140ac5970(i_4 + 0x20, &var_168) == 1)
            sub_140b73230(zx.o(0))
            goto label_140bc51a0
        
        i_4 += 0x28
    while (i_4 != rsi_1)
    
    i_3 = *(arg1 + 0x148)

void* i = arg1 + 8

if (i_3 != 0)
    i = i_3

for (void* rsi_2 = i + sx.q(*(arg1 + 0x150)) * 0x28; i != rsi_2; i += 0x28)
    int32_t var_388
    sub_140ab1810(i + 0x20, &var_388)
    int32_t rbx_2 = var_388
    
    if (rbx_2 != 0)
        sub_140ac59f0(&var_388)
        rbx_2 = var_388
    
    int64_t* var_280
    r14 += zx.q(var_280[3].b) << 0x20 | zx.q(var_280[1].d)
    sub_140a99e90(&var_388, 1)
    
    if (rbx_2 == 0 && var_280 != 0)
        int32_t rax_10 = *(var_280 + 0xc)
        *(var_280 + 0xc) -= 1
        
        if (rax_10 == 1 && var_280 != 0)
            sub_140a99090(var_280)
            j_sub_140a74f90(var_280)

int64_t rsi_3 = *(arg1 + 0x1a0)
*(arg1 + 0x1b0) = r14

if (rsi_3 == 0)
    rsi_3 = sub_140a82f30(r14, 0)

void* i_1 = arg1 + 8
*(arg1 + 0x1a8) = rsi_3
void* i_2 = *(arg1 + 0x148)

if (i_2 != 0)
    i_1 = i_2

for (void* r14_1 = i_1 + sx.q(*(arg1 + 0x150)) * 0x28; i_1 != r14_1; i_1 += 0x28)
    int32_t var_278
    sub_140ab1810(i_1 + 0x20, &var_278)
    
    if (var_278 != 0)
        sub_140ac59f0(&var_278)
    
    uint64_t rbx_4 = *(i_1 + 0x18)
    int64_t* var_170
    
    if (rbx_4 == -1)
        rbx_4 = zx.q(var_170[3].b) << 0x20 | zx.q(var_170[1].d)
    
    memcpy(rsi_3, *(i_1 + 0x10) + *var_170, rbx_4.d)
    rsi_3 += rbx_4
    int32_t rbx_7 = var_278
    sub_140a99e90(&var_278, 1)
    
    if (rbx_7 == 0 && var_170 != 0)
        int32_t rax_13 = *(var_170 + 0xc)
        *(var_170 + 0xc) -= 1
        
        if (rax_13 == 1 && var_170 != 0)
            sub_140a99090(var_170)
            j_sub_140a74f90(var_170)

var_3f8.o = var_3d0
int64_t var_3c0
int64_t var_3e8_1 = var_3c0
int64_t result = sub_140aadd30(data_143e1a8d8, &var_3f8)
*(arg1 + 0x1c0) = 1

if (*(arg1 + 0x160) != 0)
    void* rcx_26 = arg1 + 0x180
    char var_408 = *(arg1 + 0x1c1)
    void* rax_15 = *(arg1 + 0x170)
    void* var_3d8 = arg1
    
    if (rax_15 != 0)
        rcx_26 = rax_15
    
    result = (*(arg1 + 0x160))((*(*rcx_26 + 8))(rcx_26), &var_408, &var_3d8)

__security_check_cookie(rax_1 ^ &var_428)
return result
