// 函数: sub_140908700
// 地址: 0x140908700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* rax_2 = sub_1429786b0(*arg1)
char _Destination[0xff]
strncpy(&_Destination, "framesPerSecond", 0xff)
void** rcx_2 = *rax_2
char var_19 = 0
void** r11 = rcx_2
void** r9 = rcx_2[1]

while (*(r9 + 0x19) == 0)
    void* rax_3 = &r9[4]
    int64_t r10_1 = &_Destination - rax_3
    uint32_t i
    uint32_t r8
    
    do
        r8 = zx.d(*rax_3)
        i = zx.d(*(rax_3 + r10_1))
        
        if (r8 != i)
            break
        
        rax_3 += 1
    while (i != 0)
    
    if (r8 - i s>= 0)
        rcx_2 = r9
        r9 = *r9
    else
        r9 = r9[2]

uint32_t i_1
uint32_t r8_2

if (rcx_2 != r11)
    char (* rax_4)[0xff] = &_Destination
    
    do
        r8_2 = zx.d(*rax_4)
        i_1 = zx.d((*rax_4)[&rcx_2[4] - &_Destination])
        
        if (r8_2 != i_1)
            break
        
        rax_4 = &(*rax_4)[1]
    while (i_1 != 0)

if (rcx_2 == r11 || r8_2 - i_1 s< 0)
    rcx_2 = r11

void* rax_5

if (rcx_2 != r11)
    rax_5 = __RTDynamicCast(rcx_2[0x24], 0, &class Imf_2_3::Attribute `RTTI Type Descriptor', 
        &class Imf_2_3::TypedAttribute<class Imf_2_3::Rational> `RTTI Type Descriptor', 0)

if (rcx_2 == r11 || rax_5 == 0)
    *arg2 = *arg3
else
    int32_t rdx = *(rax_5 + 0xc)
    *arg2 = *(rax_5 + 8)
    arg2[1] = rdx

__security_check_cookie(rax_1 ^ &var_148)
return arg2
