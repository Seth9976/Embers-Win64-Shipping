// 函数: sub_142185ab0
// 地址: 0x142185ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = (*(*arg1 + 0x150))()
int64_t rsi = arg1[0x4e]
int64_t* rdi = *(result + 0x130)

if (rdi != 0)
    void* rax_1 = sub_1424bfe50()
    void* rcx = rdi[2]
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s<= *(rcx + 0x38))
        int64_t result_1 = result
        result = *(rcx + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_1 + 0x30)
            result = (*(*rdi + 0x6f8))(rdi, result_1)
            
            if (result.b == 0)
                rsi = arg1[0x4f]

if (rsi == 0)
    return result

return (*(*arg1 + 0x638))(arg1, arg1[0x4e])
