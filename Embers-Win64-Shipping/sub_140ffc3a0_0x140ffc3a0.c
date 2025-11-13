// 函数: sub_140ffc3a0
// 地址: 0x140ffc3a0
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
                    sub_1405dcc10(&data_143f02390, rbx_1)
    
    rdi_2 = &rdi_2[1]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_5 = arg1[1].d
int32_t rdx_3 = rax_5 - r15_1.d - arg3

if (arg3 s<= rdx_3)
    rdx_3 = arg3

if (rdx_3 != 0)
    int64_t rcx_1 = *arg1
    memcpy(rcx_1 + r13_1, rcx_1 + (sx.q(rax_5 - rdx_3) << 3), rdx_3 << 3)
    rax_5 = arg1[1].d

arg1[1].d = rax_5 - arg3

if (arg4 != 0)
    sub_1405c53d0(arg1)
