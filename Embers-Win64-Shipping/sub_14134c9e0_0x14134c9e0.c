// 函数: sub_14134c9e0
// 地址: 0x14134c9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
char rsi = 0
int64_t* var_c0
var_c0.d = 0
void* rax_2 = arg1[2]
var_c0 = 0
int64_t* var_b8 = nullptr
int64_t var_a8 = 0
int32_t r14 = *(rax_2 + 0x1548)
int64_t* rax_4 = (*(*arg2 + 0x280))(arg2)
int64_t r8 = *rax_4
int64_t* rax_5 = (*(r8 + 0x48))(rax_4, zx.q(r14), r8)
int64_t* rbx = rax_5

if (rax_5 == 0)
    sub_141356e10(sub_14210f630(4), r14, zx.q(arg4), &var_c0, &var_b8, &var_a8)
    rbx = var_c0
else if ((*(*rax_5 + 0x20))(rbx) != 4)
    sub_141356e10(sub_14210f630(4), r14, zx.q(arg4), &var_c0, &var_b8, &var_a8)
    rbx = var_c0
else if (sub_1405948b0(rbx) == 0)
    sub_141356e10(sub_14210f630(4), r14, zx.q(arg4), &var_c0, &var_b8, &var_a8)
    rbx = var_c0
else
    if ((*(*rbx + 0x318))(rbx) == 0)
        (*(*rbx + 0x310))(rbx)
    
    sub_1405948b0(rbx)
    var_c0 = rbx

if (sub_14212f0f0(rbx) != 0)
    sub_141390d20(&data_143ec4c60, *arg1, 1)

char var_c8 = 0
char* var_b0 = &var_c8
var_b8 = j_sub_140597fc0
void*** result_1 = sub_14081d830(0x140, sub_140a756e0(&var_b8, &data_143958018) + 0x10, 1, 0)
void*** result = result_1
int64_t (* var_88)(int64_t* arg1, int64_t* arg2, int64_t* arg3)
void*** var_78
void** const var_68

if (result_1 == 0)
    result = nullptr
else
    int64_t* var_98_1 = var_c0
    var_68 = &data_142e345d8
    char var_8c_1 = arg3
    var_88 = sub_1413502a0
    var_78 = nullptr
    int128_t var_60_1 = arg2.o
    int64_t var_50_1 = arg4.q
    sub_141345c30(result)
    *result = &data_142f62df8
    result[0x20] = var_88
    result[0x22] = 0
    
    if (result[0x20] != 0)
        void** const* rcx_12 = &var_68
        
        if (var_78 != 0)
            rcx_12 = var_78
        
        (**rcx_12)(rcx_12)
    
    rsi = 1

int64_t* rdi_1 = arg1[1]
int64_t r14_1 = sx.q(rdi_1[1].d)
int32_t rax_19 = (r14_1 + 1).d
rdi_1[1].d = rax_19

if (rax_19 s> *(rdi_1 + 0xc))
    sub_1405a4d70(rdi_1)

*(*rdi_1 + (r14_1 << 3)) = result

if ((rsi & 1) != 0 && var_88 != 0)
    void** const* rcx_14 = &var_68
    
    if (var_78 != 0)
        rcx_14 = var_78
    
    void** const rdx_7 = *rcx_14
    rdx_7[2](rcx_14, rdx_7)

__security_check_cookie(rax_1 ^ &var_f8)
return result
