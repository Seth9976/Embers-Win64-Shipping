// 函数: sub_14190ccd0
// 地址: 0x14190ccd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg3)
int32_t rdx = 1 << arg3.b
int32_t rax = *(arg2 + 0x878)

if ((rdx & rax) == 0)
    *(arg2 + 0x878) = rax | rdx
    data_143effdb0(zx.q(rsi.d))

uint64_t rcx_2 = rsi * 5
void* rdi_1 = arg2 + 0x478 + (rcx_2 << 3)
int32_t r8 = *(rdi_1 + 0x18)
rcx_2.b = *(arg2 + 0x478 + (rcx_2 << 3) + 0x10) != arg4[3]
uint32_t result
result.b = *(rdi_1 + 0x24) != arg4[6].b
rcx_2.b |= result.b
char rdx_1 = rcx_2.b

if (r8 != *arg4)
    rdx_1 = 1

result.b = *(rdi_1 + 8) != arg5
char rcx_3 = rdx_1 | result.b

if (*(rdi_1 + 0xc) != arg7)
    rcx_3 = 1

result.b = *rdi_1 != arg6

if ((rcx_3 | result.b) != 0)
    if (*(arg2 + 0x420) != arg7)
        data_143effcd8(0x8892, zx.q(arg7), r8)
        *(arg2 + 0x420) = arg7
    
    uint64_t rcx_4 = zx.q(rsi.d)
    uint64_t r8_1 = zx.q(*arg4)
    uint64_t rdx_3 = zx.q(arg4[3])
    
    if (*(arg4 + 0x1a) != 0)
        data_143f00080(rcx_4, rdx_3, r8_1, zx.q(arg4[6].b), arg5, arg6)
    else
        int32_t var_28
        var_28.q = arg6
        data_143f00088(rcx_4, rdx_3, r8_1, zx.q(arg5), var_28)
    
    *rdi_1 = arg6
    *(rdi_1 + 0xc) = arg7
    *(rdi_1 + 0x10) = arg4[3]
    *(rdi_1 + 0x18) = *arg4
    result = zx.d(arg4[6].b)
    *(rdi_1 + 0x24) = result.b
    *(rdi_1 + 8) = arg5

int32_t rdx_4 = arg4[4]

if (*(rdi_1 + 0x14) != rdx_4)
    data_143f00178(zx.q(rsi.d), rdx_4)
    result = arg4[4]
    *(rdi_1 + 0x14) = result

return result
