// 函数: sub_1423825f0
// 地址: 0x1423825f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
*(rax + 0x50) -= 1

if (arg2 != 0)
    *(*arg1 + 0x54) = 1

int64_t* rbx = *arg1
BOOL result = rbx[0xb].d

if (result != 0)
    int64_t r8_1
    result, r8_1 = TryEnterCriticalSection(&rbx[2])
    
    if (result != 0)
        int64_t rdi
        rdi.b = rbx[0xb].d == 3
        rbx[0xb].d = 3
        int32_t i
        
        do
            if (rdi.b != 0 || *(rbx + 0x54) != rdi.b)
                r8_1 = 0
            else
                r8_1.b = 1
            
            i, r8_1 = (*(*rbx + 0x30))(rbx, 0, r8_1)
        while (i == 3)
        
        if (rdi.b == 0)
            rbx[0xb].d = i
        
        return LeaveCriticalSection(&rbx[2])

return result
