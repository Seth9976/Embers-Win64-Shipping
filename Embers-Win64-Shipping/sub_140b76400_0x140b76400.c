// 函数: sub_140b76400
// 地址: 0x140b76400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_38
sub_140b75db0(arg1, &var_38, arg2)
int64_t* rcx = var_38
int64_t* rdi
int64_t* arg_20

if (rcx == 0)
    rdi.b = 0
else if ((*(*rcx + 0x68))(rcx, &arg_20) == 0)
    rdi.b = 0
else
    int64_t* rax_3 = arg_20
    int32_t rsi_1 = 0
    
    if (rax_3[1].d s<= 0)
    label_140b76512:
        rdi.b = 1
    else
        int64_t* r14_1 = nullptr
        
        while (true)
            int64_t var_48 = 0
            int32_t var_40_1 = 0
            int64_t* rcx_1 = *(r14_1 + *rax_3)
            
            if ((*(*rcx_1 + 0x58))(rcx_1, &var_48) == 0)
                int64_t rcx_6 = var_48
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                break
            
            int64_t rbx_1 = sx.q(arg3[1].d)
            int32_t rax_7 = (rbx_1 + 1).d
            arg3[1].d = rax_7
            
            if (rax_7 s> *(arg3 + 0xc))
                sub_1405a4f90(arg3)
            
            int64_t* rbx_3 = (rbx_1 << 4) + *arg3
            *rbx_3 = 0
            int64_t r15_1 = var_48
            rbx_3[1].d = var_40_1
            
            if (var_40_1 != 0)
                sub_1405a4c70(rbx_3, var_40_1, 0)
                memcpy(*rbx_3, r15_1, var_40_1 * 2)
            else
                *(rbx_3 + 0xc) = 0
            
            int64_t rcx_5 = var_48
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rax_3 = arg_20
            rsi_1 += 1
            r14_1 = &r14_1[2]
            
            if (rsi_1 s>= rax_3[1].d)
                goto label_140b76512
        
        rdi.b = 0
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        int64_t rdx_6 = *var_30
        (*rdx_6)(var_30, rdx_6)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_3 = *var_30
            (*(r8_3 + 8))(var_30, 1, r8_3)

return zx.q(rdi.b)
