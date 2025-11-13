// 函数: sub_140e8ae60
// 地址: 0x140e8ae60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
int64_t* var_40
int128_t var_38
int64_t* rax_3
void* const rbp
int32_t rsi

if (arg2 s< 0 || arg2 s>= arg1[0x58].d)
    rax_3 = &var_38
    var_38 = zx.o(0)
    rsi = 2
    rbp = nullptr
else
    int64_t* rax_2 = (sx.q(arg2) << 4) + arg1[0x57]
    int64_t* rcx = rax_2[1]
    rbp = *rax_2
    void* const var_48 = rbp
    var_40 = rcx
    
    if (rcx != 0)
        rcx[1].d += 1
    
    rax_3 = &var_48
    rsi = 1

int64_t* rbx = rax_3[1]
rax_3[1] = 0
*rax_3 = 0
int64_t* rdi
int64_t* var_10 = rdi

if ((rsi.b & 2) != 0)
    rdi = var_38:8.q
    rsi &= 0xfffffffd
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp2_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi + 8))(rdi, 1)

if ((rsi.b & 1) != 0 && var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp3_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

char rax_8

if (rbp != 0)
    rax_8 = sub_140e89df0(arg1, rbp, arg3, arg4, arg5)

if (rbp == 0 || rax_8 == 0)
    rdi.b = 0
else
    rdi.b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp5_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp5_1 == 1)
            int64_t r8_2 = *rbx
            (*(r8_2 + 8))(rbx, 1, r8_2)

return zx.q(rdi.b)
