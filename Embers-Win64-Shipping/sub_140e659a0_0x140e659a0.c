// 函数: sub_140e659a0
// 地址: 0x140e659a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t r15 = 0
*arg2 = 0
arg2[1] = 0
int64_t rbx = arg3
int64_t var_e8 = rbx
int32_t rcx
rcx.b = sub_140b5b8a0(arg3.d, 0) == 0
uint32_t rax_4
rax_4.b = (rbx u>> 0x20).d != 0
rcx.b |= rax_4.b
int64_t var_d8
void var_c8
int64_t* var_c0

if (rcx.b != 0)
    int32_t rsi_1 = var_e8:4.d
    int32_t rcx_17
    
    do
        if (*arg2 != 0)
            goto label_140e65cce
        
        int64_t var_b8
        
        if (*(arg1 + 0x60) == *(arg1 + 0x8c))
        label_140e65a7f:
            sub_140e50b60(&var_b8)
        else
            int32_t rax_6 = sub_140b5ead0(rbx.d)
            void* r8 = arg1 + 0x90
            void* rcx_2 = *(r8 + 8)
            
            if (rcx_2 != 0)
                r8 = rcx_2
            
            int32_t rax_9 = *(r8 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_6 + rsi_1)) << 2))
            
            if (rax_9 == 0xffffffff)
            label_140e65a7f_1:
                sub_140e50b60(&var_b8)
            else
                int64_t* rdx_5
                
                while (true)
                    rdx_5 = (sx.q(rax_9) << 7) + *(arg1 + 0x58)
                    
                    if (*rdx_5 == rbx)
                        break
                    
                    rax_9 = rdx_5[0xf].d
                    
                    if (rax_9 == 0xffffffff)
                        goto label_140e65a7f_2
                
                if (rax_9 == 0xffffffff || rdx_5 == 0)
                label_140e65a7f_2:
                    sub_140e50b60(&var_b8)
                else
                    sub_140e50a10(&var_b8, &rdx_5[1])
        
        int64_t* rax_11 = sub_140e63020(arg1, &var_c8, rbx, arg4, arg5)
        int64_t* rbx_1 = rax_11[1]
        var_d8 = *rax_11
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (&var_d8 != arg2)
            var_d8.o = *arg2
            *arg2 = var_d8.o
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp5_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (var_c0 != 0)
            var_c0[1].d -= 1
            
            if (var_c0[1].d == 1)
                (**var_c0)(var_c0)
                int32_t temp8_1 = *(var_c0 + 0xc)
                *(var_c0 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_c0 + 8))(var_c0, 1)
        
        void* var_58
        rbx = *(var_58 + 0x18)
        var_e8 = rbx
        int64_t* var_50
        
        if (var_50 != 0)
            var_50[1].d -= 1
            
            if (var_50[1].d == 1)
                (**var_50)(var_50)
                int32_t temp9_1 = *(var_50 + 0xc)
                *(var_50 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*var_50 + 8))(var_50, 1)
        
        void var_68
        sub_140e52f80(&var_68)
        int32_t var_70_1 = 0
        int64_t var_78
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        sub_1407ece30(&var_b8, 0)
        int64_t var_98
        
        if (var_98 != 0)
            sub_140a74f90(var_98)
        
        int64_t rcx_16 = var_b8
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        bool rax_18 = sub_140b5b8a0(rbx.d, 0)
        rsi_1 = var_e8:4.d
        rcx_17.b = rax_18 == 0
        rcx_17.b |= rsi_1 != 0
    while (rcx_17.b != 0)

if (*arg2 == 0)
    var_e8 = 0
    int32_t var_e0_1 = 0
    sub_140e65290(arg1, arg3, &var_e8)
    
    if (var_e0_1 s> 0)
        while (*arg2 == 0)
            int64_t* rax_20 = sub_140e63020(arg1, &var_c8, *(var_e8 + (sx.q(r15) << 3)), arg4, arg5)
            int64_t* rbx_4 = rax_20[1]
            var_d8 = *rax_20
            
            if (rbx_4 != 0)
                rbx_4[1].d += 1
            
            if (&var_d8 != arg2)
                var_d8.o = *arg2
                *arg2 = var_d8.o
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp3_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            if (var_c0 != 0)
                var_c0[1].d -= 1
                
                if (var_c0[1].d == 1)
                    (**var_c0)(var_c0)
                    int32_t temp6_1 = *(var_c0 + 0xc)
                    *(var_c0 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*var_c0 + 8))(var_c0, 1)
            
            r15 += 1
            
            if (r15 s>= var_e0_1)
                break
    
    int64_t rcx_25 = var_e8
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)

label_140e65cce:
__security_check_cookie(rax_1 ^ &var_118)
return arg2
