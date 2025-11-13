// 函数: sub_140a95c00
// 地址: 0x140a95c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x38)
void*** rbx

if (rax == 0)
    rbx = nullptr
else
    void* rcx = arg3[1]
    int64_t var_58 = *arg3
    void* var_50_1 = rcx
    
    if (rcx != 0)
        *(rcx + 8) += 1
    
    rbx = sub_140a95410(rax, &var_58)

*arg1 = rbx
void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

arg1[1] = rax_2
arg1[2].d = 0
void* rax_3 = sub_140aae970()
int64_t rbp = *arg2
int16_t rbx_1 = *(rax_3 + 0x120)
*arg2 = 0
int32_t r15 = arg2[1].d
int32_t r12 = *(arg2 + 0xc)
arg2[1] = 0
int64_t* rcx_3 = *arg1
void* rax_5 = (*(*rcx_3 + 0x30))(rcx_3)
void var_48

if (rax_5 != &var_48)
    *(rax_5 + 8) = rbx_1

void var_38

if (rax_5 != &var_48 && rax_5 + 0x10 != &var_38)
    int64_t rcx_4 = *(rax_5 + 0x10)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *(rax_5 + 0x10) = rbp
    *(rax_5 + 0x18) = r15
    *(rax_5 + 0x1c) = r12
else if (rbp != 0)
    sub_140a74f90(rbp)

int64_t* rbx_3 = arg3[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rsi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, zx.q(rsi_1))

return arg1
