// 函数: sub_142263600
// 地址: 0x142263600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2
int64_t result = sub_141dcdc50(arg1)

if (result.d != 1)
    result = (*(*arg1 + 0x150))(arg1)
    
    if (*(result + 0x130) != 0 && rbx != 0)
        result = sub_142531f40()
        
        if (result != 0)
            void* rdx = result + 0x30
            result = sx.q(*(result + 0x38))
            
            if (result.d s<= rbx[7].d)
                int64_t result_1 = result
                result = rbx[6]
                
                if (*(result + (result_1 << 3)) == rdx)
                    int64_t* var_48
                    sub_1420f32b0(&var_48)
                    int64_t var_18_1 = arg3
                    int64_t var_10_1 = arg4
                    var_48 = arg1
                    int32_t r8
                    int32_t var_38_1 = r8
                    int64_t r9
                    int64_t var_20_1 = r9
                    void* rax_3 = sub_142531f40()
                    int64_t rax_4
                    
                    if (rax_3 != 0)
                        rax_4 = sx.q(*(rax_3 + 0x38))
                    
                    if (rax_3 == 0 || rax_4.d s> rbx[7].d
                            || *(rbx[6] + (rax_4 << 3)) != rax_3 + 0x30)
                        rbx = nullptr
                    
                    int64_t* rcx_4 = rbx[0x23]
                    
                    if (rcx_4 == 0)
                        (*(*rbx + 0x390))(rbx)
                        rcx_4 = rbx[0x23]
                    
                    result = (*(*rcx_4 + 0x260))(rcx_4, &var_48)
                    int64_t var_30
                    
                    if (var_30 != 0)
                        return sub_140a74f90(var_30)

return result
