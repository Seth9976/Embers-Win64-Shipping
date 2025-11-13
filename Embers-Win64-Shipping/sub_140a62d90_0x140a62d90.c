// 函数: sub_140a62d90
// 地址: 0x140a62d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x13].d = 0
int64_t rsi = arg1[0x12]

if (rsi != 0)
    int64_t* rcx = data_143ddb3f0
    
    if (rcx == 0)
        sub_140a750a0()
        rcx = data_143ddb3f0
    
    (*(*rcx + 0x30))(rcx, rsi)

sub_14065d900(&arg1[0xa])
arg1[9].d = 0
int64_t rdi = arg1[8]

if (rdi != 0)
    int64_t* rcx_2 = data_143ddb3f0
    
    if (rcx_2 == 0)
        sub_140a750a0()
        rcx_2 = data_143ddb3f0
    
    (*(*rcx_2 + 0x30))(rcx_2, rdi)

return sub_14065d900(arg1) __tailcall
