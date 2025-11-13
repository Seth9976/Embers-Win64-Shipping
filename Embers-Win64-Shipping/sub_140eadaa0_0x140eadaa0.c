// 函数: sub_140eadaa0
// 地址: 0x140eadaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
char rbp = 0
int64_t r12 = 0
void var_38
void* r9 = *(*(*rcx + 0x258))(rcx, &var_38)
int64_t* rdi = *(r9 + 0x3f0)

if (rdi != 0)
    int32_t rax_2 = rdi[1].d
    
    if (rax_2 != 0)
        rdi[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rdi = nullptr
    
    if (rdi != 0)
        r12 = *(r9 + 0x3e8)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

void* rcx_3 = *(arg1 + 0x58)
int64_t r15 = 0
int64_t* rbx_1 = *(rcx_3 + 0x3f0)

if (rbx_1 != 0)
    int32_t rax_5 = rbx_1[1].d
    
    if (rax_5 != 0)
        rbx_1[1].d = rax_5 + 1
        rax_5.b = 1
    
    if (rax_5.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        r15 = *(rcx_3 + 0x3e8)

int64_t* rsi

if (sub_140f03770(*(arg1 + 0x40)) != 2)
    if (sub_140f03770(*(arg1 + 0x40)) != 0)
        rsi.b = r12 == r15
    else
        int64_t* rcx_6 = *arg2
        void* const r14
        
        if ((*(*rcx_6 + 0x240))(rcx_6) != 2)
            rsi = 0.q
            r14.b = 0
        else
            rsi = arg2[1]
            
            if (rsi != 0)
                rsi[1].d += 1
            
            rbp = 1
            
            if (*(*arg2 + 0x3c0) != 0)
                r14.b = 0
            else
                r14 = 1
        
        if ((rbp & 1) != 0 && rsi != 0)
            rsi[1].d -= 1
            
            if (rsi[1].d == 1)
                (**rsi)(rsi)
                int32_t temp7_1 = *(rsi + 0xc)
                *(rsi + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rsi + 8))(rsi, 1)
        
        if (r12 != r15 || (arg3 != 0 && r14.b == 0))
            rsi.b = 0
        else
            rsi.b = 1
else if (arg3 != 0)
    sub_140ebd660()
    rsi.b = r12 != data_143e2a070
else
    rsi.b = 1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp5_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp5_1 == 1)
            int64_t r8_1 = *rdi
            (*(r8_1 + 8))(rdi, 1, r8_1)

return zx.q(rsi.b)
