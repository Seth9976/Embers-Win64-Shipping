// 函数: sub_142344780
// 地址: 0x142344780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
int64_t r13_1 = r15_1 << 3
int64_t* rdi_2 = *arg1 + r13_1
int32_t i

do
    int64_t* rbx_1 = *rdi_2
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_2
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_2 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
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
                    int32_t rax_4 = sub_140a20af0()
                    uint64_t rdx = zx.q(rax_4)
                    void* const rax_5
                    
                    if (rax_4 != 0)
                        rax_5 =
                            *(&data_143cf0bf8 + (rdx u>> 0xe << 3)) + (zx.q(rdx.d) & 0x3fff) * 0x18
                    else
                        rax_5 = nullptr
                    
                    *(rax_5 + 8) = rbx_1
                    sub_1405a42f0(&data_143f02390, rdx.d)
    
    rdi_2 = &rdi_2[1]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_10 = arg1[1].d
int32_t rcx_5 = rax_10 - r15_1.d

if (rcx_5 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r13_1, r9 + (sx.q(r15_1.d + arg3) << 3), (rcx_5 - arg3) << 3)
    rax_10 = arg1[1].d

arg1[1].d = rax_10 - arg3

if (arg4 != 0)
    sub_1405c53d0(arg1)
