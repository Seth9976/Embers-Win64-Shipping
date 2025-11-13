// 函数: sub_140a48d50
// 地址: 0x140a48d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
*arg1 = 0
arg1[1] = 0
void var_368
memset(&var_368, 0, 0x320)
uint64_t r14 = zx.q(arg2 + 2)

if (arg4 != 0)
    r14 = zx.q(arg2)

uint32_t rdx = r14.d + arg3

if (rdx s>= 0x64)
    rdx = 0x64

int32_t rax_2 = sub_140b65640(&var_368, rdx, arg4)

if (r14.d u< rax_2)
    uint64_t i_1 = zx.q(rax_2 - r14.d)
    void* r15_1 = &var_368 + (r14 << 3)
    uint64_t i
    
    do
        int64_t rdi_1 = sx.q(arg1[1].d)
        int32_t rax_3 = (rdi_1 + 1).d
        arg1[1].d = rax_3
        
        if (rax_3 s> *(arg1 + 0xc))
            sub_140a4fa10(arg1)
        
        int64_t r14_1 = rdi_1 * 0xc18
        char* _Destination = *arg1 + r14_1
        __builtin_memset(&_Destination[0xc00], 0, 0x18)
        strncpy(_Destination, &data_1437020ab, 0x400)
        _Destination[0x3ff] = 0
        strncpy(&_Destination[0x400], &data_1437020ab, 0x400)
        _Destination[0x7ff] = 0
        strncpy(&_Destination[0x800], &data_1437020ab, 0x400)
        _Destination[0xbff] = 0
        sub_140b71650(*r15_1, *arg1 + r14_1)
        r15_1 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

__security_check_cookie(rax_1 ^ &var_388)
return arg1
