// 函数: sub_1403e51f0
// 地址: 0x1403e51f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t i_1 = 0
int32_t r9
r9.b = arg3 == 2
sub_1403e8180(&arg2[4], arg1 + 0xac8, arg1 + 0x908, r9, *(arg1 + 0x914))
void var_78
sub_1403e83f0(&var_78, arg1 + 0xad0, *(arg1 + 0xac0))
sub_1403e7cd0(&arg2[0x10], &var_78, *(arg1 + 0x924))

if (*(arg1 + 0x948) == 1)
    *(arg1 + 0xae7) = 4

char rax_3 = *(arg1 + 0xae7)
void* rbp_2

if (rax_3 s>= 4)
    rbp_2 = &arg2[8]
    memcpy(rbp_2, &arg2[0x10], *(arg1 + 0x924) * 2)
else
    int32_t i_3 = *(arg1 + 0x924)
    
    if (i_3 s> 0)
        int64_t r10_1 = 0
        uint64_t i_2 = zx.q(i_3)
        uint64_t i
        
        do
            void* rcx_3 = &var_78 + r10_1
            r10_1 += 2
            int32_t r9_1 = sx.d(*(arg1 - &var_78 + rcx_3 + 0x928))
            void var_5a
            *(&var_5a + r10_1) = (((sx.d(*rcx_3) - r9_1) * sx.d(rax_3)) s>> 2).w + r9_1.w
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    rbp_2 = &arg2[8]
    void var_58
    sub_1403e7cd0(rbp_2, &var_58, i_3)

memcpy(arg1 + 0x928, &var_78, *(arg1 + 0x924) * 2)

if (*(arg1 + 0x1058) != 0)
    sub_1403e7900(rbp_2, *(arg1 + 0x924), 0xf852)
    sub_1403e7900(&arg2[0x10], *(arg1 + 0x924), 0xf852)

int32_t result

if (*(arg1 + 0xae5) != 2)
    memset(arg2, 0, sx.q(*(arg1 + 0x914)) << 2)
    result = memset(&arg2[0x18], 0, sx.q(*(arg1 + 0x914) * 5) * 2)
    *(arg1 + 0xae8) = 0
    arg2[0x22] = 0
else
    sub_1403e8070(*(arg1 + 0xae2), *(arg1 + 0xae4), arg2, *(arg1 + 0x90c), *(arg1 + 0x914))
    int64_t r10_2 = (&data_1436fd440)[sx.q(*(arg1 + 0xae8))]
    
    if (*(arg1 + 0x914) s> 0)
        void* r9_3 = arg1 + 0xacc
        void* r8_8 = arg2 + 0x62
        
        do
            int64_t rcx_10 = sx.q(*r9_3)
            i_1 += 1
            r9_3 += 1
            r8_8 += 0xa
            char* rdx_14 = rcx_10 * 5 + r10_2
            *(r8_8 - 0xc) = sx.w(*rdx_14) << 7
            *(r8_8 - 0xa) = sx.w(rdx_14[1]) << 7
            *(r8_8 - 8) = sx.w(rdx_14[2]) << 7
            *(r8_8 - 6) = sx.w(rdx_14[3]) << 7
            *(r8_8 - 4) = sx.w(rdx_14[4]) << 7
        while (i_1 s< *(arg1 + 0x914))
    
    result = sx.d(*((sx.q(*(arg1 + 0xae9)) << 1) + &data_1436fc870))
    arg2[0x22] = result

__security_check_cookie(rax_1 ^ &var_a8)
return result
