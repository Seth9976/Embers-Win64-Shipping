// 函数: sub_1429222d0
// 地址: 0x1429222d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t* rdi = arg4
int32_t r14 = 0
sub_1428a5c40(data_144020538)
int64_t rbx = *arg1

if (rbx != 0)
label_142922340:
    int32_t i = arg5
    
    while (i != 0)
        int64_t* rcx_2 = *arg1
        i -= 1
        int32_t var_38 = *rdi
        int64_t* rax_3 = sub_1428a8d10(rcx_2, &var_38)
        int64_t* rbx_1 = rax_3
        
        if (rax_3 == 0)
            int64_t* rax_4 = sub_1428a6730(zx.q((&rax_3[4]).d))
            rbx_1 = rax_4
            
            if (rax_4 == 0)
                goto label_14292244c
            
            rax_4[3].d = 1
            *rbx_1 = *rdi
            void* rax_6 = sub_142898ba0()
            rbx_1[1] = rax_6
            
            if (rax_6 == 0)
                sub_1428a6780(rbx_1)
                goto label_14292244c
            
            rbx_1[2] = 0
            sub_1428a8a90(*arg1, rbx_1)
            
            if (sub_1428a8d10(*arg1, &var_38) != rbx_1)
                sub_142898a10(rbx_1[1])
                sub_1428a6780(rbx_1)
                goto label_14292244c
        
        sub_142898870(rbx_1[1], arg3)
        
        if (sub_142898d50(rbx_1[1], arg3) == 0)
            goto label_14292244c
        
        rbx_1[3].d = 0
        
        if (arg6 != 0)
            if (sub_1428af9b0(arg3) == 0)
                sub_1428a5670(0x26, 0xb8, 0x6d, "crypto\engine\eng_table.c", 0x82)
                goto label_14292244c
            
            void* rcx_9 = rbx_1[2]
            
            if (rcx_9 != 0)
                sub_1428af8f0(rcx_9, 0)
            
            rbx_1[2] = arg3
            rbx_1[3].d = 1
        
        rdi = &rdi[1]
    
    r14 = 1
else
    int64_t* rax_1 = sub_1428a8c10(sub_1406938b0, sub_1428aeb70)
    
    if (rax_1 != 0)
        *arg1 = rax_1
        
        if (rbx == 0)
            sub_1428e3290(arg2)
        
        goto label_142922340

label_14292244c:
sub_1428a5d00(data_144020538)
return zx.q(r14)
