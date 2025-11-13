// 函数: sub_141bc0210
// 地址: 0x141bc0210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    return 

int64_t* rbp_1 = *(arg1 + 0x440)
int64_t rsi_1 = 0
*(arg1 + 0x489) = arg2
int64_t* arg_18

if (rbp_1 != 0)
    void* rbx_1 = *(arg1 + 0x448)
    arg_18 = rbp_1
    int64_t rax_1 = sub_141bca720(rbx_1, &arg_18)
    sub_1419e1590(rbx_1 + 0x630, 0)
    int64_t r9_1
    
    if (*(rbx_1 + 0x490) != 0)
        int64_t* rcx_2 = *(rbx_1 + 0x488)
        
        if (rcx_2 != 0)
            int64_t rdx_1 = *rcx_2
            char rax_2
            rax_2, r9_1 = (*(rdx_1 + 0x28))(rcx_2, rdx_1)
            
            if (rax_2 != 0)
                int64_t* rcx_3
                
                if (*(rbx_1 + 0x490) == 0)
                    rcx_3 = nullptr
                else
                    rcx_3 = *(rbx_1 + 0x488)
                
                int32_t rax_4
                rax_4, r9_1 = (*(*rcx_3 + 0x48))(rcx_3)
                *(rbx_1 + 0x480) = rax_4
    
    if (*(rbx_1 + 0x480) != 0)
        r9_1.b = 1
        (*(*(rbx_1 + 0x4f8) + 0x28))(rbx_1 + 0x4f8, rax_1, 1, r9_1)
        (*(*(rbx_1 + 0x4f8) + 0x40))(rbx_1 + 0x4f8, 1)
    
    int64_t* rcx_6 = *(arg1 + 0x448)
    rcx_6[0xdd] = rbp_1
    rcx_6[0xde].d = 0
    sub_140f89930(rcx_6)

int64_t* rcx_7 = *(arg1 + 0x10)

if (rcx_7 != 0)
    int32_t rax_7 = rcx_7[1].d
    
    if (rax_7 != 0)
        rcx_7[1].d = rax_7 + 1
        rax_7.b = 1
    
    if (rax_7.b == 0)
        rcx_7 = nullptr
    
    if (rcx_7 != 0)
        rsi_1 = *(arg1 + 8)

void* rcx_8 = data_143e29f28
int64_t var_38
arg_18 = &var_38
var_38 = rsi_1
int64_t** var_20_1 = &arg_18
int64_t (* var_28)(int64_t* arg1, void* arg2, uint128_t arg3 @ zmm0, int512_t arg4 @ zmm1) =
    sub_140f2d340
sub_140e645d0(rcx_8, &var_28, 0)

if (rcx_7 == 0)
    return 

rcx_7[1].d -= 1

if (rcx_7[1].d != 1)
    return 

(**rcx_7)(rcx_7)
int32_t temp1_1 = *(rcx_7 + 0xc)
*(rcx_7 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rcx_7 + 8))(rcx_7, 1)
