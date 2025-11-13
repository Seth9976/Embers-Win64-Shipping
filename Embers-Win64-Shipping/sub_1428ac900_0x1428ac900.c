// 函数: sub_1428ac900
// 地址: 0x1428ac900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (sub_1428992d0(0x100, nullptr) != 0)
    int64_t* rax_1 = sub_1428a5b30(&data_143fecae8)
    int64_t* rsi_1 = rax_1
    
    if (rax_1 != 0)
    label_1428ac9de:
        int64_t rax_6 = *arg1
        
        if (rax_6 != 0)
            rsi_1[2] = rax_6
        
        while (true)
            void* rcx_4 = rsi_1[2]
            
            if (rcx_4 == 0)
                int64_t* rax_8 = sub_1428a5b30(&data_143fecaec)
                int64_t* rdi_1 = rax_8
                
                if (rax_8 == 0)
                    if (sub_1428992d0(0x100, nullptr) == 0)
                        rsi_1[2] = 0
                        return 1
                    
                    if (sub_142899a10((rdi_1 + 1).b) == 0)
                        rsi_1[2] = 0
                        return 1
                    
                    int32_t** rax_11 = sub_1428a6a70(zx.q((&rdi_1[3]).d))
                    
                    if (rax_11 == 0)
                        sub_1428a5670(0x33, 0x65, 0x41, "crypto\async\async.c", 0x14e)
                        rsi_1[2] = 0
                        return 1
                    
                    int32_t* rax_12 = sub_142898be0(0, 0)
                    *rax_11 = rax_12
                    
                    if (rax_12 == 0)
                        sub_1428a5670(0x33, 0x65, 0x41, "crypto\async\async.c", 0x154)
                    label_1428accb5:
                        sub_1428a6780(rax_11)
                        rsi_1[2] = 0
                        return 1
                    
                    rax_11[2] = 0
                    rax_11[1] = 0
                    
                    if (sub_1428a5cd0(&data_143fecaec, rax_11) == 0)
                        sub_1428a5670(0x33, 0x65, 0x65, "crypto\async\async.c", 0x16d)
                        sub_1428ace40(rax_11)
                        sub_142898a10(*rax_11)
                        goto label_1428accb5
                    
                    rdi_1 = sub_1428a5b30(&data_143fecaec)
                
                int64_t* rax_15 = sub_142898c80(*rdi_1)
                int64_t* rbx_2 = rax_15
                
                if (rax_15 == 0)
                    int64_t rax_16 = rdi_1[2]
                    
                    if (rax_16 != 0 && rdi_1[1] u>= rax_16)
                        rsi_1[2] = 0
                        return 1
                    
                    int64_t* rax_17 = sub_1428acf80()
                    rbx_2 = rax_17
                    
                    if (rax_17 != 0)
                        int64_t rax_18 = CreateFiber(0, sub_1428f7c80, nullptr)
                        *rbx_2 = rax_18
                        
                        if (rax_18 == 0)
                            sub_1428acf30(rbx_2)
                            rsi_1[2] = 0
                            return 1
                        
                        rdi_1[1] += 1
                
                rsi_1[2] = rbx_2
                
                if (rbx_2 == 0)
                    return 1
                
                if (arg5 == 0)
                    rbx_2[3] = 0
                else
                    *(rsi_1[2] + 0x18) = sub_1428a6730(arg6)
                    int64_t rcx_12 = *(rsi_1[2] + 0x18)
                    
                    if (rcx_12 == 0)
                        sub_1428a5670(0x33, 0x69, 0x41, "crypto\async\async.c", 0xe5)
                        sub_1428acfe0(rsi_1[2])
                        rsi_1[2] = 0
                        break
                    
                    memcpy(rcx_12, arg5, arg6.d)
                
                *(rsi_1[2] + 0x10) = arg4
                *(rsi_1[2] + 0x28) = arg2
                SwitchToFiber(*rsi_1[2])
            else
                int32_t rax_7 = *(rcx_4 + 0x24)
                
                if (rax_7 == 3)
                    *arg3 = *(rcx_4 + 0x20)
                    *(rsi_1[2] + 0x28) = 0
                    void* rdi_2 = rsi_1[2]
                    int32_t** rax_26 = sub_1428a5b30(&data_143fecaec)
                    sub_1428a6780(*(rdi_2 + 0x18))
                    *(rdi_2 + 0x18) = 0
                    sub_142898d50(*rax_26, rdi_2)
                    rsi_1[2] = 0
                    *arg1 = 0
                    return 3
                
                if (rax_7 == 1)
                    *arg1 = rcx_4
                    *(rsi_1[2] + 0x24) = 2
                    rsi_1[2] = 0
                    return 2
                
                if (rax_7 != 2)
                    sub_1428a5670(0x33, 0x69, 0x44, "crypto\async\async.c", 0xd7)
                    sub_1428acfe0(rsi_1[2])
                    rsi_1[2] = 0
                    *arg1 = 0
                    break
                
                int64_t* rcx_5 = *arg1
                rsi_1[2] = rcx_5
                SwitchToFiber(*rcx_5)
        
        return 0
    
    if (sub_142899a10((rax_1 + 1).b) != 0)
        int64_t* rax_3 = sub_1428a6730(zx.q((&rsi_1[4]).d))
        rsi_1 = rax_3
        
        if (rax_3 != 0)
            sub_1428f7bf0(rsi_1)
            rsi_1[2] = 0
            rsi_1[3].d = 0
            
            if (sub_1428a5cd0(&data_143fecae8, rsi_1) != 0)
                goto label_1428ac9de
            
            sub_1428a6780(rsi_1)
        else
            sub_1428a5670(0x33, 0x64, 0x41, "crypto\async\async.c", 0x2a)
            sub_1428a6780(rsi_1)

return 0
