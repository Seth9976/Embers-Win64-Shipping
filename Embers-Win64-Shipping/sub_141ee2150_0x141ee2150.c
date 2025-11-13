// 函数: sub_141ee2150
// 地址: 0x141ee2150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143f3a990)
int64_t result

if (data_143a2d6f8 == data_143a2d724)
labelid_1:
    result = 0
else
    void* r9_1 = data_143a2d730
    void* rax_5 = &data_143a2d728
    
    if (r9_1 != 0)
        rax_5 = r9_1
    
    int32_t rax_6 =
        *(rax_5 + ((sx.q((arg1 u>> 0x20).d * 0x17 + arg1.d) & (sx.q(data_143a2d738) - 1)) << 2))
    
    if (rax_6 == 0xffffffff)
    labelid_1:
        result = 0
    else
        int64_t r8_3 = data_143a2d6f0
        int64_t rdx_3
        
        while (true)
            rdx_3 = sx.q(rax_6)
            int64_t rcx = rdx_3 * 3
            
            if (*(r8_3 + (rcx << 3)) == arg1)
                break
            
            rax_6 = *(r8_3 + (rcx << 3) + 0x10)
            
            if (rax_6 == 0xffffffff)
                goto label_141ee21d7_1
        
        if (rax_6 == 0xffffffff)
        label_141ee21d7:
            result = 0
        else
            void* rbx_1 = r8_3 + rdx_3 * 0x18
            
            if (rbx_1 == 0)
            label_141ee21d7_1:
                result = 0
            else
                result = *(rbx_1 + 8)

LeaveCriticalSection(&data_143f3a990)
return result
