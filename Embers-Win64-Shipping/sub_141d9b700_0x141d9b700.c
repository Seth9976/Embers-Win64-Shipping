// 函数: sub_141d9b700
// 地址: 0x141d9b700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2

if (*(arg1 + 0xe9) == 0 || arg2 s< 0 || arg2 s>= *(arg1 + 0x110) || arg3[1].d == 0)
    return 

int64_t* rax_1 = j_sub_140a82f30(0x18)
int64_t* rbx_1

if (rax_1 == 0)
    rbx_1 = nullptr
else
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int128_t zmm2
    zmm2.q = float.d(performanceCount)
    zmm2.q = zmm2.q f* data_143d796f8
    zmm2.q = zmm2.q f+ 16777216.0
    rbx_1 = sub_141d948f0(rax_1, arg3, zmm2)

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 != 0)
    rax_3[1].d = 1
    *rax_3 = &data_1432398f0
    *(rax_3 + 0xc) = 1
    rax_3[2] = rbx_1

int64_t* var_18 = rbx_1
sub_1409175b0(arg1 + 0x18, &arg_10, &var_18)

if (rax_3 != 0)
    rax_3[1].d -= 1
    
    if (rax_3[1].d == 1)
        (**rax_3)(rax_3)
        int32_t temp1_1 = *(rax_3 + 0xc)
        *(rax_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*rax_3)[1](rax_3, 1)

sub_141d9c010(arg1)
