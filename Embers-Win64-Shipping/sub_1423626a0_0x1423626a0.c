// 函数: sub_1423626a0
// 地址: 0x1423626a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2[1].d)
int32_t rax = (rbx + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

int64_t result = *arg2
*(result + (rbx << 3)) = arg1
int32_t i = 0

if (*(arg1 + 0x30) s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        result = *(arg1 + 0x28)
        int64_t* rcx_1 = *(rdi_1 + result)
        
        if (rcx_1 != 0)
            result = (*(*rcx_1 + 0x2a0))(rcx_1, arg2)
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg1 + 0x30))

return result
