// 函数: sub_142c82780
// 地址: 0x142c82780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(*arg1 + 0x250)

if (rbx != 0)
    data_143ccb8a0(rbx[1])
    int32_t _FileHandle = rbx[2].d
    rbx[1] = 0
    *rbx = 0
    
    if (_FileHandle != 0xffffffff)
        _close(_FileHandle)
    
    rbx[2].d = 0xffffffff

return 0
