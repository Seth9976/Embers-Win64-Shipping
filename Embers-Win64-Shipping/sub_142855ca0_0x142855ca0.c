// 函数: sub_142855ca0
// 地址: 0x142855ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void* r13 = *(arg1 + 0x488)
int64_t i = 0

if (*(r13 + 0x1f0) u> 0)
    void* r12_1 = nullptr
    
    do
        int64_t rbx_1 = *(r13 + 0x1e8)
        int64_t var_48 = 0
        int64_t var_40 = 0
        
        if (sub_1428753d0(arg1, *(r12_1 + rbx_1 + 8), arg2, arg6) != 0
                && ((arg2 & 0x1f00) == 0 || (*(r12_1 + rbx_1 + 0xc) & 1) != 0))
            int32_t rdi_2 = arg2 & 0x80
            
            if (rdi_2 != 0 || *(r12_1 + rbx_1 + 0x10) != 0)
                int64_t r10_1 = *(r12_1 + rbx_1 + 0x10)
                int64_t var_70
                int64_t var_68
                int32_t* var_60
                int64_t var_58
                
                if (r10_1 == 0)
                label_142855db4:
                    
                    if (sub_142873b60(arg3, zx.d(*(r12_1 + rbx_1)), 2) == 0)
                    label_142855e9b:
                        var_70.d = 0xe0
                        sub_142856580(arg1, 0x50, 0x22a, 0x44, "ssl\statem\extensions_cust.c", 
                            var_70.d)
                        return 0
                    
                    if (sub_142873e80(arg3, 2) == 0)
                        goto label_142855e9b
                    
                    int64_t r8_2 = var_40
                    int32_t rax_8
                    
                    if (r8_2 != 0)
                        rax_8 = sub_142873970(arg3, var_48, r8_2)
                    
                    if (r8_2 != 0 && rax_8 == 0)
                        goto label_142855e9b
                    
                    if (sub_1428736e0(arg3) == 0)
                        goto label_142855e9b
                    
                    if (rdi_2 != 0)
                        int32_t rcx_6 = *(r12_1 + rbx_1 + 0xc)
                        
                        if (((not.d(rcx_6 u>> 1)).b & 1) == 0)
                            var_70.d = 0xe9
                            sub_142856580(arg1, 0x50, 0x22a, 0x44, "ssl\statem\extensions_cust.c", 
                                var_70.d)
                            return 0
                        
                        *(r12_1 + rbx_1 + 0xc) = rcx_6 | 2
                    
                    int64_t r10_2 = *(r12_1 + rbx_1 + 0x18)
                    
                    if (r10_2 != 0)
                        r10_2(arg1, zx.q(*(r12_1 + rbx_1)), zx.q(arg2), var_48, 
                            *(r12_1 + rbx_1 + 0x20), var_70, var_68, var_60, var_58)
                else
                    var_58 = *(r12_1 + rbx_1 + 0x20)
                    int32_t arg_8
                    var_60 = &arg_8
                    var_68 = arg5
                    var_70 = arg4
                    int32_t rax_5 = r10_1(arg1, zx.q(*(r12_1 + rbx_1)), zx.q(arg2), &var_48, 
                        &var_40, var_70, var_68, var_60, var_58)
                    
                    if (rax_5 s< 0)
                        var_70.d = 0xd4
                        sub_142856580(arg1, arg_8, 0x22a, 0xea, "ssl\statem\extensions_cust.c", 
                            var_70.d)
                        return 0
                    
                    if (rax_5 != 0)
                        goto label_142855db4
        
        i += 1
        r12_1 += 0x38
    while (i u< *(r13 + 0x1f0))

return 1
