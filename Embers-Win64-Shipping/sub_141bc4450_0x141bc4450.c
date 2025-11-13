// 函数: sub_141bc4450
// 地址: 0x141bc4450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0

if (*(arg1 + 0x128) == 0)
    return 

int64_t* rcx = *(arg2 + 0x30)
uint128_t var_28
void* rdx_1
int32_t rdi_1

if (rcx == 0)
    uint128_t zmm0 = data_143e244b0.o
    var_28 = zmm0
    void* rax_1 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    rdx_1 = &var_28
    rdi_1 = 2
else
    arg_8.b = 0
    int32_t* var_30_1 = &arg_8
    void** (* var_38)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = sub_141b970e0
    void var_18
    sub_141befea0(rcx, &var_18, &var_38)
    rdx_1 = &var_18
    rdi_1 = 1

sub_140f8a510(*(arg1 + 0x128), rdx_1)

if ((rdi_1.b & 2) != 0)
    int64_t* rbx_1 = var_28:8.q
    rdi_1 &= 0xfffffffd
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_10

if ((rdi_1.b & 1) == 0 || var_10 == 0)
    return 

var_10[1].d -= 1

if (var_10[1].d != 1)
    return 

(**var_10)(var_10)
int32_t temp3_1 = *(var_10 + 0xc)
*(var_10 + 0xc) -= 1

if (temp3_1 == 1)
    (*(*var_10 + 8))(var_10, 1)
