// 函数: sub_1429849c0
// 地址: 0x1429849c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_188 = -2
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void _Destination
strncpy(&_Destination, arg2, 0xff)
char var_79 = 0
void** r11 = *arg1
void** rax_2 = r11
void** r9 = r11[1]

while (*(r9 + 0x19) == 0)
    void* rcx_1 = &r9[4]
    int64_t r10_1 = &_Destination - rcx_1
    uint32_t i
    uint32_t r8_1
    
    do
        r8_1 = zx.d(*rcx_1)
        i = zx.d(*(rcx_1 + r10_1))
        
        if (r8_1 != i)
            break
        
        rcx_1 += 1
    while (i != 0)
    
    if (r8_1 - i s>= 0)
        rax_2 = r9
        r9 = *r9
    else
        r9 = r9[2]

uint32_t i_1
uint32_t r8_3

if (rax_2 != r11)
    void* rcx_2 = &_Destination
    
    do
        r8_3 = zx.d(*rcx_2)
        i_1 = zx.d(*(rcx_2 + &rax_2[4] - &_Destination))
        
        if (r8_3 != i_1)
            break
        
        rcx_2 += 1
    while (i_1 != 0)

if (rax_2 == r11 || r8_3 - i_1 s< 0)
    rax_2 = r11

if (rax_2 != r11)
    __security_check_cookie(rax_1 ^ &var_1a8)
    return &rax_2[0x24]

sub_1429779b0(&_Destination, 3, 1)
void var_168
sub_14058b120(sub_14058b120(sub_14058b120(&var_168, "Cannot find frame buffer slice ""), arg2), 
    "".")
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
sub_142977aa0(&exceptionObject, &_Destination)
_CxxThrowException(&exceptionObject, &data_143946538)
noreturn
