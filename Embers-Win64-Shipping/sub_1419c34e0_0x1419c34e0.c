// 函数: sub_1419c34e0
// 地址: 0x1419c34e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x2c) != 1
*arg1 = &data_14300df90

if (not(cond:0))
    void* rcx = arg1[0xf]
    
    if (rcx != 0)
        *(rcx + 8) = arg1[0x10]
    
    int64_t* rcx_1 = arg1[0x10]
    
    if (rcx_1 != 0)
        *rcx_1 = arg1[0xf]
    
    arg1[0xf] = 0
    arg1[0x10] = 0
    sub_1419ce790()
    sub_1419d6840(&data_1439c96d0, &arg1[4])
    
    if ((arg1[0x12].b & 1) != 0)
        sub_140bb5c10(&data_1439c9680, arg1[0xc].d)

int64_t rcx_2 = arg1[0xd]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140a1d5c0(&arg1[0xa])
return sub_140a1d5c0(&arg1[7]) __tailcall
