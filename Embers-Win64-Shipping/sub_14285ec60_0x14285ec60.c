// 函数: sub_14285ec60
// 地址: 0x14285ec60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = *arg1
*arg1 = arg2
int32_t result = sub_142875ce0(arg1, 0x11, 0x300, arg3, 0, 0)

if (result == 0)
    *arg1 = rbp
    return result

if (arg1[0x136] != 0 && *arg1 != 0x304)
    *arg1 = rbp
    sub_142856580(arg1, 0x46, 0x25f, 0x10a, "ssl\statem\statem_lib.c", 0x74b)
    return 0

int32_t rcx_1 = **(arg1 + 8)
int32_t var_20
int32_t rdx_2
int32_t r9_1
void* const rbx_1

if (rcx_1 == 0x10000)
    rbx_1 = &data_1434dbff0
label_14285ed44:
    int32_t arg_8
    int32_t arg_10
    int32_t arg_20
    int32_t rax_2 = sub_14285f240(arg1, &arg_10, &arg_8, &arg_20)
    r9_1 = rax_2
    
    if (rax_2 == 0)
        int32_t rdx_1 = *arg1
        int32_t r9_4 = *(*(*(arg1 + 8) + 0xc0) + 0x60) & 8
        int32_t r8_1
        
        if (r9_4 == 0)
            r8_1.b = rdx_1 s< arg_10
        else
            int32_t rax_4 = arg_10
            int32_t rcx_4 = rdx_1
            
            if (rdx_1 == 0x100)
                rcx_4 = 0xff00
            
            if (rax_4 == 0x100)
                rax_4 = 0xff00
            
            r8_1.b = rcx_4 s> rax_4
        
        if (r8_1 == 0)
            int32_t r8_2 = arg_8
            int32_t rsi
            
            if (r9_4 == 0)
                rsi.b = rdx_1 s> r8_2
            else
                int32_t rcx_5 = rdx_1
                int32_t rax_5 = r8_2
                
                if (rdx_1 == 0x100)
                    rcx_5 = 0xff00
                
                if (r8_2 == 0x100)
                    rax_5 = 0xff00
                
                rsi.b = rcx_5 s< rax_5
            
            if (rsi == 0)
                int32_t rax_6 = arg_20
                
                if ((arg1[0x172].b & 0x80) == 0)
                    rax_6 = r8_2
                
                if (rdx_1 == 0x303 && rax_6 s> rdx_1)
                    if (0x14452474e574f44 != *(*(arg1 + 0xa8) + 0xb0))
                        goto label_14285ee7f
                    
                    var_20 = 0x789
                    rdx_2 = 0x2f
                    r9_1 = 0x175
                else if (r9_4 != 0 || rdx_1 s>= 0x303 || rax_6 s<= rdx_1
                    || 0x4452474e574f44 != *(*(arg1 + 0xa8) + 0xb0))
                label_14285ee7f:
                    
                    if (*rbx_1 != 0)
                        while (true)
                            int64_t rax_7 = *(rbx_1 + 8)
                            
                            if (rax_7 != 0 && rdx_1 == *rbx_1)
                                *(arg1 + 8) = rax_7()
                                break
                            
                            rbx_1 += 0x18
                            
                            if (*rbx_1 == 0)
                                goto label_14285ee9a
                        
                        return 1
                    
                label_14285ee9a:
                    var_20 = 0x7a5
                    r9_1 = 0x102
                    rdx_2 = 0x46
                else
                    rdx_2 = r9_4 + 0x2f
                    var_20 = 0x796
                    r9_1 = 0x175
            else
                var_20 = 0x779
                r9_1 = 0x102
                rdx_2 = 0x46
        else
            var_20 = 0x773
            r9_1 = 0x102
            rdx_2 = 0x46
    else
        var_20 = 0x76c
        rdx_2 = 0x46
else
    if (rcx_1 == 0x1ffff)
        rbx_1 = &data_1434dc080
        goto label_14285ed44
    
    if (*arg1 == rcx_1)
        return 1
    
    var_20 = 0x755
    r9_1 = 0x10a
    rdx_2 = 0x46
*arg1 = rbp
sub_142856580(arg1, rdx_2, 0x25f, r9_1, "ssl\statem\statem_lib.c", var_20)
return 0
