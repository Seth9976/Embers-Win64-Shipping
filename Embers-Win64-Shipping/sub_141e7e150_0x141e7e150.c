// 函数: sub_141e7e150
// 地址: 0x141e7e150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 1
char r11 = arg5
void* rax = *(arg3 + 0x2e8)

if (data_143f39bbc != 0)
    r11 = 1

if (rax == 0)
labelid_1:
    sub_141f79600(arg2)
else
    int32_t r10_1 = *(rax + 0x18)
    
    if (r10_1 s<= 1)
    labelid_1:
        sub_141f79600(arg2)
    else
        int32_t rdx = 0
        int64_t rax_2 = sx.q(*(arg1 + 0x18))
        
        if (rax_2.d s<= 0)
        label_141e7e1e0:
            sub_141f79600(arg2)
        else
            int32_t* r15_1 = *(arg1 + 0x10)
            int64_t rcx_1 = 0
            int32_t* rax_3 = r15_1
            
            while (*(*(*(rax + 0x10) + 8) + 4) u> *rax_3)
                rdx += 1
                rcx_1 += 1
                rax_3 = &rax_3[0x24]
                
                if (rcx_1 s>= rax_2)
                    goto label_141e7e1e0_2
            
            void* rsi_3 = &r15_1[sx.q(rdx) * 0x24]
            
            if (sx.q(rdx) * 0x90 == neg.q(r15_1))
            label_141e7e1e0_1:
                sub_141f79600(arg2)
            else
                int64_t var_70_1 = *(arg3 + 0x18)
                void* var_78 = arg3
                int32_t var_68_1 = arg4
                
                if (arg4 u>= 0xffffffff || arg4 s>= r10_1)
                label_141e7e1e0_2:
                    sub_141f79600(arg2)
                else
                    int64_t var_88
                    sub_141e7d090(rsi_3, &var_88, &var_78, r11, arg6)
                    int32_t rax_8 = sub_1423660c0(arg3)
                    char var_98_1
                    
                    if (rax_8 s> 2)
                        if (arg4 != rax_8 - 1)
                            r14 = arg4 + 1
                        
                        if (arg4 == rax_8 - 1 || r14 != 0xffffffff)
                            int64_t var_70_2 = *(arg3 + 0x18)
                            var_78 = arg3
                            void** const var_38_1 = &data_142d42d18
                            int32_t var_68_2 = r14
                            int64_t (* var_58)() = sub_140594850
                            int64_t var_48_1 = 0
                            var_98_1 = 0
                            
                            if (sub_141e73a50(rsi_3, &var_78, &var_58, 0xff, 0) == 0)
                                int64_t var_48_2 = 0
                                void** const var_38_2 = &data_142d578b0
                                var_58 = j_sub_141e72690
                                sub_140a20e40(2, &var_58)
                    
                    int64_t rdx_4 = var_88
                    int64_t arg_18 = *(arg3 + 0x18)
                    var_98_1.q = &arg_18
                    int32_t var_80
                    sub_141f81d00(arg2, rdx_4, var_80, arg3, var_98_1, arg4)

return arg2
