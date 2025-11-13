// 函数: sub_141966470
// 地址: 0x141966470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x38) s> 0)
    int64_t r8 = sx.q(*(arg1 + 0x38))
    int64_t rax = *(arg1 + 0x30)
    int64_t rbx = *(rax + (r8 << 3) - 8)
    *(rax + (r8 << 3) - 8) = 0
    sub_141982f80(arg1 + 0x30, *(arg1 + 0x38) - 1, 1, 1)
    *arg2 = rbx
    arg2[1] = arg1
    return arg2

int64_t* rcx_1 = *(arg1 + 0x18)
int64_t* arg_18
int64_t* rax_3 = (*(*rcx_1 + 0x320))(rcx_1, &arg_18, zx.q(*(arg1 + 0x20)))
int64_t var_18 = *rax_3
*rax_3 = 0
int64_t* rbx_1 = arg_18

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        if (rbx_1[2].b == 0)
            bool z_1
            
            if (0 == *(rbx_1 + 0xc))
                *(rbx_1 + 0xc) = 1
                z_1 = true
            else
                *(rbx_1 + 0xc)
                z_1 = false
            
            if (z_1)
                int32_t rax_7 = sub_140a20af0()
                uint64_t rdx_3 = zx.q(rax_7)
                void* const rax_8
                
                if (rax_7 != 0)
                    rax_8 =
                        *(&data_143cf0bf8 + (rdx_3 u>> 0xe << 3)) + (zx.q(rdx_3.d) & 0x3fff) * 0x18
                else
                    rax_8 = nullptr
                
                *(rax_8 + 8) = rbx_1
                sub_1405a42f0(&data_143f02390, rdx_3.d)
        else
            (**rbx_1)(rbx_1, 1)

int64_t rax_12 = var_18

if (rax_12 != 0)
    *(arg1 + 0x28) += 1

*arg2 = rax_12
arg2[1] = arg1
var_18 = 0
sub_14081c9d0(&var_18)
return arg2
