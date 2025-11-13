// 函数: sub_140665cf0
// 地址: 0x140665cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_50
__builtin_memset(&var_50, 0, 0x1c)
int64_t var_30 = 0
int64_t* var_28 = nullptr
void var_58
int64_t r14

if (sub_140664d90(arg1, &var_58, arg3) == 0 || var_30 == 0)
    r14.b = 0
else
    int64_t var_68 = var_30
    int64_t* rdi_1 = var_28
    
    if (var_28 != 0)
        var_28[1].d += 1
    
    if (&var_68 != arg2)
        var_68.o = *arg2
        rdi_1 = var_28
        *arg2 = var_68.o
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    r14.b = 1

if (var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        (**var_28)(var_28)
        int32_t temp1_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_28 + 8))(var_28, 1)

int32_t i_2
int32_t i_1 = i_2
void* var_40

if (i_1 != 0)
    int64_t* rdi_2 = var_40 + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_2
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp6_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_2 = &rdi_2[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (var_40 != 0)
    sub_140a74f90(var_40)

int64_t rcx_7 = var_50

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return zx.q(r14.b)
