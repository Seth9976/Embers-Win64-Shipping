// 函数: sub_141ff8120
// 地址: 0x141ff8120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if (*arg1 == 0)
    rax = (*(*arg2 + 0x188))(arg2)

if (*arg1 == 0 && rax.b != 0)
label_141ff816d:
    int64_t* rbx_1 = *(arg1 + 8)
    int64_t rsi_1 = sx.q(rbx_1[1].d)
    int32_t rax_3 = (rsi_1 + 1).d
    rbx_1[1].d = rax_3
    
    if (rax_3 s> *(rbx_1 + 0xc))
        sub_1405a4d70(rbx_1)
    
    *(*rbx_1 + (rsi_1 << 3)) = arg2
else if (*arg1 == 1)
    void* rax_2 = sub_140bdf2e0()
    void* rdx = arg2[2]
    rax = sx.q(*(rax_2 + 0x38))
    
    if (rax.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax << 3)) == rax_2 + 0x30)
        goto label_141ff816d
