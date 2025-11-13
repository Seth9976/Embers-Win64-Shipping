// 函数: sub_140e62da0
// 地址: 0x140e62da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t* r14 = arg1
int32_t rbp = arg4
uint64_t rsi
rsi.b = 0
int64_t* r12 = nullptr
int64_t var_48
void* r10 = *sub_140db22a0(arg2, &var_48)
int64_t* rdi = *(r10 + 0x7b8)

if (rdi != 0)
    int32_t rax_1 = rdi[1].d
    
    if (rax_1 == 0)
        rdi = nullptr
    else
        rdi[1].d = rax_1 + 1
        
        if (rdi != 0)
            r12 = *(r10 + 0x7b0)

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp1_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

if (r12 == 0)
    goto label_140e62f83

int64_t* rax_6
rax_6, arg4 = (*(*r12 + 0x138))(r12, &var_48)
int64_t rbp_1 = 0
int64_t* rbx_1 = rax_6[1]

if (rbx_1 != 0)
    int32_t rax_7 = rbx_1[1].d
    int64_t* rcx_4
    
    if (rax_7 != 0)
        rbx_1[1].d = rax_7 + 1
        rcx_4 = rax_6[1]
    else
        rcx_4 = rbx_1
        rbx_1 = nullptr
    
    int32_t temp3_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*rcx_4 + 8))(rcx_4, 1)
    
    rax_6[1] = 0
    
    if (rbx_1 != 0)
        rbp_1 = *rax_6
        *rax_6 = 0

if (var_40 != 0)
    int32_t temp2_1 = *(var_40 + 0xc)
    *(var_40 + 0xc) -= 1
    
    if (temp2_1 == 1)
        (*(*var_40 + 8))(var_40, 1)

char rax_11

if (rbp_1 != 0)
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    var_48 = rbp_1
    int64_t* var_40_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    rax_11, arg4 = sub_140d9c320(arg2, &var_48)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t rdx_3 = *rbx_1
            (*rdx_3)(rbx_1, rdx_3)
            int32_t temp11_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if (rbp_1 == 0 || rax_11 == 0)
    rbp = arg_20
else
    var_48 = *arg3
    void* rax_14 = arg3[1]
    void* var_40_2 = rax_14
    
    if (rax_14 != 0)
        *(rax_14 + 8) += 1
    
    rbp = arg_20
    char rax_16
    rax_16, arg4 = (*(*r12 + 0x118))(r12, zx.q(rbp), &var_48)
    rsi = zx.q(rax_16)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_5 = *rbx_1
        (*rdx_5)(rbx_1, rdx_5)
        int32_t temp9_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (rsi.b == 0)
    r14 = arg1
label_140e62f83:
    
    if (*arg3 == 0)
        rsi = zx.q(rsi.b)
        
        if (arg6 != 0)
            rsi = 1
    else
        arg4.b = 1
        sub_140e8ab30(r14, rbp, arg3, arg4.b, arg5)
        rsi.b = 1

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp6_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp8_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return zx.q(rsi.b)
