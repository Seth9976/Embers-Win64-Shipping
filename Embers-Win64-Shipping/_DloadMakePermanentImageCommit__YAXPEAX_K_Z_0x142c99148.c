// 函数: ?DloadMakePermanentImageCommit@@YAXPEAX_K@Z
// 地址: 0x142c99148
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

MEMORY_BASIC_INFORMATION buffer
uint64_t result = VirtualQuery(arg1, &buffer, 0x30)

if (result == 0)
    trap(0xd)

if ((buffer.Protect.b & 0x44) != 0)
    SYSTEM_INFO systemInfo
    GetSystemInfo(&systemInfo)
    uint64_t dwPageSize = zx.q(systemInfo.dwPageSize)
    int32_t* r8_3 = neg.q(zx.q(dwPageSize.d)) & arg1
    int32_t rcx_2 = (dwPageSize - 1).d
    uint32_t result_1 =
        (divu.dp.q(0:(zx.q((rcx_2 & arg2.d) + (rcx_2 & arg1.d)) - 1 + dwPageSize), dwPageSize)).d
        + (divu.dp.q(0:arg2, dwPageSize)).d
    result = zx.q(result_1)
    
    if (result_1 != 0)
        uint64_t i
        
        do
            *r8_3 = *r8_3
            r8_3 += dwPageSize
            i = result
            result -= 1
        while (i != 1)

return result
