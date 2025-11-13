// 函数: sub_1428f7da0
// 地址: 0x1428f7da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = 0
int64_t arg_20 = 0
int64_t var_38[0x2]
var_38[0] = 0
void* rbp = nullptr
int32_t r12 = 0
int32_t rax = sub_1428ac790(arg2, 0x3b8, 0xffffffff)
int32_t rax_2
bool cond:0_1

if (rax s>= 0)
    cond:0_1 = sub_1428ac790(arg2, 0x3b8, rax) s>= 0
    rax_2 = 1

if (rax s< 0 || not(cond:0_1))
    rax_2 = 0

if (rax_2 == 0)
    if (rax != 0xffffffff)
    label_1428f7e4d:
        int32_t rax_4 = sub_1428ac790(arg2, 0x3b7, 0xffffffff)
        int32_t rdi_1 = rax_4
        int32_t rax_6
        bool cond:1_1
        
        if (rax_4 s>= 0)
            cond:1_1 = sub_1428ac790(arg2, 0x3b7, rax_4) s>= 0
            rax_6 = 1
        
        if (rax_4 s< 0 || not(cond:1_1))
            rax_6 = 0
        
        if (rax_6 == 0 && (rdi_1 s< 0 || rax s< 0))
            if (rdi_1 == 0xffffffff)
                rdi_1 = rax
            
            if (rdi_1 s< 0)
            label_1428f7fe5:
                sub_1428a2c50(rbp)
                sub_1428a6780(*(arg1 + 0x28))
                *(arg1 + 0x28) = arg_20
                *(arg1 + 0x30) = sx.q(r12)
                sub_1428a6780(*(arg1 + 0x38))
                *(arg1 + 0x38) = var_38[0]
                *(arg1 + 0x40) = sx.q(rbx)
                return 1
            
            void* rax_7 = sub_1428a2c30(arg2)
            rbp = rax_7
            
            if (rax_7 != 0)
                sub_1428ac670(sub_1428ac750(rax_7, rdi_1))
                
                if (arg3 == 0)
                label_1428f7fd7:
                    int32_t rax_19 = sub_1428a2e00(rbp, &var_38)
                    rbx = rax_19
                    
                    if (rax_19 s> 0)
                        goto label_1428f7fe5
                else
                    int32_t rax_9 = sub_1428ac790(arg3, 0x5a, 0xffffffff)
                    int32_t rax_10
                    int32_t r14_1
                    
                    if (rax_9 s>= 0)
                        rax_10 = sub_1428ac790(arg3, 0x5a, rax_9)
                        r14_1 = 1
                    
                    if (rax_9 s< 0 || rax_10 s< 0)
                        r14_1 = 0
                    
                    int32_t rax_11 = sub_1428ac790(rbp, 0x5a, 0xffffffff)
                    
                    if (rax_11 s>= 0 && sub_1428ac790(rbp, 0x5a, rax_11) s>= 0)
                        rbx = 1
                    
                    if (rax_9 s>= 0xffffffff && rax_11 s>= 0xffffffff && r14_1 == 0 && rbx == 0
                            && (rax_9 s< 0 || rax_11 != 0xffffffff)
                            && (rax_9 != 0xffffffff || rax_11 s< 0)
                            && sub_1428a3b70(rbp, sub_1428a38f0(arg3)) != 0)
                        if (rax_9 == 0xffffffff)
                            goto label_1428f7fd7
                        
                        int64_t rax_15 = sub_1428ac770(arg3, rax_9)
                        void* rax_16 = sub_1428ac770(rbp, rax_11)
                        
                        if (rax_15 != 0 && rax_16 != 0)
                            int32_t* rax_17 = sub_1428e74e0(rax_15)
                            
                            if (rax_17 != 0 && sub_1428e74f0(rax_16, rax_17) != 0)
                                goto label_1428f7fd7
    else if (arg3 == 0)
        int32_t rax_3 = sub_1428a2de0(arg2, &arg_20)
        r12 = rax_3
        
        if (rax_3 s>= 0)
            goto label_1428f7e4d

sub_1428a6780(arg_20)
sub_1428a6780(var_38[0])
sub_1428a2c50(rbp)
return 0
