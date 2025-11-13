// 函数: sub_141e64320
// 地址: 0x141e64320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int32_t var_30 = 0
sub_1408301c0(arg2, data_143e1a360, &var_38)
int64_t* rbx

if (var_30 s> 1)
    int64_t var_28
    sub_140ba5860(&var_28, &var_38)
    int64_t* var_48
    int64_t* rax_1 = sub_140baf740(&var_48, &var_28)
    int16_t* rdx_3
    
    if (rax_1[1].d == 0)
        rdx_3 = &data_142d40450
    else
        rdx_3 = *rax_1
    
    int64_t arg_20
    sub_140b58260(&arg_20, rdx_3, 1)
    int64_t* rcx_4 = var_48
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    var_48 = nullptr
    int32_t var_40_1 = 1
    sub_1405a4d70(&var_48)
    int64_t* r14_1 = var_48
    int64_t* rdi_1 = r14_1
    *r14_1 = arg_20
    void* rbp_1 = &r14_1[sx.q(var_40_1)]
    
    if (r14_1 != rbp_1)
        do
            int32_t rax_4 = arg3[1].d
            rbx = *rdi_1
            var_48 = rbx
            *(arg3 + 0x34)
            
            if (rax_4 != *(arg3 + 0x34))
                int32_t rax_7 = sub_140b5ead0(rbx.d) + var_48:4.d
                void* r8_1 = &arg3[7]
                void* rcx_7 = *(r8_1 + 8)
                
                if (rcx_7 != 0)
                    r8_1 = rcx_7
                
                int32_t rax_9 = *(r8_1 + (((sx.q(arg3[9].d) - 1) & sx.q(rax_7)) << 2))
                
                if (rax_9 != 0xffffffff)
                    int64_t rdx_8 = *arg3
                    
                    while (true)
                        int64_t rcx_9 = sx.q(rax_9) * 2
                        
                        if (*(rdx_8 + (rcx_9 << 3)) == rbx)
                            break
                        
                        rax_9 = *(rdx_8 + (rcx_9 << 3) + 8)
                        
                        if (rax_9 == 0xffffffff)
                            goto label_141e6445e
                    
                    if (rax_9 != 0xffffffff)
                        if (r14_1 != 0)
                            sub_140a74f90(r14_1)
                        
                        int64_t rcx_14 = var_28
                        
                        if (rcx_14 != 0)
                            sub_140a74f90(rcx_14)
                        
                        rbx.b = 1
                        goto label_141e64485
            
        label_141e6445e:
            rdi_1 = &rdi_1[1]
        while (rdi_1 != rbp_1)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    int64_t rcx_11 = var_28
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

rbx.b = 0
label_141e64485:
int64_t rcx_12 = var_38

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

return zx.q(rbx.b)
