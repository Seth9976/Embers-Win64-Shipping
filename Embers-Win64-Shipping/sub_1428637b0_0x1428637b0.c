// 函数: sub_1428637b0
// 地址: 0x1428637b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t* rax = arg3
int32_t rbx

if (arg3 != 0)
    rbx = 0
else
    rax = sub_142898ea0(arg2, 0)
    rbx = 1

int32_t var_48 = 1
int32_t result = sub_1428636a0(arg1, nullptr, rax, arg4)

if (result != 1)
    return result

if (rbx s< sub_142898c70(arg2))
    int32_t r15_1 = 0x1000
    
    if (arg4 == 0)
        r15_1 = arg4
    
    int32_t rax_7
    
    do
        int64_t* rax_2 = sub_142898ea0(arg2, rbx)
        
        if (sub_142863940(arg1, nullptr, rax_2, r15_1 | 0x60011) == 0)
            return 0x18d
        
        int32_t rdi_2 = r15_1 | 0x60012
        
        if (not(test_bit(sub_1428aea30(rax_2), 0xd)))
            var_48.q = 0
            int32_t var_38
            int32_t var_34
            int32_t arg_18
            int32_t rax_5 = sub_1428a3ac0(rax_2, &var_38, &var_34, &arg_18, nullptr)
            int32_t r9_3 = var_38
            int32_t r8_3 = arg_18
            
            if (rax_5 == 0)
                r8_3 = -1
            
            var_48.q = rax_2
            arg_18 = r8_3
            
            if (r9_3 == 0)
                r9_3 = var_34
            
            var_38 = r9_3
            int32_t rax_6
            
            if (arg1 == 0)
                rax_6 = sub_142854690(nullptr, rdi_2, r8_3, r9_3, var_48)
            else
                rax_6 = sub_1428546e0(arg1, rdi_2, r8_3, r9_3, var_48)
            
            if (rax_6 == 0)
                return 0x18e
        
        rbx += 1
        rax_7 = sub_142898c70(arg2)
    while (rbx s< rax_7)

return 1
