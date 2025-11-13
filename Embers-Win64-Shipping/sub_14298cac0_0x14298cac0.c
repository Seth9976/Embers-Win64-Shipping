// 函数: sub_14298cac0
// 地址: 0x14298cac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1a0 = -2
void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t* rax_2 = sub_14298cc80()
void* var_198 = &rax_2[2]
int32_t code = _Mtx_lock(&rax_2[2])

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_190 = 1
void** rax_3 = *rax_2
void** r11 = rax_3
void** r9 = rax_3[1]

while (*(r9 + 0x19) == 0)
    char* rcx_2 = r9[4]
    int64_t r10_2 = arg1 - rcx_2
    uint32_t i
    uint32_t r8_1
    
    do
        r8_1 = zx.d(*rcx_2)
        i = zx.d(rcx_2[r10_2])
        
        if (r8_1 != i)
            break
        
        rcx_2 = &rcx_2[1]
    while (i != 0)
    
    if (r8_1 - i s>= 0)
        r11 = r9
        r9 = *r9
    else
        r9 = r9[2]

uint32_t i_1
uint32_t r8_3

if (r11 != rax_3)
    char* rcx_3 = arg1
    
    do
        r8_3 = zx.d(*rcx_3)
        i_1 = zx.d(*(rcx_3 + r11[4] - arg1))
        
        if (r8_3 != i_1)
            break
        
        rcx_3 = &rcx_3[1]
    while (i_1 != 0)

if (r11 == rax_3 || r8_3 - i_1 s< 0)
    r11 = rax_3

if (r11 != rax_3)
    void* var_178
    sub_1429779b0(&var_178, 3, 1)
    void var_168
    sub_14058b120(
        sub_14058b120(sub_14058b120(&var_168, "Cannot register image file attribute type ""), 
            arg1), 
        "". The type has already been registered.")
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_142977aa0(&exceptionObject, &var_178)
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

char* var_1b0 = arg1
int64_t rdx
int64_t var_1a8 = rdx
char var_1b8
int64_t* var_188
sub_14298c530(rax_2, &var_188, 0, &var_1b0, var_1b8)
int32_t code_1 = _Mtx_unlock(&rax_2[2])

if (code_1 == 0)
    __security_check_cookie(rax_1 ^ &var_1e8)
    return code_1

std::_Throw_C_error(code_1)
noreturn
