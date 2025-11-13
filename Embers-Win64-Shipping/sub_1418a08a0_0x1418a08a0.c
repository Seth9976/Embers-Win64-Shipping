// 函数: sub_1418a08a0
// 地址: 0x1418a08a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0xa0)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    int32_t rbx_1 = arg5[1].d
    void var_90
    int64_t* rax = sub_1409f5d90(&var_90, arg3)
    result[1] = arg1
    result[2] = arg2
    *result = &data_142fe8600
    sub_1409f5d90(&result[3], rax)
    sub_140596d10(&result[0xd], arg4)
    sub_140596d10(&result[0xf], arg5)
    int32_t var_94 = 6
    int512_t zmm0_1
    zmm0_1.o = zx.o(0)
    int32_t var_98 = 0
    result[0x11].b = rbx_1 s> 1
    result[0x12] = arg6
    result[0x13].d = 0
    *(result + 0x9c) = 0
    (*(*result[0x12] + 0x18))(zmm0_1, &var_94, &var_98)
    rax[9].d = 0
    int64_t rcx_5 = rax[8]
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    sub_14059ad90(rax, 0)
    int64_t rcx_7 = rax[4]
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t rcx_8 = *rax
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

arg3[9].d = 0
int64_t rcx_9 = arg3[8]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_14059ad90(arg3, 0)
int64_t rcx_11 = arg3[4]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = *arg3

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

return result
