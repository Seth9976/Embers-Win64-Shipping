// 函数: sub_140ec7da0
// 地址: 0x140ec7da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg3 + 0x70)

if (r14 == 0)
    return 

int64_t rbx_1 = *r14
sub_140ec01c0()

if ((*(rbx_1 + 0x58))(r14, &data_143e29fc8) == 0)
    return 

int64_t* rbx_2 = *(arg3 + 0x78)
int64_t rbp_1 = *(arg3 + 0x70)

if (rbx_2 != 0)
    rbx_2[1].d += 1
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

if (rbp_1 == 0)
    return 

int64_t var_28 = *(arg1 + 0x3a0)
void* rax_4 = *(arg1 + 0x3a8)
void* var_20_1 = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

int64_t* rbx_3 = *(arg1 + 0x398)
void* const rcx_3 = nullptr

if (rbx_3 != 0)
    int32_t rax_5 = rbx_3[1].d
    
    if (rax_5 != 0)
        rbx_3[1].d = rax_5 + 1
        rax_5.b = 1
    
    if (rax_5.b == 0)
        rbx_3 = nullptr
    
    if (rbx_3 != 0)
        rcx_3 = *(arg1 + 0x390)

sub_140ec6c90(rcx_3, &var_28, arg2, arg3)

if (rbx_3 == 0)
    return 

rbx_3[1].d -= 1

if (rbx_3[1].d != 1)
    return 

(**rbx_3)(rbx_3)
int32_t temp3_1 = *(rbx_3 + 0xc)
*(rbx_3 + 0xc) -= 1

if (temp3_1 == 1)
    (*(*rbx_3 + 8))(rbx_3, 1)
