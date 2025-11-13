// 函数: sub_140a169c0
// 地址: 0x140a169c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
int64_t rax_1 = (*(*arg1 + 0x28))(arg1, &var_38)
int64_t rdx_1 = *arg1
int64_t* rax_2 = (*(rdx_1 + 0x50))(arg1, rdx_1)
int64_t rbp
rbp.b = 0
*(rax_2 + 0x14) += 1
int32_t rcx_1 = rax_2[1].d
int32_t rax_3 = *(rax_2 + 0x14)
int64_t rdi = sx.q(rcx_1 - 1)

if (rcx_1 - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp2_1
    
    do
        int64_t rax_4 = *rax_2
        
        if (*(rbx_2 + rax_4 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_3 = *(rbx_2 + rax_4)
            
            if (rcx_3 == 0)
                rbp.b = 1
            else if ((*(*rcx_3 + 0x50))(rcx_3, rax_1) == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)
    rax_3 = *(rax_2 + 0x14)

int32_t result = rax_3 - 1
*(rax_2 + 0x14) = result

if (rbp.b != 0)
    result = sub_140599630(rax_2, 0)

int64_t rcx_5 = var_38

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

if (arg1[0xb] != 0)
    int64_t rbp_1 = sx.q(arg1[0xe].d)
    int32_t rax_7 = (rbp_1 + 1).d
    arg1[0xe].d = rax_7
    
    if (rax_7 s> *(arg1 + 0x74))
        sub_1405a4f90(&arg1[0xd])
    
    int64_t* rcx_9 = (rbp_1 << 4) + arg1[0xd]
    *rcx_9 = arg1[0xb]
    void* rax_9 = arg1[0xc]
    rcx_9[1] = rax_9
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
    
    void* rcx_10 = arg1[9]
    int128_t var_28 = zx.o(0)
    sub_140a0e3b0(rcx_10, &var_28)
    int64_t var_48
    result = &var_48
    int64_t* var_40 = nullptr
    
    if (&arg1[0xb] != &var_48)
        arg1[0xb] = 0
        var_48 = 0
        result = sub_1405aeff0(&arg1[0xc], &var_40)
        int64_t* rcx_12 = var_40
        
        if (rcx_12 != 0)
            result = rcx_12[1].d
            rcx_12[1].d -= 1
            
            if (result == 1)
                int64_t* rbx_4 = var_40
                result = (**rbx_4)(rbx_4)
                int32_t rdi_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    int64_t* rcx_14 = var_40
                    result = (*(*rcx_14 + 8))(rcx_14, zx.q(rdi_1))

void* rcx_15 = arg1[0x10]

if (rcx_15 != 0)
    sub_140a18b40(rcx_15)
    int64_t* rcx_16 = arg1[0x10]
    result = (*(*rcx_16 + 0x10))(rcx_16)
    arg1[0x10] = 0

int64_t* rcx_17 = arg1[0x11]

if (rcx_17 != 0)
    result = (*(*rcx_17 + 0x10))(rcx_17)
    arg1[0x11] = 0

return result
