// 函数: sub_140a15c80
// 地址: 0x140a15c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143ceffe0 == 0)
    return 

uint128_t zmm0 = data_143ceffe0.o
uint128_t var_18 = zmm0
void* rax_1 = _mm_bsrli_si128(zmm0, 8).q

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_140a16840(&data_14399fc10, &var_18)
int64_t* rbx_1 = data_143ceffe8
data_143ceffe0 = 0

if (rbx_1 != 0)
    data_143ceffe8 = 0
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

MFShutdown()
