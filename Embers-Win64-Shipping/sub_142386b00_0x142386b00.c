// 函数: sub_142386b00
// 地址: 0x142386b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x12) != 0 || *(arg1 + 0x11) != 0)
    return 

arg1[2].b = 1
int64_t* rbx_1 = arg1[1]
int64_t* r14_1 = nullptr
int64_t* rcx = nullptr

if (rbx_1 != 0)
    int32_t rax_1 = rbx_1[1].d
    
    if (rax_1 != 0)
        rbx_1[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rcx = *arg1

int64_t* var_18 = rcx
int32_t i_3 = rbx_1.d

if (rbx_1 != 0)
    rbx_1[1].d += 1

sub_14238bbe0(&arg1[3], &var_18, &arg1[5])

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_14239b010(arg1)
void** rax
int512_t zmm1_1
rax, zmm1_1 = sub_142392550(arg1)

if (arg1[0x12].d s<= 0)
    return 

int64_t rbx_2 = arg1[0x11]
int32_t i_2 = arg1[0x12].d
var_18 = nullptr
i_3 = i_2

if (i_2 != 0)
    sub_1405a4be0(&var_18, i_2, 0)
    r14_1 = var_18
    int64_t* rcx_7 = r14_1
    int64_t* rbx_3 = rbx_2 - r14_1
    int32_t i
    
    do
        *rcx_7 = *(rbx_3 + rcx_7)
        rax = *(rbx_3 + rcx_7 + 8)
        rcx_7[1] = rax
        
        if (rax != 0)
            *(rax + 0xc) += 1
        
        rcx_7 = &rcx_7[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    i_2 = i_3

int64_t* rdi_1 = r14_1
void* rbp_3 = &r14_1[sx.q(i_2) * 2]

if (r14_1 != rbp_3)
    do
        int64_t* rbx_4 = rdi_1[1]
        
        if (rbx_4 != 0)
            rax = zx.q(rbx_4[1].d)
            
            if (rax.d != 0)
                int32_t rax_5 = rax.d + 1
                rbx_4[1].d = rax_5
                int64_t* rcx_8 = *rdi_1
                
                if (rcx_8 != 0)
                    zmm1_1 = sub_14239b8a0(rcx_8, zmm1_1)
                    rax_5 = rbx_4[1].d
                
                rbx_4[1].d = rax_5 - 1
                
                if (rax_5 == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp6_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
        
        rdi_1 = &rdi_1[2]
    while (rdi_1 != rbp_3)

if (i_2 != 0)
    void* rbx_5 = &r14_1[1]
    int32_t i_1
    
    do
        int64_t* rcx_11 = *rbx_5
        
        if (rcx_11 != 0)
            int32_t temp4_1 = *(rcx_11 + 0xc)
            *(rcx_11 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rcx_11 + 8))(rcx_11, 1)
        
        rbx_5 += 0x10
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (r14_1 != 0)
    sub_140a74f90(r14_1)
