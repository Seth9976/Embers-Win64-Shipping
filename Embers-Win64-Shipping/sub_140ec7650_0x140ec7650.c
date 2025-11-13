// 函数: sub_140ec7650
// 地址: 0x140ec7650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg3 + 0x70)

if (rsi == 0)
    return 

int64_t rbx_1 = *rsi
sub_140ec00f0()

if ((*(rbx_1 + 0x58))(rsi, &data_143e29fe0) == 0)
    return 

void* r14_1 = *(arg3 + 0x70)
int64_t* rdi_1 = *(arg3 + 0x78)

if (rdi_1 != 0)
    rdi_1[1].d += 1

if (r14_1 != 0)
    int64_t* rbx_2 = *(arg1 + 0x10)
    int64_t rsi_1 = 0
    
    if (rbx_2 != 0)
        int32_t rax_1 = rbx_2[1].d
        
        if (rax_1 != 0)
            rbx_2[1].d = rax_1 + 1
            rax_1.b = 1
        
        if (rax_1.b == 0)
            rbx_2 = nullptr
        
        if (rbx_2 != 0)
            int32_t rax_2 = rbx_2[1].d
            rsi_1 = *(arg1 + 8)
            rbx_2[1].d = rax_2
            
            if (rax_2 == 0)
                (**rbx_2)(rbx_2)
                int32_t temp6_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t var_18 = rsi_1
    int64_t* var_10_1 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    char rsi_2 = sub_140eadaa0(r14_1, &var_18, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            int64_t rdx_1 = *rbx_2
            (*rdx_1)(rbx_2, rdx_1)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
        
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (rsi_2 != 0)
        *(arg1 + 0x3f8) = 1

if (rdi_1 == 0)
    return 

rdi_1[1].d -= 1

if (rdi_1[1].d != 1)
    return 

(**rdi_1)(rdi_1)
int32_t temp1_1 = *(rdi_1 + 0xc)
*(rdi_1 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rdi_1 + 8))(rdi_1, 1)
