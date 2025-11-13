// 函数: sub_1422cecc0
// 地址: 0x1422cecc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg3
char* r14 = arg2

if (*(arg1 + 0x30) == 0)
    int64_t result
    result.b = 0
    return result

int32_t rax = *arg8
int64_t r12 = *(arg2 + 0x20)
int64_t arg_8 = r12
uint64_t var_c0 = 0
int32_t var_b8 = 0
uint64_t var_e8
int32_t var_e0
int32_t var_dc

if (*(arg2 + 0x18) != rax)
    sub_1422cc7a0(arg1, arg2, arg8)
    var_e8 = *(r14 + 0x460)
    *(r14 + 0x460) = 0
    var_e0 = *(r14 + 0x468)
    var_dc = *(r14 + 0x46c)
    *(r14 + 0x468) = 0
    sub_1422c4f20(arg1, &var_e8, &r14[0x470], &r14[0x460], &var_c0)
    uint64_t rcx_1 = var_e8
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)

void* rdx_1 = *(arg6 + 0x28)
uint64_t rbx
void* var_d8
void** var_88

if (*(rdx_1 + 0x1508) == 0)
    if (*r14 == 0 || *(r14 + 0x448) s<= 0)
        r12.b = 0
    else
        r12.b = 1
    
    int32_t rcx_10 = *(r14 + 0x14)
    int32_t rax_18 = *(r13 + 0x810)
    *(r14 + 0x14) = rax_18
    
    if ((rcx_10 == rax_18 || *(r14 + 0x10) == *(r13 + 0x80c)) && *(r14 + 0xc) == 0 && r12.b == 0
            && var_b8 == 0)
        sub_1422d2b40(arg1, r14, arg5, arg4, rdx_1, nullptr)
        rbx.b = 0
    else
        int32_t i = *(r14 + 0x10)
        int32_t i_3 = *(r13 + 0x808)
        
        if (i s<= i_3)
            *(r14 + 0x10) = i_3
            i = i_3
        
        int32_t rax_21 = *(r14 + 8) & 0x8000001f
        
        if (rax_21 s< 0)
            rax_21 = ((rax_21 - 1) | 0xffffffe0) + 1
        
        void* rsi_2 = &r14[0x38 + (sx.q(rax_21) << 5)]
        
        if (i s< *(r13 + 0x80c))
            do
                int32_t rax_27 = i & 0x8000003f
                
                if (rax_27 s< 0)
                    rax_27 = ((rax_27 - 1) | 0xffffffc0) + 1
                
                uint64_t rax_30 = *rsi_2
                *rsi_2 = 0
                var_e8 = rax_30
                var_e0 = *(rsi_2 + 8)
                int32_t var_dc_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 8) = 0
                sub_1422ca850(arg1, arg4, (sx.q(rax_27) << 5) + 8 + r13, &var_e8, rsi_2)
                uint64_t rcx_13 = var_e8
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                i += 1
            while (i s< *(r13 + 0x80c))
            
            r14 = arg2
        
        if (var_b8 s> 0)
            uint64_t rax_33 = *rsi_2
            *rsi_2 = 0
            var_e8 = rax_33
            var_e0 = *(rsi_2 + 8)
            int32_t var_dc_2 = *(rsi_2 + 0xc)
            *(rsi_2 + 8) = 0
            sub_1422ca850(arg1, arg4, &var_c0, &var_e8, rsi_2)
            uint64_t rcx_15 = var_e8
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
        
        *(r14 + 0x10) = *(r13 + 0x80c)
        
        if (*(rsi_2 + 8) s> 0 || *(r14 + 0xc) s> 0 || r12.b != 0)
            void* rdi_3 = arg6
            *(r14 + 8) += 1
            int512_t zmm1_1 = sub_1422d2b40(arg1, r14, arg5, arg4, *(rdi_3 + 0x28), rsi_2)
            
            if (r12.b != 0)
                int32_t i_1 = 0
                
                if (*(r14 + 0x448) s> 0)
                    do
                        uint64_t rax_40 = *rsi_2
                        *rsi_2 = 0
                        var_e8 = rax_40
                        var_e0 = *(rsi_2 + 8)
                        int32_t rax_42 = *(rsi_2 + 0xc)
                        *(rsi_2 + 8) = 0
                        int32_t var_dc_3 = rax_42
                        sub_1422ca850(arg1, arg4, *(r14 + 0x440) + (sx.q(i_1) << 5) + 8, &var_e8, 
                            rsi_2)
                        uint64_t rcx_22 = var_e8
                        
                        if (rcx_22 != 0)
                            zmm1_1 = sub_140a74f90(rcx_22)
                        
                        i_1 += 1
                    while (i_1 s< *(r14 + 0x448))
                    
                    r13 = arg3
                
                void* rax_43 = &r14[0x440]
                int32_t i_4 = *(rax_43 + 8)
                
                if (i_4 != 0)
                    int64_t* rdi_5 = *rax_43 + 8
                    int32_t i_2
                    
                    do
                        int64_t rcx_23 = *rdi_5
                        
                        if (rcx_23 != 0)
                            zmm1_1 = sub_140a74f90(rcx_23)
                        
                        rdi_5 = &rdi_5[4]
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)
                    rax_43 = &r14[0x440]
                
                *(rax_43 + 8) = 0
                
                if (*(rax_43 + 0xc) != 0)
                    sub_1405a51b0(rax_43, 0)
                
                rdi_3 = arg6
            
            if (((*(*(rdi_3 + 0x28) + 0xa4) u>> 1).b & 1) == 0 && data_143a2fd9c != 0
                    && *(r13 + 0x850) == 0)
                int32_t var_d0_2 = 0
                var_88 = &var_d8
                var_d8 = rsi_2
                void* var_80_2 = arg1 + 0x38
                void* var_78_2 = arg1 + 0x48
                int32_t var_70_2 = *(arg1 + 0x50)
                int32_t var_60_2 = *(arg1 + 0x40) - 1
                int64_t var_48_2 = *(arg1 + 0x60)
                int64_t rax_50
                rax_50.b = data_143f53bb8 == 1
                int32_t var_6c_2 = 0
                uint64_t* var_108_7
                var_108_7.b = rax_50.b
                int64_t var_68_2 = 1
                int32_t var_40_2 = 0xffffffff
                zmm1_1 = sub_1422ba910(arg1, &var_88, arg4, 1, zmm1_1, var_108_7.b, 0, r13 + 0x838)
                *(r13 + 0x850) = 1
                rdi_3 = arg6
            
            int64_t var_a0 = 0
            int32_t rax_51 = arg7[0x14].d
            var_a0 = *rsi_2
            *rsi_2 = 0
            int32_t var_98_1 = *(rsi_2 + 8)
            int32_t var_94_1 = *(rsi_2 + 0xc)
            *(rsi_2 + 8) = 0
            uint64_t var_b0 = 0
            int32_t var_a8_1 = 0
            sub_1422c4f20(arg1, &var_a0, &r14[0x470], &var_b0, rsi_2)
            
            if (var_a8_1 s> 1)
                uint64_t rax_55 = *(r14 + 0x460)
                *(r14 + 0x460) = 0
                var_e8 = rax_55
                var_e0 = *(r14 + 0x468)
                int32_t rax_57 = *(r14 + 0x46c)
                *(r14 + 0x468) = 0
                int32_t var_dc_4 = rax_57
                sub_1422ca850(arg1, arg4, &var_b0, &var_e8, &r14[0x460])
                uint64_t rcx_31 = var_e8
                
                if (rcx_31 != 0)
                    zmm1_1 = sub_140a74f90(rcx_31)
            
            if (((*(*(rdi_3 + 0x28) + 0xa4) u>> 1).b & 1) != 0)
                uint64_t rax_59 = *(r14 + 0x450)
                *(r14 + 0x450) = 0
                var_e8 = rax_59
                int32_t var_e0_2 = *(r14 + 0x458)
                int32_t rax_61 = *(r14 + 0x45c)
                *(r14 + 0x458) = 0
                int32_t var_dc_5 = rax_61
                sub_1422ca850(arg1, arg4, &var_a0, &var_e8, &r14[0x450])
                
                if (*(rsi_2 + 8) s> 0)
                    void* var_f8_2 = rsi_2
                    sub_1422d02c0(arg1, r14, arg_8, arg4, *(rdi_3 + 0x28), arg7)
                
                uint64_t rcx_37 = var_e8
                
                if (rcx_37 != 0)
                    sub_140a74f90(rcx_37)
            else if (*(rsi_2 + 8) s> 0 && *(arg1 + 0x30) != 0)
                var_e0.q = arg7[0x14]
                uint8_t rcx_33 = data_143f53bb8 == 1
                arg_8.b = rcx_33
                var_e8.b = *(arg7 + 0x29) & 1
                sub_140b560b0(arg7, rcx_33)
                int64_t rdi_7 = sx.q(arg7[0x14].d)
                var_88 = &var_d8
                int32_t var_d0_3 = 0
                void* var_80_3 = arg1 + 0x38
                var_d8 = rsi_2
                void* var_78_3 = arg1 + 0x48
                int32_t var_70_3 = *(arg1 + 0x50)
                int32_t var_6c_3 = 0
                int32_t var_60_3 = *(arg1 + 0x40) - 1
                int64_t var_48_3 = *(arg1 + 0x60)
                rbx = zx.q(arg_8.b)
                int64_t var_68_3 = 1
                int32_t var_40_3 = 0xffffffff
                int512_t zmm1_2 =
                    sub_1422d0a00(arg1, r14, arg7, rbx.b, zmm1_1, &var_88, arg4, 0, r13 + 0x838)
                
                if (rdi_7 == arg7[0x14])
                    sub_140b51990(&var_e8, arg7)
                else
                    int64_t rax_72 = *arg7
                    int32_t var_c8 = 0
                    (*(rax_72 + 0x168))(arg7, &var_c8)
                    
                    if (rbx.b != 0)
                        int64_t* rcx_41 = arg7[1]
                        arg_8.d = 0xabadf00d
                        int32_t* rdx_20 = *rcx_41
                        
                        if (&rdx_20[1] u> rcx_41[1])
                            int32_t* rdx_21 = &arg_8
                            
                            if ((*(arg7 + 0x29) & 0x20) != 0)
                                sub_140b54070(arg7, rdx_21, zmm1_2)
                            else
                                (*(*arg7 + 0x150))(arg7, rdx_21, 4)
                        else
                            arg_8.d = *rdx_20
                            *rcx_41 += 4
            
            int64_t rdx_23 = sx.q(rax_51)
            int64_t rax_76 = arg7[0x14]
            rbx.b = rdx_23 != rax_76
            
            if (rdx_23 == rax_76)
                bool cond:2_1 = *(rsi_2 + 0xc) == 0
                *(rsi_2 + 8) = 0
                
                if (not(cond:2_1))
                    sub_1405947f0(rsi_2, 0)
                
                *(r14 + 8) -= 1
            
            uint64_t rcx_45 = var_b0
            
            if (rcx_45 != 0)
                sub_140a74f90(rcx_45)
            
            int64_t rcx_46 = var_a0
            
            if (rcx_46 != 0)
                sub_140a74f90(rcx_46)
        else
            sub_1422d2b40(arg1, r14, arg5, arg4, *(arg6 + 0x28), nullptr)
            rbx.b = 0
else if (*(r14 + 0x458) s<= 0)
    rbx.b = 0
else
    var_e8 = 0
    var_e0.q = 0
    sub_1405947f0(&var_e8, 1)
    
    if (*(arg1 + 0x30) != 0)
        int32_t var_d0_1 = 0
        var_d8 = &r14[0x450]
        int32_t var_6c_1 = 0
        var_88 = &var_d8
        int64_t var_68_1 = 1
        void* var_80_1 = arg1 + 0x38
        int32_t var_40_1 = 0xffffffff
        void* var_78_1 = arg1 + 0x48
        int32_t var_70_1 = *(arg1 + 0x50)
        int32_t var_60_1 = *(arg1 + 0x40) - 1
        int64_t var_48_1 = *(arg1 + 0x60)
        sub_1422cc4a0(arg1, &var_88, arg4, &var_e8)
    
    int64_t rdi_1 = sx.q(var_e0)
    int32_t rax_11 = (rdi_1 + 1).d
    int32_t var_e0_1 = rax_11
    
    if (rax_11 s> var_dc)
        sub_140594770(&var_e8)
    
    *(var_e8 + (rdi_1 << 1)) = 0
    
    if (&r14[0x450] != &var_e8)
        int64_t rcx_5 = *(r14 + 0x450)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        *(r14 + 0x450) = var_e8
        *(r14 + 0x458) = var_e0_1
        *(r14 + 0x45c) = var_dc
        var_e0_1.q = 0
        var_e8 = 0
    
    sub_1422c51e0(arg1, &r14[0x450], &r14[0x470], &var_e8)
    
    if (var_e0_1 s<= 0)
        uint64_t rcx_9 = var_e8
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rbx.b = 0
    else
        uint64_t* var_f8_1 = &var_e8
        sub_1422d02c0(arg1, r14, r12, arg4, *(arg6 + 0x28), arg7)
        uint64_t rcx_8 = var_e8
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        rbx.b = 1
uint64_t rcx_47 = var_c0

if (rcx_47 != 0)
    sub_140a74f90(rcx_47)

return zx.q(rbx.b)
