// 函数: sub_140e744d0
// 地址: 0x140e744d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x85].b = 0
int64_t arg_18
(*(*arg1 + 0x58))(arg1, &arg_18)
int64_t arg_20
(*(*arg1 + 0x60))(arg1, &arg_20)
int64_t* rsi = arg3[1]
int64_t* r12 = data_143e20d18
int64_t var_178 = *arg3

if (rsi != 0)
    rsi[1].d += 1

int64_t* rdi = data_143e202c8
int64_t rax_3 = data_143e202c0
int64_t r13 = data_143e202b8

if (rdi != 0)
    rdi[1].d += 1

int64_t* rcx_1 = arg1[0xc0]
int32_t rax_5 = (**rcx_1)(rcx_1)
int64_t r8 = *r12
void arg_8
int16_t rbx_1 = *(*(r8 + 0x58))(r12, &arg_8, r8)
uint64_t var_c0 = arg_18
int64_t var_b8 = arg_20
int128_t zmm6
zmm6.d = arg_18.d.d f- arg_20.d
int128_t zmm7
zmm7.d = arg_18:4.d.d f- arg_20:4.d

if (rdi != 0)
    rdi[1].d += 1
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp1_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi + 8))(rdi, 1)

int32_t var_14c = rax_5
void* var_128 = &arg1[0x24]
int64_t var_118 = rax_3
int32_t var_130 = zmm6.d
int32_t var_12c = zmm7.d
int16_t var_150 = rbx_1
char var_14e = 0
int64_t var_148 = 0
int64_t var_120 = r13
uint128_t var_140 = var_c0.o

if (rdi != 0)
    rdi[1].d += 1

void** const var_158 = &data_142ed7318
int64_t var_e8 = var_178
int32_t var_100 = 0x3f800000
int32_t var_108 = 0xa
int32_t var_104 = 0
int16_t var_fc = 0
int64_t var_f8 = 0
int16_t var_f0 = 0
char var_ee = 0

if (rsi != 0)
    int32_t rax_13 = rsi[1].d
    rsi[1].d = rax_13
    
    if (rax_13 == 0)
        (**rsi)(rsi)
        int32_t temp3_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rsi + 8))(rsi, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp4_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi + 8))(rdi, 1)

var_178 = *arg2
void* rax_19 = arg2[1]
void* var_170 = rax_19

if (rax_19 != 0)
    *(rax_19 + 8) += 1

sub_140e7b2c0(arg1, &var_178, &var_158, 0x3f800000)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp7_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rsi + 8))(rsi, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp8_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return 0
