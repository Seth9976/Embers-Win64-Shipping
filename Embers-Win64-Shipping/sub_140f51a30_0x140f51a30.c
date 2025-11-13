// 函数: sub_140f51a30
// 地址: 0x140f51a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    return 

int64_t (* rsi_1)(int64_t* arg1, void* arg2, uint128_t arg3 @ zmm0, int512_t arg4 @ zmm1) =
    *(arg1 + 0x440)
*(arg1 + 0x491) = arg2
int64_t (* var_18)(int64_t* arg1, void* arg2, uint128_t arg3 @ zmm0, int512_t arg4 @ zmm1)

if (rsi_1 != 0)
    int64_t* rbx_1 = *(arg1 + 0x448)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    var_18 = rsi_1
    int64_t* var_10_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    sub_140f60e50(*(arg1 + 0x450), &var_18, 1)
    var_18 = rsi_1
    int64_t* var_10_2 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    sub_140ed5b90(*(arg1 + 0x450), &var_18, 0)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rcx_4 = *(arg1 + 0x10)
int64_t rdx_2 = 0

if (rcx_4 != 0)
    int32_t rax_3 = rcx_4[1].d
    
    if (rax_3 != 0)
        rcx_4[1].d = rax_3 + 1
        rax_3.b = 1
    
    if (rax_3.b == 0)
        rcx_4 = nullptr
    
    if (rcx_4 != 0)
        rdx_2 = *(arg1 + 8)

int64_t var_28 = rdx_2
int64_t* arg_18 = &var_28
void* rcx_5 = data_143e29f28
int64_t** var_10_3 = &arg_18
var_18 = sub_140f2d340
sub_140e645d0(rcx_5, &var_18, 0)

if (rcx_4 == 0)
    return 

rcx_4[1].d -= 1

if (rcx_4[1].d != 1)
    return 

(**rcx_4)(rcx_4)
int32_t temp1_1 = *(rcx_4 + 0xc)
*(rcx_4 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rcx_4 + 8))(rcx_4, 1)
