// 函数: sub_1428327bc
// 地址: 0x1428327bc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)

if (arg3 u<= 0x7f)
    int32_t rbx_1 = 0
    
    if (arg2 s>= 0 && rsi.d s< arg1[3].d)
        int32_t* r13_1 = *(arg1[0xb] + (rsi << 3))
        int32_t rax_1 = sub_1408e52c0(r13_1)
        sub_14283e318(r13_1, arg3)
        
        if (*(arg1 + 0xe) != 0)
            int32_t var_48_1 = arg3
            sub_142833a04(3, "prog\t%d\t%d\t%d", zx.q(rsi.d))
        
        int32_t r15_1 = 0x80
        int32_t rax_2
        int32_t rdx_1
        
        if (*r13_1 == 9)
            rax_2 = sub_142831210(*arg1, "synth.drums-channel.active", "yes")
            rdx_1 = 0x80
        
        if (*r13_1 != 9 || rax_2 == 0)
            rdx_1 = rax_1
        
        void* rax_3 = sub_142831cd0(arg1, rdx_1, arg3)
        void* rbp_1 = rax_3
        
        if (rax_3 != 0)
            rbx_1 = *(*(rbp_1 + 8) + 8)
        else
            int32_t arg_18 = rax_1
            
            if (rax_1 == 0x80)
                goto label_1428328b8
            
            arg_18 = 0
            void* rax_4 = sub_142831cd0(arg1, 0, arg3)
            rbp_1 = rax_4
            int32_t rax_6
            
            if (rax_4 != 0)
                rax_6 = arg3
            label_1428328c6:
                int32_t var_38_1 = rax_6
                int32_t var_40_1 = arg_18
                int32_t var_48_2 = arg3
                sub_142833a04(2, 
                    "Instrument not found on channel %d [bank=%d prog=%d], substituted [bank=%d prog=%d]", 
                    zx.q(rsi.d))
                rbx_1 = *(*(rbp_1 + 8) + 8)
            else if (arg3 != 0)
                r15_1 = 0
            label_1428328b8:
                rbp_1 = sub_142831cd0(arg1, r15_1, 0)
                rax_6 = 0
                
                if (rbp_1 != 0)
                    goto label_1428328c6
        
        sub_14283e320(r13_1, rbx_1)
        sub_14283e2ac(r13_1, rbp_1)
        return 0

sub_142833a04(1, "Index out of range (chan=%d, prog=%d)", zx.q(rsi.d))
return 0xffffffff
