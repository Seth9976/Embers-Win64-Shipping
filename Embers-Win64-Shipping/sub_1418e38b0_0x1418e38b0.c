// 函数: sub_1418e38b0
// 地址: 0x1418e38b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

GetCurrentThreadId()
int64_t* rbx_1 = **(arg1 + 0x268)
int64_t* arg_8 = rbx_1
int32_t* r8 = &rbx_1[1]

if (rbx_1 != 0)
    *r8 += 1
    rbx_1 = arg_8

void* rdi

if (arg2 == 0 || rbx_1[0x95].d + 3 u< data_14399fa54)
    sub_1418e39e0(arg1, rbx_1)
    rdi.b = 1
else
    rdi.b = 0

if (rbx_1 != 0)
    int32_t rax_3 = *r8
    *r8 -= 1
    
    if (rax_3 == 1)
        if (arg_8[2].b != rax_3.b - 1)
            (**arg_8)(arg_8, 1)
        else
            char rax_5
            
            if (data_143f0f1d0 == rax_3.b - 1)
                rax_5 = sub_1405949a0()
            
            if (data_143f0f1d0 == rax_3.b - 1 && rax_5 != 0)
                (**arg_8)(arg_8, 1)
            else
                bool z_1
                
                if (0 == *(arg_8 + 0xc))
                    *(arg_8 + 0xc) = 1
                    z_1 = true
                else
                    *(arg_8 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_7 = sub_140a20af0()
                    void* const rdx_1
                    
                    if (rax_7 != 0)
                        rdx_1 = *(&data_143cf0bf8 + (zx.q(rax_7) u>> 0xe << 3))
                            + (zx.q(rax_7) & 0x3fff) * 0x18
                    else
                        rdx_1 = nullptr
                    
                    *(rdx_1 + 8) = arg_8
                    sub_1405a42f0(&data_143f02390, rax_7)

return zx.q(rdi.b)
