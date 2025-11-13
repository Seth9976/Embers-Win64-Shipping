// 函数: sub_140ce37a0
// 地址: 0x140ce37a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rbp = *arg1

if (rbp == 0x22)
    int32_t arg_8 = 0
    
    if (j_sub_140b08930(arg1, arg2, &arg_8) != 0)
        return &arg1[sx.q(arg_8)]
    
    return 0

uint32_t rax_4 = zx.d(rbp)
uint32_t rdx_1 = rax_4 u>> 6
int64_t r10 = 1 << (rax_4.b & 0x3f)
int64_t rcx_1 = 0

if (rdx_1 == 1)
    rcx_1 = 0x7fffffe07fffffe

if ((r10 & (rcx_1 | (sbb.q(0x7fffffe07fffffe, 0x7fffffe07fffffe, rbp u< 0x40) & 0x3ff000000000000)))
        == 0 && (arg3 == 0 || rbp != 0x2f) && rbp u<= 0xff)
    if (rbp != 0)
        int32_t rdx_2 = arg2[1].d
        int32_t rax_8
        rax_8.b = rdx_2 s<= 0
        int32_t rbx_1 = rdx_2 - 1
        
        if (rdx_2 s<= 0)
            rbx_1 = 0
        
        int32_t rax_10 = rax_8 + 1 + rdx_2
        arg2[1].d = rax_10
        
        if (rax_10 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        int64_t rcx_4 = sx.q(rbx_1)
        *(*arg2 + (rcx_4 << 1)) = rbp
        *(*arg2 + (rcx_4 << 1) + 2) = 0
    
    return arg1

int16_t* rbx_2 = arg1
int64_t var_38
__builtin_memcpy(&var_38, 
    "\x00\x00\x00\x00\x00\xe8\xff\x07\xfe\xff\xff\x87\xfe\xff\xff\x07\x00\x00\x00\x00\x00\x28\xff\x03\x"
"fe\xff\xff\x87\xfe\xff\xff\x07", 
    0x20)
int64_t* rax_13 = &var_38
int64_t var_28

if (arg3 == 0)
    rax_13 = &var_28

uint128_t zmm0 = *rax_13
int64_t r8_1 = zmm0.q
int64_t r9_1 = _mm_bsrli_si128(zmm0, 8).q
int64_t rax_14
rax_14.b = rdx_1 != 1

if ((r10 & ((sbb.q(&var_28, &var_28, rbp u< 0x40) & r8_1) | ((rax_14 - 1) & r9_1))) != 0)
    uint64_t rax_18
    int64_t rcx_8
    uint32_t i
    
    do
        i = zx.d(rbx_2[1])
        rbx_2 = &rbx_2[1]
        rax_18 = zx.q(i) & 0xffffffc0
        rcx_8.b = rax_18.d != 0x40
    while (test_bit(((rcx_8 - 1) & r9_1) | (sbb.q(rax_18, rax_18, i u< 0x40) & r8_1), 
        zx.q(i.b) & 0x3f))

int32_t rbx_4 = ((rbx_2 - arg1) s>> 1).d
sub_140a20ba0(arg2, arg1, rbx_4)
return &arg1[sx.q(rbx_4)]
