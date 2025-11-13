// 函数: sub_140d915f0
// 地址: 0x140d915f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[5] = 0
int64_t* result = arg1
arg1[6].d = 0
*(arg1 + 0x34) = 2
__builtin_memset(&arg1[7], 0, 0x20)
int64_t rdi = *arg1
void*** rax
char r9
rax, r9 = j_sub_140a82f30(0x40)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rax = &data_142ec7a88
    sub_140d91c30(&rax[2], rdi, 0x3f800000, r9)

if (rbx != 0)
    rbx[1].d += 1

int64_t rdi_1 = sx.q(result[6].d)
int32_t rax_1 = (rdi_1 + 1).d
result[6].d = rax_1

if (rax_1 s> *(result + 0x34))
    sub_140dbcc80(&result[1], rdi_1.d)

void* rax_2 = result[5]
void* rcx_2 = &result[1]

if (rax_2 != 0)
    rcx_2 = rax_2

int64_t rax_4 = rdi_1 * 2
*(rcx_2 + (rax_4 << 3)) = &rbx[2]
*(rcx_2 + (rax_4 << 3) + 8) = rbx

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*rbx)[1](rbx, 1)

void* rdi_2 = *result
void*** rax_7
char r9_1
rax_7, r9_1 = j_sub_140a82f30(0x40)
void*** rbx_3 = rax_7

if (rax_7 == 0)
    rbx_3 = nullptr
else
    rax_7[1].d = 1
    *(rax_7 + 0xc) = 1
    *rax_7 = &data_142ec7a88
    sub_140d91c30(&rax_7[2], rdi_2 + 0x10, *(rdi_2 + 0x20), r9_1)

if (rbx_3 != 0)
    rbx_3[1].d += 1

int64_t rdi_3 = sx.q(result[6].d)
int32_t rax_8 = (rdi_3 + 1).d
result[6].d = rax_8

if (rax_8 s> *(result + 0x34))
    sub_140dbcc80(&result[1], rdi_3.d)

void* rax_9 = result[5]
void* rcx_7 = &result[1]

if (rax_9 != 0)
    rcx_7 = rax_9

int64_t rax_11 = rdi_3 * 2
*(rcx_7 + (rax_11 << 3)) = &rbx_3[2]
*(rcx_7 + (rax_11 << 3) + 8) = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*rbx_3)[1](rbx_3, 1)

void* rax_14 = *result
void* rbp_2 = *(rax_14 + 0x28)
void* r12_1 = sx.q(*(rax_14 + 0x30)) * 0x38 + rbp_2

if (rbp_2 != r12_1)
    do
        void*** rax_16
        char r9_2
        rax_16, r9_2 = j_sub_140a82f30(0x40)
        int64_t* rbx_6 = rax_16
        
        if (rax_16 == 0)
            rbx_6 = nullptr
        else
            rax_16[1].d = 1
            *(rax_16 + 0xc) = 1
            *rax_16 = &data_142ec7a88
            sub_140d91c30(&rax_16[2], rbp_2, *(rbp_2 + 0x10), r9_2)
        
        if (rbx_6 != 0)
            rbx_6[1].d += 1
            
            if (rbx_6 != 0)
                rbx_6[1].d -= 1
                
                if (rbx_6[1].d == 1)
                    (**rbx_6)(rbx_6)
                    int32_t temp5_1 = *(rbx_6 + 0xc)
                    *(rbx_6 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_6 + 8))(rbx_6, 1)
        
        int64_t rdi_5 = sx.q(result[6].d)
        int32_t rax_19 = (rdi_5 + 1).d
        result[6].d = rax_19
        
        if (rax_19 s> *(result + 0x34))
            sub_140dbcc80(&result[1], rdi_5.d)
        
        void* rax_20 = result[5]
        void* rcx_14 = &result[1]
        
        if (rax_20 != 0)
            rcx_14 = rax_20
        
        int64_t rax_22 = rdi_5 * 2
        *(rcx_14 + (rax_22 << 3)) = &rbx_6[2]
        *(rcx_14 + (rax_22 << 3) + 8) = rbx_6
        
        if (rbx_6 != 0)
            int32_t rax_23 = rbx_6[1].d
            rbx_6[1].d = rax_23
            
            if (rax_23 == 0)
                (**rbx_6)(rbx_6)
                int32_t temp6_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
        
        rbp_2 += 0x38
    while (rbp_2 != r12_1)
    
    result = arg1

sub_140db8be0(result)
return result
