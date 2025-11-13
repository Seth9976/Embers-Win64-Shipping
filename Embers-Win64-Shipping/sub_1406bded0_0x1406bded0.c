// 函数: sub_1406bded0
// 地址: 0x1406bded0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
uint32_t r13 = zx.d(arg4)
int64_t* rax_2 = sub_1406c8bf0()

if (rax_2[0x23] == 0)
    int64_t rdx = *rax_2
    (*(rdx + 0x390))(rax_2, rdx)

sub_140597df0(arg1 + 0x20, arg3)
int64_t r12 = *(arg1 + 0x40)
int64_t var_108 = r12
void* rdi = *(arg1 + 0x48)
void* var_100 = rdi

if (rdi != 0)
    *(rdi + 0xc) += 1

int64_t rax_3 = *arg2
int64_t* rax_4 = arg2[1]

if (rax_4 != 0)
    rax_4[1].d += 1

uint64_t var_148
uint64_t* var_118 = &var_148
var_148 = 0
int32_t rbx_1 = arg3[1].d
int64_t rsi_1 = *arg3

if (rbx_1 != 0)
    sub_1405a4c70(&var_148, rbx_1, 0)
    memcpy(var_148, rsi_1, rbx_1 * 2)
else
    int32_t var_13c_1 = 0

char var_138 = r13.b
int64_t var_100_1 = 0
int64_t var_108_1 = 0
int64_t var_88 = 0
void*** rax_5 = sub_140a82f30(0x48, 8)
void*** var_118_1 = rax_5
*rax_5 = &data_142d8e290
void* var_e8 = &rax_5[1]
rax_5[1] = rax_3
rax_5[2] = rax_4

if (rax_4 != 0)
    rax_4[1].d += 1

void* var_110 = &rax_5[3]
rax_5[3] = 0
uint64_t r12_1 = var_148
rax_5[4].d = rbx_1

if (rbx_1 != 0)
    sub_1405a4c70(&rax_5[3], rbx_1, 0)
    memcpy(rax_5[3], r12_1, rbx_1 * 2)
else
    *(rax_5 + 0x24) = 0

rax_5[5].b = var_138
rax_5[6] = r12
rax_5[7] = rdi
int64_t* var_128_1 = nullptr
int64_t var_130_1 = 0
rax_5[8] = arg1
*rax_5 = &data_142d8e2b0
void* const var_98
void* const rax_11 = var_98

if (rax_5 != -8)
    rax_11 = &data_1406b9e60

var_98 = rax_11

if (var_128_1 != 0)
    int32_t rax_12 = *(var_128_1 + 0xc)
    *(var_128_1 + 0xc) -= 1
    
    if (rax_12 == 1 && var_128_1 != 0)
        (*(*var_128_1 + 8))(var_128_1, 1)

uint64_t rcx_9 = var_148

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t rax_16 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (rax_16 == 1)
            (*(*rax_4 + 8))(rax_4, 1)

int64_t var_d8[0x2]
var_d8[0] = 0
int64_t var_c8 = 0
void* var_f8
sub_1406b3080(&var_f8, (r13 ^ 1) + 2, &var_98, &var_d8, arg5, arg6)
int64_t* var_f0

if (var_f0 != 0)
    var_f0[1].d -= 1
    
    if (var_f0[1].d == 1)
        (**var_f0)(var_f0)
        int32_t rdi_2 = *(var_f0 + 0xc)
        *(var_f0 + 0xc) -= 1
        
        if (rdi_2 == 1)
            (*(*var_f0 + 8))(var_f0, zx.q(rdi_2))

if (var_98 != 0)
    void var_78
    void*** rcx_16 = &var_78
    
    if (rax_5 != 0)
        rcx_16 = rax_5
    
    (*rcx_16)[2](rcx_16)

int32_t result
result.b = 1
__security_check_cookie(rax_1 ^ &var_178)
return result
