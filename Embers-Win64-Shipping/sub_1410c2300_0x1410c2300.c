// 函数: sub_1410c2300
// 地址: 0x1410c2300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
rbx.b = 1

if (sub_1410a0a70(arg1) == 0)
    if (0f f>= *(arg1 + 0x11e4) || (*(*arg1 + 0x2c) & 0x20) == 0
            || 0.100000001f f> *(arg1 + 0x11ec))
        rbx.b = 0
    else if (0.00999999978f f> arg1[0x23d].d)
    label_1410c2383:
        
        if (arg1[0x27d].d != 0)
            int32_t rax_5 = sub_1422e5a30(arg1)
            
            if (sub_1410a09e0(rax_5) != 0)
                goto label_1410c23ac
            
            if (sub_1419a4830(rax_5) == 0)
                goto label_1410c242c
            
            goto label_1410c23ac
        
    label_1410c23ac:
        void* rdx_1 = *arg1
        void* rcx_6 = rdx_1
        void* r9_1 = *(rdx_1 + 0x20)
        
        if (*(r9_1 + 8) == 3)
            int32_t r8_1 = *(rdx_1 + 0x28)
            
            if (((r8_1 u>> 0x13).b & 1) != 0
                    && (*(r9_1 + 0x1040) s> 0 || ((r8_1 u>> 0x15).b & 1) != 0))
                int32_t rax_10 = sub_1422e5a30(arg1)
                char rax_11 = sub_1410a09e0(rax_10)
                char rax_12
                
                if (rax_11 == 0)
                    rax_12 = sub_1419a4830(rax_10)
                
                if (rax_11 == 0 && rax_12 == 0)
                    goto label_1410c242c
                
                rcx_6 = *arg1
        
        void* rdx_2 = *(*(rcx_6 + 0x20) + 0xf80)
        
        if (rdx_2 != 0 && *(rdx_2 + 8) != 0 && (*(rcx_6 + 0x2c) & 0x80000) != 0)
            goto label_1410c242c
        
        rbx.b = 0
    else
        int32_t rax_2 = sub_1422e5a30(arg1)
        
        if (sub_1410a09e0(rax_2) != 0)
            goto label_1410c2383
        
        if (sub_1419a4830(rax_2) != 0)
            goto label_1410c2383
        
    label_1410c242c:
        
        if (sub_1419a4830(sub_1422e5a30(arg1)) != 0)
            rbx.b = 0
        else
            rbx.b = 1

char rdx_3 = 0

if (sub_1413ab380(arg1) == 0)
    rdx_3 = rbx.b

return zx.q(rdx_3)
