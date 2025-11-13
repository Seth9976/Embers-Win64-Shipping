// 函数: sub_1414d5c70
// 地址: 0x1414d5c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_4 = sx.q(*(arg1 + 0xa8))
int64_t result_1 = sx.q(arg4)
int64_t* r14 = arg3
int64_t rax = 0x10 * i_4

if (mulu.dp.q(0x10, i_4) u>> 0x40 != zx.o(0))
    rax = -1

int64_t rax_1 = rax + 8

if (rax u>= -8)
    rax_1 = -1

int64_t* rax_2 = j_sub_140a82f30(rax_1)
int32_t i_2 = 0
void* r15

if (rax_2 == 0)
    r15 = nullptr
else
    *rax_2 = i_4
    r15 = &rax_2[1]
    void* rax_3 = r15
    
    if (i_4 != 0)
        int64_t i
        
        do
            *rax_3 = 0
            *(rax_3 + 8) = 0
            rax_3 += 0x10
            i = i_4
            i_4 -= 1
        while (i != 1)

int32_t rcx_1 = *(arg1 + 0xa8)
int32_t rdi = 0
int64_t r12 = sx.q(arg5)

if (rcx_1 s> 0)
    void* rbx = r15 + 0xc
    int32_t r14_2 = r12.d - result_1.d
    
    do
        *(rbx - 4) = 0
        
        if (*rbx != r14_2)
            sub_140dbd450(rbx - 0xc, r14_2)
        
        rcx_1 = *(arg1 + 0xa8)
        rdi += 1
        rbx += 0x10
    while (rdi s< rcx_1)
    
    r14 = arg3

int64_t result = result_1

if (result s< r12)
    int64_t r12_2 = result * 0x18
    int64_t i_5 = r12 - result
    int64_t i_1
    
    do
        result = *r14
        int32_t rdi_1 = 0
        void* r14_3 = *(r12_2 + result + 8)
        
        if (rcx_1 s<= 0)
            rcx_1 = *(arg1 + 0xa8)
        else
            do
                int64_t rbx_1 = sx.q(rdi_1)
                result = sub_14123dc60(r14_3, rbx_1 * 0x5240 + *(arg1 + 0xa0))
                
                if (result.b != 0)
                    result = sub_1414c2d80(arg1, r14_3, 0, r15 + rbx_1 * 0x10)
                
                rcx_1 = *(arg1 + 0xa8)
                rdi_1 += 1
            while (rdi_1 s< rcx_1)
        
        r14 = arg3
        r12_2 += 0x18
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

if (rcx_1 s> 0)
    do
        int64_t i_3 = sx.q(i_2)
        result = sub_1414d4c20(arg2, i_3 * 0x5240 + *(arg1 + 0xa0), (i_3 << 4) + r15, i_2)
        i_2 += 1
    while (i_2 s< *(arg1 + 0xa8))

if (r15 == 0)
    return result

*(r15 - 8)
return j_sub_140a74f90(r15 - 8)
