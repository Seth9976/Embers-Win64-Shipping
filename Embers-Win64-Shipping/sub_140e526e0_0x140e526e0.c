// 函数: sub_140e526e0
// 地址: 0x140e526e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
sub_140a96170(&arg1[2])
sub_140a96170(&arg1[5])
arg1[8] = 0
arg1[9] = 0
sub_140dda8f0(&arg1[0xa])
*(arg1 + 0x6c) = 0
*(arg1 + 0x74) = 0
*(arg1 + 0x7c) = arg2
*(arg1 + 0x84) = 1
int32_t i_3 = arg1[1].d

if (i_3 != 0)
    int64_t* rdi_1 = *arg1 + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 = &rdi_1[2]
        i = i_3
        i_3 -= 1
    while (i != 1)

int64_t i_5 = 2
arg1[1].d = 0

if (*(arg1 + 0xc) != 2)
    sub_1405a5410(arg1, 2)

int64_t* rax_3 = j_sub_140a82f30(0x20)
int64_t* rbx_2 = rax_3

if (rax_3 == 0)
    rbx_2 = nullptr
else
    *rbx_2 = data_143e202b8
    rbx_2[1] = data_143e202c0
    void* rax_6 = data_143e202c8
    rbx_2[2] = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    rbx_2[3].d &= 0xfffffff0

void*** rax_7 = j_sub_140a82f30(0x18)

if (rax_7 == 0)
    rax_7 = nullptr
else
    rax_7[1].d = 1
    *(rax_7 + 0xc) = 1
    *rax_7 = &data_142ed9e68
    rax_7[2] = rbx_2

int64_t rbx_3 = sx.q(arg1[1].d)
int32_t rax_8 = (rbx_3 + 1).d
arg1[1].d = rax_8

if (rax_8 s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

int64_t** rcx_9 = (rbx_3 << 4) + *arg1
*rcx_9 = rbx_2
rcx_9[1] = rax_7

if (rax_7 != 0)
    rax_7[1].d += 1
    
    if (rax_7 != 0)
        rax_7[1].d -= 1
        
        if (rax_7[1].d == 1)
            (**rax_7)(rax_7)
            int32_t temp4_1 = *(rax_7 + 0xc)
            *(rax_7 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rax_7)[1](rax_7, 1)

int64_t* rax_14 = j_sub_140a82f30(0x20)
int64_t* rbx_5 = rax_14

if (rax_14 == 0)
    rbx_5 = nullptr
else
    *rbx_5 = data_143e202b8
    rbx_5[1] = data_143e202c0
    void* rax_17 = data_143e202c8
    rbx_5[2] = rax_17
    
    if (rax_17 != 0)
        *(rax_17 + 8) += 1
    
    rbx_5[3].d &= 0xfffffff0

void*** rax_18 = j_sub_140a82f30(0x18)

if (rax_18 == 0)
    rax_18 = nullptr
else
    rax_18[1].d = 1
    *(rax_18 + 0xc) = 1
    *rax_18 = &data_142ed9e68
    rax_18[2] = rbx_5

int64_t rbx_6 = sx.q(arg1[1].d)
int32_t rax_19 = (rbx_6 + 1).d
arg1[1].d = rax_19

if (rax_19 s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

int64_t** rcx_15 = (rbx_6 << 4) + *arg1
*rcx_15 = rbx_5
rcx_15[1] = rax_18

if (rax_18 != 0)
    rax_18[1].d += 1
    
    if (rax_18 != 0)
        rax_18[1].d -= 1
        
        if (rax_18[1].d == 1)
            (**rax_18)(rax_18)
            int32_t temp6_1 = *(rax_18 + 0xc)
            *(rax_18 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rax_18)[1](rax_18, 1)

int64_t* rbx_8 = data_143e202c8
int64_t rax_25 = data_143e202c0
int64_t r13 = data_143e202b8

if (rbx_8 != 0)
    rbx_8[1].d += 1
    
    if (rbx_8 != 0)
        rbx_8[1].d += 1
        
        if (rbx_8 != 0)
            rbx_8[1].d -= 1
            
            if (rbx_8[1].d == 1)
                (**rbx_8)(rbx_8)
                int32_t temp10_1 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rbx_8 + 8))(rbx_8, 1)

int32_t i_4 = arg1[9].d

if (i_4 != 0)
    int64_t* r15_1 = arg1[8] + 0x10
    int32_t i_1
    
    do
        int64_t* rdi_2 = *r15_1
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp13_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        r15_1 = &r15_1[4]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

arg1[9].d = 0

if (*(arg1 + 0x4c) != 2)
    sub_1405a51b0(&arg1[8], 2)

int64_t i_2

do
    int64_t rdi_3 = sx.q(arg1[9].d)
    int32_t rax_30 = (rdi_3 + 1).d
    arg1[9].d = rax_30
    
    if (rax_30 s> *(arg1 + 0x4c))
        sub_1405c4e40(&arg1[8])
    
    int64_t rax_32 = rdi_3 << 5
    int64_t* rax_33 = rax_32 + arg1[8]
    
    if (rax_32 != neg.q(arg1[8]))
        *rax_33 = r13
        rax_33[1] = rax_25
        rax_33[2] = rbx_8
        
        if (rbx_8 != 0)
            rbx_8[1].d += 1
        
        rax_33[3].d &= 0xfffffff0
    
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)

if (rbx_8 != 0)
    rbx_8[1].d -= 1
    
    if (rbx_8[1].d == 1)
        (**rbx_8)(rbx_8)
        int32_t temp16_1 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*rbx_8 + 8))(rbx_8, zx.q((i_5 + 1).d))

return arg1
