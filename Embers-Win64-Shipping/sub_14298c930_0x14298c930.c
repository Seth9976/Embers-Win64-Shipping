// 函数: sub_14298c930
// 地址: 0x14298c930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_198 = -2
void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t* rax_2 = sub_14298cc80()
void* var_190 = &rax_2[2]
int32_t code = _Mtx_lock(&rax_2[2])

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_188 = 1
void** r10 = *rax_2
void** r8 = r10[1]
void** r11 = r10

while (*(r8 + 0x19) == 0)
    char* rax_3 = r8[4]
    int64_t r9_2 = arg1 - rax_3
    uint32_t i
    uint32_t rdx_1
    
    do
        rdx_1 = zx.d(*rax_3)
        i = zx.d(rax_3[r9_2])
        
        if (rdx_1 != i)
            break
        
        rax_3 = &rax_3[1]
    while (i != 0)
    
    if (rdx_1 - i s>= 0)
        r10 = r8
        r8 = *r8
    else
        r8 = r8[2]

uint32_t i_1
uint32_t rdx_3

if (r10 != r11)
    char* rax_4 = arg1
    
    do
        rdx_3 = zx.d(*rax_4)
        i_1 = zx.d(*(rax_4 + r10[4] - arg1))
        
        if (rdx_3 != i_1)
            break
        
        rax_4 = &rax_4[1]
    while (i_1 != 0)

if (r10 == r11 || rdx_3 - i_1 s< 0)
    r10 = r11

if (r10 == r11)
    void* var_178
    sub_1429779b0(&var_178, 3, 1)
    void var_168
    sub_14058b120(
        sub_14058b120(
            sub_14058b120(&var_168, "Cannot create image file attribute of unknown type ""), arg1), 
        "".")
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_142977aa0(&exceptionObject, &var_178)
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

int64_t result = r10[5]()
int32_t code_1 = _Mtx_unlock(&rax_2[2])

if (code_1 == 0)
    __security_check_cookie(rax_1 ^ &var_1b8)
    return result

std::_Throw_C_error(code_1)
noreturn
