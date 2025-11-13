// 函数: sub_140d7a4c0
// 地址: 0x140d7a4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2[1]
int64_t r12 = *arg2

if (rdi != 0)
    rdi[1].d += 1

void var_98
int32_t* rax = sub_140d70490(&var_98, arg5)
void var_80
int32_t* rax_1 = sub_140d70490(&var_80, arg4)
int64_t var_a8 = r12
int32_t* rax_2 = *(arg1 + 8)
int64_t rax_3 = *(arg1 + 0x10)
int64_t* var_a0 = rdi

if (rdi != 0)
    rdi[1].d += 1

void var_68
int32_t* rax_4 = sub_140d70490(&var_68, rax)
void var_50
rax_3(rax_2, &var_a8, zx.q(arg3), sub_140d70490(&var_50, rax_1), rax_4)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t rcx_7 = *(rax_1 + 8)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = *(rax + 8)

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t rcx_11 = *(arg4 + 8)

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = *(arg5 + 8)

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t result
result.b = 1
return result
