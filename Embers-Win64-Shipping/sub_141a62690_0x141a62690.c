// 函数: sub_141a62690
// 地址: 0x141a62690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = &arg1[0x32]
int64_t* rbx = arg2
int32_t result_1
sub_141838ff0(r13, &result_1, arg2)
int64_t result = sx.q(result_1)
int32_t result_2

if (result.d == 0xffffffff)
    result_2 = -1
else
    int64_t rax = result * 0x1c
    result = rax + *r13
    
    if (rax == neg.q(*r13))
        result_2 = -1
    else
        result_2 = *(result + 0x10)

result_1 = result_2

if (result_2 == 0xffffffff)
    return result

*(arg1 + 0x34)
int32_t* rcx_4

if (arg1[1].d == *(arg1 + 0x34))
label_141a62754:
    rcx_4 = nullptr
else
    void* rcx_1 = arg1[8]
    void* r8_1 = &arg1[7]
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_4 = *(r8_1 + (((sx.q(arg1[9].d) - 1) & sx.q(result_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141a62754_1:
        rcx_4 = nullptr
    else
        while (true)
            rcx_4 = sx.q(rax_4) * 0x108 + *arg1
            
            if (*rcx_4 == result_2)
                break
            
            rax_4 = rcx_4[0x40]
            
            if (rax_4 == 0xffffffff)
                goto label_141a62754_2
        
        if (rax_4 == 0xffffffff)
        label_141a62754_2:
            rcx_4 = nullptr

void* r15_1 = &rcx_4[2]

if (rcx_4 == 0)
    r15_1 = nullptr

if (r15_1 == 0)
label_141a62af3:
    sub_141a613c0(arg1, &result_1)
    return sub_141892bb0(r13, rbx)

char var_c8
sub_141a2fdf0(&var_c8, r15_1 + 0x40)

while (true)
    int64_t* var_b8
    int64_t* rdi_1 = var_b8
    int128_t* var_b0
    int128_t* rsi_1 = var_b0
    
    while (true)
        int64_t* rax_5
        
        if (rdi_1.d != 0xffffffff || var_b8:4.d == 0)
            rax_5.b = 1
        else
            rax_5.b = 0
        
        if (rax_5.b == 0)
            sub_141a293e0(&arg1[0xa], &result_1, r15_1)
            rbx = arg2
            r13 = &arg1[0x32]
            goto label_141a62af3
        
        void* var_68
        sub_141a2ec10(&var_68, r15_1 + 0x40, rdi_1)
        int128_t var_d8
        int64_t* var_60
        
        if (var_60 != 0)
            int64_t rcx_7 = sx.q(*(var_60 + 0x1c))
            int64_t* rax_10
            
            if (rcx_7.d == 0xffffffff)
                int64_t var_88 = 0
                rax_10 = &var_88
                int32_t var_80_1 = 0
            else
                void* r8_4 = var_68
                int64_t rcx_8 = rcx_7 * 3
                int64_t rax_6 = *(r8_4 + 0x40)
                int32_t var_90_1 = *(rax_6 + (rcx_8 << 2) + 4)
                int64_t var_98
                rax_10 = &var_98
                var_98 = *(r8_4 + 0x50) + sx.q(*(rax_6 + (rcx_8 << 2))) * 0xc
            
            int32_t var_58
            rax_5 = zx.q(var_58)
            var_d8 = *rax_10
            
            if (rax_5.d s>= 0 && rax_5.d s< var_d8:8.d)
                var_d8 = var_c8.o
                sub_141a56880(&arg1[0x14], &var_d8)
                rsi_1 = var_b0
                rdi_1 = var_b8
        
        int128_t* rdx_11
        
        if (rdi_1.d != 0xffffffff)
            rdx_11 = ((sx.q(*(rsi_1[2].q + sx.q(rdi_1.d) * 0xc)) + sx.q((rdi_1 u>> 0x20).d)) << 5)
                + rsi_1[3].q
        else if (var_b8:4.d != 0)
            continue
        else if (rdi_1.d == rdi_1.d)
            rdx_11 = rsi_1
        else
            rdx_11 = ((sx.q(*(rsi_1[2].q + sx.q(rdi_1.d) * 0xc)) + sx.q((rdi_1 u>> 0x20).d)) << 5)
                + rsi_1[3].q
        
        uint64_t var_c0
        uint64_t rbx_1 = var_c0
        var_d8 = *rdx_11
        int64_t rax_16 = var_d8:8.q
        
        if (rax_16.b == rbx_1.b && (rax_16.b == 2 || (rax_16 u>> 0x20).d == (rbx_1 u>> 0x20).d))
            int64_t* rax_18 = rdx_11[1].q
            rdx_11.b = 1
            var_b8 = rax_18
            sub_141a58090(&var_c8, rdx_11.b)
            break
        
        char rax_19 = var_c8
        
        if (rax_19 == 2 || rbx_1.b == 2)
        label_141a628f0:
            uint32_t arg_1c
            
            if (rbx_1.b != 0)
            label_141a62905:
                char arg_18
                
                if (rbx_1.b != 1)
                    arg_18.q = rbx_1
                else
                    arg_1c = (rbx_1 u>> 0x20).d
                    rbx_1 = 0.q
            else
                arg_1c = (rbx_1 u>> 0x20).d
                rbx_1 = 1.q
        else
            int32_t temp4_1 = var_c0:4.d
            int32_t var_c4
            int32_t var_a4_1
            
            if (var_c4 s> temp4_1)
                var_a4_1 = 0
                rbx_1 = 2.q
            else
                if (var_c4 != temp4_1)
                    goto label_141a628f0
                
                if (rax_19 != 0 && rbx_1.b != 0)
                    goto label_141a62905
                
                var_a4_1 = 0
                rbx_1 = 2.q
        
        int64_t* var_a0
        sub_141a4b4f0(&var_c8, &var_a0, rdi_1, rbx_1, 1)
        rax_5 = var_a0
        
        while (true)
            int128_t* r8_9
            
            if (rax_5.d != 0xffffffff)
                r8_9 = ((sx.q(*(rsi_1[2].q + sx.q(rax_5.d) * 0xc)) + sx.q((rax_5 u>> 0x20).d)) << 5)
                    + rsi_1[3].q
            else
                if ((rax_5 u>> 0x20).d != 0)
                    break
                
                if (rax_5.d == rax_5.d)
                    r8_9 = rsi_1
                else
                    r8_9 = ((sx.q(*(rsi_1[2].q + sx.q(rax_5.d) * 0xc)) + sx.q((rax_5 u>> 0x20).d))
                        << 5) + rsi_1[3].q
            
            var_d8 = *r8_9
            int64_t rcx_25 = var_d8.q
            
            if (rcx_25.b != rbx_1.b)
                break
            
            if (rcx_25.b != 2 && (rcx_25 u>> 0x20).d != (rbx_1 u>> 0x20).d)
                break
            
            var_b8 = rax_5
            rdi_1 = rax_5
            int32_t var_50[0x4]
            rax_5 = *sub_141a4b4f0(&var_c8, &var_50, rax_5, rbx_1, 1)
            var_a0 = rax_5
        
        int128_t* r8_14
        
        if (rdi_1.d == 0xffffffff)
            r8_14 = rsi_1
        else
            r8_14 = ((sx.q(*(rsi_1[2].q + sx.q(rdi_1.d) * 0xc)) + sx.q((rdi_1 u>> 0x20).d)) << 5)
                + rsi_1[3].q
        
        var_d8 = *r8_14
        int64_t rcx_33 = var_d8:8.q
        int128_t* r9_5
        
        if (rax_5.d != 0xffffffff)
        label_141a62a1e:
            r9_5 = ((sx.q(*(rsi_1[2].q + sx.q(rax_5.d) * 0xc)) + sx.q((rax_5 u>> 0x20).d)) << 5)
                + rsi_1[3].q
        label_141a62a44:
            int128_t zmm0_2 = *r9_5
            var_d8 = zmm0_2
            rax_5 = var_d8.q
            
            if (rax_5.b != rbx_1.b)
            label_141a62a67:
                var_d8 = zmm0_2
                rcx_33 = var_d8.q
                uint32_t arg_24
                
                if (rcx_33.b == 0)
                    arg_24 = (rcx_33 u>> 0x20).d
                    rcx_33 = 1.q
                else
                    char arg_20
                    
                    if (rcx_33.b != 1)
                        arg_20.q = rcx_33
                    else
                        arg_24 = (rcx_33 u>> 0x20).d
                        rcx_33 = 0.q
            else if (rax_5.b != 2 && (rax_5 u>> 0x20).d != (rbx_1 u>> 0x20).d)
                goto label_141a62a67
        else if ((rax_5 u>> 0x20).d == 0)
            if (rax_5.d != rax_5.d)
                goto label_141a62a1e
            
            r9_5 = rsi_1
            goto label_141a62a44
        int64_t var_70_1 = rcx_33
        var_c8.o = rbx_1.o
