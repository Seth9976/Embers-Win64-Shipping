// 函数: sub_1427a61c0
// 地址: 0x1427a61c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t result = sx.q(arg1[7].d)

if (result.d s<= 0)
label_1427a6204:
    result.b = 0
else
    int64_t result_1 = result
    int64_t r8_1 = 0
    result = arg1[6]
    
    while (*result != arg2)
        rdi += 1
        r8_1 += 1
        result += 0x30
        
        if (r8_1 s>= result_1)
            goto label_1427a6204_1
    
    if (rdi == 0xffffffff)
    label_1427a6204_1:
        result.b = 0
    else
        void* rbx_1 = &arg2[5]
        
        if (arg2 == 0)
            rbx_1 = nullptr
        
        int64_t* rcx = arg1[0xa]
        (*(*rcx + 0x2a0))(rcx, rbx_1)
        (*(*arg2 + 0x268))(arg2)
        int64_t* rcx_2 = arg1[0xa]
        (*(*rcx_2 + 0x278))(rcx_2, rbx_1)
        sub_1427b35e0(&arg1[6], rdi, 1, 1)
        (*(*arg1 + 0x2b8))(arg1)
        result.b = 1

return result
