// 函数: sub_14195b160
// 地址: 0x14195b160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg3 + 0x10))

if (rbp.d == 0)
    return 

int32_t i_1 = *(arg1 + 0x48)
int64_t* rdi_1 = *(arg1 + 0x40)
void* r14_1 = arg1 + 0x40

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_1
        
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
        
        rdi_1 = &rdi_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    r14_1 = arg1 + 0x40

int64_t rdi_2 = 0
int32_t rbx_2 = 0
*(r14_1 + 8) = 0

if (*(r14_1 + 0xc) != rbp.d)
    sub_1405c5570(r14_1, rbp.d)
    rbx_2 = *(arg1 + 0x48)

int32_t rax_5 = rbx_2 + rbp.d
*(r14_1 + 8) = rax_5

if (rax_5 s> *(r14_1 + 0xc))
    sub_1405a4d70(r14_1)

memset(*r14_1 + (sx.q(rbx_2) << 3), 0, rbp << 3)

if (rbp s<= 0)
    return 

do
    void* rax_8 = *(arg3 + 8)
    
    if ((rax_8.b & 1) != 0)
        rax_8 = (rax_8 s>> 1) + arg3 + 8
    
    void* rcx_5 = *(zx.q(*(rax_8 + (rdi_2 << 2))) + arg2)
    uint64_t rax = *r14_1
    int64_t* rbx_3 = *(rax + (rdi_2 << 3))
    *(rax + (rdi_2 << 3)) = rcx_5
    
    if (rcx_5 != 0)
        *(rcx_5 + 8) += 1
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            char rax_10
            
            if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                rax_10 = sub_1405949a0()
            
            if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_10 != 0))
                (**rbx_3)(rbx_3, 1)
            else
                bool z_2
                
                if (0 == *(rbx_3 + 0xc))
                    *(rbx_3 + 0xc) = 1
                    z_2 = true
                else
                    *(rbx_3 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, rbx_3)
    
    rdi_2 += 1
while (rdi_2 s< rbp)
