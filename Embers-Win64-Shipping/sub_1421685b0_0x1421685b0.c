// 函数: sub_1421685b0
// 地址: 0x1421685b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10
sub_140d3a3a0(&arg_10, arg3)
int32_t arg_8
sub_141b5e360(arg1 + 0x420, &arg_8, arg_10)
int64_t rax = sx.q(arg_8)
void* const rcx_4

if (rax.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = (rax << 5) + *(arg1 + 0x420)

int64_t* rdi = rcx_4 + 8

if (rcx_4 == 0)
    rdi = nullptr

if (rdi == 0)
    char rbx_1 = *(arg1 + 0x6d0)
    void arg_20
    sub_140d3a3a0(&arg_20, arg3)
    int64_t r8_1 = *(arg1 + 0x88)
    void* var_58 = &arg_20
    void*** var_48
    void**** var_50_1 = sub_1422c0870(&var_48, arg3, r8_1, rbx_1 != 0)
    sub_142159ee0(arg1 + 0x420, &arg_8, &var_58, nullptr)
    rdi = *(arg1 + 0x420) + (sx.q(arg_8) << 5) + 8
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp1_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_40 + 8))(var_40, 1)

*arg2 = *rdi
void* rax_5 = rdi[1]
arg2[1] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

return arg2
