// 函数: sub_140f0e430
// 地址: 0x140f0e430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr

if (arg1[0x34].d != 0)
    int64_t* rcx = arg1[0x33]
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg1[0x34].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = arg1[0x33]
        
        arg1[0x32].b = (*(*rcx_1 + 0x48))(rcx_1)

if (arg1[0x32].b != 0)
    sub_140e78f50(data_143e29f28, &arg1[0xb0], 0)

sub_140dc1680(arg1, arg2, arg3)

if (arg1[0xad].d != 0)
    int64_t* rcx_4 = arg1[0xac]
    
    if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
        if (arg1[0xad].d != 0)
            rdi = arg1[0xac]
        
        (*(*rdi + 0x50))(rdi)

return sub_140e19ef0(arg1, 1) __tailcall
