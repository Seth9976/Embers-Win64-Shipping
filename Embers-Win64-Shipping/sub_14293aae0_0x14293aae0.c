// 函数: sub_14293aae0
// 地址: 0x14293aae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* r14 = arg1
int64_t* rbx = arg2
int32_t r15 = 0
sub_1428d8e50(arg5)

if (r14 == 0)
    r14 = sub_1428d8ba0(arg5)

if (rbx == 0)
    rbx = sub_1428d8ba0(arg5)

int64_t* rax_3 = sub_1428d8ba0(arg5)
int64_t* rax_4 = sub_1428d8ba0(arg5)

if (rax_4 == 0)
label_14293ad2d:
    sub_1428d8a60(arg5)
else if (sub_1428909a0(arg3, arg4) s>= 0)
    int32_t rax_7 = sub_142890560(arg3)
    int32_t r12_1 = *(arg4 + 0x34)
    int32_t rsi_1 = rax_7
    int32_t rax_9 = arg4[6].d * 2
    
    if (rax_9 s> rsi_1)
        rsi_1 = rax_9
    
    if (rsi_1 != r12_1)
        r12_1 = -1
        sub_1428d8e50(arg5)
        int64_t* rax_10 = sub_1428d8ba0(arg5)
        
        if (rax_10 != 0 && sub_142890810(rax_10, rsi_1) != 0
                && sub_14291a950(&arg4[3], nullptr, rax_10, arg4, arg5) != 0)
            r12_1 = rsi_1
        
        sub_1428d8a60(arg5)
        *(arg4 + 0x34) = r12_1
    
    if (r12_1 != 0xffffffff && sub_1428f5760(rax_3, arg3, arg4[6].d) != 0
            && sub_1428d9290(rax_4, rax_3, &arg4[3], arg5) != 0
            && sub_1428f5760(r14, rax_4, rsi_1 - arg4[6].d) != 0)
        r14[2].d = 0
        
        if (sub_1428d9290(rax_4, arg4, r14, arg5) != 0 && sub_1428d9180(rbx, arg3, rax_4) != 0)
            rbx[2].d = 0
            int32_t rsi_3 = 0
            
            if (sub_1428909a0(rbx, arg4) s>= 0)
                int32_t i
                
                do
                    int32_t rax_19 = rsi_3
                    rsi_3 += 1
                    
                    if (rax_19 s> 2)
                        sub_1428a5670(3, 0x82, 0x65, "crypto\bn\bn_recp.c", 0x95)
                        goto label_14293ad2d_1
                    
                    if (sub_1428d9180(rbx, rbx, arg4) == 0)
                        goto label_14293ad2d_1
                    
                    if (sub_1428f4ee0(r14, 1) == 0)
                        goto label_14293ad2d_1
                    
                    i = sub_1428909a0(rbx, arg4)
                while (i s>= 0)
            
            if (sub_142890300(rbx) == 0)
                r15 = arg3[2].d
            
            rbx[2].d = r15
            r15 = 1
            r14[2].d = arg3[2].d ^ arg4[2].d
    
label_14293ad2d_1:
    sub_1428d8a60(arg5)
else
    sub_142890900(r14, 0)
    int64_t* rax_6 = sub_142890040(rbx, arg3)
    sub_1428d8a60(arg5)
    r15.b = rax_6 != 0

return zx.q(r15)
