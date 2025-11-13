// 函数: sub_140d88e50
// 地址: 0x140d88e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg1)
int32_t rdx = 0
int64_t var_38 = 0
int32_t r8 = 0
int64_t var_30 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        r8 = var_30:4.d
        rdx = var_30.d
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    var_30.d = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, arg2, (rbx_1.d + 1) * 2)

void var_28
int64_t* rax_2 = sub_140aae2f0(&var_28, &var_38)
int64_t rdx_6 = *(&data_143e20600 + rbp * 0x18)
*(&data_143e20600 + rbp * 0x18) = *rax_2
*rax_2 = rdx_6
int64_t rdx_7 = *(rbp * 0x18 + 0x143e20608)
*(rbp * 0x18 + 0x143e20608) = rax_2[1]
rax_2[1] = rdx_7
int32_t result = rax_2[2].d
*(rbp * 0x18 + 0x143e20610) = result
int64_t* var_20

if (var_20 != 0)
    result = var_20[1].d
    var_20[1].d -= 1
    
    if (result == 1)
        result = (**var_20)(var_20)
        int32_t rsi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rsi_1 == 1)
            result = (*(*var_20 + 8))(var_20, zx.q(rsi_1))

int64_t rcx_8 = var_38

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
