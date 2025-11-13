// 函数: sub_14226f7f0
// 地址: 0x14226f7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
*arg2 = 0
*arg3 = 0
void* rbx = *(arg1 + 0x298)

if (rbx != 0)
    void* rax = sub_142531230()
    void* rdx = *(rbx + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rdx + 0x38))
        int64_t result_1 = result
        result = *(rdx + 0x30)
        
        if (*(result + (result_1 << 3)) == rax + 0x30)
            void* rcx = *(rbx + 0x70)
            
            if (rcx != 0)
                float arg_8
                sub_14202bf60(rcx, &arg_8)
                *arg2 = int.d(fconvert.t(arg_8))
                result = zx.q(int.d(fconvert.t(arg4)))
                *arg3 = result.d

return result
