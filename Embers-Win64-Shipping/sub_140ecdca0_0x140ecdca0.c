// 函数: sub_140ecdca0
// 地址: 0x140ecdca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg1[0xdc]
char rbp = 0
int32_t arg_8 = 0

if (r12 == 0 || *(arg1 + 0x76e) == 0 || (*(arg1 + 0x76d) == 0 && *(arg4 + 0x19) == 1))
    sub_140ecda90(arg1, arg2, arg3, arg4, arg5)
else
    int32_t rax_2 = (*(*arg1 + 0x268))()
    int64_t i = arg1[0xce]
    int32_t r14_1 = -1
    int32_t r8 = rax_2
    int32_t rbx_1
    int64_t* rdi_1
    
    if (i != 0)
        rdi_1 = arg1[0xcf]
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int64_t* rdx = *r12
        int64_t* rbx_2 = rdx
        void* rax_5 = &rdx[sx.q(r12[1].d) * 2]
        
        if (rdx == rax_5)
        label_140ecdd62:
            rbx_1 = -1
        else
            while (*rbx_2 != i)
                rbx_2 = &rbx_2[2]
                
                if (rbx_2 == rax_5)
                    goto label_140ecdd62
            
            rbx_1 = ((rbx_2 - rdx) s>> 4).d
        
        rbp = 1
    else
        rdi_1 = rax_2.q
        rbx_1 = 0
    
    if ((rbp & 1) != 0 && rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
            
            r8 = rax_2
    
    int32_t rcx_2 = arg1[0x9b].d
    char rax_8 = *(arg4 + 0x18)
    
    if (rcx_2 != 1)
        if (rcx_2 != 0)
            sub_140ecda90(arg1, arg2, arg3, arg4, arg5)
        else
            if (rax_8 == 2)
                goto label_140ecddf6
            
            if (rax_8 == 3)
                goto label_140ecde16
            
            sub_140ecda90(arg1, arg2, arg3, arg4, arg5)
    else if (rax_8 == 0)
    label_140ecddf6:
        
        if (arg1[0xef].b != 0)
            goto label_140ecde2c
        
        if (mods.dp.d(sx.q(rbx_1), r8) s> 0)
            goto label_140ecde2c
        
        sub_140ecda90(arg1, arg2, arg3, arg4, arg5)
    else if (rax_8 == rcx_2.b)
    label_140ecde16:
        int32_t temp10_1
        int32_t temp11_1
        
        if (arg1[0xef].b == 0)
            temp10_1:temp11_1 = sx.q(rbx_1)
        
        if (arg1[0xef].b == 0 && mods.dp.d(temp10_1:temp11_1, r8) s>= r8 - 1)
            sub_140ecda90(arg1, arg2, arg3, arg4, arg5)
        else
            r14_1 = 1
        label_140ecde2c:
            int32_t rcx_4 = rbx_1 + r14_1
            
            if (rcx_4 s< 0 || rcx_4 s>= r12[1].d)
                sub_140ecda90(arg1, arg2, arg3, arg4, arg5)
            else
                (*(*arg1 + 0x2b8))(arg1, (sx.q(rcx_4) << 4) + *r12, arg4)
                int128_t var_48 = zx.o(0)
                sub_140eb9b00(arg2, &var_48, arg5)
    else
        sub_140ecda90(arg1, arg2, arg3, arg4, arg5)

return arg2
