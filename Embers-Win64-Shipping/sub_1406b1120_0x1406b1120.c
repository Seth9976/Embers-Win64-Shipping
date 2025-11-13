// 函数: sub_1406b1120
// 地址: 0x1406b1120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
sub_1406b1310(arg1)
int64_t* rcx = *(arg2 + 0x38)
int64_t* var_40 = nullptr
void var_78

if (rcx != 0)
    var_40 = (**rcx)(rcx, &var_78)

int32_t code = _Mtx_lock(&arg1[0x98])

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

int64_t* var_90 = nullptr
void var_c8

if (var_40 != 0)
    var_90 = (**var_40)(var_40, &var_c8)

char* var_88 = arg1
void*** rax_7
int64_t rdx_3
rax_7, rdx_3 = sub_1406899a0(1, &var_c8)

if (var_90 != 0)
    int64_t r8_1 = *var_90
    rdx_3.b = var_90 != &var_c8
    (*(r8_1 + 0x20))(var_90, rdx_3, r8_1)
    int64_t var_90_1 = 0

if (rax_7 == 0)
    void var_d8
    std::_Throw_future_error(std::make_error_code(&var_d8, 4))
    noreturn

rax_7[1].d += 1
void*** var_e8 = rax_7
char var_e0 = 1
rax_7[1].d -= 1

if (rax_7[1].d == 1)
    int64_t* rcx_4 = rax_7[0x1d]
    
    if (rcx_4 == 0)
        (**rax_7)(rax_7, 1)
    else
        (**rcx_4)(rcx_4, rax_7)

sub_1406aeb20(&arg1[0x30], &var_e8)
void*** rax_11 = var_e8

if (rax_11 != 0)
    rax_11[1].d -= 1
    
    if (rax_11[1].d == 1)
        void*** rcx_7 = var_e8
        int64_t* r8_2 = rcx_7[0x1d]
        
        if (r8_2 == 0)
            (**rcx_7)(rcx_7, 1, r8_2)
        else
            (**r8_2)(r8_2, rcx_7)

_Cnd_wait(&arg1[0x50], &arg1[0x98])
*arg1 = 1
int64_t result = _Mtx_unlock(&arg1[0x98])

if (var_40 != 0)
    void* rdx_8
    rdx_8.b = var_40 != &var_78
    result = (*(*var_40 + 0x20))(var_40, rdx_8)

__security_check_cookie(rax_1 ^ &var_108)
return result
