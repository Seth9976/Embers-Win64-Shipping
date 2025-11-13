// 函数: sub_14298ab90
// 地址: 0x14298ab90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
char _Destination[0xff]
strncpy(&_Destination, arg2, 0xff)
void** r11 = *arg1
char var_19 = 0
void** rcx_1 = r11
void** r9 = r11[1]

while (*(r9 + 0x19) == 0)
    void* rax_2 = &r9[4]
    int64_t r10_1 = &_Destination - rax_2
    uint32_t i
    uint32_t r8_1
    
    do
        r8_1 = zx.d(*rax_2)
        i = zx.d(*(rax_2 + r10_1))
        
        if (r8_1 != i)
            break
        
        rax_2 += 1
    while (i != 0)
    
    if (r8_1 - i s>= 0)
        rcx_1 = r9
        r9 = *r9
    else
        r9 = r9[2]

uint32_t i_1
uint32_t r8_3

if (rcx_1 != r11)
    char (* rax_3)[0xff] = &_Destination
    
    do
        r8_3 = zx.d(*rax_3)
        i_1 = zx.d((*rax_3)[&rcx_1[4] - &_Destination])
        
        if (r8_3 != i_1)
            break
        
        rax_3 = &(*rax_3)[1]
    while (i_1 != 0)

if (rcx_1 == r11 || r8_3 - i_1 s< 0)
    rcx_1 = r11

int64_t result

if (rcx_1 != r11)
    result = __RTDynamicCast(rcx_1[0x24], 0, &class Imf_2_3::Attribute `RTTI Type Descriptor', 
        &class Imf_2_3::TypedAttribute<float> `RTTI Type Descriptor', 0)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_148)
return result
