// 函数: sub_141ee57c0
// 地址: 0x141ee57c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 0x4cc) * 0xbb38435 + 0x3619636b
*(arg1 + 0x4cc) = rax_1
int64_t* rcx = *(arg1 + 0xa0)
int32_t result = rax_1 u>> 9 | 0x3f800000
float result_1[0x4] = result
result_1[0] = result_1[0] - 1f
result_1[0] = result_1[0] * 360f

if (rcx != 0)
    result, result_1 = sub_141dcdc50(rcx)
    
    if (result != 0)
        void* rbx = nullptr
        void* const rdi
        
        if ((*(*(arg1 + 0x140) + 0x40))(arg1 + 0x140) == 0)
            rdi = nullptr
        else
            rdi = *(arg1 + 0x4c0)
            
            if (rdi == 0)
                void* rax_6 = (*(*(arg1 + 0x140) + 0x30))(arg1 + 0x140)
                rdi = rax_6
                *(arg1 + 0x4c0) = rax_6
        
        if ((*(*(arg1 + 0x140) + 0x38))(arg1 + 0x140) != 0)
            rbx = *(arg1 + 0x4b8)
            
            if (rbx == 0)
                void* rax_10 = (*(*(arg1 + 0x140) + 0x28))(arg1 + 0x140)
                rbx = rax_10
                *(arg1 + 0x4b8) = rax_10
        
        if (rdi != 0)
            result_1 = *(rdi + 0x60)
        else if (rbx != 0)
            result_1 = *(rbx + 0xc)
        
        result_1[0] = result_1[0] * 8f
        return sub_140a454f0(result_1, 0x43b40000) __tailcall

return result
