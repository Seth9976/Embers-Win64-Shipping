// 函数: sub_141b05f60
// 地址: 0x141b05f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_68 = 0
int64_t* rdi = arg2
int128_t var_78 = *arg1
int128_t var_60 = zx.o(0)
void var_48
sub_1405bb0c0(arg3, &var_48, arg2)
void var_18
void* rax_1 = sub_140d3c6e0(&var_18)

if (rax_1 == 0)
    void* rax_2 = sub_1405bdd80(&var_48)
    
    if (rax_2 != 0)
        int64_t rcx_4 = sx.q(*(rax_2 + 0x4c))
        int64_t var_20
        int128_t* rcx_5 = rcx_4 + var_20
        
        if (rcx_4 != neg.q(var_20))
            *rcx_5 = var_78
            rcx_5[1].b = var_68
            int64_t* rbx_1 = var_60:8.q
            int64_t var_88 = var_60.q
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            if (&var_88 != rcx_5 + 0x18)
                var_88.o = *(rcx_5 + 0x18)
                *(rcx_5 + 0x18) = var_88.o
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp5_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
else
    sub_141af21e0(rdi, rax_1, &var_78)

void var_10
int64_t result = sub_140d3c6e0(&var_10)

if (result != 0)
    int64_t r9_1 = *rdi
    result = (*(r9_1 + 0x210))(rdi, result, 0, r9_1)

int64_t var_30

if (var_30 != 0)
    result = sub_140a74f90(var_30)

int64_t* rbx_2 = var_60:8.q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
