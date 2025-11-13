// 函数: sub_141ae46a0
// 地址: 0x141ae46a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1

if (arg1 == arg2)
    return result

int64_t i_3 = sx.q(arg2[1].d)
sub_1407547c0(arg1, i_3.d)
int32_t rax = result[1].d + i_3.d
result[1].d = rax

if (rax s> *(result + 0xc))
    sub_1405c4e40(result)

void* rdi = &result[2]
result[6].d = arg2[6].d
*(result + 0x34) = *(arg2 + 0x34)

if (rdi != &arg2[2])
    sub_14059a8e0(rdi, arg2[5].d)
    int32_t rax_3 = arg2[5].d
    *(rdi + 0x18) = rax_3
    
    if (rax_3 != 0)
        void* r9_1 = arg2[4]
        void* r10_1 = *(rdi + 0x10)
        void* rdx_3 = &arg2[2]
        
        if (r9_1 != 0)
            rdx_3 = r9_1
        
        if (r10_1 != 0)
            rdi = r10_1
        
        memcpy(rdi, rdx_3, (zx.q(rax_3 + 0x1f) u>> 5 << 2).d)

void* rax_4 = *result
int64_t i_1 = i_3
int64_t i_2 = i_1
int32_t r12 = 0

if (i_3.d s<= 0)
    return result

int32_t* rdi_1 = rax_4 + 0x10
int32_t* r8_5 = *arg2 - rax_4
int32_t* arg_10 = r8_5
int32_t rbp_1 = 1
int64_t i

do
    void* rax_5 = arg2[4]
    void* rcx_3 = &arg2[2]
    
    if (rax_5 != 0)
        rcx_3 = rax_5
    
    int32_t rax_6 = r12
    
    if (r12 s< 0)
        rax_6 = r12 + 0x1f
    
    if ((*(rcx_3 + (sx.q(rax_6 s>> 5) << 2)) & rbp_1) == 0)
        rdi_1[-4] = *(rdi_1 + r8_5 - 0x10)
        rdi_1[-3] = *(r8_5 + rdi_1 - 0xc)
    else
        *(rdi_1 - 0x10) = *(rdi_1 + r8_5 - 0x10)
        *(rdi_1 - 8) = 0
        int32_t j_1 = *(r8_5 + rdi_1)
        int64_t* rbx_1 = *(r8_5 + rdi_1 - 8)
        *rdi_1 = j_1
        
        if (j_1 != 0)
            sub_1405a4be0(&rdi_1[-2], j_1, 0)
            int64_t* rcx_5 = *(rdi_1 - 8)
            int32_t j
            
            do
                int64_t rax_10 = *rbx_1
                rbx_1 = &rbx_1[2]
                *rcx_5 = rax_10
                rcx_5 = &rcx_5[2]
                rcx_5[-1] = rbx_1[-1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            i_1 = i_2
            r8_5 = arg_10
        else
            rdi_1[1] = 0
        
        rdi_1[2] = *(r8_5 + rdi_1 + 8)
        rdi_1[3] = *(r8_5 + rdi_1 + 0xc)
    
    r12 += 1
    rbp_1 = rol.d(rbp_1, 1)
    rdi_1 = &rdi_1[8]
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
return result
