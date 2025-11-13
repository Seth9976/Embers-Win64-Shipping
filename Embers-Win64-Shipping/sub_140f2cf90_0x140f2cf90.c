// 函数: sub_140f2cf90
// 地址: 0x140f2cf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x96] != 0)
    return 

*(arg1 + 0x4cc) |= 0x48
void* (* var_38)(int64_t* arg1, char arg2, int128_t arg3 @ zmm2) = sub_140f63490
int32_t var_30_1 = 0
var_38.o = var_38.o
void var_28
void var_18
int64_t* rax_2 = sub_140e20c50(arg1, &var_28, zx.o(0), sub_140dd1ff0(&var_18, arg1, &var_38))
int64_t* rbx_1 = rax_2[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&arg1[0x96] == &var_38)
label_140f2d04d:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    arg1[0x96] = *rax_2
    int64_t* rdi_1 = arg1[0x97]
    
    if (rbx_1 == rdi_1)
        goto label_140f2d04d
    
    arg1[0x97] = rbx_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp4_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

sub_140e19ef0(arg1, 5)
