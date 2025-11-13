// 函数: sub_14209c620
// 地址: 0x14209c620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18 = nullptr
int32_t var_10 = 0
(*(*arg1 + 0x698))(arg1, &var_18)
int64_t r8 = arg1[0x53]
int64_t r10 = sx.q(var_10)
int64_t* rdx_1 = var_18

if (r8 != 0)
    int64_t rax_1 = sx.q(*(arg1 + 0x22c))
    
    if (rax_1.d s< 0 || rax_1.d s>= r10.d || rdx_1[rax_1] != r8)
        void* r9_1 = &rdx_1[r10]
        int64_t* rcx = rdx_1
        
        if (rdx_1 != r9_1)
            do
                if (*rcx == r8)
                    int32_t rcx_2 = ((rcx - rdx_1) s>> 3).d
                    
                    if (rcx_2 != 0xffffffff)
                        *(arg1 + 0x22c) = rcx_2
                    
                    break
                
                rcx = &rcx[1]
            while (rcx != r9_1)

int32_t temp0 = *(arg1 + 0x22c)
*(arg1 + 0x22c) -= 1
int32_t result_1 = *(arg1 + 0x22c)

if (temp0 - 1 s< 0)
    result_1 = (r10 - 1).d
    *(arg1 + 0x22c) = result_1

int64_t result

if (result_1 s< 0 || result_1 s>= r10.d)
    result = *(arg1[0x44] + 0x2b8)
    
    if (result != 0)
        result = *(result + 0xe50)
        
        if (result != 0)
            arg1[0x53] = result
else
    result = sx.q(result_1)
    arg1[0x53] = rdx_1[result]

if (rdx_1 == 0)
    return result

return sub_140a74f90(rdx_1)
