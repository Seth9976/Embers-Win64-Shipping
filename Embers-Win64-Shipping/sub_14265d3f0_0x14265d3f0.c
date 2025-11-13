// 函数: sub_14265d3f0
// 地址: 0x14265d3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0x13].d

if (rax == 0)
    sub_142657070(arg1, 0)
    rax = arg1[0x13].d

int32_t rbx = 0

if (rax s<= 0)
    rax.b = 0
    return rax

int64_t* rdi = nullptr
int64_t rax_2

while (true)
    void* rcx = *(rdi + arg1[0x12])
    
    if (rcx != 0)
        int64_t* rcx_1 = *(rcx + 0x2e0)
        
        if (rcx_1 != 0 && (*(*rcx_1 + 0x38))(rcx_1, zx.q(arg2)).b == 1)
            rax_2.b = 1
            break
    
    rbx += 1
    rdi = &rdi[1]
    
    if (rbx s>= arg1[0x13].d)
        rax_2.b = 0
        break

return rax_2
