// 函数: sub_142374750
// 地址: 0x142374750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const r14_1

if (arg3 == 0)
    r14_1 = nullptr
else
    void* rax_1 = sub_1425aaa30()
    void* rdx = *(arg3 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx + 0x38))
        r14_1 = nullptr
    else
        r14_1 = arg3
        
        if (*(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            r14_1 = nullptr

char arg_8
sub_141ff4780(&arg_8, arg2, 0, 0xd6)
int512_t zmm1 = sub_142352690(arg2, arg1 + 0x10, arg5)
int64_t* rcx_3 = arg2[1]
int32_t* r8_1 = *rcx_3

if (&r8_1[1] u<= rcx_3[1])
    *(arg1 + 0x40) = *r8_1
    int64_t* rax_6 = arg2[1]
    *rax_6 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x40, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x40, 4)

int64_t* rcx_6 = arg2[1]
int64_t rdx_4 = *rcx_6
uint32_t arg_10
bool cond:1

if (rdx_4 + 4 u> rcx_6[1])
    int64_t rax_10 = *arg2
    arg_10 = 0
    (*(rax_10 + 0x150))(arg2, &arg_10, 4)
    cond:1 = arg_10 != 0
else
    cond:1 = *rdx_4 != 0
    *rcx_6 = rdx_4 + 4

int64_t* r8_2 = arg2[1]
int64_t rbx
rbx.b = cond:1
int64_t rdx_6 = *r8_2
bool cond:2

if (rdx_6 + 4 u> r8_2[1])
    arg_10 = zx.d(rbx.b)
    (*(*arg2 + 0x150))(arg2, &arg_10, 4)
    cond:2 = arg_10 != 0
else
    cond:2 = *rdx_6 != 0
    *r8_2 = rdx_6 + 4

rcx_6.b = cond:2
*(arg1 + 0x44) &= 0xffffff7f
uint32_t result = zx.d(rcx_6.b) << 7
*(arg1 + 0x44) |= result

if ((arg_8 & 2) == 0 && rbx.b == 0)
    int64_t var_38 = 0
    int32_t var_30_1 = 0
    
    if (rcx_6.b == 0)
        int32_t var_40_1 = 1
        int512_t zmm1_2 = sub_140bcfa90(arg1 + 0x50, arg2, arg3, zmm1, arg4, 0)
        uint8_t rax_16 = sub_140bc9840(arg1 + 0x50)
        *(arg1 + 0x44) &= 0xfffffeff
        *(arg1 + 0x44) |= zx.d(rax_16) << 8
        sub_1408db650(arg2, &var_38, sub_142375f70(arg1, arg2, zmm1_2))
        result = sub_14235af00(&var_38)
        *(arg1 + 0x4c) = result
        
        if ((arg2[5].b & 1) != 0)
            result = *(arg1 + 0x44)
            
            if (test_bit(result, 8))
                *(arg1 + 0x48) = 0
                *(arg1 + 0x44) = result & 0xffffff80
                sub_1422bdf40(arg1 + 0x70)
                sub_142293930(arg1 + 0xf8)
                result = sub_142293930(arg1 + 0x138)
                void*** rbx_1 = *(arg1 + 0x1f8)
                
                if (rbx_1 != 0)
                    sub_142351cf0(rbx_1)
                    result = j_sub_140a74f90(rbx_1)
                
                *(arg1 + 0x1f8) = 0
    else
        char var_48
        var_48.q = &var_38
        sub_1408db650(arg2, &var_38, sub_1423762a0(arg1, arg2, r14_1, 0, zmm1, var_48))
        result = sub_14235af00(&var_38)
        *(arg1 + 0x4c) = result

return result
