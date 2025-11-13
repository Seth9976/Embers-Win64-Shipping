// 函数: sub_1409173d0
// 地址: 0x1409173d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_50
__builtin_memset(&var_50, 0, 0x30)
void var_58
int64_t var_40
int64_t var_30
int64_t* var_28

if (sub_140664d90(*arg1, &var_58, arg3) == 0 || var_30 == 0)
    if (var_28 != 0)
        var_28[1].d -= 1
        
        if (var_28[1].d == 1)
            (**var_28)(var_28)
            int32_t temp1_1 = *(var_28 + 0xc)
            *(var_28 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_28 + 8))(var_28, 1)
    
    sub_140627040(&var_40)
    int64_t rcx_4 = var_50
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t rax_3
    rax_3.b = 0
    return rax_3

int64_t* rdi = var_28
int64_t var_68 = var_30

if (var_28 != 0)
    var_28[1].d += 1

if (&var_68 != arg2)
    var_68.o = *arg2
    rdi = var_28
    *arg2 = var_68.o

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp4_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        (**var_28)(var_28)
        int32_t temp5_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_28 + 8))(var_28, 1)

sub_140627040(&var_40)
int64_t rcx_10 = var_50

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rax_9
rax_9.b = 1
return rax_9
