// 函数: sub_1406899a0
// 地址: 0x1406899a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 1 && arg1 == 2)
    void*** rax = j_sub_140a82f30(0x130)
    
    if (rax == 0)
        return 0
    
    sub_1406879a0(rax, arg2)
    *rax = &data_142d8bf30
    return rax

void*** rax_3 = j_sub_140a82f30(0x140)

if (rax_3 == 0)
    return nullptr

sub_1406879a0(rax_3, arg2)
*rax_3 = &data_142d8bf60
rax_3[0x26] = 0
rax_3[0x27] = 0
int64_t* rax_4 = sub_1406b06e0()
void* rcx_3 = rax_4[1]

if (rcx_3 != 0)
    *(rcx_3 + 8) += 1
    rcx_3 = rax_4[1]

int64_t rax_5 = *rax_4
void* var_60_1 = rcx_3
int64_t var_68 = rax_5
int64_t var_58_1 = rax_5
int64_t var_50_1 = 0
class Concurrency::task_continuation_context var_48
Concurrency::task_continuation_context::task_continuation_context(&var_48)
int64_t var_30
__builtin_memset(&var_30, 0, 0x22)
char var_38_1 = 0
void var_78
int64_t* rax_6 = sub_14068b550(&var_78, rax_3, &var_68)

if (&rax_3[0x26] != rax_6)
    int64_t rcx_6 = *rax_6
    int64_t rdx_3 = rax_6[1]
    *rax_6 = 0
    rax_6[1] = 0
    int64_t* rbx_2 = rax_3[0x27]
    rax_3[0x26] = rcx_6
    rax_3[0x27] = rdx_3
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t rax_9 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_9 == 1)
                (*(*rbx_2 + 8))(rbx_2)

int64_t* var_70

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        (**var_70)(var_70)
        int32_t rsi_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_70 + 8))(var_70)

*(rax_3 + 0xe2) = 1
return rax_3
