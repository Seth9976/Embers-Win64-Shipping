// 函数: sub_141f37670
// 地址: 0x141f37670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
float zmm6[0x4]

if (sub_141f73df0(arg1) == 0)
    zmm6 = 0x3f800000
else
    zmm6 = sub_141f65810(*(arg1 + 0x630))

*arg2 = 0
int64_t rbx = 0
*(arg2 + 4) = 0
float zmm1[0x4] = data_143f3b4b0
zmm1[0].q = zx.o(0) u>> 0x40
*(arg2 + 0x10) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg2 + 0x20) = zx.o(0)
*(arg2 + 0x30) = __andps_xmmxud_memxud(data_143f3b4b0, data_143f3b4c0)
void* rcx_1 = *(arg1 + 0x650)
void var_78

if (rcx_1 != 0)
    char* rax_3
    rax_3, zmm6 = sub_141df5c90(rcx_1, &var_78, zmm6)
    
    if (*rax_3 != 0)
        zmm6 = sub_141de06c0(arg2, &rax_3[0x10])
    
    void** rsi_1 = *(arg1 + 0x6c0)
    uint64_t r14_2 = sx.q(*(arg1 + 0x6c8)) << 3 u>> 3
    
    if (rsi_1 u> &rsi_1[sx.q(*(arg1 + 0x6c8))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            char* rax_6
            rax_6, zmm6 = sub_141df5c90(*rsi_1, &var_78, zmm6)
            
            if (*rax_6 != 0)
                zmm6 = sub_141de06c0(arg2, &rax_6[0x10])
            
            rsi_1 = &rsi_1[1]
            rbx += 1
        while (rbx != r14_2)

void* rcx_5 = *(arg1 + 0x658)

if (rcx_5 != 0)
    char* rax_7 = sub_141df5c90(rcx_5, &var_78, zmm6)
    
    if (*rax_7 != 0)
        sub_141de06c0(arg2, &rax_7[0x10])

__security_check_cookie(rax_1 ^ &var_98)
return arg2
