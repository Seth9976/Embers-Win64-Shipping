// 函数: sub_141a58d20
// 地址: 0x141a58d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = *arg1
int128_t var_28 = arg1[1]
int64_t rdi = var_28.q
int128_t var_38 = zmm1

if (rdi.d != 0xffffffff || (rdi u>> 0x20).d == 0)
    int128_t* rsi_1 = var_28:8.q
    int128_t* rdx_3
    
    if (rdi.d == 0xffffffff)
        rdx_3 = rsi_1
    else
        rdx_3 =
            ((sx.q(*(rsi_1[2].q + sx.q(rdi.d) * 0xc)) + sx.q((rdi u>> 0x20).d)) << 5) + rsi_1[3].q
    
    uint64_t rbx_1 = var_38:8.q
    int64_t rax_8 = (*rdx_3):8.q
    
    if (rax_8.b != rbx_1.b || (rax_8.b != 2 && (rax_8 u>> 0x20).d != (rbx_1 u>> 0x20).d))
        char rax_11 = var_38.b
        int32_t arg_8
        uint32_t arg_c
        
        if (rax_11 == 2 || rbx_1.b == 2)
        label_141a58e09:
            
            if (rbx_1.b != 0)
            label_141a58e13:
                
                if (rbx_1.b == 1)
                    arg_8.b = 0
                    arg_c = (rbx_1 u>> 0x20).d
                    rbx_1 = arg_8.q
            else
                arg_8.b = 1
                arg_c = (rbx_1 u>> 0x20).d
                rbx_1 = arg_8.q
        else
            int32_t rcx_4 = (var_38:4.q).d
            int32_t rdx_4 = (var_38:0xc.q).d
            
            if (rcx_4 s<= rdx_4)
                if (rcx_4 != rdx_4)
                    goto label_141a58e09
                
                if (rax_11 != 0 && rbx_1.b != 0)
                    goto label_141a58e13
            
            arg_c = 0
            arg_8.b = 2
            rbx_1 = arg_8.q
        
        sub_141a4b4f0(&var_38, &arg_8, rdi, rbx_1, 1)
        int64_t rax_12 = arg_8.q
        
        while (true)
            int128_t* r8_5
            
            if (rax_12.d != 0xffffffff)
                r8_5 = ((sx.q(*(rsi_1[2].q + sx.q(rax_12.d) * 0xc)) + sx.q((rax_12 u>> 0x20).d))
                    << 5) + rsi_1[3].q
            else
                if ((rax_12 u>> 0x20).d != 0)
                    break
                
                if (rax_12.d == rax_12.d)
                    r8_5 = rsi_1
                else
                    r8_5 = ((sx.q(*(rsi_1[2].q + sx.q(rax_12.d) * 0xc)) + sx.q((rax_12 u>> 0x20).d))
                        << 5) + rsi_1[3].q
            
            int64_t var_48_2 = (*r8_5).q
            
            if (var_48_2.b != rbx_1.b)
                break
            
            if (var_48_2.b != 2 && (var_48_2 u>> 0x20).d != (rbx_1 u>> 0x20).d)
                break
            
            var_28.q = rax_12
            rdi = rax_12
            rax_12 = *sub_141a4b4f0(&var_38, &arg_8, rax_12, rbx_1, 1)
        
        int128_t* r8_10
        
        if (rdi.d == 0xffffffff)
            r8_10 = rsi_1
        else
            r8_10 = ((sx.q(*(rsi_1[2].q + sx.q(rdi.d) * 0xc)) + sx.q((rdi u>> 0x20).d)) << 5)
                + rsi_1[3].q
        
        int64_t rcx_19 = (*r8_10):8.q
        
        if (rax_12.d != 0xffffffff)
        label_141a58f1a:
            rsi_1 = ((sx.q(*(rsi_1[2].q + sx.q(rax_12.d) * 0xc)) + sx.q((rax_12 u>> 0x20).d)) << 5)
                + rsi_1[3].q
        label_141a58f3a:
            int128_t zmm0 = *rsi_1
            int64_t rax_15 = zmm0.q
            
            if (rax_15.b != rbx_1.b)
            label_141a58f60:
                rcx_19 = zmm0.q
                
                if (rcx_19.b == 0)
                    arg_8.b = 1
                    arg_c = (rcx_19 u>> 0x20).d
                    rcx_19 = arg_8.q
                else if (rcx_19.b == 1)
                    arg_8.b = 0
                    arg_c = (rcx_19 u>> 0x20).d
                    rcx_19 = arg_8.q
            else if (rax_15.b != 2 && (rax_15 u>> 0x20).d != (rbx_1 u>> 0x20).d)
                goto label_141a58f60
        else if ((rax_12 u>> 0x20).d == 0)
            if (rax_12.d == rax_12.d)
                goto label_141a58f3a
            
            goto label_141a58f1a
        
        int128_t var_48_3
        var_48_3.q = rbx_1
        var_48_3:8.q = rcx_19
        zmm1 = var_48_3
    else
        int64_t rax_10 = rdx_3[1].q
        rdx_3.b = 1
        var_28.q = rax_10
        sub_141a58090(&var_38, rdx_3.b)
        zmm1 = var_38

*arg2 = zmm1
arg2[1] = var_28
return arg2
