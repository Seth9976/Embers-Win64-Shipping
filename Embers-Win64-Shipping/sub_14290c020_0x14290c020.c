// 函数: sub_14290c020
// 地址: 0x14290c020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t rbx = 0
int64_t arg_10 = 0
char* var_38 = nullptr
uint64_t r15 = 0
int32_t r13 = 0

if (arg2 != 0)
    int64_t* rax_1 = sub_142891590(arg2)
    
    if (rax_1 != 0)
        if (arg4 == 2)
        label_14290c0b8:
            char const* const rdi_1
            
            if (arg4 != 0)
                rdi_1 = "Public-Key"
                
                if (arg4 != 1)
                    rdi_1 = "ECDSA-Parameters"
                
                goto label_14290c10c
            
            int64_t rax_5 = sub_142896660(arg2)
            int64_t rax_6
            
            if (rax_5 != 0)
                rax_6 = sub_1428c0eb0(arg2, &arg_10)
                rbx = rax_6
            
            if (rax_5 != 0 && rax_6 == 0)
                sub_1428a5670(0x10, 0xdd, 0x10, "crypto\ec\ec_ameth.c", 0x18f)
            else
                rdi_1 = "Private-Key"
            label_14290c10c:
                
                if (sub_14289a2c0(arg1, arg3, 0x80) == 0)
                    sub_1428a5670(0x10, 0xdd, 0x10, "crypto\ec\ec_ameth.c", 0x18f)
                else
                    sub_1428bf110(rax_1)
                    
                    if (sub_1428b6f70(arg1, "%s: (%d bit)\n", rdi_1) s<= 0)
                        sub_1428a5670(0x10, 0xdd, 0x10, "crypto\ec\ec_ameth.c", 0x18f)
                    else
                        int32_t rdi_2
                        
                        if (rbx == 0)
                            rdi_2 = arg3 + 4
                        label_14290c1d5:
                            
                            if (r15 == 0)
                            label_14290c21b:
                                
                                if (sub_14293d4a0(arg1, rax_1, arg3) == 0)
                                    sub_1428a5670(0x10, 0xdd, 0x10, "crypto\ec\ec_ameth.c", 0x18f)
                                else
                                    r13 = 1
                            else if (sub_1428b6f70(arg1, "%*spub:\n", zx.q(arg3)) s<= 0)
                                sub_1428a5670(0x10, 0xdd, 0x10, "crypto\ec\ec_ameth.c", 0x18f)
                            else
                                if (sub_14293bb60(arg1, var_38, r15, rdi_2) != 0)
                                    goto label_14290c21b
                                
                                sub_1428a5670(0x10, 0xdd, 0x10, "crypto\ec\ec_ameth.c", 0x18f)
                        else if (sub_1428b6f70(arg1, "%*spriv:\n", zx.q(arg3)) s<= 0)
                            sub_1428a5670(0x10, 0xdd, 0x10, "crypto\ec\ec_ameth.c", 0x18f)
                        else
                            rdi_2 = arg3 + 4
                            
                            if (sub_14293bb60(arg1, arg_10, rbx, rdi_2) != 0)
                                goto label_14290c1d5
                            
                            sub_1428a5670(0x10, 0xdd, 0x10, "crypto\ec\ec_ameth.c", 0x18f)
        else
            if (sub_1427ec4a0(arg2) == 0)
                goto label_14290c0b8
            
            uint64_t rax_4 = sub_1428c0cd0(arg2, sub_1428c0cc0(arg2), &var_38, nullptr)
            r15 = rax_4
            
            if (rax_4 != 0)
                goto label_14290c0b8
            
            sub_1428a5670(0x10, 0xdd, 0x10, "crypto\ec\ec_ameth.c", 0x18f)
        
        sub_1428a6890(arg_10, rbx, "crypto\ec\ec_ameth.c", 0x190)
        sub_1428a6780(var_38)
        return zx.q(r13)

sub_1428a5670(0x10, 0xdd, 0x43, "crypto\ec\ec_ameth.c", 0x15f)
return 0
