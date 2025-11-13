// 函数: sub_1428f7a40
// 地址: 0x1428f7a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rdi = nullptr

if (arg1 != 0)
    int32_t rax_2
    
    if (arg4 == 0)
        rax_2 = 0
    else
        rax_2 = *arg4 + 1
    
    int32_t rbx_1 = 0
    
    if (rax_2 s>= 0)
        rbx_1 = rax_2
    
    if (rbx_1 s< sub_142898c70(arg1))
        while (true)
            int64_t* rax_4 = sub_142898ea0(arg1, rbx_1)
            
            if (sub_1428a96d0(sub_142891580(rax_4)) != arg2)
            label_1428f7af3:
                rbx_1 += 1
                
                if (rbx_1 s< sub_142898c70(arg1))
                    continue
            else
                if (arg4 == 0)
                    if (rdi == 0)
                        rdi = rax_4
                        goto label_1428f7af3
                    
                    if (arg3 != 0)
                        *arg3 = 0xfffffffe
                    
                    goto label_1428f7bc6
                
                *arg4 = rbx_1
                rdi = rax_4
            
            if (rdi == 0)
                break
            
            if (arg3 != 0)
                *arg3 = sub_1428e74c0(rdi)
            
            int32_t rax_10 = sub_1428a96d0(sub_142891580(rdi))
            
            if (rax_10 != 0)
                void* rax_11 = sub_1428f79a0(rax_10)
                
                if (rax_11 != 0)
                    char* rax_12 = sub_1428e74e0(rdi)
                    int64_t arg_8 = sub_14060aa50(rax_12)
                    int32_t rax_14 = sub_1406938b0(rax_12)
                    int64_t rax_15 = *(rax_11 + 8)
                    
                    if (rax_15 == 0)
                        return (*(rax_11 + 0x20))(0, &arg_8, zx.q(rax_14))
                    
                    return sub_1428c41c0(nullptr, &arg_8, rax_14, rax_15())
            
            return 0
    
    if (arg4 != 0)
        *arg4 = 0xffffffff
    
    if (arg3 != 0)
        *arg3 = 0xffffffff
else
    if (arg4 != 0)
        *arg4 = 0xffffffff
    
    if (arg3 != 0)
        *arg3 = 0xffffffff

label_1428f7bc6:
return 0
