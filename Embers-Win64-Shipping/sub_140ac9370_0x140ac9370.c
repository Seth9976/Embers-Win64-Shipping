// 函数: sub_140ac9370
// 地址: 0x140ac9370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int32_t r8 = rax - 1

if (rax == 0)
    r8 = 0

sub_140a20ba0(arg1, *arg2, r8)
sub_140a20ba0(arg1, &data_142dc30a4, 1)
void var_28
int64_t* rax_1
int512_t zmm1
rax_1, zmm1 = sub_140ab1ed0(arg3, &var_28)
sub_140aca310(arg1, rax_1, 1, zmm1, arg5)
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rdi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_20 + 8))(var_20, zx.q(rdi_1))

int64_t rcx_6 = *(arg4 + 8)
int64_t* arg_8
int64_t** var_30 = &arg_8
arg_8 = arg1
int64_t (* var_38)(int64_t* arg1, int64_t* arg2, int32_t* arg3, int512_t arg4 @ zmm1, 
    int512_t arg5 @ zmm2) = sub_140aa39e0
(*arg4)(rcx_6, &var_38)
return sub_140a20ba0(arg1, &data_142da76f4, 1) __tailcall
