// 函数: sub_140b5b550
// 地址: 0x140b5b550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) != 0)
    *(arg1 + 0x10) += 1
    
    if (WaitForSingleObject(*(arg1 + 8), 0x3e8) == WAIT_OBJECT_0)
        CloseHandle(*(arg1 + 8))
    
    *(arg1 + 8) = 0

sub_140af4d50()
sub_1405a46b0(&data_1439a04a8, arg1)
CloseHandle(*(arg1 + 0x18))
HANDLE hObject = *(arg1 + 0x20)
*(arg1 + 0x18) = 0
int64_t result = CloseHandle(hObject)
*(arg1 + 0x20) = 0
return result
