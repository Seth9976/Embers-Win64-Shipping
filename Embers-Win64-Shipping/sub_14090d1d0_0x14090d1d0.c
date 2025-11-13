// 函数: sub_14090d1d0
// 地址: 0x14090d1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg4[1]
void* r15 = *arg1
int64_t rcx = *arg4

if (rdi != 0)
    rdi[1].d += 1

int64_t* r14 = arg3[1]

if (r14 != 0)
    r14[1].d += 1

*(r15 + 0x10) = *arg3
*(r15 + 0x18) = r14

if (r14 != 0)
    r14[1].d += 1

*(r15 + 0x20) = rcx
*(r15 + 0x28) = rdi

if (rdi != 0)
    rdi[1].d += 1

*(r15 + 0x30) = 0
int32_t i_1 = arg5[1].d
int64_t* rbx = *arg5
*(r15 + 0x38) = i_1

if (i_1 != 0)
    sub_1405a4be0(r15 + 0x30, i_1, 0)
    int64_t* rcx_2 = *(r15 + 0x30)
    int32_t i
    
    do
        *rcx_2 = *rbx
        void* rax_3 = rbx[1]
        rcx_2[1] = rax_3
        
        if (rax_3 != 0)
            *(rax_3 + 8) += 1
        
        rcx_2 = &rcx_2[2]
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(r15 + 0x3c) = 0

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t rax_6 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*r14 + 8))(r14, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rbx_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rbx_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rbx_1))

void* rcx_7 = *arg1
int32_t r8 = arg1[2].d
int64_t* rdx_2 = arg1[1]
void* rax_11 = *(rcx_7 + 0x48)
*arg2 = rax_11

if (rax_11 != 0)
    *(rax_11 + 0x48) += 1

arg4.b = 1
sub_140913400(rcx_7, rdx_2, r8, arg4.b)
return arg2
