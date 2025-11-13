// 函数: sub_1406c1150
// 地址: 0x1406c1150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(data_143f5b298 + 0x788)
int64_t result

if (rbx != 0)
    void* rax = sub_1406c4d40()
    void* rdx_1 = *(rbx + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (result << 3)) == rax + 0x30)
        if (*(rbx + 0x47e) != 0)
            *(rbx + 0x479) = 1
        
        result.b = 1
        return result

result.b = 0
return result
