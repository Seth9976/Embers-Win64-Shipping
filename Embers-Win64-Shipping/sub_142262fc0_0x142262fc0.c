// 函数: sub_142262fc0
// 地址: 0x142262fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg3.d
void* result
int32_t zmm6_1
result, zmm6_1 = sub_141dcdc50(arg1)

if (result.d != 1)
    result = (*(*arg1 + 0x150))(arg1)
    
    if (*(result + 0x130) != 0)
        int32_t rcx_1
        rcx_1.b = arg3:4.d == 0
        
        if ((rcx_1.b & sub_140b5b8a0(rbx, 0)) != 0)
            void var_28
            int64_t* rax_2
            rax_2, zmm6_1 = sub_140b58260(&var_28, u"Event", 1)
            rbx = (*rax_2).d
        
        int32_t var_38_1 = zmm6_1
        return sub_142569a00(arg1, arg1[0x45], arg2, rbx)

return result
