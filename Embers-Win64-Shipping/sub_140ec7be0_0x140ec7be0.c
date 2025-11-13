// 函数: sub_140ec7be0
// 地址: 0x140ec7be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg3 + 0x70)

if (rdi == 0)
    return 

int64_t rbx_1 = *rdi
sub_140ec00f0()

if ((*(rbx_1 + 0x58))(rdi, &data_143e29fe0) == 0)
    return 

int64_t* rsi_1 = *(arg3 + 0x78)
void* r15_1 = *(arg3 + 0x70)

if (rsi_1 != 0)
    rsi_1[1].d += 1

if (r15_1 != 0)
    *(arg1 + 0x4dc) = 1
    int64_t* rbx_2 = data_143e243c8
    void arg_18
    int128_t* rax_2 =
        (*(*rbx_2 + 0x30))(rbx_2, *sub_140b58260(&arg_18, Docking.Cross.HoveredTint", 1), 0, 
        &data_1439ae6b8)
    int64_t rdi_2 = 0
    char var_38_1 = 1
    int64_t var_30 = 0
    int32_t var_28_1 = 0
    int128_t zmm0_1 = *rax_2
    *(arg1 + 0x338) = 1
    int128_t var_48 = zmm0_1
    *(arg1 + 0x328) = zmm0_1
    sub_1407473e0(arg1 + 0x340, &var_30)
    sub_140745b20(&var_30)
    int64_t* rbx_3 = *(arg1 + 0x4d0)
    int32_t rcx_5 = *(arg1 + 0x4d8)
    
    if (rbx_3 != 0)
        int32_t rax_3 = rbx_3[1].d
        
        if (rax_3 != 0)
            rbx_3[1].d = rax_3 + 1
            rax_3.b = 1
        
        if (rax_3.b == 0)
            rbx_3 = nullptr
        
        if (rbx_3 != 0)
            rdi_2 = *(arg1 + 0x4c8)
    
    var_48.q = rdi_2
    var_48:8.q = rbx_3
    
    if (rbx_3 != 0)
        *(rbx_3 + 0xc) += 1
    
    var_38_1.d = rcx_5
    sub_140ed9f90(r15_1, &var_48, arg3)
    int64_t* rcx_7 = var_48:8.q
    
    if (rcx_7 != 0)
        int32_t temp2_1 = *(rcx_7 + 0xc)
        *(rcx_7 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rcx_7 + 8))(rcx_7, 1)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp4_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)

if (rsi_1 == 0)
    return 

rsi_1[1].d -= 1

if (rsi_1[1].d != 1)
    return 

(**rsi_1)(rsi_1)
int32_t temp1_1 = *(rsi_1 + 0xc)
*(rsi_1 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rsi_1 + 8))(rsi_1, 1)
