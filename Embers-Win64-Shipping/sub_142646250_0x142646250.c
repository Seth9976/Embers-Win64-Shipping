// 函数: sub_142646250
// 地址: 0x142646250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *(arg2 + 0xa8)

if (result != 0)
label_142646286:
    void* rbx_1 = *(result + 0x120)
    
    if (rbx_1 != 0)
        void* rax = sub_14269bba0()
        void* rdx = *(rbx_1 + 0x10)
        result = sx.q(*(rax + 0x38))
        
        if (result.d s<= *(rdx + 0x38))
            int32_t* result_1 = result
            result = *(rdx + 0x30)
            
            if (*(result + (result_1 << 3)) == rax + 0x30)
                void* var_18 = rbx_1 + 0x248
                void* var_10_1 = rbx_1 + 0x350
                return sub_14266cf60(&var_18, arg2, arg3, arg4)
else
    result = sub_141ee69e0(arg2)
    
    if (result != 0)
        goto label_142646286

return result
