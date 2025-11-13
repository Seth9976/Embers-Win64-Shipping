// 函数: sub_140ec85e0
// 地址: 0x140ec85e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg2 + 0x70)

if (rdi == 0)
    return 

int64_t rbx_1 = *rdi
sub_140ec00f0()

if ((*(rbx_1 + 0x58))(rdi, &data_143e29fe0) == 0)
    return 

int64_t* rsi_1 = *(arg2 + 0x78)
void* r14_1 = *(arg2 + 0x70)

if (rsi_1 != 0)
    rsi_1[1].d += 1

if (r14_1 != 0)
    *(arg1 + 0x4dc) = 0
    int64_t* rbx_2 = data_143e243c8
    void arg_10
    int128_t* rax_2 = (*(*rbx_2 + 0x30))(rbx_2, *sub_140b58260(&arg_10, Docking.Cross.Tint", 1), 0, 
        &data_1439ae6b8)
    char var_38_1 = 1
    int64_t var_30 = 0
    int32_t var_28_1 = 0
    int128_t zmm0_1 = *rax_2
    *(arg1 + 0x338) = 1
    int128_t var_48 = zmm0_1
    *(arg1 + 0x328) = zmm0_1
    sub_1407473e0(arg1 + 0x340, &var_30)
    sub_140745b20(&var_30)
    __builtin_memset(&var_48, 0, 0x14)
    sub_140ed9f90(r14_1, &var_48, arg2)
    int64_t* rcx_6 = var_48:8.q
    
    if (rcx_6 != 0)
        int32_t temp1_1 = *(rcx_6 + 0xc)
        *(rcx_6 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_6 + 8))(rcx_6, 1)

if (rsi_1 == 0)
    return 

rsi_1[1].d -= 1

if (rsi_1[1].d != 1)
    return 

(**rsi_1)(rsi_1)
int32_t temp2_1 = *(rsi_1 + 0xc)
*(rsi_1 + 0xc) -= 1

if (temp2_1 == 1)
    (*(*rsi_1 + 8))(rsi_1, 1)
