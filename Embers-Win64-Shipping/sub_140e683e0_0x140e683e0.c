// 函数: sub_140e683e0
// 地址: 0x140e683e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg3)
int32_t arg_18 = 0
int64_t* var_40
int128_t var_38
int64_t* rax_3
int32_t rbp
int64_t r14

if (arg3 s< 0 || r15.d s>= arg1[0x58].d)
    rax_3 = &var_38
    var_38 = zx.o(0)
    rbp = 2
    r14 = 0
else
    int64_t* rax_2 = (r15 << 4) + arg1[0x57]
    int64_t* rcx = rax_2[1]
    r14 = *rax_2
    int64_t var_48 = r14
    var_40 = rcx
    
    if (rcx != 0)
        rcx[1].d += 1
    
    rax_3 = &var_48
    rbp = 1

int64_t* rbx = rax_3[1]
rax_3[1] = 0
*rax_3 = 0

if ((rbp.b & 2) != 0)
    int64_t* rdi_1 = var_38:8.q
    rbp &= 0xfffffffd
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp2_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if ((rbp.b & 1) != 0 && var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp4_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

if (r14 == 0)
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp5_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    sub_140e83d80(arg1, arg2, r15.d, 0)
else
    *arg2 = r14
    arg2[1] = rbx
    
    if (rbx != 0)
        int32_t rax_8 = rbx[1].d
        rbx[1].d = rax_8
        
        if (rax_8 == 0)
            (**rbx)(rbx)
            int32_t temp6_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx + 8))(rbx, 1)

return arg2
