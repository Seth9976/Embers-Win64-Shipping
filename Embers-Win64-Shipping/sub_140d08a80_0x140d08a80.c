// 函数: sub_140d08a80
// 地址: 0x140d08a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t* rsi = arg2

if (*(arg1 + 0x38) s<= 0)
    return 

do
    void* rax = sub_140d3c6e0(rsi)
    
    if (rax != 0)
        int64_t* rax_1 = nullptr
        
        if (arg3 != 0)
            rax_1 = sub_140d3c6e0((sx.q(i) << 4) + arg3)
        
        char var_28_1 = 1
        void* rax_2 = sub_140be1ac0(arg5, rax_1, rax, arg4, (zx.q(*(arg1 + 0x40)) u>> 0xd).b & 1, 0)
        int64_t rbx_2 = *(rsi + 8)
        sub_140d3a3a0(rsi, rax_2)
        *(rsi + 8) = rbx_2
    
    i += 1
    rsi = &rsi[4]
while (i s< *(arg1 + 0x38))
