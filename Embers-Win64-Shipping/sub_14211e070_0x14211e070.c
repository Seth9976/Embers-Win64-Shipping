// 函数: sub_14211e070
// 地址: 0x14211e070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg1
int64_t var_68
sub_140596d10(&var_68, arg2)
int32_t var_58 = 0x1f
char var_38 = 3
int128_t zmm0_1 = *arg5
int32_t var_34 = 0xffffffff
char var_28 = 0
int64_t var_20
sub_140596d10(&var_20, arg3)
int64_t rbx_1 = sx.q(data_143a2e968)
int32_t rax_2 = (rbx_1 + 1).d
bool cond:0 = rax_2 s<= data_143a2e96c
data_143a2e968 = rax_2

if (not(cond:0))
    sub_1405fdd60(&data_143a2e960)

int128_t* rbx_3 = rbx_1 * 0x70 + data_143a2e960
*rbx_3 = zmm0
sub_140596d10(&rbx_3[1], &var_68)
rbx_3[2].d = var_58
*(rbx_3 + 0x24) = arg4
rbx_3[4].b = var_38
*(rbx_3 + 0x44) = var_34
*(rbx_3 + 0x48) = arg6
rbx_3[5].b = var_28
rbx_3[3] = zmm0_1
int64_t* result = sub_140596d10(rbx_3 + 0x58, &var_20)

if (var_28 == 0)
    int64_t rbx_4 = sx.q(data_143a2e978)
    int32_t rax_9 = (rbx_4 + 1).d
    bool cond:1_1 = rax_9 s<= data_143a2e97c
    data_143a2e978 = rax_9
    
    if (not(cond:1_1))
        sub_1405a4f90(&data_143a2e970)
    
    result = data_143a2e970
    *(result + rbx_4 * 0x10) = *arg1

int64_t rcx_6 = var_20

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = var_68

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
