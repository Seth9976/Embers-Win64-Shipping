// 函数: sub_140e5f580
// 地址: 0x140e5f580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = nullptr
int32_t arg_18 = 0
int64_t* var_38
int64_t* result
int64_t* rbx
int32_t rbp
int64_t* rsi
int64_t* rdi

if (arg3 s< 0 || arg3 s>= *(arg1 + 0x2c0))
    rdi = var_38
    rsi = nullptr
    rbp = 2
    rbx = nullptr
else
    result = (sx.q(arg3) << 4) + *(arg1 + 0x2b8)
    rdi = result[1]
    r15 = *result
    
    if (rdi != 0)
        rdi[1].d += 1
    
    rsi = var_38
    rbp = 1
    rbx = rdi
    
    if (rdi != 0)
        rdi[1].d += 1

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t temp2_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rsi + 8))(rsi, 1)

if ((rbp.b & 1) != 0 && rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp4_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (r15 == 0)
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp6_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    int64_t* rbx_2 = arg2[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp7_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (arg4[1].b != 0)
        arg4[1].b = 0
    
    result.b = 0
    return result

bool cond:1 = arg4[1].b == 0
void* rax_6 = arg2[1]
var_38 = *arg2
void* var_30 = rax_6
char rax_7

if (cond:1)
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    rax_7 = sub_140e5efb0(r15, &var_38)
else
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    rax_7 = sub_140e5f2d0(r15, &var_38, *arg4, arg5)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp10_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp11_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (arg4[1].b != 0)
    arg4[1].b = 0

return zx.q(rax_7)
