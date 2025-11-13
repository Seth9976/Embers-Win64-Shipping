// 函数: sub_14291af90
// 地址: 0x14291af90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
int64_t* r15 = arg4
int32_t rbx = 0
int32_t rax = arg3
int32_t var_58 = 0
int64_t* rsi = nullptr
int32_t arg_10

if (arg2 s>= 0xea3)
    arg_10 = 3
else if (arg2 s>= 0x541)
    arg_10 = 4
else if (arg2 s>= 0x1dc)
    arg_10 = 5
else if (arg2 s>= 0x190)
    arg_10 = 6
else if (arg2 s>= 0x15b)
    arg_10 = 7
else if (arg2 s< 0x134)
    int32_t rax_1 = 0x22
    
    if (arg2 s>= 0x37)
        rax_1 = 0x1b
    
    arg_10 = rax_1
    rax = arg3
else
    arg_10 = 8

int32_t var_68_1

if (arg2 s>= 2)
    if (arg2 != 2 || rax == 0)
        void* rax_3 = sub_1428a6a70(0x1000)
        
        if (rax_3 != 0)
            int64_t* rax_4 = sub_1428d8d60()
            rsi = rax_4
            
            if (rax_4 != 0)
                sub_1428d8e50(rax_4)
                int64_t* rax_5 = sub_1428d8ba0(rsi)
                
                if (rax_5 != 0)
                    int32_t* rdi_1 = arg6
                    
                    while (true)
                    label_14291b130:
                        int32_t var_54_1 = rbx
                        
                        if (r15 == 0)
                            int64_t rbp_1 = -0x45c8
                            
                            while (true)
                            label_14291b15f:
                                
                                if (sub_142919890(arg1, arg2, 1, 1) == 0)
                                    break
                                
                                int64_t rdi_2 = 1
                                int16_t* rbx_1 = rax_3 + 2
                                
                                while (true)
                                    uint64_t rax_7 = sub_1428f51c0(arg1, 
                                        zx.q(*(&data_143520be0 - rax_3 + rbx_1)))
                                    
                                    if (rax_7 == -1)
                                        goto label_14291b4cd
                                    
                                    *rbx_1 = rax_7.w
                                    rdi_2 += 1
                                    rbx_1 = &rbx_1[1]
                                    
                                    if (rdi_2 s>= 0x800)
                                        if (arg2 s<= 0x40)
                                            int64_t rax_8 = sub_142890220(arg1)
                                            int64_t rax_9
                                            
                                            if (arg2 != 0x40)
                                                rax_9 = (1 << arg2.b) - rax_8 - 1
                                            else
                                                rax_9 = -1 - rax_8
                                            
                                            if (rax_9 u< rbp_1)
                                                rbp_1 = rax_9
                                        
                                        int64_t rbx_2 = 0
                                        
                                        while (true)
                                            if (arg2 s> 0x40)
                                                void* const rcx_8 = &data_143520be2
                                                
                                                while (true)
                                                    if (rcx_8 s>= "crypto\bn\bn_prime.c")
                                                        goto label_14291b280
                                                    
                                                    if (modu.dp.q(
                                                            0:(zx.q(
                                                                *(rax_3 - &data_143520be2 + rcx_8 + 2))
                                                                + rbx_2), 
                                                            zx.q(*rcx_8)) u<= 1)
                                                        break
                                                    
                                                    rcx_8 += 2
                                            else
                                                int64_t rax_12 = sub_142890220(arg1)
                                                void* rcx_7 = rax_3 + 2
                                                int32_t r8_1 = 1
                                                
                                                while (true)
                                                    if (r8_1 s< 0x800)
                                                        uint64_t r9 =
                                                            zx.q(*(rcx_7 + &data_143520be0 - rax_3))
                                                        
                                                        if (r9 u< rax_12)
                                                            if (
                                                                    modu.dp.q(0:(zx.q(*rcx_7) + rbx_2), r9)
                                                                    == 0)
                                                                break
                                                            
                                                            r8_1 += 1
                                                            rcx_7 += 2
                                                            continue
                                                    
                                                label_14291b280:
                                                    
                                                    if (sub_1428f4ee0(arg1, rbx_2) == 0)
                                                        goto label_14291b4cd
                                                    
                                                    if (sub_142890560(arg1) != arg2)
                                                        goto label_14291b15f
                                                    
                                                    rsi = rax_4
                                                    r15 = arg4
                                                    goto label_14291b3e2
                                            
                                            rbx_2 += 2
                                            
                                            if (rbx_2 u> rbp_1)
                                                break
                                        
                                        break
                            
                        label_14291b4cd:
                            rsi = rax_4
                        else
                            int32_t var_68
                            
                            if (arg3 == 0)
                                int32_t rdi_3 = 0
                                sub_1428d8e50(rsi)
                                int64_t* rax_22 = sub_1428d8ba0(rsi)
                                
                                if (rax_22 != 0 && sub_1429198e0(arg1, arg2, 0, 1) != 0)
                                    var_68.q = rsi
                                    
                                    if (sub_14291a950(nullptr, rax_22, arg1, r15, var_68) != 0
                                            && sub_1428d9010(arg1, arg1, rax_22) != 0)
                                        int32_t rax_26
                                        
                                        if (arg5 != 0)
                                            rax_26 = sub_1428d8f70(arg1, arg1, arg5)
                                        else
                                            rax_26 = sub_1428f4ee0(arg1, zx.q((arg5 + 1).d))
                                        
                                        if (rax_26 != 0)
                                            while (true)
                                                void* const rbx_4 = &data_143520be2
                                                
                                                while (true)
                                                    if (rbx_4 s>= "crypto\bn\bn_prime.c")
                                                        rdi_3 = 1
                                                        goto label_14291b3d5
                                                    
                                                    uint64_t rax_27 =
                                                        sub_1428f51c0(arg1, zx.q(*rbx_4))
                                                    
                                                    if (rax_27 == -1)
                                                        goto label_14291b3d5
                                                    
                                                    if (rax_27 u<= 1)
                                                        if (sub_1428d8f70(arg1, arg1, r15) != 0)
                                                            break
                                                        
                                                        goto label_14291b3d5
                                                    
                                                    rbx_4 += 2
                                
                            label_14291b3d5:
                                sub_1428d8a60(rsi)
                                
                                if (rdi_3 != 0)
                                label_14291b3e2:
                                    rbx = var_58
                                    rdi_1 = arg6
                                label_14291b3f6:
                                    int32_t rax_29 = sub_14291af30(rdi_1, 0, zx.q(rbx))
                                    rbx += 1
                                    var_58 = rbx
                                    
                                    if (rax_29 != 0)
                                        if (arg3 != 0)
                                            if (sub_1428f5900(rax_5, arg1) != 0)
                                                int32_t rbx_5 = 0
                                                
                                                while (rbx_5 s< arg_10)
                                                    var_68.q = rdi_1
                                                    int32_t rax_32 =
                                                        sub_14291b540(arg1, 1, rsi, 0, var_68)
                                                    
                                                    if (rax_32 == 0xffffffff)
                                                        goto label_14291b4d2
                                                    
                                                    if (rax_32 != 0)
                                                        var_68.q = rdi_1
                                                        int32_t rax_33 =
                                                            sub_14291b540(rax_5, 1, rsi, 0, var_68)
                                                        
                                                        if (rax_33 == 0xffffffff)
                                                            goto label_14291b4d2
                                                        
                                                        if (rax_33 != 0)
                                                            if (
                                                                    sub_14291af30(rdi_1, 2, zx.q(var_54_1))
                                                                    == 0)
                                                                goto label_14291b4d2
                                                            
                                                            rbx_5 += 1
                                                            continue
                                                    
                                                    rbx = var_58
                                                    goto label_14291b130
                                                
                                                rbx = 1
                                                break
                                        else
                                            var_68.q = rdi_1
                                            int32_t rax_30 =
                                                sub_14291b540(arg1, arg_10, rsi, 0, var_68)
                                            
                                            if (rax_30 != 0xffffffff)
                                                if (rax_30 == 0)
                                                    continue
                                                
                                                rbx = 1
                                                break
                            else
                                var_68.q = rsi
                                
                                if (sub_14291b9b0(arg1, arg2, r15, arg5, var_68) != 0)
                                    goto label_14291b3f6
                        
                    label_14291b4d2:
                        rbx = 0
                        break
        
        sub_1428a6780(rax_3)
        
        if (rsi != 0)
            sub_1428d8a60(rsi)
        
        sub_1428d8ae0(rsi)
        return zx.q(rbx)
    
    var_68_1 = 0x44
else
    var_68_1 = 0x40

sub_1428a5670(3, 0x8d, 0x76, "crypto\bn\bn_prime.c", var_68_1)
return 0
