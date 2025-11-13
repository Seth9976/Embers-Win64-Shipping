// 函数: sub_1426ab860
// 地址: 0x1426ab860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3[1].d = 0
int64_t* rdi = arg3

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405c5570(arg3, 0)

for (int64_t* i = *(*(arg1 + 0x10) + 0x70); i != 0; i = i[0xb])
    int64_t rax
    
    if (sub_140cc16a0(&i[2], sub_140d41340()) == 0)
        rax = 0
    else
        rax = i[2]
    
    if (rax == arg2)
        break
    
    rax = i[8]
    
    if (not(test_bit(rax, 0xd)) && test_bit(rax, 0x10) && sub_1426aa760(i).b != 0)
        int64_t rsi_1 = sx.q(rdi[1].d)
        int32_t rax_3 = (rsi_1 + 1).d
        rdi[1].d = rax_3
        
        if (rax_3 s> *(rdi + 0xc))
            sub_1405a4d70(rdi)
        
        *(*rdi + (rsi_1 << 3)) = i
