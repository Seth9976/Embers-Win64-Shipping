// 函数: sub_1408c0ed0
// 地址: 0x1408c0ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg2
void* rbx = arg1
int64_t var_70
int32_t var_68
int32_t* var_60

if (data_143ceb920 != 0)
    char var_58_1 = arg9
    var_60 = arg8
    var_68 = arg7
    var_70 = arg6
    sub_1408c0940(arg1, arg2, arg3, arg4, arg5)
else if (arg2 != 0)
    sub_1408bbc30(rdi, arg3, arg4, arg8)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*(rbx + 0x18) s> 0)
        int64_t r14_1 = 0
        
        do
            int64_t* rbx_2 = *(rbx + 0x10) + r14_1
            int32_t var_44
            sub_1408be510(rbx_2, &var_44, rdi)
            int64_t rax_1 = sx.q(var_44)
            
            if (rax_1.d != 0xffffffff)
                void* rcx_2 = *rbx_2 + rax_1 * 0x18
                int64_t* rax_3 = rcx_2 + 8
                
                if (rcx_2 == 0)
                    rax_3 = nullptr
                
                if (rax_3 != 0)
                    int64_t* rbx_3 = *rax_3
                    
                    if (rbx_3 != 0)
                        int32_t rdi_1 = 0
                        int32_t rsi_2 = rbx_3[3].d - *(rbx_3 + 0x14)
                        
                        if (rsi_2 s> 0)
                            do
                                void* const rcx_4
                                
                                if (rdi_1 s>= rbx_3[3].d - *(rbx_3 + 0x14))
                                label_1408c0fd0:
                                    rcx_4 = nullptr
                                else
                                    int64_t rax_6 = sx.q(rbx_3[1].d)
                                    int32_t rdx_3 = rdi_1
                                    int64_t r9_1 = 0
                                    
                                    if (rax_6.d s<= 0)
                                    label_1408c0fd0_1:
                                        rcx_4 = nullptr
                                    else
                                        int64_t* r8_2 = *rbx_3
                                        void* rax_7
                                        
                                        while (true)
                                            rax_7 = *r8_2
                                            
                                            if (rax_7 != 0)
                                                int32_t rcx_3 = *(rax_7 + 8)
                                                
                                                if (rdx_3 s< rcx_3)
                                                    break
                                                
                                                rdx_3 -= rcx_3
                                            
                                            r9_1 += 1
                                            r8_2 = &r8_2[1]
                                            
                                            if (r9_1 s>= rax_6)
                                                goto label_1408c0fd0_2
                                        
                                        if (rdx_3 s< 0)
                                        label_1408c0fd0_2:
                                            rcx_4 = nullptr
                                        else
                                            rcx_4 = sx.q(rdx_3) * 0x2a8 + *rax_7
                                
                                sub_1408bbc30(rcx_4, arg3, arg4, arg8)
                                rdi_1 += 1
                            while (rdi_1 s< rsi_2)
                            
                            i = i_1
                        
                        rdi = arg2
            
            rbx = arg1
            i += 1
            r14_1 += 0x50
            i_1 = i
        while (i s< *(rbx + 0x18))

var_60.b = arg9
var_68.q = arg8
var_70.d = arg7
return sub_1408c04b0(rdi, arg3, arg4.d, arg5, arg6.b)
