// 函数: sub_142b9aff0
// 地址: 0x142b9aff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int32_t rbp = *(arg2 + 0xc)
uint32_t r12 = zx.d(arg3.w)

if (arg3 s<= 0)
    r12 = arg3

int64_t r15 = *arg1
char* var_48 = &arg_20
uint32_t arg_8
int32_t arg_18
int32_t rax = sub_142b99570(arg2, r12, &arg_18, &arg_8, arg5, var_48)
int32_t rbx = rax
void** var_40

if (rax == 0)
    int32_t rax_1 = arg2[1].d
    int32_t rcx_1 = arg_18
    
    if (rcx_1 u<= rax_1)
        uint32_t r14_1 = arg_8
        
        if (r14_1 u<= rax_1 - rcx_1)
            int32_t rax_3 = sub_142b97060(arg2, rcx_1 + rbp, arg5)
            arg_18 = rax_3
            rbx = rax_3
            
            if (rax_3 == 0)
                void** rax_4
                int512_t zmm0_1
                rax_4, zmm0_1 = sub_142b99860(r15, r14_1, &arg_18)
                rbx = arg_18
                
                if (rbx == 0)
                    int32_t rax_5 = sub_142b969a0(arg2, *(arg2 + 0xc), rax_4, r14_1, zmm0_1)
                    rbx = rax_5
                    
                    if (rax_5 == 0)
                        char* rcx_6 = "type1"
                        
                        if (arg_20.b != 0)
                            rcx_6 = &data_14367f36c
                        
                        uint32_t r9_2 = 0
                        var_40 = arg6
                        var_48 = rcx_6
                        
                        if (r12 s< 0)
                            r9_2 = r12
                        
                        rbx = sub_142b9b180(arg1, rax_4, r14_1, r9_2, arg5, var_48, var_40)
                    else if (rax_4 != 0)
                        (*(r15 + 0x10))(r15, rax_4)
        else
            rbx = 8
    else
        rbx = 8

if (rbx.b == 2)
    int64_t rax_8 = arg2[4]
    
    if (rax_8 != 0)
        if (rax_8(arg2, zx.q(rbp), 0, 0, var_48, var_40) != 0)
            return 0x55
    else if (rbp u> arg2[1].d)
        return 0x55
    
    *(arg2 + 0xc) = rbp

return zx.q(rbx)
