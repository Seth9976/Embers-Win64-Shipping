// 函数: sub_1420bac30
// 地址: 0x1420bac30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg2
int64_t result

if (arg2 != 0)
    result = sub_140cbe090()
    
    if (result != 0)
        int64_t rdx = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s<= *(rbx + 0x38) && *(*(rbx + 0x30) + (result << 3)) == rdx && arg1 != 0)
            void* rax = sub_140cbe090()
            int64_t rax_1
            
            if (rax != 0)
                rax_1 = sx.q(*(rax + 0x38))
            
            if (rax == 0 || rax_1.d s> *(rbx + 0x38)
                    || *(*(rbx + 0x30) + (rax_1 << 3)) != rax + 0x30)
                rbx = nullptr
            
            return sub_140be1130(*(arg1 + 0x10), rbx) __tailcall

result.b = 0
return result
