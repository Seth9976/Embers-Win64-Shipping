// 函数: sub_140d847f0
// 地址: 0x140d847f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
int64_t* r9 = arg1

if ((*arg2 != 0 || arg2[1] != 0x46000000000000c0)
        && (*arg2 != 0x483ac2a028888fe3 || arg2[1] != 0x3dff51ceb18ceaa3))
    arg1 = nullptr
    
    if (*arg2 == 0x4f34b57a5f20aa40 && arg2[1] == 0x79cc77f37635ab96)
        arg1 = &r9[1]
        
        if (r9 == 0)
            arg1 = nullptr
        
        *arg3 = arg1
else
    *arg3 = r9

if (arg1 != 0)
    (*(*r9 + 8))(r9)
    arg1 = *arg3

if (arg1 != 0)
    return 0

return 0x80004002
