// 函数: sub_142382cd0
// 地址: 0x142382cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1

if (rbx[0xb].d != 0)
    int64_t r8_1
    
    if (data_143f138f4 == 0)
        BOOL rax_1
        rax_1, r8_1 = TryEnterCriticalSection(&rbx[2])
        
        if (rax_1 != 0)
            goto label_142382d1a
    else
        EnterCriticalSection(&rbx[2])
    label_142382d1a:
        int64_t rdi
        rdi.b = rbx[0xb].d == 3
        rbx[0xb].d = 3
        int32_t i
        
        do
            if (rdi.b != 0 || *(rbx + 0x54) != rdi.b)
                r8_1 = 0
            else
                r8_1.b = 1
            
            i, r8_1 = (*(*rbx + 0x30))(rbx, 1, r8_1)
        while (i == 3)
        
        if (rdi.b == 0)
            rbx[0xb].d = i
        
        LeaveCriticalSection(&rbx[2])

void* rax_4 = *arg1
*(rax_4 + 0x3c) -= 1
int64_t* rcx_3 = *arg1
int32_t result = *(rcx_3 + 0x5c)
*(rcx_3 + 0x5c) -= 1

if (result == 1)
    result = rcx_3[0xb].d
    
    if (result == 0)
        bool z_1
        
        if (result == rcx_3[0xa].d)
            rcx_3[0xa].d = 0
            z_1 = true
        else
            result = rcx_3[0xa].d
            z_1 = false
        
        if (z_1)
            jump(**rcx_3)

return result
