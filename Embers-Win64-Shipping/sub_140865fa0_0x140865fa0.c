// 函数: sub_140865fa0
// 地址: 0x140865fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20 = arg4
int32_t rax

if (arg3 s>= 0)
    rax = 6
    
    if (arg3 s< 6)
        rax = arg3
else
    rax = 0

int64_t rbp_1 = sx.q(rax) * 0x50
int32_t arg_18
sub_1405ba560(arg1 + 0x1b8 + rbp_1, &arg_18, arg4)
int64_t rax_2 = sx.q(arg_18)
void* const rcx_4

if (rax_2.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = (rax_2 << 5) + *(rbp_1 + arg1 + 0x1b8)

int64_t* rdx_1 = rcx_4 + 8

if (rcx_4 == 0)
    rdx_1 = nullptr

if (rdx_1 == 0)
    void*** rax_6 = j_sub_140a82f30(0xe88)
    void*** rdi_1 = rax_6
    
    if (rax_6 == 0)
        rdi_1 = nullptr
    else
        rax_6[1].d = 1
        *(rax_6 + 0xc) = 1
        *rdi_1 = &data_142ddc048
        sub_140844190(&rdi_1[2])
    
    void* var_48 = &rdi_1[2]
    sub_140842040(&var_48, &rdi_1[2])
    int64_t* var_38 = &arg_20
    void** var_30_1 = &var_48
    void arg_8
    sub_140863200(arg1 + 0x1b8 + rbp_1, &arg_8, &var_38, nullptr)
    sub_140853350(var_48, arg_20, *(arg1 + 0x10), 0, arg3)
    *arg2 = var_48
    arg2[1] = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t rsi_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    (*rdi_1)[1](rdi_1, zx.q(rsi_1))
else
    *arg2 = *rdx_1
    void* rax_4 = rdx_1[1]
    arg2[1] = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1

return arg2
