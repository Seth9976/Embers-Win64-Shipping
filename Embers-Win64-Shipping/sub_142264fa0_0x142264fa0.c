// 函数: sub_142264fa0
// 地址: 0x142264fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2[1].d
void* rsi = arg1

if (result s> *(arg1 + 0xa4))
    sub_1405c5570(arg1 + 0x98, result)
    result = arg2[1].d

int32_t i = 0

if (result s> 0)
    do
        int64_t rdi_1 = sx.q(arg3[1].d)
        int32_t rax = (rdi_1 + 1).d
        arg3[1].d = rax
        
        if (rax s> *(arg3 + 0xc))
            sub_1405a4d70(arg3)
        
        *(*arg3 + (rdi_1 << 3)) = 0
        int64_t* rcx_2 = *(rsi + 0xe8)
        int64_t* rax_3 = (*(*rcx_2 + 0x40))(rcx_2, 0)
        void arg_10
        result = (*(*rax_3 + 0x10))(rax_3, *sub_140b58170(&arg_10, "PhysXPC", 1), 
            zx.q(*(rsi + 0x49)), (sx.q(i) << 4) + *arg2, *arg3 + (sx.q(arg3[1].d - 1) << 3))
        rsi = arg1
        i += 1
    while (i s< arg2[1].d)

return result
