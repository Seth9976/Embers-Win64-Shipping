// 函数: sub_140fbc770
// 地址: 0x140fbc770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
sub_140fbb830(&var_28, arg2)
int64_t* rax = j_sub_140a82f30(0x38)
int64_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rax = 0
    int64_t rbp_1 = var_28
    int32_t var_20
    rax[1].d = var_20
    
    if (var_20 != 0)
        sub_1405a4c70(rbx, var_20, 0)
        memcpy(*rbx, rbp_1, var_20 * 2)
    else
        *(rax + 0xc) = 0
    
    rbx[2] = 0
    int32_t i_1 = arg3[1].d
    int64_t* rdi_2 = *arg3
    rbx[3].d = i_1
    
    if (i_1 != 0)
        sub_1405a4be0(&rbx[2], i_1, 0)
        int64_t* rcx_4 = rbx[2]
        int32_t i
        
        do
            *rcx_4 = *rdi_2
            void* rax_2 = rdi_2[1]
            rcx_4[1] = rax_2
            
            if (rax_2 != 0)
                *(rax_2 + 8) += 1
            
            rcx_4 = &rcx_4[2]
            rdi_2 = &rdi_2[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    else
        *(rbx + 0x1c) = 0
    
    rbx[4] = 0
    rbx[5] = 0
    rbx[6] = 2

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[1].d = 1
    *rax_3 = &data_142ef16f8
    *(rax_3 + 0xc) = 1
    rax_3[2] = rbx

int64_t rbx_1 = sx.q(data_143e2b7c8)
int32_t rax_4 = (rbx_1 + 1).d
bool cond:0 = rax_4 s<= data_143e2b7cc
data_143e2b7c8 = rax_4

if (not(cond:0))
    sub_1405a4f90(&data_143e2b7c0)

int64_t** rcx_7 = (rbx_1 << 4) + data_143e2b7c0
*rcx_7 = rbx
rcx_7[1] = rax_3
int64_t* rcx_10 = (sx.q(data_143e2b7c8 - 1) << 4) + data_143e2b7c0
*arg1 = *rcx_10
void* rax_10 = rcx_10[1]
arg1[1] = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

int64_t rcx_11 = var_28

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return arg1
