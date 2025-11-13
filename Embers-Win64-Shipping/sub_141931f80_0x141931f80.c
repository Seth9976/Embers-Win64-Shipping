// 函数: sub_141931f80
// 地址: 0x141931f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t rcx = *(rbx + 0x18)

if (rcx != 0)
    data_143f001e0(rcx)
    *(rbx + 0x18) = 0

*(rbx + 0x18) = data_143f001f0(0x9117, 0)
jump(data_143effa18)
