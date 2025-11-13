// 函数: sub_141bcb030
// 地址: 0x141bcb030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2

if (*(arg1 - 0x68) != 0)
    int64_t* rcx = *(arg1 - 0x70)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx).b != 0)
        int64_t* rcx_1
        
        if (*(arg1 - 0x68) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 - 0x70)
        
        *(arg1 - 0x78) = (*(*rcx_1 + 0x48))(rcx_1).d

if (*(arg1 - 0x78) == 0)
    return 

int32_t arg_8

if (arg3 == 0)
    sub_1409740e0(arg1 + 0x138, arg2)
else
    sub_140b91690(arg1 + 0x138, &arg_8, &arg_10, nullptr)

if (arg4 != 0)
    *(arg1 + 0x188) = arg2
    *(arg1 + 0x190) = arg2
else if (*sub_140ebd5a0(arg1 - 0x78) == 1)
    *(arg1 + 0x188) = arg2
    *(arg1 + 0x190) = arg2
else if (*sub_140ebd5a0(arg1 - 0x78) == 2)
    *(arg1 + 0x188) = arg2
    *(arg1 + 0x190) = arg2

Dbg1::Reset(arg1 - 0x50)
