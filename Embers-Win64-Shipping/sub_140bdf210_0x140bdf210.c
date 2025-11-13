// 函数: sub_140bdf210
// 地址: 0x140bdf210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cdd9c0(arg1, arg2)
int64_t rbx = sx.q(arg2[1].d)
int64_t rsi = *(arg1 + 0x40)
uint64_t result = zx.q((rbx + 1).d)
arg2[1].d = result.d

if (result.d s> *(arg2 + 0xc))
    result = sub_1405a4d70(arg2)

*(*arg2 + (rbx << 3)) = rsi

for (void* i = *(arg1 + 0x48); i != 0; i = *(i + 0x28))
    void* rax = sub_140bdfab0()
    void* rdx_1 = *(i + 0x10)
    int64_t rax_1 = sx.q(*(rax + 0x38))
    
    if (rax_1.d s<= *(rdx_1 + 0x38))
        result = *(rdx_1 + 0x30)
    
    if (rax_1.d s> *(rdx_1 + 0x38) || *(result + (rax_1 << 3)) != rax + 0x30)
        int64_t rsi_1 = sx.q(arg2[1].d)
        int32_t rax_2 = (rsi_1 + 1).d
        arg2[1].d = rax_2
        
        if (rax_2 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        result = *arg2
        *(result + (rsi_1 << 3)) = i

for (int64_t* i_1 = *(arg1 + 0x50); i_1 != 0; i_1 = i_1[4])
    result = (*(*i_1 + 0x18))(i_1, arg2)

return result
