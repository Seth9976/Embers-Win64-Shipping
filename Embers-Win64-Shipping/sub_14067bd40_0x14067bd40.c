// 函数: sub_14067bd40
// 地址: 0x14067bd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16 const* const rdi = u"false"

if (*(arg1 + 0x10) != 0)
    rdi = u"true"

if (*arg2 == rdi)
    wchar16 const* const rax
    rax.b = 1
    return &(*u"DEPRECATED: Please use GetResponseContentAsString() instead")[0x10]:1

int32_t rdx = 0
int32_t rbx_1

if (*rdi == 0)
    rbx_1 = 0
else
    int64_t rbx = -1
    
    do
        rbx += 1
    while (rdi[rbx] != 0)
    
    rbx_1 = rbx.d + 1

int32_t rcx = *(arg2 + 0xc)
arg2[1].d = 0

if (rcx != rbx_1)
    sub_1405947f0(arg2, rbx_1)
    rdx = arg2[1].d
    rcx = *(arg2 + 0xc)

int32_t result = rdx + rbx_1
arg2[1].d = result

if (result s> rcx)
    sub_140594770(arg2)

if (rbx_1 != 0)
    memcpy(*arg2, rdi, rbx_1 * 2)

result.b = 1
return result
