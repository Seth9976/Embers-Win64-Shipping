// 函数: sub_141e5c530
// 地址: 0x141e5c530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_40
sub_141ca3350(arg3, &var_40)
int64_t var_48 = 0

if (var_40 == 0)
    if (*(arg1 + 0x2d1) != 0)
        goto label_141e5c5a0
    
    *arg2 = var_40.o
else
    int32_t var_38
    int32_t rcx_1
    rcx_1.b = sub_140b5b8a0(var_38, 0) == 0
    int32_t var_34
    rcx_1.b |= var_34 != 0
    
    if (rcx_1.b != 0 || *(arg1 + 0x2d1) == 0)
        *arg2 = var_40.o
    else
    label_141e5c5a0:
        int64_t var_48_1 = 0
        
        if (arg4 == 0)
            *arg2 = var_40.o
        else
            int64_t* rdx_6
            
            if (arg1[0x7c].d == *(arg1 + 0x40c))
            label_141e5c61e:
                rdx_6 = nullptr
            else
                int32_t rax_4 = sub_140b5ead0(arg4.d) + arg4:4.d
                void* r8 = &arg1[0x82]
                void* rcx_3 = *(r8 + 8)
                
                if (rcx_3 != 0)
                    r8 = rcx_3
                
                int32_t rax_6 = *(r8 + (((sx.q(arg1[0x84].d) - 1) & sx.q(rax_4)) << 2))
                
                if (rax_6 == 0xffffffff)
                label_141e5c61e_1:
                    rdx_6 = nullptr
                else
                    while (true)
                        rdx_6 = (sx.q(rax_6) << 5) + arg1[0x7b]
                        
                        if (*rdx_6 == arg4)
                            break
                        
                        rax_6 = rdx_6[3].d
                        
                        if (rax_6 == 0xffffffff)
                            goto label_141e5c61e_2
                    
                    if (rax_6 == 0xffffffff)
                    label_141e5c61e_2:
                        rdx_6 = nullptr
            
            void* rax_7 = &rdx_6[1]
            
            if (rdx_6 == 0)
                rax_7 = nullptr
            
            if (rax_7 == 0)
                *arg2 = var_40.o
            else
                int64_t rdi_1 = *arg1
                void var_30
                (*(rdi_1 + 0x2d0))(arg1, &var_40, (*(rdi_1 + 0x3d0))(arg1, &var_30, arg3))
                int64_t var_28
                
                if (var_28 != 0)
                    sub_140a74f90(var_28)
                
                int64_t var_48_2 = 0
                
                if (var_40 == 0)
                label_141e5c69e:
                    
                    if (arg4 != data_143f39958)
                        arg2[1] = *(arg3 + 0x18)
                        *arg2 = arg4
                    else
                        arg2[1] = *(arg3 + 8)
                        *arg2 = arg4
                else
                    int32_t rcx_7
                    rcx_7.b = sub_140b5b8a0(var_38, 0) == 0
                    
                    if ((var_34 != 0 | rcx_7.b) == 0)
                        goto label_141e5c69e
                    
                    *arg2 = var_40.o

return arg2
