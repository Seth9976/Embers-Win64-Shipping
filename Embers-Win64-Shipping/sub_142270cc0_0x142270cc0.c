// 函数: sub_142270cc0
// 地址: 0x142270cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(data_143f5b298 + 0xb08)

if (rcx != 0)
    int64_t* rax_2 = (*(*rcx + 0x110))(rcx)
    
    if (rax_2 != 0 && (**rax_2)(rax_2, arg1[0x69], arg2, zx.q(arg3), arg4.d, arg5) != 0)
        sub_140d430a0(arg2)
        uint64_t result
        result.b = 1
        return result

uint64_t rbp
rbp.b = 0

if (arg1[0x69] != 0)
    int64_t var_c8 = *arg2
    int64_t var_c0_1 = arg2[1]
    void* rax_6 = arg2[2]
    void* var_b8_1 = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
        arg1[0x69]
    
    int32_t var_d8
    var_d8.b = arg5
    char rax_8
    rbp = zx.q(rax_8)
    
    if ((arg1[0x87].b & 2) != 0)
        int64_t* r8_2 = arg1[0x88]
        int64_t* r9_2 = r8_2
        void* rcx_5 = &r8_2[sx.q(arg1[0x89].d) * 3]
        
        if (r8_2 != rcx_5)
            while (true)
                if (*r9_2 != *arg2)
                    r9_2 = &r9_2[3]
                    
                    if (r9_2 != rcx_5)
                        continue
                    else
                        if (r8_2 == rcx_5)
                            break
                        
                        while (*r8_2 != data_143e1df78)
                            r8_2 = &r8_2[3]
                            
                            if (r8_2 == rcx_5)
                                goto label_142270f03
                
                int64_t* rcx_6 = *(arg1[0x53] + 0x70)
                int64_t var_b0
                
                if (rcx_6 != 0 && (*(*rcx_6 + 0x2d8))(rcx_6, &var_b0) != 0)
                    rbp = 0
                    
                    if ((arg1[0x87].b & 8) == 0)
                        void var_a8
                        memset(&var_a8, 0, 0x88)
                        int32_t var_a0_1 = 0x3f800000
                        var_d8.q = &var_a8
                        void var_38
                        
                        if (sub_14226ca40(arg1, var_b0, zx.d(*(arg1 + 0x453)), 1, var_d8) != 0)
                            rbp = sub_140d3c6e0(&var_38)
                    else
                        rbp = sub_140d3c6e0(arg1 + 0x45c)
                    
                    int64_t* rcx_10 = arg1[0x56]
                    char rax_16
                    
                    if (rcx_10 != 0)
                        rax_16 = sub_1420a6c90(rcx_10, var_b0, arg3)
                    
                    if ((rcx_10 == 0 || rax_16 == 0) && rbp != 0)
                        if (arg3 == 0)
                        label_142270ed4:
                            var_c8 = *arg2
                            int64_t var_c0_2 = arg2[1]
                            void* rax_19 = arg2[2]
                            void* var_b8_2 = rax_19
                            
                            if (rax_19 != 0)
                                *(rax_19 + 8) += 1
                            
                            sub_141f0fb00(rbp, &var_c8)
                        else if (arg3 == 1)
                            var_c8 = *arg2
                            int64_t var_c0_3 = arg2[1]
                            void* rax_24 = arg2[2]
                            void* var_b8_3 = rax_24
                            
                            if (rax_24 != 0)
                                *(rax_24 + 8) += 1
                            
                            sub_141f10090(rbp, &var_c8)
                        else if (arg3 == 3)
                            goto label_142270ed4
                    
                    rbp.b = 1
                
                break

label_142270f03:
int64_t* rbx_1 = arg2[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return zx.q(rbp.b)
