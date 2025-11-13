// 函数: sub_142984e30
// 地址: 0x142984e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_188 = -2
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void _Destination

if (*arg2 == 0)
    sub_1429779b0(&_Destination, 3, 1)
    void var_168
    sub_14058b120(&var_168, "Frame buffer slice name cannot be an empty string.")
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_142977aa0(&exceptionObject, &_Destination)
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

strncpy(&_Destination, arg2, 0xff)
char var_79 = 0
void** r10 = *arg1
void** rbx = r10
void** r8 = r10[1]

while (*(r8 + 0x19) == 0)
    void* rax_2 = &r8[4]
    int64_t r9_1 = &_Destination - rax_2
    uint32_t i
    uint32_t rdx
    
    do
        rdx = zx.d(*rax_2)
        i = zx.d(*(rax_2 + r9_1))
        
        if (rdx != i)
            break
        
        rax_2 += 1
    while (i != 0)
    
    if (rdx - i s>= 0)
        rbx = r8
        r8 = *r8
    else
        r8 = r8[2]

void** result
uint32_t i_1
uint32_t rdx_2

if (rbx != r10)
    result = &_Destination
    
    do
        rdx_2 = zx.d(*result)
        i_1 = zx.d(*(result + &rbx[4] - &_Destination))
        
        if (rdx_2 != i_1)
            break
        
        result += 1
    while (i_1 != 0)

if (rbx == r10 || rdx_2 - i_1 s< 0)
    void* var_190 = &_Destination
    int64_t* rax_3 = sub_142984170(arg1, &data_143553be9, &var_190)
    result = sub_1429844d0(arg1, &var_190, rbx, &rax_3[4], rax_3)
    rbx = var_190

*(rbx + 0x120) = *arg3
*(rbx + 0x130) = arg3[1]
*(rbx + 0x140) = arg3[2]
rbx[0x2a] = arg3[3].q
__security_check_cookie(rax_1 ^ &var_1c8)
return result
