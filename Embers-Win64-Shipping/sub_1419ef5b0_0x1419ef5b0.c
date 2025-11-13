// 函数: sub_1419ef5b0
// 地址: 0x1419ef5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd15d0(arg1)

if (*(arg1 + 0x4fc) == 0 && arg1[0x5f].d s> 0)
    void* rcx = *arg1[0x5e]
    
    if (rcx != 0)
        *(arg1 + 0x4fc) = *(rcx + 0x410)
        arg1[0xa0].d = *(rcx + 0x414)
        *(arg1 + 0x504) = *(rcx + 0x418)

if (sub_140d23dc0(arg1, 0x30) == 0)
    sub_142215b10(&arg1[0x79], arg1)

int64_t rax_6 = sub_140d3cb50(arg1)
int64_t rax_7

if (rax_6 != 0)
    rax_7 = sub_140d3cb50(arg1)

if ((rax_6 == 0 || *(rax_7 + 0x240) s>= 0xec) && arg1[0x5f].d == arg1[0x61].d)
    int64_t* result = sub_1419ea5b0(&arg1[0x5e])
    
    if (result == 0)
        return result

return sub_1419ecb70(arg1, 0) __tailcall
