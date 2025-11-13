// 函数: sub_142968230
// 地址: 0x142968230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t r14 = 1
int32_t rbp = 0
int64_t var_38 = 0
int32_t* r13 = nullptr
char* rax = sub_1428e74e0(arg2)
int64_t var_48 = sub_14060aa50(rax)
int32_t rax_2 = sub_1406938b0(rax)
void* rax_3 = sub_1428f7970(arg2)
int32_t r15_1

if (rax_3 != 0)
    int64_t rax_6 = *(rax_3 + 8)
    int64_t rax_8
    
    if (rax_6 == 0)
        rax_8 = (*(rax_3 + 0x20))(0, &var_48, zx.q(rax_2))
    else
        rax_8 = sub_1428c41c0(nullptr, &var_48, rax_2, rax_6())
    
    if (rax_8 != 0)
        int64_t rax_9 = *(rax_3 + 0x30)
        
        if (rax_9 == 0)
            int64_t rax_11 = *(rax_3 + 0x40)
            
            if (rax_11 == 0)
                int64_t rax_18 = *(rax_3 + 0x50)
                
                if (rax_18 == 0)
                    r14 = 0
                else if (rax_18(rax_3, rax_8, arg1, zx.q(arg4)) == 0)
                    r14 = 0
            else
                int32_t* rax_12
                int64_t r8_7
                rax_12, r8_7 = rax_11(rax_3, rax_8, 0)
                r13 = rax_12
                
                if (rax_12 == 0)
                    r14 = 0
                else
                    int32_t rbx_3 = *(rax_3 + 4) & 4
                    int32_t rax_13
                    
                    if (rbx_3 != 0)
                        rax_13 = sub_142898c70(rax_12)
                    
                    if (rbx_3 == 0 || rax_13 == 0)
                        r8_7 = sub_1428b6f70(arg1, "%*s", zx.q(arg4))
                        
                        if (sub_142898c70(r13) == 0)
                            r8_7 = sub_14289a750(arg1, "<EMPTY>\n")
                    
                    if (sub_142898c70(r13) s> 0)
                        int32_t rax_17
                        
                        do
                            if (rbx_3 != 0)
                                sub_1428b6f70(arg1, "%*s", zx.q(arg4))
                            else if (rbp s> 0)
                                sub_1428b6f70(arg1, ", ", r8_7)
                            
                            void* rax_16 = sub_142898ea0(r13, rbp)
                            int64_t r8_10 = *(rax_16 + 8)
                            
                            if (r8_10 == 0)
                                r8_7 = sub_14289a750(arg1, *(rax_16 + 0x10))
                            else if (*(rax_16 + 0x10) != 0)
                                r8_7 = sub_1428b6f70(arg1, "%s:%s", r8_10)
                            else
                                r8_7 = sub_14289a750(arg1, r8_10)
                            
                            if (rbx_3 != 0)
                                r8_7 = sub_14289a750(arg1, &data_14370209c)
                            
                            rbp += 1
                            rax_17 = sub_142898c70(r13)
                        while (rbp s< rax_17)
        else
            int64_t rax_10 = rax_9(rax_3, rax_8)
            var_38 = rax_10
            
            if (rax_10 == 0)
                r14 = 0
            else
                int32_t var_58
                var_58.q = rax_10
                sub_1428b6f70(arg1, "%*s%s", zx.q(arg4))
        
        sub_142898cb0(r13, sub_1428e8d70)
        sub_1428a6780(var_38)
        int64_t rax_20 = *(rax_3 + 8)
        
        if (rax_20 == 0)
            (*(rax_3 + 0x18))(rax_8)
        else
            sub_1428c3d60(rax_8, rax_20())
    else
        r15_1 = arg3 & 0xf0000
        
        if (r15_1 == 0)
            r14 = 0
        else
            if (r15_1 != 0x10000)
                goto label_1429682b7
            
            sub_1428b6f70(arg1, "%*s<Parse Error>", zx.q(arg4))
else
    r15_1 = arg3 & 0xf0000
    
    if (r15_1 == 0)
        r14 = 0
    else if (r15_1 == 0x10000)
        sub_1428b6f70(arg1, "%*s<Not Supported>", zx.q(arg4))
    else
    label_1429682b7:
        
        if (r15_1 == 0x20000)
            r14 = sub_1429347e0(arg1, var_48, rax_2, arg4, 0xffffffff)
        else if (r15_1 == 0x30000)
            r14 = sub_142921670(arg1, var_48, rax_2, arg4)
return zx.q(r14)
