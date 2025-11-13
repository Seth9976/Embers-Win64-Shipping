// 函数: sub_140691ae0
// 地址: 0x140691ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d8add0

if (arg1[0x10].d != 0)
    int64_t* rcx = arg1[0xf]
    
    if (rcx != 0)
        (*(*rcx + 0x38))(rcx, 0)
        int64_t rcx_1 = arg1[0xf]
        
        if (rcx_1 != 0)
            arg1[0xf] = sub_140a84c80(rcx_1, 0, 0)
        
        arg1[0x10].d = 0

int64_t rcx_2 = arg1[0xf]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

if (arg1[0xd].d != 0)
    int64_t* rcx_3 = arg1[0xc]
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x38))(rcx_3, 0)
        int64_t rcx_4 = arg1[0xc]
        
        if (rcx_4 != 0)
            arg1[0xc] = sub_140a84c80(rcx_4, 0, 0)
        
        arg1[0xd].d = 0

int64_t rcx_5 = arg1[0xc]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (arg1[8].d != 0)
    int64_t* rcx_6 = arg1[7]
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x38))(rcx_6, 0)
        int64_t rcx_7 = arg1[7]
        
        if (rcx_7 != 0)
            arg1[7] = sub_140a84c80(rcx_7, 0, 0)
        
        arg1[8].d = 0

int64_t rcx_8 = arg1[7]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return sub_140de03c0(arg1) __tailcall
