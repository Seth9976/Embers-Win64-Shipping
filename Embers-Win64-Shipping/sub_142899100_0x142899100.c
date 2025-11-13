// 函数: sub_142899100
// 地址: 0x142899100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t phModule = 0

if (GetModuleHandleExW(5, arg1, &phModule) != 0)
    WCHAR** rax_1 = sub_1428a6730(0x10)
    
    if (rax_1 != 0)
        *rax_1 = arg1
        rax_1[1] = data_143feb038
        data_143feb038 = rax_1
        return 1
    
    sub_1428a5670((rax_1 + 0xf).d, (rax_1 + 0x72).d, (rax_1 + 0x41).d, "crypto\init.c", 0x2ec)

return 0
