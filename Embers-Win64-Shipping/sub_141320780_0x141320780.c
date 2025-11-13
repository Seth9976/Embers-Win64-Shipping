// 函数: sub_141320780
// 地址: 0x141320780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[1]
uint64_t rdx_1 = zx.q(r8 s/ 3)
int32_t rdi_1 = rdx_1.d & 0x80000001

if (rdi_1 s< 0)
    rdi_1 = ((rdi_1 - 1) | 0xfffffffe) + 1

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rdx_1.d)
int32_t rax_6 = (temp3 - temp2) s>> 1
int32_t rbx_1 = rax_6 & 0x80000001

if (rbx_1 s< 0)
    rbx_1 = ((rbx_1 - 1) | 0xfffffffe) + 1

int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rax_6)
int32_t rax_9 = (temp5 - temp4) s>> 1
int32_t rsi_1 = rax_9 & 0x80000001

if (rsi_1 s< 0)
    rsi_1 = ((rsi_1 - 1) | 0xfffffffe) + 1

int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(rax_9)
int64_t result = zx.q((temp7 - temp6) s>> 1) & 0x80000001

if (result.d s< 0)
    result = zx.q(((result.d - 1) | 0xfffffffe) + 1)

int64_t rbp = 0

if (result.d != 1)
    int64_t r14_1 = data_143eb4e98
    int64_t rcx
    
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470
    
    result = 4
    
    if (*(r14_1 + (rcx << 2)) != 0)
        result = 2
    
    if (r8 - (rdx_1 * 3).d + 2 s<= result.d)
        goto label_14132088e
else if (rdi_1 != result.d && rbx_1 != result.d && r8 - (rdx_1 * 3).d + 2 s<= sub_1413144f0() + 1)
label_14132088e:
    
    if (rsi_1 != 1)
    label_1413208e5:
        int64_t rcx_2 = sx.q(*arg1)
        
        if ((rcx_2 - 0x19).d u> 1 && *(&data_143f025f0 + rcx_2 * 0x14) != data_143f025d0)
            return sub_1413198a0(rcx_2.d)
        
        if (rdi_1 != 1 && rbx_1 != 1)
            return sub_1413198a0(rcx_2.d)
    else
        int64_t rsi_4 = sx.q(*arg1)
        int64_t r14_2 = data_143eb4e98
        
        if (data_143de5480 != 0)
            rbp.b = GetCurrentThreadId().d != data_143de5470
        
        if (*(r14_2 + (rbp << 2)) == 0 && ((((rsi_4 - 2).d & 0xffffffed) == 0 && rsi_4.d != 0x12)
                || ((*(rsi_4 * 0x14 + &data_143f025fc) u>> 0xa).b & 1) != 0))
            goto label_1413208e5

result.b = 0
return result
