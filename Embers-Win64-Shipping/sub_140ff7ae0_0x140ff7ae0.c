// 函数: sub_140ff7ae0
// 地址: 0x140ff7ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
int32_t rdi = 0
void* var_268 = nullptr
int64_t var_260 = 0
void* rax_2

if (arg2 != 0)
    rax_2 = (*(*arg2 + 0x48))(arg2)
else
    rax_2 = nullptr

int64_t* rcx_1 = *(rax_2 + 0x38)
void var_248
(*(*rcx_1 + 0x50))(rcx_1, &var_248)
int128_t* var_2a8
int128_t var_288
int32_t var_234
uint64_t result
int128_t var_258

if (var_234 != 1)
    void* rbx_1 = arg1 + 0x18
    
    if (arg1 == 0)
        rbx_1 = nullptr
    
    void var_218
    sub_141961860(&var_218, (1 << (data_1439c7a34).b) - 1)
    int32_t var_278_1 = arg7[1].d
    var_288 = *arg7
    int32_t* var_2a0_1 = &var_288
    void* var_1f8_1 = rbx_1
    var_258 = *arg3
    void* var_1f0_1 = rbx_1
    char var_190_1 = 0
    sub_140ffb440(arg1, &var_218, arg2, &var_258, arg5, arg6, &var_268, var_2a0_1)
    result = sub_1419628c0(&var_218)
else
    int32_t var_278 = arg7[1].d
    var_288 = *arg7
    var_2a8 = &var_288
    var_258 = *arg3
    result = sub_140ffb970(arg1, arg2, &var_258, &var_268, var_2a8)
int32_t r12_2 = *(arg3 + 0xc) - *(arg3 + 4)
int32_t rbx_4 = (*(arg3 + 8) - *arg3) * var_234
int32_t rdx_5 = *(arg4 + 0xc)
arg4[1].d = 0

if (rdx_5 != 0)
    result = sub_14061cd70(arg4, 0)
    rdx_5 = *(arg4 + 0xc)
    rdi = arg4[1].d

int32_t rcx_10 = r12_2 * rbx_4 + rdi
arg4[1].d = rcx_10

if (rcx_10 s> rdx_5)
    result = sub_140610660(arg4)

int32_t r10 = *(arg2 + 0x3c)
void* rdi_1 = var_268

if (r10 != 0)
    int32_t var_278_2 = arg7[1].d
    var_288 = *arg7
    int32_t var_238
    var_2a8.d = sub_140fdf270(var_238) * rbx_4
    result = sub_140fe0140(r10, rbx_4, r12_2, rdi_1, var_2a8.d, *arg4, &var_288)

if (rdi_1 != 0)
    result = sub_140a74f90(rdi_1)

__security_check_cookie(rax_1 ^ &var_2c8)
return result
