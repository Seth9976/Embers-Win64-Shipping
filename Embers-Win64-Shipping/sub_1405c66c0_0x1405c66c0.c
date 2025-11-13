// 函数: sub_1405c66c0
// 地址: 0x1405c66c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0xffffffff
int32_t arg_14 = 0
int32_t rbx = arg3.d
int32_t result_1

if (arg2 != 0)
    sub_140d3a3a0(&result_1, arg2)
    arg_10.q = result_1.q

sub_1405ba7b0(arg1 + 8, &result_1, &arg_10)
int64_t result = sx.q(result_1)
void* const rcx_4

if (result.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = (result << 6) + *(arg1 + 8)

int64_t* rdi_1 = rcx_4 + 8

if (rcx_4 == 0)
    rdi_1 = nullptr

if (rdi_1 != 0)
    int32_t i_2 = rdi_1[5].d
    int32_t result_2 = 0
    int32_t r8_1 = arg3:4.d
    int32_t i = i_2
    int64_t r15_1 = rdi_1[4]
    
    if (i_2 s> 0)
        do
            int32_t rcx_6 = i & 0x80000001
            
            if (rcx_6 s< 0)
                rcx_6 = ((rcx_6 - 1) | 0xfffffffe) + 1
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(i)
            int32_t i_1 = (temp3_1 - temp2_1) s>> 1
            i = i_1
            int32_t rax_5 = i_1 + result_2
            int32_t* rcx_9 = sx.q(rax_5) * 0x1c
            int32_t rax_7 = *(rcx_9 + r15_1)
            result = zx.q(rax_7 - rbx)
            
            if (rax_7 == rbx)
                result = zx.q(*(rcx_9 + r15_1 + 4) - r8_1)
            
            if (result.d s< 0)
                result_2 = rax_5 + rcx_6
        while (i s> 0)
    
    if (result_2 s< i_2)
        result = sx.q(result_2)
        int32_t* rcx_11 = result * 0x1c + r15_1
        int32_t rbx_1 = rbx - *rcx_11
        
        if (rbx == *rcx_11)
            rbx_1 = r8_1 - rcx_11[1]
        
        if (rbx_1 s>= 0 && result_2 != 0xffffffff)
            int32_t rax_10 = i_2 - result_2
            
            if (rax_10 != 1)
                memmove(rcx_11, sx.q(result_2 + 1) * 0x1c + r15_1, (rax_10 - 1) * 0x1c)
                i_2 = rdi_1[5].d
            
            rdi_1[5].d = i_2 - 1
            result = sub_1405c5460(&rdi_1[4])
    
    if (rdi_1[5].d == 0)
        sub_1405c2d80(arg2 + 0x2c8, *rdi_1)
        sub_1405c2d80(arg2 + 0x2b0, rdi_1[1])
        result_1 = 0xffffffff
        int32_t arg_c = 0
        
        if (arg2 != 0)
            sub_140d3a3a0(&result_1, arg2)
            result_1.q = result_1.q
        
        return sub_1405c3200(arg1 + 8, &result_1)

return result
