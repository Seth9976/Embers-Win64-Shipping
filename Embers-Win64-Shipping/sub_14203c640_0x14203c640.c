// 函数: sub_14203c640
// 地址: 0x14203c640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_18 = arg3
int32_t arg_10 = arg2
uint64_t rbx = arg3
void* rax = data_143e20d18
int64_t var_88 = arg4
int64_t* rdi = *(rax + 0x10)
int64_t* rsi = *(rax + 8)

if (rdi != 0)
    rdi[1].d += 1
    rbx = arg_18

if (rsi != 0)
    uint64_t var_80
    uint64_t rax_6
    
    if (*(arg1 + 0x118) == *(arg1 + 0x144))
    labelid_37:
        rax_6 = 0
    else
        var_80 = rbx
        int32_t rax_3 = sub_140b5ead0(rbx.d) + var_80:4.d
        void* r8 = arg1 + 0x148
        void* rcx_1 = *(r8 + 8)
        
        if (rcx_1 != 0)
            r8 = rcx_1
        
        int32_t rax_5 = *(r8 + (((sx.q(*(arg1 + 0x158)) - 1) & sx.q(rax_3)) << 2))
        
        if (rax_5 == 0xffffffff)
        label_14203c707:
            rax_6 = 0
        else
            int64_t r8_1 = *(arg1 + 0x110)
            int64_t rcx_2
            
            while (true)
                rcx_2 = sx.q(rax_5)
                int64_t rdx_3 = rcx_2 * 3
                
                if (*(r8_1 + (rdx_3 << 3)) == rbx)
                    break
                
                rax_5 = *(r8_1 + (rdx_3 << 3) + 0x10)
                
                if (rax_5 == 0xffffffff)
                    goto label_14203c707_2
            
            if (rax_5 == 0xffffffff)
            label_14203c707_1:
                rax_6 = 0
            else
                void* rax_8 = r8_1 + rcx_2 * 0x18
                
                if (rax_8 == 0)
                label_14203c707_2:
                    rax_6 = 0
                else
                    rax_6 = *(rax_8 + 8)
    
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    var_80 = rax_6
    
    if (rax_6 != 0)
    label_14203c8a1:
        sub_1418b7b40(arg1 + 0x160, &arg_10, &var_80)
        
        if (*(arg1 + 0x32e) != 0)
            (*(*rsi + 0x50))(rsi, zx.q(arg_10), var_80)
        
        rbx.b = 1
    else
        float zmm0 = var_88.d
        
        if (not(zmm0 >= 0f))
            var_88.d = 0
        else if (not(zmm0 < 1f))
            var_88.d = 0x3f800000
        
        zmm0 = var_88:4.d
        
        if (not(zmm0 >= 0f))
            var_88:4.d = 0
        else if (not(zmm0 < 1f))
            var_88:4.d = 0x3f800000
        
        int64_t var_60
        int64_t* rax_9 = sub_140b63b70(&arg_18, &var_60)
        int64_t* rax_10 = sub_140b25050(&var_80)
        int32_t rax_11 = rax_9[1].d
        rbx = zx.q(rax_11 - 1)
        
        if (rax_11 == 0)
            rbx = 0
        
        int32_t r8_2
        
        if (rax_10[1].d == 0)
            r8_2 = 2
        
        if (rax_10[1].d != 0 || (rbx + 1).d == 0)
            r8_2 = 1
        
        int64_t var_70 = *rax_10
        *rax_10 = 0
        int32_t rax_14 = rax_10[1].d
        int32_t rax_15 = *(rax_10 + 0xc)
        rax_10[1] = 0
        int32_t rdx_7 = rax_14 + rbx.d + r8_2
        
        if (rdx_7 s> rax_15)
            sub_1405947f0(&var_70, rdx_7)
        
        sub_140a2cf70(&var_70, *rax_9, rbx.d)
        uint64_t rcx_8 = var_80
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = var_60
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        zmm6 = zx.o(var_88)
        uint64_t rax_17 = (**rsi)(rsi, &var_70, zmm6.q)
        var_80 = rax_17
        uint64_t rax_18
        
        if (rax_17 == 0)
            rax_18 = sub_142033600(arg1, rsi, &var_70, zmm6.q)
            var_80 = rax_18
        
        if (rax_17 != 0 || rax_18 != 0)
            sub_1405a7750(arg1 + 0x110, &arg_18, &var_80)
            int64_t rcx_14 = var_70
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            goto label_14203c8a1
        
        int64_t rcx_12 = var_70
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        rbx.b = 0
else
    rbx.b = 0

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_10 = *rdi
            (*(r8_10 + 8))(rdi, 1, r8_10)

return zx.q(rbx.b)
