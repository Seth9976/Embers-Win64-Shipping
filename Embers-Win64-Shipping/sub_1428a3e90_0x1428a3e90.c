// 函数: sub_1428a3e90
// 地址: 0x1428a3e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = 0
int64_t rbp = 0
int64_t* rax = sub_1428f3750(0)

if (rax == 0)
label_1428a3fc1:
    
    if (arg1 == 0)
        sub_1428a6780(rbp)
else
    if (arg1 != 0)
        rbp = arg1
    label_1428a3f99:
        
        if (sub_1428f3700(rax, rbp, 0) s> 0)
            char* rax_10
            
            if (arg2 == 0)
            label_1428a402d:
                rax_10 = sub_1428f3650(rax, nullptr, "openssl_conf")
                
                if (rax_10 == 0)
                    goto label_1428a3fb7
                
                goto label_1428a403d
            
            rax_10 = sub_1428f3650(rax, nullptr, arg2)
            
            if (rax_10 == 0)
                if ((arg3 & 0x20) == 0)
                    goto label_1428a3fb7
                
                goto label_1428a402d
            
        label_1428a403d:
            int32_t* rax_11 = sub_1428f35e0(rax, rax_10)
            
            if (rax_11 != 0)
                if (sub_142898c70(rax_11) s<= 0)
                label_1428a3fbc:
                    rbx = 1
                else
                    while (true)
                        void* rax_13 = sub_142898ea0(rax_11, rbx)
                        int32_t rax_14 = sub_1428a43e0(rax, *(rax_13 + 8), *(rax_13 + 0x10), arg3)
                        
                        if (rax_14 s<= 0 && (arg3 & 1) == 0)
                            rbx = rax_14
                            break
                        
                        rbx += 1
                        
                        if (rbx s>= sub_142898c70(rax_11))
                            goto label_1428a3fbc_1
        else if ((arg3 & 0x10) != 0 && (sub_1428a5510() & 0xfff) == 0x72)
        label_1428a3fb7:
            sub_1428a49e0()
        label_1428a3fbc_1:
            rbx = 1
        
        goto label_1428a3fc1
    
    char* rax_1 = getenv("OPENSSL_CONF")
    
    if (rax_1 == 0)
        int64_t rax_3 = -1
        
        do
            rax_3 += 1
        while ((*"C:\Windows")[rax_3] != 0)
        
        int64_t rdi_1 = sx.q(rax_3.d + 0xd)
        int64_t rax_5 = sub_1428a6730(rdi_1)
        rbp = rax_5
        
        if (rax_5 != 0)
            char const* const var_20_1 = "openssl.cnf"
            int16_t* const var_28_1 = &data_142d63b88
            sub_1428b7080(rbp, rdi_1, "%s%s%s", "C:\Windows")
            goto label_1428a3f86
        
        sub_1428a6780(0)
    else
        rbp = sub_1428a6ba0(rax_1)
    label_1428a3f86:
        
        if (rbp != 0)
            goto label_1428a3f99
        
        sub_1428a6780(rbp)

sub_1428f3490(rax)
return zx.q(rbx)
