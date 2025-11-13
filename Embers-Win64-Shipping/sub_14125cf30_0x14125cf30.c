// 函数: sub_14125cf30
// 地址: 0x14125cf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 3
void* rbx = arg1 + 0x30
int64_t result

do
    int64_t* rcx = *(rbx - 8)
    rbx -= 0x10
    i -= 1
    
    if (rcx != 0 && *rbx != 0)
        (*(*rcx + 0x10))(rcx, rbx)
        *(rbx + 8) = 0
    
    result = sub_14081c9d0(rbx)
while (i != 0)

return result
