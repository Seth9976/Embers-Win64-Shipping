// 函数: sub_141d8dc30
// 地址: 0x141d8dc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
sub_141d8dec0(arg1)
void*** rax = j_sub_140a82f30(0xf0)
void*** r14 = rax
int64_t* var_20
int64_t* rdi

if (rax == 0)
    rdi = 0.q
    r14 = nullptr
else
    rdi = *(arg1 + 0x20)
    int64_t rbp_1 = *(arg1 + 0x18)
    
    if (rdi != 0)
        rdi[1].d += 1
    
    int64_t var_28 = *(arg1 + 8)
    int64_t* rax_2 = *(arg1 + 0x10)
    var_20 = rax_2
    
    if (rax_2 != 0)
        rax_2[1].d += 1
    
    sub_140ddab60(r14, &var_28)
    *r14 = &data_1432385b0
    r14[0x17] = rbp_1
    r14[0x18] = rdi
    
    if (rdi != 0)
        rdi[1].d += 1
    
    InitializeCriticalSection(&r14[0x19])
    SetCriticalSectionSpinCount(&r14[0x19], 0xfa0)
    rbp = 3

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 != 0)
    rax_3[1].d = 1
    *rax_3 = &data_142d42ea8
    *(rax_3 + 0xc) = 1
    rax_3[2] = r14

*arg2 = r14
arg2[1] = rax_3

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp2_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_20 + 8))(var_20, 1)

if ((rbp.b & 1) != 0 && rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return arg2
