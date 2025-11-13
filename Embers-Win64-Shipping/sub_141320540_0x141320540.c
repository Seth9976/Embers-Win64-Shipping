// 函数: sub_141320540
// 地址: 0x141320540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*arg1)
uint64_t result

if ((rcx - 0x19).d u> 1 && *(&data_143f025f0 + rcx * 0x14) != data_143f025d0)
    int32_t r8 = arg1[1]
    uint64_t r9_3 = zx.q(r8 s/ 5)
    int32_t r8_1 = r8 - (r9_3 * 5).d
    int32_t rdx_4 = r9_3.d & 0x80000001
    
    if (rdx_4 s< 0)
        rdx_4 = ((rdx_4 - 1) | 0xfffffffe) + 1
    
    bool cond:0_1 = rdx_4 == 1
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r9_3.d)
    bool arg_c = cond:0_1
    int32_t rax_7 = (temp3_1 - temp2_1) s>> 1 & 0x80000001
    
    if (rax_7 s< 0)
        rax_7 = ((rax_7 - 1) | 0xfffffffe) + 1
    
    r9_3.b = rax_7 == 1
    char arg_d = r9_3.b
    result = r8_1.q
    int32_t arg_8
    arg_8.q = result
    int32_t rdx_8 = arg_8
    
    if (r8_1 == 2)
        if ((result u>> 0x20).b == 0)
            rdx_8 = 0
        
        result = rdx_8.q
    
    if (rdx_8 == r8_1 && (result u>> 0x20).b == cond:0_1 && (result u>> 0x28).b == r9_3.b
            && (r8_1 & 0xfffffffd) == 0)
        return sub_1413198a0(rcx.d) __tailcall

result.b = 0
return result
