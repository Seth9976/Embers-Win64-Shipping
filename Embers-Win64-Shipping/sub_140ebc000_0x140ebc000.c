// 函数: sub_140ebc000
// 地址: 0x140ebc000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x3b0) s<= 0)
    *arg2 = 0
    arg2[1] = 0
    return arg2

void* rbx = *(arg1 + 0x3f0)
(**(rbx + 0x2a8))(rbx + 0x2a8)
int32_t i_5 = *(rbx + 0x2c0)
int32_t i_3 = 0
int64_t rbx_1 = *(rbx + 0x2b8)
uint64_t rbp = 0
uint64_t var_58 = 0
int32_t i_7 = i_5

if (i_5 != 0)
    sub_1405a4be0(&var_58, i_5, 0)
    rbp = var_58
    uint64_t rcx_2 = rbp
    int64_t rbx_2 = rbx_1 - rbp
    int32_t i
    
    do
        *rcx_2 = *(rbx_2 + rcx_2)
        void* rax_2 = *(rbx_2 + rcx_2 + 8)
        *(rcx_2 + 8) = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 8) += 1
        
        rcx_2 += 0x10
        i = i_5
        i_5 -= 1
    while (i != 1)
    int32_t i_6 = i_7
    bool cond:1_1 = i_6 == 0
    
    if (i_6 s> 0)
        uint64_t rbx_3 = rbp
        uint64_t i_4 = zx.q(i_6)
        uint64_t i_1
        
        do
            sub_140f138b0(*rbx_3)
            rbx_3 += 0x10
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        cond:1_1 = i_6 == 0
    
    if (not(cond:1_1))
        int64_t* rsi_1 = rbp + 8
        int32_t i_2
        
        do
            int64_t* rbx_4 = *rsi_1
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp11_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            rsi_1 = &rsi_1[2]
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)

if (rbp != 0)
    sub_140a74f90(rbp)

char rax_5 = sub_140db3130(arg1 + 0x460)
int128_t zmm6 = *(arg1 + 0x3a0)
void* rsi_2 = nullptr
int64_t var_48
void*** rcx_9 = *sub_140ec5860(&var_48)
int64_t* rbx_5 = rcx_9[2]
rcx_9[3].d = zmm6.d

if (rbx_5 != 0)
    int32_t rax_7 = rbx_5[1].d
    
    if (rax_7 != 0)
        rbx_5[1].d = rax_7 + 1
        rax_7.b = 1
    
    if (rax_7.b == 0)
        rbx_5 = nullptr
    
    if (rbx_5 != 0)
        int32_t rax_8 = rbx_5[1].d
        rsi_2 = rcx_9[1]
        rbx_5[1].d = rax_8
        
        if (rax_8 == 0)
            (**rbx_5)(rbx_5)
            int32_t temp7_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)

*(rsi_2 + 0x30) = rax_5
void* r15 = nullptr
int64_t* rdi_1 = *(rsi_2 + 0x10)

if (rdi_1 != 0)
    int32_t rax_11 = rdi_1[1].d
    
    if (rax_11 != 0)
        rdi_1[1].d = rax_11 + 1
        rax_11.b = 1
    
    if (rax_11.b == 0)
        rdi_1 = nullptr
    
    if (rdi_1 != 0)
        int32_t rax_12 = rdi_1[1].d
        r15 = *(rsi_2 + 8)
        rdi_1[1].d = rax_12
        
        if (rax_12 == 0)
            (**rdi_1)(rdi_1)
            int32_t temp8_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp4_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp6_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

sub_140ebeb20(*(arg1 + 0x3f0), &var_48)
int64_t rcx_19 = var_48

if (rcx_19 != 0)
    int64_t* rax_19 = TPI1::cbGpRec(rcx_19)
    *(r15 + 0x34) = *rax_19
    *(r15 + 0x3c) = rax_19[1].d
    int64_t* rbx_7 = *(r15 + 0x10)
    
    if (rbx_7 != 0)
        int32_t rax_21 = rbx_7[1].d
        
        if (rax_21 != 0)
            rbx_7[1].d = rax_21 + 1
            rax_21.b = 1
        
        if (rax_21.b == 0)
            rbx_7 = nullptr
        
        if (rbx_7 != 0)
            int32_t rax_22 = rbx_7[1].d
            rbx_7[1].d = rax_22
            
            if (rax_22 == 0)
                (**rbx_7)(rbx_7)
                int32_t temp17_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp17_1 == 1)
                    (*(*rbx_7 + 8))(rbx_7, 1)
            
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t temp18_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*rbx_7 + 8))(rbx_7, 1)

if (*(arg1 + 0x3b0) s> 0)
    void* rsi_3 = nullptr
    
    do
        int64_t rcx_24 = *(arg1 + 0x3a8)
        
        if (*(rsi_3 + rcx_24 + 8) == 0xffffffff)
            int64_t rbp_1 = sx.q(*(r15 + 0x28))
            int32_t var_50 = *(rsi_3 + rcx_24 + 8)
            int32_t var_4c_1 = *(rsi_3 + rcx_24 + 0xc)
            int32_t rax_29 = (rbp_1 + 1).d
            var_58 = *(rsi_3 + rcx_24)
            *(r15 + 0x28) = rax_29
            
            if (rax_29 s> *(r15 + 0x2c))
                sub_1405a4f90(r15 + 0x20)
            
            *(*(r15 + 0x20) + rbp_1 * 0x10) = var_58.o
            int64_t* rbx_8 = *(r15 + 0x10)
            
            if (rbx_8 != 0)
                int32_t rax_31 = rbx_8[1].d
                
                if (rax_31 != 0)
                    rbx_8[1].d = rax_31 + 1
                    
                    if (rbx_8 != 0)
                        rbx_8[1].d = rax_31 + 1
                        
                        if (rax_31 == 0xffffffff)
                            (**rbx_8)(rbx_8)
                            int32_t temp20_1 = *(rbx_8 + 0xc)
                            *(rbx_8 + 0xc) -= 1
                            
                            if (temp20_1 == 1)
                                (*(*rbx_8 + 8))(rbx_8, 1)
                        
                        rbx_8[1].d -= 1
                        
                        if (rbx_8[1].d == 1)
                            (**rbx_8)(rbx_8)
                            int32_t temp21_1 = *(rbx_8 + 0xc)
                            *(rbx_8 + 0xc) -= 1
                            
                            if (temp21_1 == 1)
                                (*(*rbx_8 + 8))(rbx_8, 1)
        
        i_3 += 1
        rsi_3 += 0x10
    while (i_3 s< *(arg1 + 0x3b0))

*arg2 = r15
arg2[1] = rdi_1

if (rdi_1 != 0)
    rdi_1[1].d += 1

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp14_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp15_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

return arg2
