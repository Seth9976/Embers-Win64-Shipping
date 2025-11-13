// 函数: sub_14289b1a0
// 地址: 0x14289b1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rdi = *(*(arg1 + 0x38) + 8)
sub_142899cc0(arg1, 0xf)
int32_t rcx = arg3 - 1

if (rcx s>= *rdi)
    rcx = *rdi

if (rcx s<= 0)
    *arg2 = 0
    return 0

int32_t rbx_1 = 0

if (rcx s> 0)
    char* i = nullptr
    
    do
        rbx_1 += 1
        
        if (i[*(rdi + 8)] == 0xa)
            break
        
        i = &i[1]
    while (i s< sx.q(rcx))

int64_t* rsi_1 = *(*(arg1 + 0x38) + 8)
sub_142899cc0(arg1, 0xf)
uint64_t rdi_1

if (rbx_1 s>= 0)
    rdi_1 = *rsi_1

if (rbx_1 s< 0 || sx.q(rbx_1) u<= rdi_1)
    rdi_1 = zx.q(rbx_1)

if (arg2 != 0 && rdi_1.d s> 0)
    int64_t rbx_2 = sx.q(rdi_1.d)
    memcpy(arg2, rsi_1[1], rbx_2.d)
    *rsi_1 -= rbx_2
    rsi_1[1] += rbx_2
else if (*rsi_1 == 0)
    rdi_1 = zx.q(*(arg1 + 0x30))
    
    if (rdi_1.d != 0)
        sub_14289a9a0(arg1, 9)

if (rdi_1.d s> 0)
    *(sx.q(rdi_1.d) + arg2) = 0

return zx.q(rdi_1.d)
