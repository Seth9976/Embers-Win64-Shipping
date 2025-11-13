// 函数: sub_1420d4630
// 地址: 0x1420d4630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = data_143f5b298

if (rdi == 0)
    return 

void* rax_1 = sub_1424ad0c0()
void* rdx_1 = *(rdi + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

int64_t* rbx_1 = *(rdi + 0xdf8)
int64_t* var_40_1 = rbx_1

if (rbx_1 == 0)
    return 

rax = zx.q(rbx_1[1].d)
void* rsi_1 = &rbx_1[1]

if (rax.d == 0)
    return 

*rsi_1 = rax.d + 1
void* rdx_2 = *(rdi + 0xdf0)

if (rdx_2 != 0)
    int64_t* r15_1 = rdx_2 + 0x910
    
    if (*r15_1 != 0)
        void* r8_2 = arg1[1]
        int64_t r9_1 = *arg1
        
        if (r8_2 != 0)
            *(r8_2 + 8) += 1
            rbx_1 = var_40_1
        
        int64_t rax_2 = *(rdx_2 + 0x738)
        int32_t rcx_1 = arg1[2].d
        *(rdx_2 + 0x738) = r9_1
        int64_t var_38_2 = rax_2
        int64_t* rax_3 = *(rdx_2 + 0x740)
        *(rdx_2 + 0x740) = r8_2
        *(rdx_2 + 0x748) = rcx_1
        int32_t var_28_1 = rcx_1
        char var_20_1 = 1
        int64_t var_18 = 0
        int32_t var_10_1 = 0
        *(rdx_2 + 0x750) = 1
        
        if (&var_18 != rdx_2 + 0x758 && *(rdx_2 + 0x760) != 0)
            int64_t* rcx_2 = *(rdx_2 + 0x758)
            
            if (rcx_2 != 0)
                (*(*rcx_2 + 0x38))(rcx_2, 0)
                int64_t rcx_3 = *(rdx_2 + 0x758)
                
                if (rcx_3 != 0)
                    *(rdx_2 + 0x758) = sub_140a84c80(rcx_3, 0, 0)
                
                *(rdx_2 + 0x760) = 0
        
        sub_140745b20(&var_18)
        
        if (rax_3 != 0)
            rax_3[1].d -= 1
            
            if (rax_3[1].d == 1)
                (**rax_3)(rax_3)
                int32_t rbx_2 = *(rax_3 + 0xc)
                *(rax_3 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    (*(*rax_3 + 8))(rax_3, zx.q(rbx_2))
            
            rbx_1 = var_40_1
        
        int64_t* rdi_3 = *r15_1
        int64_t* rax_9 = sub_140ac6680(arg1)
        int16_t* const rdx_4
        
        if (rax_9[1].d == 0)
            rdx_4 = &data_142d40450
        else
            rdx_4 = *rax_9
        
        (*(*rdi_3 + 0xd8))(rdi_3, rdx_4)

int32_t temp1_1 = *rsi_1
*rsi_1 -= 1

if (temp1_1 != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp2_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp2_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
