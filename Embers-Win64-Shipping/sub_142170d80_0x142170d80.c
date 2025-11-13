// 函数: sub_142170d80
// 地址: 0x142170d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1 = (*(*arg1 + 0x368))()
int64_t rbx

if (rax_1 == 0 || (arg3[0x16].d & 0x4000) == 0)
    rbx.b = 0
else
    rbx.b = 1

*(arg1 + 0x2ac) += 1
int64_t* rcx = arg1[0xdd]
int64_t* rsi = arg7
int64_t* var_a8
void* var_a0
int64_t* var_98
void** result

if (rcx != 0)
    var_98 = rsi
    var_a0 = arg6
    var_a8 = arg5
    result = (*(*rcx + 0x2e0))(rcx, arg2, arg3, arg4, var_a8, var_a0, var_98)

if (rcx == 0 || result.b == 0)
    if (rbx.b == 0)
        result = (*(*arg2 + 0x4a0))(arg2)
        
        if (result != 0)
            return sub_14216af80(arg1, arg2, rsi, result, arg3, arg4, arg5, arg6, rax_1)
    else
        void* var_70
        sub_1421685b0(arg1, &var_70, arg3)
        void* r13_1 = var_70
        int32_t i = 0
        
        if (arg1[0x13].d s> 0)
            int64_t* r14_1 = nullptr
            
            do
                int64_t* rbx_1 = *(r14_1 + arg1[0x12])
                
                if (rbx_1 != 0 && rbx_1[0x12] != 0)
                    int512_t zmm2_1
                    zmm2_1.o = zx.o(0)
                    void var_60
                    sub_14215c540(&var_60, rbx_1)
                    
                    if ((*(*rbx_1 + 0x268))(rbx_1) != 0)
                        rbx_1 = rbx_1[0x346]
                    
                    void* var_90
                    char var_88
                    int64_t var_58
                    int64_t var_50
                    void var_48
                    
                    if ((*(*arg2 + 0x460))(arg2, var_58, var_50, &var_48, var_a8, var_a0, var_98, 
                        var_90, var_88) != 0)
                    label_142170f06:
                        sub_1422ba4f0(r13_1, arg4)
                        var_88 = rax_1
                        var_90 = arg6
                        var_98 = arg5
                        var_a0 = arg4
                        var_a8 = arg3
                        sub_14216af80(arg1, arg2, arg7, rbx_1, var_a8, var_a0, var_98, var_90, 
                            var_88)
                    else if ((arg3[0x16].b & 0x80) != 0 && *data_143f4d060 != 0)
                        void var_78
                        sub_140d3a3a0(&var_78, arg2)
                        
                        if (sub_141fb2e20(rbx_1, &var_78) != 0)
                            goto label_142170f06
                
                i += 1
                r14_1 = &r14_1[1]
            while (i s< arg1[0x13].d)
        
        result = sub_1422bdf60(r13_1)
        int64_t* var_68
        
        if (var_68 != 0)
            var_68[1].d -= 1
            
            if (var_68[1].d == 1)
                result = (**var_68)(var_68)
                int32_t temp1_1 = *(var_68 + 0xc)
                *(var_68 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    return (*(*var_68 + 8))(var_68, 1)

return result
