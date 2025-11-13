// 函数: sub_140eadf30
// 地址: 0x140eadf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x398)
char r14 = 0
int64_t* rax = rdi

if (rdi != 0)
    int32_t rax_1 = rdi[1].d
    
    if (rax_1 == 0)
        rdi = nullptr
        rax = nullptr
    else
        rdi[1].d = rax_1 + 1
        rax = rdi

int64_t* r15 = nullptr

if (rax != 0)
    r15 = *(arg1 + 0x390)

void* var_48
int64_t* rsi = *(*(*r15 + 0x260))(r15, &var_48)
sub_140ebd660()
void* rcx_1 = data_143e2a070
int64_t* rbx = *(rcx_1 + 0x168)
int64_t* rax_5 = rbx

if (rbx != 0)
    int32_t rax_6 = rbx[1].d
    
    if (rax_6 == 0)
        rbx = nullptr
        rax_5 = nullptr
    else
        rbx[1].d = rax_6 + 1
        rax_5 = rbx

int64_t rax_8

if (rax_5 != 0)
    rax_8 = *(rcx_1 + 0x160)

int64_t r12

if (rax_5 == 0 || rax_8 == 0 || rax_8 != *rsi)
    r12.b = 0
else
    r12.b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t i_2
int32_t i_1 = i_2

if (i_1 != 0)
    rsi = var_48 + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rsi
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp7_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi = &rsi[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rcx_6 = var_48

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t* rbx_2 = i_2.q
void var_38
int64_t rbp = *sub_140ebf640(*(*(*r15 + 0x258))(r15, &var_38), &var_48)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp8_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

int64_t* rcx_14 = *(arg1 + 0x3f0) + 0x2a8
int64_t* rbx_4

if ((**rcx_14)(rcx_14) != 1)
    rbx_4 = 0.q
    rsi.b = 0
else
    int64_t** rdx_3 = *(*(arg1 + 0x3f0) + 0x2b8)
    rbx_4 = rdx_3[1]
    rsi = *rdx_3
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    sub_140ebd660()
    char rax_23
    
    if (rsi != 0)
        rax_23 = sub_140f053d0(rsi)
    
    if (rsi == 0 || rax_23 != 0)
        if (r12.b != 0)
            r14 = 1
        
        if (r12.b != 0 && rbp != 0)
            rsi.b = 0
        else
            rsi.b = 1
            r14 = 1
    else
        r14 = 1
        rsi.b = 0

if ((r14 & 1) != 0 && rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp12_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp11_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp11_1 == 1)
            int64_t r8_2 = *rdi
            (*(r8_2 + 8))(rdi, 1, r8_2)

return zx.q(rsi.b)
