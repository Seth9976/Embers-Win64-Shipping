// 函数: sub_140a15f00
// 地址: 0x140a15f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e4d740
sub_140a169c0(arg1)
sub_140a16940(arg1)
sub_1419a21e0(0)
int32_t i_3 = arg1[0xe].d

if (i_3 != 0)
    int64_t* rdi_1 = &arg1[0xd][1]
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_3 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_3 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 = &rdi_1[2]
        i = i_3
        i_3 -= 1
    while (i != 1)

arg1[0xe].d = 0

if (*(arg1 + 0x74) != 0)
    sub_1405a5410(&arg1[0xd], 0)

sub_1405d1550(&arg1[0xf])
sub_140596e10(&arg1[0xd])
int64_t* rbx_2 = arg1[0xc]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rbp_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rbp_1))

int64_t* rbx_3 = arg1[0xa]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t rcx_10 = arg1[7]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int32_t i_2 = arg1[5].d
int64_t* rbx_4 = arg1[4]

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_11 = *rbx_4
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        rbx_4 = &rbx_4[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rbx_4 = arg1[4]

if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

sub_140596eb0(&arg1[1])
*arg1 = &data_142e4cea0
return &data_142e4cea0
