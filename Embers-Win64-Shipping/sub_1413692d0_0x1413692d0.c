// 函数: sub_1413692d0
// 地址: 0x1413692d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[1]
int32_t rdx_1 = rax & 0x80000001

if (rdx_1 s< 0)
    rdx_1 = ((rdx_1 - 1) | 0xfffffffe) + 1

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax)
int32_t rax_3 = (temp1 - temp0) s>> 1
int32_t rbx_1 = rax_3 & 0x80000001

if (rbx_1 s< 0)
    rbx_1 = ((rbx_1 - 1) | 0xfffffffe) + 1

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rax_3)
int32_t rax_6 = (temp3 - temp2) s>> 1
int32_t rcx_1 = rax_6 & 0x80000001

if (rcx_1 s< 0)
    rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1

int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rax_6)
int32_t rax_9 = (temp5 - temp4) s>> 1
int32_t rcx_5 = rax_9 & 0x80000001

if (rcx_5 s< 0)
    rcx_5 = ((rcx_5 - 1) | 0xfffffffe) + 1

int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(rax_9)
int32_t rdi_1 = (temp7 - temp6) s>> 1 & 0x80000001

if (rdi_1 s< 0)
    rdi_1 = ((rdi_1 - 1) | 0xfffffffe) + 1

int32_t rdx_7
rdx_7.b = rbx_1 == 1
int64_t result = sub_14135d3f0(rdx_1 == 1, rdx_7.b, rcx_1 == 1, rcx_5 == 1)
int64_t r8_1 = sx.q(*arg1)

if (((r8_1.d u<= 0x1e && test_bit(0x6562c800, r8_1.d))
        || (*(r8_1 * 0x14 + &data_143f025fc) & 1) != 0) && result.b != 0)
    if (rdi_1 != 1)
        result.b = 1
        return result
    
    if (r8_1.d == 0xb || r8_1.d == 0x1e)
    label_1413693c6:
        
        if (rbx_1 != 1)
            result.b = 1
            return result
    else
        int64_t rcx_9 = r8_1 * 5
        
        if (*(&data_143f025f0 + (rcx_9 << 2)) == data_143f025b8
                && (*((rcx_9 << 2) + &data_143f025fc) & rdi_1.b) != 0)
            goto label_1413693c6

result.b = 0
return result
