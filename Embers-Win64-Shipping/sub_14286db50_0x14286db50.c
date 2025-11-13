// 函数: sub_14286db50
// 地址: 0x14286db50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char const* const arg_18 = arg3
__chkstk(0x60)
int32_t* rsi = nullptr
int32_t rdi = 0

if (arg1 != 0 || arg2 != 0)
    if (arg3 == 0)
        char const* const rax_1 = "system_default"
        
        if (arg4 == 0)
            rax_1 = arg3
        
        arg3 = rax_1
        arg_18 = rax_1
    
    int64_t var_38
    int32_t rax_2 = sub_1428c1d70(arg3, &var_38)
    
    if (rax_2 != 0)
        int64_t arg_8
        int64_t rax_3 = sub_1428c1d20(var_38, &arg_18, &arg_8)
        int32_t* rax_4 = sub_142884e50()
        rsi = rax_4
        
        if (rax_4 != 0)
            int32_t rdi_1 = 0x62
            
            if (arg4 != 0)
                rdi_1 = 2
            
            void* rbp_1
            
            if (arg1 == 0)
                rbp_1 = *arg2
                sub_142884f10(rsi, arg2)
            else
                rbp_1 = *(arg1 + 8)
                sub_142884e90(rsi, arg1)
            
            int32_t rax_6 = rdi_1 | 8
            
            if (*(rbp_1 + 0x28) == sub_14284db00)
                rax_6 = rdi_1
            
            int32_t rdx_6 = rax_6 | 4
            
            if (*(rbp_1 + 0x30) == sub_14284db00)
                rdx_6 = rax_6
            
            sub_142884e80(rsi, rdx_6)
            int64_t rbx_1 = 0
            
            if (arg_8 u<= 0)
            label_14286dd02:
                rdi = sub_142884c80(rsi, arg5)
            else
                while (true)
                    int64_t var_48
                    char* var_40
                    sub_1428c1d50(rax_3, rbx_1, &var_40, &var_48)
                    int32_t rax_7 = sub_142884f90(rsi, var_40, var_48)
                    rdi = rax_7
                    
                    if (rax_7 s<= 0)
                        int32_t rax_10
                        int32_t r8_5
                        
                        if (rax_7 != 0xfffffffe)
                            rax_10 = 0x4a
                            r8_5 = 0x180
                        else
                            rax_10 = 0x48
                            r8_5 = 0x8b
                        
                        sub_1428a5670(0x14, 0x187, r8_5, "ssl\ssl_mcnf.c", rax_10)
                        int64_t var_58_1 = var_48
                        char const* const var_60_1 = ", arg="
                        int32_t var_68_1
                        var_68_1.q = var_40
                        sub_1428a4880(6)
                        break
                    
                    rbx_1 += 1
                    
                    if (rbx_1 u>= arg_8)
                        goto label_14286dd02
    else if (arg4 == 0)
        sub_1428a5670(rax_2 + 0x14, 0x187, rax_2 + 0x71, "ssl\ssl_mcnf.c", 0x29)
        sub_1428a4880(arg4 + 2)
else
    sub_1428a5670(0x14, 0x187, 0x43, "ssl\ssl_mcnf.c", 0x21)

sub_142884db0(rsi)
int32_t r15
r15.b = rdi s> 0
return zx.q(r15)
