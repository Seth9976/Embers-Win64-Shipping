// 函数: sub_141a41dc0
// 地址: 0x141a41dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
char r13 = arg3
void* result = sub_141a4c4c0(arg1, arg2)

if (result != 0)
    int64_t* rcx = *(result + 0x38)
    int64_t r8 = *rcx
    int64_t* var_50
    (*(r8 + 0x268))(rcx, &var_50, r8)
    char result_1
    int64_t* rax_3
    
    if ((result_1 & 1) != 0)
        rax_3 = &var_50
        
        if ((result_1 & 2) == 0)
            rax_3 = var_50
    
    int64_t var_90
    int64_t r12
    
    if ((result_1 & 1) == 0 || *(rax_3 + 9) == 0)
        r12.b = 0
    else
        r12.b = 1
        
        if (r13 != 0)
            int32_t var_fc_1 = 0
            int32_t var_104_1 = 0
            var_90 = 2.q
            int64_t var_88_1 = 2.q
            sub_141a56880(&arg1[0x14], &var_90)
            r13 = 0
    
    void* rbx_1 = result + 0x40
    void* var_b0_1 = rbx_1
    int128_t var_e8
    sub_141a2fdf0(&var_e8, rbx_1)
label_141a41e99:
    uint64_t var_d8
    uint64_t rdi_1 = var_d8
    int128_t* var_d0
    int128_t* r14_1 = var_d0
    
    while (true)
        uint64_t rax_6
        
        if (rdi_1.d != 0xffffffff || var_d8:4.d == 0)
            rax_6.b = 1
        else
            rax_6.b = 0
        
        if (rax_6.b == 0)
            result = zx.q(result_1)
            
            if ((result.b & 1) != 0)
                int64_t* rcx_34 = &var_50
                
                if ((result.b & 2) == 0)
                    rcx_34 = var_50
                
                result.b &= 0xfe
                char var_40 = result.b
                result = (**rcx_34)(rcx_34, 0)
                
                if ((var_40 & 2) == 0)
                    result = sub_140a74f90(var_50)
            
            break
        
        int128_t var_f8
        void** const var_a8
        uint64_t var_a0
        int32_t var_98
        
        if (r12.b != 0)
        label_141a41f54:
            int32_t var_c4_1 = 0
            var_f8 = var_e8
            var_a8 = &data_14302f418
            var_a0 = &arg1[0x46]
            var_98 = arg2
            sub_141a37e10(&arg1[0x46], &var_f8, &var_a8, 0xffffffff.q)
            
            if (r13 != 0)
                var_f8 = var_e8
                sub_141a56880(&arg1[0x14], &var_f8)
            
            rdi_1 = var_d8
            r14_1 = var_d0
        else
            sub_141a2ec10(&var_a8, rbx_1, rdi_1)
            
            if (var_a0 != 0)
                int64_t rcx_4 = sx.q(*(var_a0 + 0x1c))
                int64_t* rax_11
                
                if (rcx_4.d == 0xffffffff)
                    int64_t var_70 = 0
                    int32_t var_68_1 = 0
                    rax_11 = &var_70
                else
                    void** const r8_2 = var_a8
                    int64_t rcx_5 = rcx_4 * 3
                    int64_t rax_7 = r8_2[8]
                    int32_t var_78_1 = *(rax_7 + (rcx_5 << 2) + 4)
                    int64_t var_80
                    rax_11 = &var_80
                    var_80 = r8_2[0xa] + sx.q(*(rax_7 + (rcx_5 << 2))) * 0xc
                
                rax_6 = zx.q(var_98)
                var_f8 = *rax_11
                
                if (rax_6.d s>= 0 && rax_6.d s< var_f8:8.d)
                    goto label_141a41f54
        int128_t* rdx_10
        
        if (rdi_1.d != 0xffffffff)
            rdx_10 = ((sx.q(*(r14_1[2].q + sx.q(rdi_1.d) * 0xc)) + sx.q((rdi_1 u>> 0x20).d)) << 5)
                + r14_1[3].q
        else if (var_d8:4.d != 0)
            continue
        else if (rdi_1.d == rdi_1.d)
            rdx_10 = r14_1
        else
            rdx_10 = ((sx.q(*(r14_1[2].q + sx.q(rdi_1.d) * 0xc)) + sx.q((rdi_1 u>> 0x20).d)) << 5)
                + r14_1[3].q
        
        uint64_t rbx_2 = var_e8:8.q
        var_f8 = *rdx_10
        int64_t rax_17 = var_f8:8.q
        
        if (rax_17.b == rbx_2.b && (rax_17.b == 2 || (rax_17 u>> 0x20).d == (rbx_2 u>> 0x20).d))
            uint64_t rax_19 = rdx_10[1].q
            rdx_10.b = 1
            var_d8 = rax_19
            sub_141a58090(&var_e8, rdx_10.b)
            rbx_1 = var_b0_1
            goto label_141a41e99
        
        char rax_20 = var_e8.b
        
        if (rax_20 == 2 || rbx_2.b == 2)
        label_141a42062:
            
            if (rbx_2.b != 0)
            label_141a4207a:
                char var_108
                
                if (rbx_2.b != 1)
                    var_108.q = rbx_2
                else
                    uint32_t var_104_3 = (rbx_2 u>> 0x20).d
                    rbx_2 = 0.q
            else
                uint32_t var_104_2 = (rbx_2 u>> 0x20).d
                rbx_2 = 1.q
        else
            int32_t rcx_14 = var_e8:4.d
            int32_t temp0_1 = var_e8:0xc.d
            int32_t var_bc_1
            
            if (rcx_14 s> temp0_1)
                var_bc_1 = 0
                rbx_2 = 2.q
            else
                if (rcx_14 != temp0_1)
                    goto label_141a42062
                
                if (rax_20 != 0 && rbx_2.b != 0)
                    goto label_141a4207a
                
                var_bc_1 = 0
                rbx_2 = 2.q
        
        uint64_t var_b8
        sub_141a4b4f0(&var_e8, &var_b8, rdi_1, rbx_2, 1)
        rax_6 = var_b8
        
        while (true)
            int128_t* r8_8
            
            if (rax_6.d != 0xffffffff)
                r8_8 = ((sx.q(*(r14_1[2].q + sx.q(rax_6.d) * 0xc)) + sx.q((rax_6 u>> 0x20).d)) << 5)
                    + r14_1[3].q
            else
                if ((rax_6 u>> 0x20).d != 0)
                    break
                
                if (rax_6.d == rax_6.d)
                    r8_8 = r14_1
                else
                    r8_8 = ((sx.q(*(r14_1[2].q + sx.q(rax_6.d) * 0xc)) + sx.q((rax_6 u>> 0x20).d))
                        << 5) + r14_1[3].q
            
            var_f8 = *r8_8
            int64_t rcx_23 = var_f8.q
            
            if (rcx_23.b != rbx_2.b)
                break
            
            if (rcx_23.b != 2 && (rcx_23 u>> 0x20).d != (rbx_2 u>> 0x20).d)
                break
            
            var_d8 = rax_6
            rdi_1 = rax_6
            rax_6 = *sub_141a4b4f0(&var_e8, &var_90, rax_6, rbx_2, 1)
            var_b8 = rax_6
        
        int128_t* r8_13
        
        if (rdi_1.d == 0xffffffff)
            r8_13 = r14_1
        else
            r8_13 = ((sx.q(*(r14_1[2].q + sx.q(rdi_1.d) * 0xc)) + sx.q((rdi_1 u>> 0x20).d)) << 5)
                + r14_1[3].q
        
        var_f8 = *r8_13
        int64_t rcx_31 = var_f8:8.q
        int128_t* r9_7
        
        if (rax_6.d != 0xffffffff)
        label_141a4219d:
            r9_7 = ((sx.q(*(r14_1[2].q + sx.q(rax_6.d) * 0xc)) + sx.q((rax_6 u>> 0x20).d)) << 5)
                + r14_1[3].q
        label_141a421c3:
            int128_t zmm0_1 = *r9_7
            var_f8 = zmm0_1
            rax_6 = var_f8.q
            
            if (rax_6.b != rbx_2.b)
            label_141a421e8:
                var_f8 = zmm0_1
                rcx_31 = var_f8.q
                
                if (rcx_31.b == 0)
                    uint32_t var_fc_2 = (rcx_31 u>> 0x20).d
                    rcx_31 = 1.q
                else
                    char var_100
                    
                    if (rcx_31.b != 1)
                        var_100.q = rcx_31
                    else
                        uint32_t var_fc_3 = (rcx_31 u>> 0x20).d
                        rcx_31 = 0.q
            else if (rax_6.b != 2 && (rax_6 u>> 0x20).d != (rbx_2 u>> 0x20).d)
                goto label_141a421e8
        else if ((rax_6 u>> 0x20).d == 0)
            if (rax_6.d != rax_6.d)
                goto label_141a4219d
            
            r9_7 = r14_1
            goto label_141a421c3
        rbx_1 = var_b0_1
        int64_t var_58_1 = rcx_31
        var_e8 = rbx_2.o

__security_check_cookie(rax_1 ^ &var_138)
return result
