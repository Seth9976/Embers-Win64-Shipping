// 函数: sub_14290fc60
// 地址: 0x14290fc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = sub_14060aa60(arg1)
int32_t var_28 = 0
char* arg_18

if (sub_1428bcb30(arg1, 0xffffffff, 0xf8, 0xd, 0, &arg_18) s> 0)
    char* arg_20
    var_28.q = &arg_20
    
    if (sub_1428973a0(arg1, 0x3f8, 0x1008, 0, var_28) s> 0)
        int32_t arg_10
        var_28.q = &arg_10
        
        if (sub_1428973a0(arg1, 0x18, 0x1007, 0, var_28) != 0)
            int32_t rbx_1 = arg_10
            
            if (rbx_1 == 0xffffffff)
                int32_t rax_4 = sub_1428916c0(arg_18)
                rbx_1 = rax_4
                arg_10 = rax_4
            else if (rbx_1 == 0xfffffffe)
                int32_t rbx_2 = rbx_1 - sub_1428916c0(arg_18)
                arg_10 = sub_142896de0(rax) + rbx_2
                char rax_8 = sub_142896360(rax)
                rbx_1 = arg_10
                
                if ((rax_8 & 7) == 1)
                    rbx_1 -= 1
                    arg_10 = rbx_1
            
            char* rbp_1 = arg_20
            char* rsi_1 = arg_18
            int64_t* rax_9 = sub_142897a00()
            
            if (rax_9 != 0)
                if (rbx_1 == 0x14)
                label_14290fd94:
                    
                    if (sub_14290fe10(rax_9, rsi_1) != 0)
                        if (rbp_1 != 0)
                            rsi_1 = rbp_1
                        
                        if (sub_14290fe70(&rax_9[1], rsi_1) != 0
                                && sub_14290fe10(&rax_9[4], rsi_1) != 0)
                            int32_t* result = sub_1428f8c10(rax_9, &data_1434ea5a0, nullptr)
                            sub_1428979d0(rax_9)
                            return result
                else
                    int32_t* rax_10 = sub_1428c3550()
                    rax_9[2] = rax_10
                    
                    if (rax_10 != 0 && sub_1428e4980(rax_10, rbx_1) != 0)
                        goto label_14290fd94
            
            sub_1428979d0(rax_9)

return 0
