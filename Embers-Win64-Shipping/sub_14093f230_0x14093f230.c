// 函数: sub_14093f230
// 地址: 0x14093f230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t* rcx = *(arg1 + 8)
int64_t* var_18
(*(*rcx + 0xd0))(rcx, &var_18)
int64_t* rcx_1 = var_18

if (rcx_1 != 0)
    int512_t zmm0
    zmm0.o = zx.o(0)
    int128_t var_28 = zx.o(0)
    (*(*rcx_1 + 0x58))(zmm0, arg2, &var_28)
    int64_t* rbx_2 = var_28:8.q
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* var_10

if (var_10 == 0)
    return 

var_10[1].d -= 1

if (var_10[1].d != 1)
    return 

(**var_10)(var_10)
int32_t rdi_1 = *(var_10 + 0xc)
*(var_10 + 0xc) -= 1

if (rdi_1 == 1)
    (*(*var_10 + 8))(var_10, zx.q(rdi_1))
