// 函数: sub_1421ff820
// 地址: 0x1421ff820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = (*(arg1 + 0x88)).b
void* rbx_1 = zx.q(arg3) + arg5
void var_28
int128_t zmm2

if ((rax & 1) != 0)
    int64_t var_40_1 = 0
    
    if ((rax & 4) != 0)
        zmm2 = *(arg2 + 0x12c)
    else
        zmm2 = *(arg5 + 0xc)
    
    int64_t* rax_1 = sub_141fe56b0(arg1 + 0x40, &var_28, zmm2, arg4, (*(arg2 + 0x18)).d, nullptr)
    int64_t zmm0_1 = *rax_1
    int64_t zmm3_1 = zmm0_1.d
    zmm2 = zmm0_1:4.d
    zmm0_1.d = zmm3_1.d f+ *rbx_1
    arg4 = rax_1[1].d
    *rbx_1 = zmm0_1.d
    zmm0_1.d = zmm2.q.d f+ *(rbx_1 + 4)
    *(rbx_1 + 4) = zmm0_1.d
    zmm0_1.d = arg4.q.d f+ *(rbx_1 + 8)
    *(rbx_1 + 8) = zmm0_1.d
    int32_t rax_3 = *(rbx_1 + 0x14)
    *(rbx_1 + 0x3c) = *(rbx_1 + 0xc)
    *(rbx_1 + 0x44) = rax_3
    zmm3_1.d = zmm3_1.d f+ *(rbx_1 + 0xc)
    zmm2.d = zmm2.d f+ *(rbx_1 + 0x10)
    arg4.d = arg4.d f+ *(rbx_1 + 0x14)
    *(rbx_1 + 0xc) = zmm3_1.d
    *(rbx_1 + 0x10) = zmm2.d
    *(rbx_1 + 0x14) = arg4.d

char rax_4 = (*(arg1 + 0xd8)).b

if ((rax_4 & 1) != 0)
    int64_t var_40_2 = 0
    
    if ((rax_4 & 4) != 0)
        zmm2 = *(arg2 + 0x12c)
    else
        zmm2 = *(arg5 + 0xc)
    
    int64_t* rax_5 = sub_141fe56b0(arg1 + 0x90, &var_28, zmm2, arg4, (*(arg2 + 0x18)).d, nullptr)
    int32_t rax_6 = rax_5[1].d
    int64_t var_38_2 = *rax_5
    int64_t zmm0_2
    zmm0_2.d = var_38_2.d.d f+ *(rbx_1 + 0x18)
    arg4.d = var_38_2:4.d.d f+ *(rbx_1 + 0x1c)
    *(rbx_1 + 0x18) = zmm0_2.d
    zmm0_2.d = rax_6.d f+ *(rbx_1 + 0x20)
    *(rbx_1 + 0x1c) = arg4.d
    *(rbx_1 + 0x20) = zmm0_2.d

int32_t result = *(arg1 + 0x128)

if ((result.b & 1) != 0)
    int64_t var_40_3 = 0
    
    if ((result.b & 4) != 0)
        zmm2 = *(arg2 + 0x12c)
    else
        zmm2 = *(arg5 + 0xc)
    
    int64_t* rax_7 = sub_141fe56b0(arg1 + 0xe0, &var_28, zmm2, arg4, (*(arg2 + 0x18)).d, nullptr)
    int64_t zmm0_3 = *rax_7
    result = rax_7[1].d
    int64_t zmm3_2 = zmm0_3.d
    int64_t zmm2_1 = zmm0_3:4.d
    zmm0_3.d = zmm3_2.d f+ *(rbx_1 + 0x24)
    int64_t result_1 = result
    *(rbx_1 + 0x24) = zmm0_3.d
    zmm0_3.d = zmm2_1.d f+ *(rbx_1 + 0x28)
    *(rbx_1 + 0x28) = zmm0_3.d
    zmm0_3.d = result_1.d f+ *(rbx_1 + 0x2c)
    *(rbx_1 + 0x2c) = zmm0_3.d
    zmm3_2.d = zmm3_2.d f+ *(rbx_1 + 0x30)
    zmm2_1.d = zmm2_1.d f+ *(rbx_1 + 0x34)
    result_1.d = result_1.d f+ *(rbx_1 + 0x38)
    *(rbx_1 + 0x30) = zmm3_2.d
    *(rbx_1 + 0x34) = zmm2_1.d
    *(rbx_1 + 0x38) = result_1.d

return result
