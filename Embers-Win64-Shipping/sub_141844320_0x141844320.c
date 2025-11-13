// 函数: sub_141844320
// 地址: 0x141844320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg3
int64_t* rcx = *arg2
void var_50
int64_t* rax_1 = (*(*rcx + 0x108))(rcx, &var_50)
int64_t* rdi = rax_1[1]
void* r13 = *rax_1

if (rdi != 0)
    rdi[1].d += 1

int64_t* var_48

if (var_48 != 0)
    var_48[1].d -= 1
    
    if (var_48[1].d == 1)
        (**var_48)(var_48)
        int32_t rax_4 = *(var_48 + 0xc)
        *(var_48 + 0xc) -= 1
        
        if (rax_4 == 1)
            (*(*var_48 + 8))(var_48, 1)

int64_t* r10 = r13 + 0xf8
void* rbp = *r10
void* r12_2 = sx.q(r10[1].d) * 0x60 + rbp

if (rbp != r12_2)
    int64_t* rbx_1 = rbp + 0x48
    
    do
        int64_t* rcx_3 = *r15
        void* rax_8 = (*(*rcx_3 + 0x1c8))(rcx_3, rbp)
        
        if (rax_8 != 0 && rbx_1 != rax_8 + 0x48)
            int64_t r15_1 = sx.q(*(rax_8 + 0x50))
            int64_t r13_1 = *(rax_8 + 0x48)
            int32_t r8 = *(rbx_1 + 0xc)
            rbx_1[1].d = r15_1.d
            
            if (r15_1.d != 0 || r8 != 0)
                sub_140808f70(rbx_1, r15_1.d, r8)
                memcpy(*rbx_1, r13_1, (r15_1 * 0x18).d)
            else
                *(rbx_1 + 0xc) = r15_1.d
            
            r15 = arg3
        
        rbp += 0x60
        rbx_1 = &rbx_1[0xc]
    while (rbp != r12_2)

int64_t var_60 = *arg2
int64_t* rax_11 = arg2[1]

if (rax_11 != 0)
    rax_11[1].d += 1

int64_t var_70 = *r15
int64_t* rax_13 = r15[1]

if (rax_13 != 0)
    rax_13[1].d += 1

char rax_14 = sub_141845fd0(r10, &var_70, &var_60, r13 + 0xe8)

if (rax_13 != 0)
    rax_13[1].d -= 1
    
    if (rax_13[1].d == 1)
        int64_t rdx_6 = *rax_13
        (*rdx_6)(rax_13, rdx_6)
        int32_t rax_15 = *(rax_13 + 0xc)
        *(rax_13 + 0xc) -= 1
        
        if (rax_15 == 1)
            (*(*rax_13 + 8))(rax_13, 1)

if (rax_11 != 0)
    rax_11[1].d -= 1
    
    if (rax_11[1].d == 1)
        (**rax_11)(rax_11)
        int32_t rax_19 = *(rax_11 + 0xc)
        *(rax_11 + 0xc) -= 1
        
        if (rax_19 == 1)
            (*(*rax_11 + 8))(rax_11, 1)

if (rax_14 == 0)
    *arg1 = nullptr
    arg1[1] = 0
    
    if (rdi != 0)
        goto label_141844561
else
    sub_141840c70(r13)
    *arg1 = r13
    arg1[1] = rdi
    
    if (rdi != 0)
        rdi[1].d += 1
    label_141844561:
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t rsi_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*rdi + 8))(rdi, zx.q(rsi_1))

return arg1
