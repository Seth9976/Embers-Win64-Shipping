// 函数: sub_14294a200
// 地址: 0x14294a200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x48)
int32_t r15 = 0
int32_t rbx = 1
int32_t var_48_1
int32_t r8_1

if (*(arg1 + 0x30) == 0 || *(arg1 + 0x38) == 0 || *(arg1 + 0x18) == 0 || *(arg1 + 0x20) == 0
        || *(arg1 + 0x28) == 0)
    var_48_1 = 0x1c
    r8_1 = 0x93
else
    int32_t rax_1
    int32_t rax_3
    
    if (*(arg1 + 4) == 1)
        rax_1 = sub_142898c70(*(arg1 + 0x58))
        r15 = rax_1
        
        if (rax_1 s> 0)
            rax_3 = sub_1428d8900(sub_142890560(*(arg1 + 0x18)))
    
    if (*(arg1 + 4) != 1 || (rax_1 s> 0 && r15 + 2 s<= rax_3))
        void* rax_5 = sub_142890500()
        int64_t* rax_6 = sub_142890500()
        int64_t* rax_7 = sub_142890500()
        int64_t* rax_8 = sub_142890500()
        int64_t* rax_9 = sub_142890500()
        int64_t* rax_10 = sub_1428d8d60()
        
        if (rax_5 == 0 || rax_6 == 0 || rax_7 == 0 || rax_8 == 0 || rax_9 == 0 || rax_10 == 0)
            rbx = -1
            sub_1428a5670(4, 0xa0, 0x41, "crypto\rsa\rsa_chk.c", 0x33)
        else
            int32_t var_48
            
            if (sub_1428902b0(*(arg1 + 0x20)) != 0)
                rbx = 0
                var_48 = 0x39
                sub_1428a5670(4, 0xa0, 0x65, "crypto\rsa\rsa_chk.c", 0x39)
            
            int32_t rax_12 = sub_142890290(*(arg1 + 0x20))
            
            if (rax_12 == 0)
                rbx = 0
                var_48 = 0x3d
                sub_1428a5670(rax_12 + 4, 0xa0, rax_12 + 0x65, "crypto\rsa\rsa_chk.c", 0x3d)
            
            if (sub_14291b520(*(arg1 + 0x30), 0, nullptr, arg2) != 1)
                rbx = 0
                var_48 = 0x43
                sub_1428a5670(4, 0xa0, 0x80, "crypto\rsa\rsa_chk.c", 0x43)
            
            if (sub_14291b520(*(arg1 + 0x38), 0, nullptr, arg2) != 1)
                rbx = 0
                var_48 = 0x49
                sub_1428a5670(4, 0xa0, 0x81, "crypto\rsa\rsa_chk.c", 0x49)
            
            int32_t rdi_1 = 0
            
            if (r15 s> 0)
                do
                    if (sub_14291b520(*sub_142898ea0(*(arg1 + 0x58), rdi_1), 0, nullptr, arg2) != 1)
                        rbx = 0
                        var_48 = 0x51
                        sub_1428a5670(4, 0xa0, 0xaa, "crypto\rsa\rsa_chk.c", 0x51)
                    
                    rdi_1 += 1
                while (rdi_1 s< r15)
            
            if (sub_1428d9290(rax_5, *(arg1 + 0x30), *(arg1 + 0x38), rax_10) != 0)
                int32_t rdi_2 = 0
                
                if (r15 s> 0)
                    do
                        if (sub_1428d9290(rax_5, rax_5, *sub_142898ea0(*(arg1 + 0x58), rdi_2), 
                                rax_10) == 0)
                            goto label_14294a460_2
                        
                        rdi_2 += 1
                    while (rdi_2 s< r15)
                
                if (sub_14288fc80(rax_5, *(arg1 + 0x18)) != 0)
                    rbx = 0
                    int32_t r8_5
                    
                    if (r15 == 0)
                        var_48 = 0x67
                        r8_5 = 0x7f
                    else
                        var_48 = 0x65
                        r8_5 = 0xac
                    
                    sub_1428a5670(4, 0xa0, r8_5, "crypto\rsa\rsa_chk.c", var_48)
                
                if (sub_1428d9010(rax_5, *(arg1 + 0x30), &data_1434e8ea8) == 0)
                labelid_4:
                    rbx = -1
                else if (sub_1428d9010(rax_6, *(arg1 + 0x38), &data_1434e8ea8) == 0)
                labelid_4:
                    rbx = -1
                else if (sub_1428d9290(rax_8, rax_5, rax_6, rax_10) == 0)
                labelid_4:
                    rbx = -1
                else if (sub_1428da340(rax_9, rax_5, rax_6, rax_10) == 0)
                labelid_4:
                    rbx = -1
                else
                    int32_t rbp_1 = 0
                    int64_t* rdi_4
                    
                    if (r15 s<= 0)
                        rdi_4 = rax_7
                    else
                        do
                            rdi_4 = rax_7
                            
                            if (sub_1428d9010(rdi_4, *sub_142898ea0(*(arg1 + 0x58), rbp_1), 
                                    &data_1434e8ea8) == 0)
                                goto label_14294a460_2
                            
                            if (sub_1428d9290(rax_8, rax_8, rdi_4, rax_10) == 0)
                                goto label_14294a460_2
                            
                            if (sub_1428da340(rax_9, rax_9, rdi_4, rax_10) == 0)
                                goto label_14294a460_2
                            
                            rbp_1 += 1
                        while (rbp_1 s< r15)
                    
                    var_48.q = rax_10
                    
                    if (sub_14291a950(rdi_4, nullptr, rax_8, rax_9, var_48) == 0)
                    labelid_4:
                        rbx = -1
                    else
                        var_48.q = rax_10
                        
                        if (sub_1429082e0(rax_5, *(arg1 + 0x28), *(arg1 + 0x20), rdi_4, var_48)
                            == 0)
                        labelid_4:
                            rbx = -1
                        else
                            int32_t rax_31 = sub_1428902b0(rax_5)
                            
                            if (rax_31 == 0)
                                rbx = 0
                                var_48 = 0x97
                                sub_1428a5670(rax_31 + 4, 0xa0, rax_31 + 0x7b, 
                                    "crypto\rsa\rsa_chk.c", 0x97)
                            
                            if (*(arg1 + 0x40) == 0 || *(arg1 + 0x48) == 0 || *(arg1 + 0x50) == 0)
                            label_14294a794:
                                int32_t rbp_2 = 0
                                
                                if (r15 s> 0)
                                    while (true)
                                        int64_t* rax_40 = sub_142898ea0(*(arg1 + 0x58), rbp_2)
                                        
                                        if (sub_1428d9010(rax_5, *rax_40, &data_1434e8ea8) == 0)
                                            break
                                        
                                        var_48.q = rax_10
                                        
                                        if (sub_14291a950(nullptr, rax_6, *(arg1 + 0x28), rax_5, 
                                                var_48) == 0)
                                            break
                                        
                                        if (sub_14288fc80(rax_6, rax_40[1]) != 0)
                                            rbx = 0
                                            var_48 = 0xcf
                                            sub_1428a5670(4, 0xa0, 0xa9, "crypto\rsa\rsa_chk.c", 
                                                0xcf)
                                        
                                        if (sub_1428da4f0(rax_5, rax_40[3], *rax_40, rax_10) == 0)
                                            break
                                        
                                        if (sub_14288fc80(rax_5, rax_40[2]) != 0)
                                            rbx = 0
                                            var_48 = 0xd8
                                            sub_1428a5670(4, 0xa0, 0xa8, "crypto\rsa\rsa_chk.c", 
                                                0xd8)
                                        
                                        rbp_2 += 1
                                        
                                        if (rbp_2 s>= r15)
                                            goto label_14294a89b
                                    
                                labelid_4:
                                    rbx = -1
                            else if (sub_1428d9010(rax_5, *(arg1 + 0x30), &data_1434e8ea8) == 0)
                            labelid_4:
                                rbx = -1
                            else
                                var_48.q = rax_10
                                
                                if (sub_14291a950(nullptr, rax_6, *(arg1 + 0x28), rax_5, var_48)
                                    == 0)
                                labelid_4:
                                    rbx = -1
                                else
                                    if (sub_14288fc80(rax_6, *(arg1 + 0x40)) != 0)
                                        rbx = 0
                                        var_48 = 0xa6
                                        sub_1428a5670(4, 0xa0, 0x7c, "crypto\rsa\rsa_chk.c", 0xa6)
                                    
                                    if (sub_1428d9010(rax_5, *(arg1 + 0x38), &data_1434e8ea8) == 0)
                                    labelid_4:
                                        rbx = -1
                                    else
                                        var_48.q = rax_10
                                        
                                        if (sub_14291a950(nullptr, rax_6, *(arg1 + 0x28), rax_5, 
                                            var_48) == 0)
                                        label_14294a460:
                                            rbx = -1
                                        else
                                            if (sub_14288fc80(rax_6, *(arg1 + 0x48)) != 0)
                                                rbx = 0
                                                var_48 = 0xb4
                                                sub_1428a5670(4, 0xa0, 0x7d, 
                                                    "crypto\rsa\rsa_chk.c", 0xb4)
                                            
                                            if (sub_1428da4f0(rax_5, *(arg1 + 0x38), 
                                                    *(arg1 + 0x30), rax_10) != 0)
                                                if (sub_14288fc80(rax_5, *(arg1 + 0x50)) != 0)
                                                    rbx = 0
                                                    var_48 = 0xbe
                                                    sub_1428a5670(4, 0xa0, 0x7e, 
                                                        "crypto\rsa\rsa_chk.c", 0xbe)
                                                
                                                goto label_14294a794
                                            
                                        label_14294a460_1:
                                            rbx = -1
            else
            label_14294a460_2:
                rbx = -1
        
    label_14294a89b:
        sub_1428901a0(rax_5)
        sub_1428901a0(rax_6)
        sub_1428901a0(rax_7)
        sub_1428901a0(rax_8)
        sub_1428901a0(rax_9)
        sub_1428d8ae0(rax_10)
        return zx.q(rbx)
    
    var_48_1 = 0x25
    r8_1 = 0xa7

sub_1428a5670(4, 0xa0, r8_1, "crypto\rsa\rsa_chk.c", var_48_1)
return 0
