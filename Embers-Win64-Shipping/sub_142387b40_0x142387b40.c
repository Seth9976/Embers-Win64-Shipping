// 函数: sub_142387b40
// 地址: 0x142387b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg2
void* r13 = arg1

if (arg3[1].d s<= 0)
    *arg2 = 0
    arg2[1] = 0
    return arg2

int64_t* rax_1 = j_sub_140a82f30(0xa0)
int64_t* rsi = rax_1

if (rax_1 == 0)
    rsi = nullptr
else
    __builtin_memset(rax_1, 0, 0x16)
    rax_1[3] = 0
    rax_1[4].d = 0
    rax_1[5] = 0
    rax_1[6].d = 0
    rax_1[7] = 0
    rax_1[8].d = 0
    __builtin_memset(&rax_1[9], 0, 0x58)

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rdi = &data_143336e08
    rdi[2] = rsi

if (rsi != 0)
    void* rax_3
    
    if (*rsi != 0)
        rax_3 = rsi[1]
    
    if (*rsi == 0 || rax_3 == 0 || *(rax_3 + 8) s<= 0)
        if (rdi != 0)
            rdi[1].d += 1
        
        *rsi = rsi
        int64_t* rcx = rsi[1]
        
        if (rdi != rcx)
            if (rdi != 0)
                *(rdi + 0xc) += 1
                rcx = rsi[1]
            
            if (rcx != 0)
                int32_t temp3_1 = *(rcx + 0xc)
                *(rcx + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rcx + 8))(rcx, 1)
            
            rsi[1] = rdi
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp2_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*rdi)[1](rdi, 1)

rsi[0x13] = r13
*(rsi + 0x15) = 1
sub_140597df0(&rsi[9], arg4)
int64_t* r12 = *arg3
void* rax_9 = &r12[sx.q(arg3[1].d) * 2]
bool cond:1_1

if (r12 != rax_9)
    do
        int64_t* rbx_1 = r12[1]
        void* r14_1 = *r12
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (r14_1 == 0)
            r15 = arg2
            *r15 = 0
            r15[1] = 0
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp6_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (rdi == 0)
                goto label_142387e81
            
            rdi[1].d -= 1
            cond:1_1 = rdi[1].d != 1
            goto label_142387e45
        
        if (rdi != 0)
            *(rdi + 0xc) += 1
        
        int64_t r13_1 = sx.q(*(r14_1 + 0x90))
        int32_t rax_10 = (r13_1 + 1).d
        *(r14_1 + 0x90) = rax_10
        
        if (rax_10 s> *(r14_1 + 0x94))
            sub_1405a4f90(r14_1 + 0x88)
        
        int64_t** rax_13 = (r13_1 << 4) + *(r14_1 + 0x88)
        *rax_13 = rsi
        rax_13[1] = rdi
        int64_t r13_2 = sx.q(rsi[0x10].d)
        int32_t rax_14 = (r13_2 + 1).d
        rsi[0x10].d = rax_14
        
        if (rax_14 s> *(rsi + 0x84))
            sub_1405a4f90(&rsi[0xf])
        
        void** rax_17 = (r13_2 << 4) + rsi[0xf]
        *rax_17 = r14_1
        rax_17[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (*(r14_1 + 0x10) != 0)
            rsi[0xc].d += 1
        
        if (*(r14_1 + 0x12) != 0)
            *(rsi + 0x64) += 1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp8_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        r12 = &r12[2]
    while (r12 != rax_9)
    
    r15 = arg2
    r13 = arg1

int64_t rbp_1 = sx.q(*(r13 + 0xc8))
int32_t rax_20 = (rbp_1 + 1).d
*(r13 + 0xc8) = rax_20

if (rax_20 s> *(r13 + 0xcc))
    sub_1405a4f90(r13 + 0xc0)

int64_t** rax_23 = (rbp_1 << 4) + *(r13 + 0xc0)
*rax_23 = rsi
rax_23[1] = rdi

if (rdi != 0)
    rdi[1].d += 1

sub_14239b8a0(rsi, arg5)
*r15 = rsi
r15[1] = rdi

if (rdi != 0)
    int32_t rax_24 = rdi[1].d
    cond:1_1 = rax_24 != 0
    rdi[1].d = rax_24
label_142387e45:
    
    if (not(cond:1_1))
        (**rdi)(rdi)
        int32_t temp4_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*rdi)[1](rdi, 1)

label_142387e81:
return r15
