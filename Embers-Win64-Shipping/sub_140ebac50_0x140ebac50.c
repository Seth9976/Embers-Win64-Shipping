// 函数: sub_140ebac50
// 地址: 0x140ebac50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
void* arg_8 = arg1
int32_t rax_1

if (arg3 != 0)
    rax_1 = sub_140f47e50(*(arg1 + 0x3a8))

int64_t* rax_3
int32_t rbp
int64_t* rdi
int64_t* r15

if (arg3 == 0 || rax_1 == 1)
    void* var_38
    rax_3 = sub_140e9a110(&arg_8, &var_38)
    int64_t* var_40
    rdi = var_40
    rbp = 2
    r15 = *rax_3
else
    int64_t rax_2 = *(arg1 + 0x3b8)
    int64_t rcx_2 = sx.q(*(arg1 + 0x3c0)) * 2
    rdi = *(rax_2 + (rcx_2 << 3) - 8)
    r15 = *(rax_2 + (rcx_2 << 3) - 0x10)
    int64_t* var_48 = r15
    int64_t* var_40_1 = rdi
    
    if (rdi != 0)
        rdi[1].d += 1
    
    rax_3 = &var_48
    rbp = 1

int64_t* rbx_1 = rax_3[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp2_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_30 + 8))(var_30, 1)

if ((rbp.b & 1) != 0 && rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int32_t rax_9 = (*(*r15 + 0x240))(r15)
bool cond:1_1

if (rax_9 != 0 && rax_9 - 1 u<= 1)
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    sub_140ebac50(r15, arg2, zx.q(arg3))
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp7_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
        
        rbx_1[1].d -= 1
        cond:1_1 = rbx_1[1].d != 1
        goto label_140ebade0
else
    *arg2 = r15
    arg2[1] = rbx_1
    
    if (rbx_1 != 0)
        int32_t rax_10 = rbx_1[1].d
        cond:1_1 = rax_10 != 0
        rbx_1[1].d = rax_10
    label_140ebade0:
        
        if (not(cond:1_1))
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
return arg2
