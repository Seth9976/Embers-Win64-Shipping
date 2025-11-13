// 函数: sub_14091d1d0
// 地址: 0x14091d1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[1]
int64_t* rdi = nullptr

if (rbx == 0)
    return 

int32_t rax = 0
bool z_1

if (0 == rbx[1].d)
    rbx[1].d = 0
    z_1 = true
else
    rax = rbx[1].d
    z_1 = false

if (z_1)
    return 

while (true)
    bool z_2
    
    if (rax == rbx[1].d)
        rbx[1].d = rax + 1
        z_2 = true
    else
        rbx[1].d
        z_2 = false
    
    if (z_2)
        break
    
    rax = 0
    bool z_3
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_3 = true
    else
        rax = rbx[1].d
        z_3 = false
    
    if (z_3)
        return 

if (rbx == 0)
    return 

void* r14_1 = *arg1

if (r14_1 != 0)
    char var_68
    sub_14093c750(&var_68, 1)
    int64_t* var_78 = nullptr
    int32_t i_2 = 0
    sub_140918550(r14_1 + 0x38, &var_78)
    void var_40
    int64_t rax_1 = sub_140ac6680(&var_40)
    char r15_1 = var_68
    
    if (arg1[3].d != 0)
        int64_t* rcx_4 = arg1[2]
        
        if (rcx_4 != 0)
            int64_t rdx_2 = *rcx_4
            
            if ((*(rdx_2 + 0x28))(rcx_4, rdx_2) != 0)
                if (arg1[3].d != 0)
                    rdi = arg1[2]
                
                (*(*rdi + 0x50))(rdi, zx.q(r15_1), &var_78, rax_1)
    
    int32_t i_1 = i_2
    int64_t* rdi_1 = var_78
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_6 = *rdi_1
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rdi_1 = &rdi_1[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rdi_1 = var_78
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    int64_t* var_38
    
    if (var_38 != 0)
        var_38[1].d -= 1
        
        if (var_38[1].d == 1)
            (**var_38)(var_38)
            int32_t rax_6 = *(var_38 + 0xc)
            *(var_38 + 0xc) -= 1
            
            if (rax_6 == 1)
                (*(*var_38 + 8))(var_38, 1)
    
    int64_t var_50
    
    if (var_50 != 0)
        sub_140a74f90(var_50)
    
    int64_t var_60
    
    if (var_60 != 0)
        sub_140a74f90(var_60)

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t rbp_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rbp_1 == 1)
    (*(*rbx + 8))(rbx, zx.q(rbp_1))
