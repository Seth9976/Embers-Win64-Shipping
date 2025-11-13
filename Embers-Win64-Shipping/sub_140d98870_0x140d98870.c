// 函数: sub_140d98870
// 地址: 0x140d98870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t* rax = *(arg1 + 0x30)
int16_t rsi = 0
int64_t* r8 = *arg2
uint64_t r13
r13.b = 0
int64_t* r9 = arg2
int64_t var_88 = 0
int64_t r15 = 0
int32_t var_80 = 0
int64_t* rcx = r8[1]
int16_t r12 = 0
int64_t var_78 = 0
int64_t* rax_1 = r8
int16_t var_70 = 1
char var_50 = 0

if (rcx != 0)
    int32_t rax_2 = rcx[1].d
    
    if (rax_2 != 0)
        arg2.b = 1
        rcx[1].d = rax_2 + 1
        rax_1 = *r9
    else
        arg2.b = 0
        rax_1 = r8
    
    if (arg2.b == 0)
        rcx = nullptr

int64_t* rbx = nullptr

if (rcx != 0)
    rbx = *r8

int64_t* var_68 = rbx
int64_t* rdi = nullptr

if (rcx != 0)
    rdi = rcx

int32_t rcx_1 = r9[2].d
int32_t var_58 = rcx_1
int32_t rcx_2 = rax_1[2].d
int32_t var_54 = rcx_2
int64_t* var_60 = rdi

if (rbx == 0)
label_140d98a5f:
    
    if (rdi == 0)
        rbx.b = 0
    else
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp1_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi + 8))(rdi, 1)
        
        rbx.b = 0
else
    rbx = *rbx
    
    if (sub_142b92f00(rbx, rcx_1, rcx_2, sub_140d9a4a0(rbx, zx.q(*(rax_1 + 0x14)), rax_1[3].d))
            != 0)
        goto label_140d98a5f
    
    rbx = zx.q(sub_140da9330(rax, &var_68, *(*arg_10 + 0x18), arg3, &var_88))
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            int64_t rdx_3 = *rdi
            (*rdx_3)(rdi, rdx_3)
            int32_t temp3_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi + 8))(rdi, 1)
    
    r15 = var_88
    
    if (rbx.b == 0)
        r13 = zx.q(var_70:1.b)
        r12 = var_78:6.w
        rsi = var_78:4.w
        rbx.b = 0
    else
        rbx = sx.q(var_80)
        var_68 = nullptr
        var_60.d = rbx.d
        
        if (rbx.d != 0)
            sub_1405da9e0(&var_68, rbx.d, 0)
            memcpy(var_68, r15, rbx.d)
        else
            int32_t var_5c_1 = 0
        
        rsi = var_78:4.w
        r12 = var_78:6.w
        r13 = zx.q(var_70:1.b)
        var_58.w = var_78.w
        var_58:2.w = var_78:2.w
        char var_50_1 = var_70.b
        var_54.w = rsi
        var_54:2.w = r12
        char var_4f_1 = r13.b
        
        if (sub_140d98ad0(arg1, &var_68, &arg4[6], &arg4[2], &arg4[3], &arg4[4], &arg4[5]) == 0)
            rbx.b = 0
        else
            rbx.b = 1

arg4[7].b = rbx.b

if (rbx.b != 0)
    *arg4 = rsi
    arg4[1] = r12
    *(arg4 + 0xd) = r13.b

if (r15 != 0)
    sub_140a74f90(r15)

return zx.q(rbx.b)
