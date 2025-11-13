// 函数: sub_140e8fd80
// 地址: 0x140e8fd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg3
int64_t var_48 = *arg4
void* rax_1 = arg4[1]
int128_t var_58 = zmm0
void* var_40 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int32_t var_38 = arg4[2].d
char var_30 = arg4[3].b
int64_t var_28 = 0
int32_t var_20 = 0
sub_140692f90(&var_28, &arg4[4])
int64_t* rbx = *(arg2 + 0x18)
int64_t rcx_1 = 0

if (rbx != 0)
    int32_t rax_4 = rbx[1].d
    
    if (rax_4 != 0)
        rbx[1].d = rax_4 + 1
        rax_4.b = 1
    
    if (rax_4.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx_1 = *(arg2 + 0x10)

int64_t var_68

if (rcx_1 == 0)
    var_68 = 0
else
    var_68 = rcx_1 - 8

int64_t* var_60 = rbx

if (rbx != 0)
    rbx[1].d += 1

sub_140e8fb30(arg1, &var_68, &var_58, &var_48)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp4_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx + 8))(rbx, 1)

sub_140745b20(&arg4[4])
int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return arg1
