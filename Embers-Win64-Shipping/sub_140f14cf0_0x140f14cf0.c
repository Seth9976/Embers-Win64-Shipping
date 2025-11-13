// 函数: sub_140f14cf0
// 地址: 0x140f14cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
void* rsi = nullptr
int64_t rbp = 0
uint64_t rax

if (rbx != 0)
    rax = zx.q(rbx[1].d)
    
    if (rax.d != 0)
        rbx[1].d = rax.d + 1
        rax.b = 1
    
    if (rax.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rax = zx.q(rbx[1].d)
        rbp = *(arg1 + 8)
        rbx[1].d = rax.d
        
        if (rax.d == 0)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)

int64_t var_18

if (*(arg1 + 0x5c0) != 0)
    int64_t* rcx_2 = *(arg1 + 0x5b8)
    
    if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2).b != 0)
        int64_t* rcx_3
        
        if (*(arg1 + 0x5c0) == 0)
            rcx_3 = nullptr
        else
            rcx_3 = *(arg1 + 0x5b8)
        
        var_18 = rbp
        int64_t* var_10_1 = rbx
        
        if (rbx != 0)
            rbx[1].d += 1
        
        (*(*rcx_3 + 0x50))(rcx_3, &var_18)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (*(arg1 + 0x528) == 0)
    return 

rax = *(arg1 + 0x530)

if (rax == 0 || *(rax + 8) s<= 0)
    return 

int64_t* rbx_1 = *(arg1 + 0x10)
int64_t rcx_6 = 0

if (rbx_1 != 0)
    int32_t rax_7 = rbx_1[1].d
    
    if (rax_7 != 0)
        rbx_1[1].d = rax_7 + 1
        rax_7.b = 1
    
    if (rax_7.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rcx_6 = *(arg1 + 8)

var_18 = rcx_6

if (rbx_1 != 0)
    int32_t rax_8 = rbx_1[1].d
    rbx_1[1].d = rax_8
    
    if (rax_8 == 0)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = *(arg1 + 0x530)

if (rbx_2 != 0)
    int32_t rax_11 = rbx_2[1].d
    
    if (rax_11 != 0)
        rbx_2[1].d = rax_11 + 1
        rax_11.b = 1
    
    if (rax_11.b == 0)
        rbx_2 = nullptr
    
    if (rbx_2 != 0)
        rsi = *(arg1 + 0x528)

sub_140ed5170(rsi, &var_18, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp7_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp7_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
