// 函数: sub_142701b60
// 地址: 0x142701b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg1 + 0x18))

if (rbp.d != 0)
    int32_t rcx = arg2[1].d
    int32_t rdx = rcx + rbp.d
    
    if (rdx s> *(arg2 + 0xc))
        sub_140775c70(arg2, rdx)
        rcx = arg2[1].d
    
    memcpy(*arg2 + sx.q(rcx) * 0x48, *(arg1 + 0x10), (rbp * 0x48).d)
    arg2[1].d += rbp.d

int64_t* rcx_4 = *(arg1 + 0x30)
void* const* result

if (rcx_4 != 0)
    result = (*(*rcx_4 + 0x3e0))(rcx_4)

if (rcx_4 == 0 || result.b == 0)
    rbp.b = 0
else
    int64_t* rcx_5 = *(arg1 + 0x30)
    rbp.b = 1
    void var_68
    int128_t* rax_4 = (*(*rcx_5 + 0x3f0))(rcx_5, &var_68)
    int64_t r14_1 = sx.q(arg2[1].d)
    int32_t rcx_6 = (r14_1 + 1).d
    arg2[1].d = rcx_6
    
    if (rcx_6 s> *(arg2 + 0xc))
        sub_140775520(arg2)
    
    result = *arg2
    int64_t rdx_4 = r14_1 * 9
    *(result + (rdx_4 << 3)) = *rax_4
    *(result + (rdx_4 << 3) + 0x10) = rax_4[1]
    *(result + (rdx_4 << 3) + 0x20) = rax_4[2]
    *(result + (rdx_4 << 3) + 0x30) = rax_4[3]
    result[rdx_4 + 8] = rax_4[4].q

int64_t rbx_1 = sx.q(*(arg1 + 0x28))

if (rbx_1.d != 0)
    int32_t rcx_8 = arg3[1].d
    int32_t rdx_5 = rcx_8 + rbx_1.d
    
    if (rdx_5 s> *(arg3 + 0xc))
        sub_14090a730(arg3, rdx_5)
        rcx_8 = arg3[1].d
    
    memcpy(sx.q(rcx_8) * 0x60 + *arg3, *(arg1 + 0x20), (rbx_1 * 0x60).d)
    arg3[1].d += rbx_1.d

if (*(arg1 + 0x18) s<= 0 && *(arg1 + 0x28) s<= 0 && rbp.b == 0)
    result.b = 0
    return result

result.b = 1
return result
