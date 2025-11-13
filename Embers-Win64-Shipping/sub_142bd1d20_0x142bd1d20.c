// 函数: sub_142bd1d20
// 地址: 0x142bd1d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x38)
int32_t rax_1
int32_t rax_2
int32_t rcx_1

if (*(rbx + 0x58) == 0)
    int32_t rbp_1 = arg2[1]
    int32_t r14_1 = *arg2
    *(rbx + 0x58) = 1
    rax_1 = sub_142bd8000(rbx)
    rcx_1 = rax_1
    
    if (rax_1 == 0)
        rax_2 = sub_142bcf140(rbx, r14_1, rbp_1)
        rcx_1 = rax_2

int32_t* result

if (*(rbx + 0x58) != 0 || (rax_1 == 0 && rax_2 == 0))
    int64_t* rcx_3 = *(rbx + 0x18)
    result = zx.q(sx.d(*(rcx_3 + 0x1a)))
    
    if (sx.d(*(rcx_3 + 0x62)) + 3 + result.d u<= rcx_3[1].d)
    label_142bd1dcc:
        void* r9_1 = *(rbx + 0x28)
        
        if (*(rbx + 0x59) != 0)
            int64_t rcx_5 = sx.q(*(r9_1 + 2))
            char* rdx_4 = *(r9_1 + 0x10)
            int32_t* r8_2 = *(r9_1 + 8) + (rcx_5 << 3)
            result = zx.q(arg2[2] s>> 0xa)
            r8_2[1] = arg2[3] s>> 0xa
            *r8_2 = result.d
            rdx_4[rcx_5] = 2
        
        *(r9_1 + 2) += 1
        void* r9_2 = *(rbx + 0x28)
        
        if (*(rbx + 0x59) != 0)
            int64_t rcx_6 = sx.q(*(r9_2 + 2))
            char* rdx_5 = *(r9_2 + 0x10)
            int32_t* r8_3 = *(r9_2 + 8) + (rcx_6 << 3)
            result = zx.q(arg2[4] s>> 0xa)
            r8_3[1] = arg2[5] s>> 0xa
            *r8_3 = result.d
            rdx_5[rcx_6] = 2
        
        *(r9_2 + 2) += 1
        void* r9_3 = *(rbx + 0x28)
        
        if (*(rbx + 0x59) != 0)
            int64_t rcx_7 = sx.q(*(r9_3 + 2))
            char* rdx_6 = *(r9_3 + 0x10)
            int32_t* r8_4 = *(r9_3 + 8) + (rcx_7 << 3)
            result = zx.q(arg2[6] s>> 0xa)
            r8_4[1] = arg2[7] s>> 0xa
            *r8_4 = result.d
            rdx_6[rcx_7] = 1
        
        *(r9_3 + 2) += 1
    else
        result = sub_142b92690(rcx_3, 3, 0)
        
        if (result.d == 0)
            goto label_142bd1dcc
        
        int32_t* rcx_4 = *(arg1 + 0x30)
        
        if (*rcx_4 == 0)
            *rcx_4 = result.d
else
    result = *(arg1 + 0x30)
    
    if (*result == 0)
        *result = rcx_1

return result
