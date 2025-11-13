// 函数: sub_1428a16f0
// 地址: 0x1428a16f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* result = nullptr
int32_t rdi = 0

if (sub_142898c70(arg2) s<= 0)
    return nullptr

int32_t rax_6

do
    void* result_1 = sub_142898ea0(arg2, rdi)
    
    if ((*(arg1 + 0x48))(arg1, arg3, result_1) != 0)
        void* rbx_1 = *(arg1 + 0x20)
        result = result_1
        int32_t rcx_3 = *(rbx_1 + 0x14)
        void* rbx_2
        
        if ((rcx_3.b & 2) == 0)
            if (test_bit(rcx_3, 0x15))
                break
            
            rbx_2 = nullptr
        else
            rbx_2 = rbx_1 + 8
        
        if (sub_14289e600(sub_14289a060(result_1), rbx_2) s< 0
                && sub_14289e600(sub_1406bc560(result_1), rbx_2) s> 0)
            break
    
    rdi += 1
    rax_6 = sub_142898c70(arg2)
while (rdi s< rax_6)
return result
