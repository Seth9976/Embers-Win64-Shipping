// 函数: sub_1418874f0
// 地址: 0x1418874f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8

if (*sub_141838ff0(&arg1[1], &arg_8, arg2) == 0xffffffff)
    int64_t* rax_1 = *arg1
    int64_t r8_1 = *rax_1
    void* rax_4 = (sx.q(rax_1[1].d) << 4) + r8_1
    int32_t rax_5
    
    if (rax_4 == r8_1)
    label_141887577:
        rax_5 = -1
    else
        while (true)
            int32_t rdx_1 = *(rax_4 - 0xc)
            rax_4 -= 0x10
            
            if (((rdx_1 ^ arg2[1]) | (*(rax_4 + 8) ^ arg2[2]) | (*(rax_4 + 0xc) ^ arg2[3])
                    | (*rax_4 ^ *arg2)) == 0)
                rax_5 = ((rax_4 - r8_1) s>> 4).d
                break
            
            if (rax_4 == r8_1)
                goto label_141887577
    
    arg_8 = rax_5
    sub_141818040(&arg1[1], arg2, &arg_8)

sub_141838ff0(&arg1[1], &arg_8, arg2)
int64_t rax_6 = sx.q(arg_8)

if (rax_6.d == 0xffffffff)
    return zx.q(*0x10)

return zx.q(*(rax_6 * 0x1c + arg1[1] + 0x10))
