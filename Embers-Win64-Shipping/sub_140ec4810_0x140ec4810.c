// 函数: sub_140ec4810
// 地址: 0x140ec4810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax
rax.b = 0
char var_34 = 0
int64_t var_30 = 0
int32_t zmm0 = (zx.o(0)).d
int32_t var_38 = 0
int32_t var_28 = 0

if (arg4 u< 0x7fffffff)
    zmm0 = float.s(zx.q(arg4))
    rax.b = 1
    char var_34_1 = 1
    int32_t var_38_1 = zmm0

int64_t var_18 = 0
int32_t var_10 = 0
int32_t var_20 = zmm0
char var_1c = rax.b
sub_140692f90(&var_18, &var_30)
void* var_48
void** rax_1 = sub_140ec4a10(*(arg1 + 8), &var_48, *(arg1 + 0x79), arg3, &var_20)
*arg2 = *rax_1
void* rcx_3 = rax_1[1]
arg2[1] = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 8) += 1

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp1_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

sub_140745b20(&var_30)
return arg2
