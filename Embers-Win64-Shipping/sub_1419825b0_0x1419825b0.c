// 函数: sub_1419825b0
// 地址: 0x1419825b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg2
int64_t rsi = 0
uint64_t result = &rdi[arg2[1]]
uint64_t r14_1 = sx.q(arg2[1].d) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rbx_1 = *rdi
        result = zx.q(rbx_1[1].d)
        rbx_1[1].d -= 1
        
        if (result.d == 1)
            if (rbx_1[2].b == 0)
                result = 0
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    result = zx.q(*(rbx_1 + 0xc))
                    z_1 = false
                
                if (z_1)
                    int32_t rax_2 = sub_140a20af0()
                    uint64_t rdx = zx.q(rax_2)
                    void* const rax_3
                    
                    if (rax_2 != 0)
                        rax_3 =
                            *(&data_143cf0bf8 + (rdx u>> 0xe << 3)) + (zx.q(rdx.d) & 0x3fff) * 0x18
                    else
                        rax_3 = nullptr
                    
                    *(rax_3 + 8) = rbx_1
                    result = sub_1405a42f0(&data_143f02390, rdx.d)
            else
                result = (**rbx_1)(rbx_1, 1)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

return result
