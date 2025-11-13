// 函数: sub_141320190
// 地址: 0x141320190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[1]
uint64_t r8_2 = zx.q(rbp s/ 5)
int32_t rbp_1 = rbp - (r8_2 * 5).d
uint64_t r14_2 = zx.q(r8_2.d s/ 3)
uint64_t rdx_3 = zx.q(r14_2.d s/ 3)
int32_t var_44 = r8_2.d - (r14_2 * 3).d + 3
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(rdx_3.d)
int32_t rdx_5 = temp6 & 3
int32_t r14_3 = r14_2.d - (rdx_3 * 3).d
int32_t rax_5 = temp7 + rdx_5
int32_t var_40 = r14_3
int32_t rax_7 = (rax_5 & 3) - rdx_5
int32_t r9_1 = rax_5 s>> 2
int32_t var_3c = rax_7
int32_t rcx_5 = r9_1 & 0x80000001

if (rcx_5 s< 0)
    rcx_5 = ((rcx_5 - 1) | 0xfffffffe) + 1

int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(r9_1)
int32_t r8_3
r8_3.b = rcx_5 == 1
int32_t rax_12 = (temp9 - temp8) s>> 1 & 0x80000001

if (rax_12 s< 0)
    rax_12 = ((rax_12 - 1) | 0xfffffffe) + 1

uint128_t zmm0 = rbp_1.o
int64_t rdi
rdi.b = rax_12 == 1
int32_t rcx_8 = zmm0:4.d
int32_t rdx_7 = _mm_bsrli_si128(zmm0, 8).d
char var_37 = rdi.b
int32_t var_58 = r8_3.b.d
var_58.b = 1

if (rdx_7 == 1)
    rdx_7 = 2

uint64_t result = zx.q(zmm0.d)
uint128_t var_68
var_68:8.d = rdx_7

if (result.d == 4)
    rcx_8 = 3

var_68:4.d = rcx_8

if (result.d == rbp_1 && (var_68.q u>> 0x20).d == r8_2.d - (r14_2 * 3).d + 3 && rdx_7 == r14_3
        && (var_68:8.q u>> 0x20).d == rax_7 && r8_3.b == 1 && 0 == rdi.b)
    int64_t rsi_1 = sx.q(*arg1)
    
    if (rsi_1.d u> 0x1b || not(test_bit(0x857c041, rsi_1.d)))
        result = 4
    
    if ((rsi_1.d u<= 0x1b && test_bit(0x857c041, rsi_1.d))
            || ((*(rsi_1 * 0x14 + &data_143f025fc) u>> 2).b & 1) != 0)
        result = 5
    
    if (r8_2.d - (r14_2 * 3).d + 3 s<= result.d)
        if (rdi.b == 0)
        label_1413203ab:
            int64_t rcx_12 = sx.q(*arg1)
            
            if ((((rcx_12 - 0x19).d u> 1 && *(&data_143f025f0 + rcx_12 * 0x14) != data_143f025d0)
                    || rax_7 != 2) && ((rcx_12.d u<= 0x1b && test_bit(0x857c041, rcx_12.d))
                    || ((*(rcx_12 * 0x14 + &data_143f025fc) u>> 2).b & 1) != 0 || r14_3 == 0))
                bool cond:8_1
                bool cond:9_1
                
                if (rbp_1 == 0)
                    cond:8_1 = rax_7 == 2
                label_141320450:
                    
                    if (not(cond:8_1))
                        if (rdi.b == 0)
                            return sub_1413198a0(rcx_12.d)
                        
                        cond:9_1 = rax_7 == 0
                    label_14132040f:
                        
                        if (cond:9_1)
                            return sub_1413198a0(rcx_12.d)
                else
                    bool cond:10_1
                    
                    if (rbp_1 != 1)
                        if (rbp_1 != 4)
                            if (rbp_1 == 2)
                                cond:8_1 = rax_7 == 1
                                goto label_141320450
                            
                            if (rbp_1 != 3)
                                return sub_1413198a0(rcx_12.d)
                        else if (r8_2.d - (r14_2 * 3).d + 3 s<= 3)
                            if ((rax_7 & 0xfffffffc) == 0)
                                cond:10_1 = rax_7 != 1
                                goto label_14132040a
                            
                        label_14132040c:
                            cond:9_1 = rdi.b == 0
                            goto label_14132040f
                    else if ((rax_7 & 0xfffffffc) != 0 || rax_7 == rbp_1)
                        cond:10_1 = r14_3 != 0
                    label_14132040a:
                        
                        if (not(cond:10_1))
                            goto label_14132040c
        else
            int64_t r12_1 = data_143eb4e98
            int64_t rcx_10
            
            if (data_143de5480 == 0)
                rcx_10 = 0
            else
                rcx_10.b = GetCurrentThreadId().d != data_143de5470
            
            if (*(r12_1 + (rcx_10 << 2)) == 0 && ((((rsi_1 - 2).d & 0xffffffed) == 0
                    && rsi_1.d != 0x12) || ((*(rsi_1 * 0x14 + &data_143f025fc) u>> 0xa).b & 1) != 0))
                goto label_1413203ab

result.b = 0
return result
