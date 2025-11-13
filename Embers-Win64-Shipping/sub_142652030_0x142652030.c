// 函数: sub_142652030
// 地址: 0x142652030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg2 == 0)
    result.b = 1
    return result

int64_t* rbx = *(arg2 + 0x120)

if (rbx != 0)
    void* rax = sub_14269bba0()
    void* rcx = rbx[2]
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (result << 3)) == rax + 0x30)
        (*(*rbx + 0x350))(rbx, result)

result.b = 1
return result
