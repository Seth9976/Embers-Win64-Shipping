// 函数: sub_140a3c4a0
// 地址: 0x140a3c4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x61) == 0
void** const result = &data_142e5d058
*arg1 = &data_142e5d058
int64_t entry_r9

if (cond:0)
    sub_140af98a0("Unknown", 0x47, 
        IAsyncReadRequests must not be deleted until they are completed.", entry_r9)
    result = sub_140afbb40()
else if (*(arg1 + 0x64) == 0 && arg1[2] != 0)
    sub_140af98a0("Unknown", 0x47, 
        IAsyncReadRequests must not be deleted until they are completed.", entry_r9)
    result = sub_140afbb40()

if (arg1[4] == 0)
    return result

void* rax = arg1[6]
void* rcx = &arg1[8]

if (rax != 0)
    rcx = rax

jump(*(*rcx + 0x10))
