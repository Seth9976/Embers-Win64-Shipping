// 函数: sub_141f82e20
// 地址: 0x141f82e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx

if (arg1 == 0)
    rbx = nullptr
else
    rbx = arg1[0x14]

void* result

if (rbx != 0 && *(arg1 + 0x14f) == 0 && (*(arg1 + 0x209) & 0x20) != 0 && (*(*arg1 + 0x448))().b != 0
        && sub_140d23dc0(arg1, 0x30).b == 0 && (*(*rbx + 0x150))(rbx) != 0)
    void* rax_3 = (*(*rbx + 0x150))(rbx)
    
    if (sub_141ee6400(arg1) == *(rax_3 + 0x1b0))
        result.b = 1
        return result

result.b = 0
return result
