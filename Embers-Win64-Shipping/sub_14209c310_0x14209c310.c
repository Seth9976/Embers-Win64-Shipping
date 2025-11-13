// 函数: sub_14209c310
// 地址: 0x14209c310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg3 + 0x20)

if (rcx == 0)
    return 

char* rax = (*(*rcx + 0x260))(rcx)
char* rbp_1 = rax

if (rax == 0)
    return 

int32_t rax_2 = sub_142082360(arg1)
void* rcx_2 = *(arg3 + 0x20)
int64_t var_48 = 0

if ((not.b(*(*(rcx_2 + 0x20) + 0x280)) & 1) == 0)
    int32_t zmm0_1 = *(arg3 + 0x28)
    
    if (not(arg2[0] f< zmm0_1))
        arg2[0] = arg2[0] f- zmm0_1

char arg_18
int32_t arg_20
int32_t zmm6_1
int32_t zmm7_1
rax, zmm6_1, zmm7_1 = sub_14208c020(arg1, arg2, &var_48, &arg_20, &arg_18)

if (var_48 == 0)
    return 

int64_t rsi

if ((*(arg1 + 0xa8) & 1) != 0 || rax.b != 0)
    rsi.b = 0
else
    rsi.b = 1

rax = sub_140d21950(rbp_1, sub_142545970())

if (rax != 0)
    char* var_68_1
    var_68_1.d = arg_20
    (*(*rax + 0x18))(rax, *(arg1 + 0x90), zx.q(rax_2), var_48, var_68_1, arg_18, rsi.b, zmm7_1)

*(arg3 + 0x28) = zmm6_1
