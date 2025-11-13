// 函数: sub_14063bf50
// 地址: 0x14063bf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg2
void* rbp_2 = (sx.q(arg2[1].d) << 5) + rdi
void* var_48 = nullptr
int64_t var_40 = 0

if (rdi != rbp_2)
    int128_t zmm6
    int128_t var_28_1 = zmm6
    
    do
        int64_t* rbx_1 = *(rdi + 8)
        zmm6 = *(rdi + 0x18)
        int64_t r15_1 = *rdi
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int64_t rsi_1 = sx.q(var_40.d)
        int32_t r14_1 = *(rdi + 0x10)
        int32_t rax_1 = (rsi_1 + 1).d
        var_40.d = rax_1
        
        if (rax_1 s> var_40:4.d)
            sub_14061cc60(&var_48)
        
        int64_t* rax_4 = (rsi_1 << 5) + var_48
        *rax_4 = r15_1
        rax_4[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        rax_4[2].d = r14_1
        rax_4[3].d = zmm6.d
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_7 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_7 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi += 0x20
    while (rdi != rbp_2)

int32_t result = sub_14065dc40(arg1, &var_48, arg3)
int32_t i_1 = var_40.d

if (i_1 != 0)
    int64_t* rdi_2 = var_48 + 8
    int32_t i
    
    do
        int64_t* rbx_2 = *rdi_2
        
        if (rbx_2 != 0)
            result = rbx_2[1].d
            rbx_2[1].d -= 1
            
            if (result == 1)
                (**rbx_2)(rbx_2)
                result = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi_2 = &rdi_2[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rcx_6 = var_48

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
