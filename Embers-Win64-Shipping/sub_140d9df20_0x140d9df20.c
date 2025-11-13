// 函数: sub_140d9df20
// 地址: 0x140d9df20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rsi = arg3
int64_t rbx

if (arg1[1].d - *(arg1 + 0x34) == 1)
    rbx = zx.q(arg5)
label_140d9e07c:
    
    if (sub_140d9c0e0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_15 = (arg1[9].d - 1) & rsi
        *(arg4 + 0x3c) = rax_15
        void* rdx_8 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_15)
        void* rax_16 = r9_1
        
        if (rdx_8 != 0)
            rax_16 = rdx_8
        
        arg4[7].d = *(rax_16 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_18 = *(r9_1 + 8)
        
        if (rax_18 != 0)
            r9_1 = rax_18
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rbx.d
else
    int32_t arg_8
    sub_140d8f1e0(arg1, &arg_8, arg3, arg4)
    rbx = sx.q(arg_8)
    r12.b = rbx.d != 0xffffffff
    
    if (rbx.d == 0xffffffff)
        rbx = zx.q(arg5)
    else
        void* rbp_3 = (rbx << 6) + *arg1
        int64_t* rsi_1 = *(rbp_3 + 0x30)
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp2_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
        
        int64_t* rcx_2 = *(rbp_3 + 8)
        
        if (rcx_2 != 0)
            int32_t temp1_1 = *(rcx_2 + 0xc)
            *(rcx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rcx_2 + 8))(rcx_2, 1)
        
        memmove(rbp_3, arg4, 0x38)
        int64_t rcx_4 = sx.q(arg5)
        void* r9 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 6) + *arg1) = rcx_4.d
        
        int32_t rax_6 = -1
        int32_t* r8_2 = (rcx_4 << 6) + *arg1
        *r8_2 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rax_6 = arg1[6].d
        
        rsi = arg3
        r8_2[1] = rax_6
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_4.d
        void* rax_7 = *(r9 + 0x10)
        
        if (rax_7 != 0)
            r9 = rax_7
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rcx_4.d)
        int64_t rcx_5 = sx.q((temp4_1 + (temp3_1 & 0x1f)) s>> 5)
        *(r9 + (rcx_5 << 2)) &= not.d(rol.d(1, rcx_4.b))
    
    if (r12.b == 0)
        goto label_140d9e07c

*arg2 = rbx.d

if (arg6 != 0)
    *arg6 = r12.b

return arg2
