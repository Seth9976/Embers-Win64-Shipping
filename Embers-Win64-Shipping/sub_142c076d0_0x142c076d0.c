// 函数: sub_142c076d0
// 地址: 0x142c076d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[3]
int64_t r13 = *(rcx + 0x70)
void* r14 = *(rcx + 0x80)
uint64_t i_6 = zx.q(*(rcx + 0x60))
int64_t r12

if (*(*arg1 + 0xb8) u< 0x80 || (*(rcx + 0x38) & 0xfffffffd) != 4)
    r12.b = 0
else
    r12.b = 1

int32_t arg_8
int32_t result_1

if (sub_142bf3c40(arg1[1], 9) != 0 && i_6.d != 0)
    int32_t* rdi_1 = r14 + 8
    uint64_t i_4 = i_6
    uint64_t i
    
    do
        sub_142bf3a00(arg1[1], *(r13 - r14 - 8 + rdi_1), &arg_8, &result_1)
        *rdi_1 += arg_8
        rdi_1 = &rdi_1[5]
        rdi_1[-4] += result_1
        i = i_4
        i_4 -= 1
    while (i != 1)

sub_142c202a0(arg1[1], arg1[3])
void* rcx_4 = *arg1

if ((*(rcx_4 + 0xb8) & 0x10) != 0 && *(*(rcx_4 + 0x20) + 0x60) == 1)
    sub_142c08c80(arg1[3], r12.b)

void* rdi_2 = *arg1
void* rsi_1 = arg1[3]
void* rbp = arg1[1]
char rax_8 = *(rdi_2 + 0xb9)

if ((rax_8 & 1) != 0)
    sub_142c228e0(rdi_2 + 0x28, rdi_2, rbp, rsi_1)
else if ((rax_8 & 2) != 0)
    sub_142c32390(rdi_2, rbp, rsi_1)
else if ((rax_8 & 4) == 0)
    sub_142c39670(rdi_2, rbp, rsi_1)
else
    sub_142c201d0(rdi_2, rbp, rsi_1)

if ((*(rdi_2 + 0xb9) & 0x10) != 0)
    sub_142c32590(rdi_2, rbp, rsi_1)

void* rax_9 = *arg1

if ((*(rax_9 + 0xb8) & 0x10) != 0 && *(*(rax_9 + 0x20) + 0x60) == 2)
    sub_142c08c80(arg1[3], r12.b)

arg1[3]
arg1[1]
void* rax_11 = arg1[3]

if ((*(rax_11 + 0x28) & 2) != 0 && (*(rax_11 + 0x18) & 0xc) == 0)
    uint64_t i_3 = zx.q(*(rax_11 + 0x60))
    void* r9_3 = *(rax_11 + 0x70)
    
    if (i_3.d != 0)
        void* r8_6 = *(rax_11 + 0x80) - r9_3
        char* rcx_13 = r9_3 + 0xc
        uint64_t i_1
        
        do
            if ((rcx_13[4] & 0x20) != 0 && (*rcx_13 u>> 5 & 1) == 0)
                *(r8_6 + rcx_13 - 4) = 0
                *(r8_6 + rcx_13 - 0xc) = 0
            
            rcx_13 = &rcx_13[0x14]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

if ((*(*arg1 + 0xb9) & 8) != 0)
    sub_142c32630(arg1[3])

j_sub_142c22990(arg1[1], arg1[3])
int32_t result = sub_142bf3c40(arg1[1], 9)

if (result.b != 0 && i_6.d != 0)
    void* rdi_3 = r14 + 8
    uint64_t i_5 = i_6
    uint64_t i_2
    
    do
        sub_142bf3a00(arg1[1], *(rdi_3 + r13 - r14 - 8), &arg_8, &result_1)
        *rdi_3 -= arg_8
        rdi_3 += 0x14
        result = result_1
        *(rdi_3 - 0x10) -= result
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

int32_t* rcx_18 = *arg1

if ((rcx_18[0x2e].b & 0x40) == 0)
    return result

return sub_142c39730(rcx_18, arg1[1], arg1[3], r12.b)
