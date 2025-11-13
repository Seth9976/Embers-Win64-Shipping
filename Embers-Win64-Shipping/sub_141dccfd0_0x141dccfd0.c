// 函数: sub_141dccfd0
// 地址: 0x141dccfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = arg1[0x1c]
int64_t* i_1 = arg1

if (i != 0)
    i_1 = i
    
    for (i = *(i + 0xe0); i != 0; i = *(i + 0xe0))
        i_1 = i

if (i_1 != 0)
    void* rax = sub_14255d000()
    void* rcx = i_1[2]
    int64_t rax_1 = sx.q(*(rax + 0x38))
    
    if (rax_1.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax_1 << 3)) == rax + 0x30)
        jump(*(*i_1 + 0x6b0))
    
    void* rax_4 = sub_142497110()
    void* rdx_2 = i_1[2]
    i = sx.q(*(rax_4 + 0x38))
    
    if (i.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (i << 3)) == rax_4 + 0x30
            && (*(*i_1 + 0x6a8))(i_1, rdx_2).b != 0)
        i.b = 1
        return i

i.b = 0
return i
