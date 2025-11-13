// 函数: sub_1418f4260
// 地址: 0x1418f4260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d3ff08
arg1[1].d = 0
*arg1 = &data_142ef2938
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3] = arg2
arg1[4].d = *arg2
*arg1 = &data_142ff1bf8
arg1[5] = 0
arg1[6] = 0
int64_t rbp = sx.q(arg2[4])

if (rbp.d == 0)
    return arg1

arg1[6].d = 0

if (*(arg1 + 0x34) != rbp.d)
    sub_1405c5570(&arg1[5], rbp.d)

int64_t rbx = sx.q(arg1[6].d)
int32_t rax_1 = (rbx + rbp).d
arg1[6].d = rax_1

if (rax_1 s> *(arg1 + 0x34))
    sub_1405a4d70(&arg1[5])

memset(&arg1[5][rbx], 0, rbp << 3)
int32_t i = 0

if (rbp.d == 0)
    return arg1

do
    void* rax_4 = *(arg2 + 8)
    
    if ((1 & rax_4.b) != 0)
        rax_4 = (rax_4 s>> 1) + &arg2[2]
    
    int64_t i_1 = sx.q(i)
    void* rdx_2 = *(zx.q(*(rax_4 + (i_1 << 2))) + arg3)
    int64_t rax_6 = arg1[5]
    int64_t* rbx_1 = *(rax_6 + (i_1 << 3))
    *(rax_6 + (i_1 << 3)) = rdx_2
    
    if (rdx_2 != 0)
        *(rdx_2 + 8) += 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_8
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_8 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_8 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_10 = sub_140a20af0()
                    uint64_t rdx_3 = zx.q(rax_10)
                    void* const rax_11
                    
                    if (rax_10 != 0)
                        rax_11 = *(&data_143cf0bf8 + (rdx_3 u>> 0xe << 3))
                            + (zx.q(rdx_3.d) & 0x3fff) * 0x18
                    else
                        rax_11 = nullptr
                    
                    *(rax_11 + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rdx_3.d)
    
    i += 1
while (i u< rbp.d)

return arg1
