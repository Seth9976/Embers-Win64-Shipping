// 函数: sub_14291c060
// 地址: 0x14291c060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
char r12 = 0
int64_t r14 = sx.q((temp1 + (temp0 & 7)) s>> 3)
int32_t rdx_2 = 1 << (7 - (arg2.b & 7))

if (arg3 != 0)
    r12 = rdx_2.b

if (arg1 == 0)
    return 0

arg1[4] &= 0xfffffff0
int64_t rax_5 = sx.q(*arg1)
int32_t rbp = (r14 + 1).d
int64_t rsi_1

if (rax_5.d s>= rbp)
    rsi_1 = *(arg1 + 8)

if (rax_5.d s>= rbp && rsi_1 != 0)
label_14291c16c:
    *(r14 + rsi_1) = (*(r14 + rsi_1) & (not.d(rdx_2)).b) | r12
    int32_t rcx_5 = *arg1
    
    if (rcx_5 s> 0)
        int64_t r8_3 = *(arg1 + 8)
        
        while (*(sx.q(rcx_5) + r8_3 - 1) == 0)
            rcx_5 -= 1
            *arg1 = rcx_5
            
            if (rcx_5 s<= 0)
                break
else if (arg3 != 0)
    int64_t rax_6 = sub_1428a6910(*(arg1 + 8), rax_5, sx.q(rbp), "crypto\asn1\a_bitstr.c", 0xa5)
    rsi_1 = rax_6
    
    if (rax_6 == 0)
        sub_1428a5670((rax_6 + 0xd).d, 0xb7, (rax_6 + 0x41).d, "crypto\asn1\a_bitstr.c", 0xa7)
        return 0
    
    int64_t rcx_3 = sx.q(*arg1)
    
    if (r14.d - rcx_3.d + 1 s> 0)
        memset(rcx_3 + rsi_1, 0, sx.q(r14.d - rcx_3.d + 1))
    
    *(arg1 + 8) = rsi_1
    *arg1 = rbp
    goto label_14291c16c

return 1
