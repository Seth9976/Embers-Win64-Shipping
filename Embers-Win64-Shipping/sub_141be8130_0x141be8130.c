// 函数: sub_141be8130
// 地址: 0x141be8130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 8)
uint64_t result

if (((r8 u>> 4).b & 1) == 0)
    if (((r8 u>> 5).b & 1) != 0)
        void* rbx_1 = *(arg1 + 0x10)
        
        if (rbx_1 != 0)
            void* rax_1 = sub_141c1b420()
            void* rdx = *(rbx_1 + 0x10)
            result = sx.q(*(rax_1 + 0x38))
            
            if (result.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (result << 3)) == rax_1 + 0x30
                    && (*(rbx_1 + 0x330) & 6).b == 6)
                result.b = 1
                return result
    
    void* rbx_2 = *(arg1 + 0x20)
    
    if (rbx_2 != 0)
        while (true)
            if (((*(rbx_2 + 8) u>> 5).b & 1) != 0)
                void* rax_4 = sub_141c122a0()
                void* rdx_1 = *(rbx_2 + 0x10)
                result = sx.q(*(rax_4 + 0x38))
                
                if (result.d s<= *(rdx_1 + 0x38)
                        && *(*(rdx_1 + 0x30) + (result << 3)) == rax_4 + 0x30
                        && sub_141be8130(rbx_2, arg2).b != 0)
                    break
            
            rbx_2 = *(rbx_2 + 0x20)
            
            if (rbx_2 == 0)
                goto label_141be81e8
        
        result.b = 1
        return result

label_141be81e8:
result.b = 0
return result
