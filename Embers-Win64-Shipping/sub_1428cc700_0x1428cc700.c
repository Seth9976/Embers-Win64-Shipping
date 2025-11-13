// 函数: sub_1428cc700
// 地址: 0x1428cc700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int32_t rdi = 0

if (sub_142890300(arg2) != 0)
    return 0

sub_1428d8e50(arg3)
int64_t* rax_2 = sub_1428d8ba0(arg3)

if (rax_2 != 0 && sub_142890040(&arg1[8], arg2) != 0)
    if (sub_142890210(arg2, 4) != 0)
        sub_1428908d0(&arg1[8], 4)
    
    arg1[0xc] = 0
    int64_t* var_38
    sub_142890e40(&var_38)
    int64_t var_2c_1 = 2
    int64_t var_48
    var_38 = &var_48
    
    if (sub_142890210(arg2, 4) != 0)
        sub_1428908d0(&var_38, 4)
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(sub_142890560(arg2) + 0x3f)
    *arg1 = (temp1_1 + (temp0_1 & 0x3f)) & 0xffffffc0
    sub_142890900(&arg1[2], 0)
    
    if (sub_142890810(&arg1[2], 0x40) != 0)
        int64_t rcx_12 = **arg2
        var_48 = rcx_12
        int64_t var_40_1 = 0
        int32_t rax_13
        rax_13.b = rcx_12 != 0
        int32_t var_30_1 = rax_13
        void* rcx_14 = rax_2
        
        if (sub_1428902b0(&var_38) == 0)
            if (sub_1428da4f0(rcx_14, &arg1[2], &var_38, arg3) != 0)
                goto label_1428cc87f
        else
            sub_142890900(rcx_14, 0)
        label_1428cc87f:
            
            if (sub_1428f5510(rax_2, rax_2, 0x40) != 0)
                int32_t rax_17 = sub_142890300(rax_2)
                int32_t rax_18
                
                if (rax_17 != 0)
                    rax_18 = sub_142890900(rax_2, -1)
                else
                    rax_18 = sub_1428f53f0(rax_2, zx.q(rax_17 + 1))
                
                if (rax_18 != 0 && sub_14291a950(rax_2, nullptr, rax_2, &var_38, arg3) != 0)
                    int64_t rcx_19
                    
                    if (rax_2[1].d s<= 0)
                        rcx_19 = 0
                    else
                        rcx_19 = **rax_2
                    
                    *(arg1 + 0x50) = rcx_19
                    *(arg1 + 0x58) = 0
                    sub_142890900(&arg1[2], 0)
                    
                    if (sub_142890810(&arg1[2], *arg1 * 2) != 0
                            && sub_14291a950(nullptr, &arg1[2], &arg1[2], &arg1[8], arg3) != 0)
                        int64_t r8_3 = sx.q(arg1[0xa])
                        
                        for (int64_t i = sx.q(arg1[4]); i s< r8_3; i += 1)
                            *(*(arg1 + 8) + (i << 3)) = 0
                        
                        arg1[4] = r8_3.d
                        rdi = 1

sub_1428d8a60(arg3)
return zx.q(rdi)
