// 函数: sub_1419590e0
// 地址: 0x1419590e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg5 u<= 1
int64_t* rbx = nullptr
int64_t* var_90 = nullptr
char rax_1

if (data_143f01c92 == 0)
    rax_1 = sub_140a80f40()

char rax_2

if (data_143f01c92 != 0 || rax_1 == 0)
    rax_2 = sub_140a80f10()

int64_t r12

if ((data_143f01c92 == 0 && rax_1 != 0) || rax_2 != 0)
    r12.b = 1
else
    r12.b = 0

if (*arg4 u<= 0)
label_14195952d:
    sub_141954300(arg2, arg3, arg4, arg5, arg6)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx, 1)
else
    if (sub_1419553a0() == 0)
        goto label_14195952d
    
    uint64_t rdi_1 = zx.q(sub_1419552b0(*arg4))
    int32_t rbp_1 = 0
    int32_t var_98_1 = 0
    int64_t r15
    r15.b = 0
    EnterCriticalSection(&data_143f00520)
    int64_t r8 = sx.q(*(((zx.q(cond:0) + (rdi_1 << 1)) << 4) + 0x143f00578))
    int32_t rdi_2
    
    if (r8.d s<= 0)
        rdi_2 = 0
    else
        int64_t rax_6 = *(((zx.q(cond:0) + (rdi_1 << 1)) << 4) + &data_143f00570)
        int64_t rcx_1 = r8 * 3
        int64_t var_88_1 = (*(rax_6 + (rcx_1 << 3) - 0x18)).q
        int64_t zmm0_1 = *(rax_6 + (rcx_1 << 3) - 8)
        *(((zx.q(cond:0) + (rdi_1 << 1)) << 4) + 0x143f00578) = (r8 - 1).d
        var_98_1.q = zmm0_1
        sub_1405fde90(((zx.q(cond:0) + (rdi_1 << 1)) << 4) + &data_143f00570)
        r15.b = 1
        rdi_2 = var_88_1:4.d
        rbp_1 = var_88_1.d
        int64_t var_78_1 = var_98_1.q
        var_98_1 = rdi_2
    
    LeaveCriticalSection(&data_143f00520)
    
    if (r15.b == 0)
        goto label_14195952d
    
    if (data_143efed00 != 0)
        EnterCriticalSection(&data_143f00548)
        void* rax_12
        
        if (data_1439c78f8 == data_1439c7924)
        label_141959292:
            rax_12 = nullptr
        else
            void* rcx_3 = data_1439c7930
            void* rax_10 = &data_1439c7928
            
            if (rcx_3 != 0)
                rax_10 = rcx_3
            
            int32_t rax_11 = *(rax_10 + (((sx.q(data_1439c7938) - 1) & sx.q(rbp_1)) << 2))
            
            if (rax_11 == 0xffffffff)
            label_141959292_1:
                rax_12 = nullptr
            else
                int64_t r8_1 = data_1439c78f0
                int64_t rdx_7
                
                while (true)
                    rdx_7 = sx.q(rax_11) * 0x18
                    
                    if (*(rdx_7 + r8_1) == rbp_1)
                        break
                    
                    rax_11 = *(rdx_7 + r8_1 + 0x10)
                    
                    if (rax_11 == 0xffffffff)
                        goto label_141959292_2
                
                if (rax_11 == 0xffffffff)
                label_141959292_2:
                    rax_12 = nullptr
                else
                    rax_12 = rdx_7 + r8_1
        
        int64_t* rbx_1 = rax_12 + 8
        
        if (rax_12 == 0)
            rbx_1 = nullptr
        
        rbx = *rbx_1
        
        if (rbx != 0)
            rbx[1].d += 1
        
        LeaveCriticalSection(&data_143f00548)
        var_90 = rbx
        int64_t var_88 = 0
    else if (r12.b == 0)
        void*** rcx_8 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        void* rax_13 = &rcx_8[0xa]
        
        if (rax_13 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x60)
            rcx_8 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
            rax_13 = &rcx_8[0xa]
        
        data_143f02bac += 1
        data_143f02bc8 = rax_13
        *data_143f02ba0 = rcx_8
        void** const var_48 = &data_142ffb030
        data_143f02ba0 = &rcx_8[1]
        int32_t var_40_1 = rbp_1
        rcx_8[1] = 0
        *rcx_8 = &data_142ff4958
        rcx_8[2] = sub_141953fa0
        rcx_8[4] = 0
        
        if (rcx_8[2] != 0)
            void** const* rcx_11 = &var_48
            (**rcx_11)(rcx_11)
        
        void** const* rcx_12 = &var_48
        (*rcx_12)[2](rcx_12)
    else
        sub_14190a020(rbp_1)
    
    if (rdi_2 == 0)
        goto label_14195952d
    
    void*** rax_18 = j_sub_140a82f30(0x60)
    void*** rdi_3 = rax_18
    
    if (rax_18 == 0)
        rdi_3 = nullptr
    else
        *rdi_3 = &data_142d3ff08
        rdi_3[1].d = 0
        *rdi_3 = &data_142ef2938
        *(rdi_3 + 0xc) = 0
        rdi_3[2].w = 0x100
        rdi_3[3] = arg4
        int32_t rcx_13 = *arg4
        *rdi_3 = &data_142ff8b10
        int32_t rax_19 = data_143f01c4c
        rdi_3[4].d = rcx_13
        rdi_3[7].d = rax_19 + 1
        rdi_3[5] = 0
        rdi_3[6] = 0
        __builtin_memset(&rdi_3[8], 0, 0x1d)
        data_143f01c4c = rax_19 + 1
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rdi_3[5].d = rbp_1
    *(rdi_3 + 0x2c) = 0
    rdi_3[6] = 0
    int64_t* rcx_14 = rdi_3[0xa]
    rdi_3[0xa] = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    if (rcx_14 != 0)
        rcx_14[1].d -= 1
        
        if (rcx_14[1].d == 1)
            (**rcx_14)(rcx_14, 1)
    
    rdi_3[0xb].d = var_98_1
    *(rdi_3 + 0x5c) = cond:0
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx, 1)
    
    sub_1419540e0(r12.b, rdi_3, arg3, *arg4)
    sub_14195b160(rdi_3, arg3, arg4)
    *arg2 = rdi_3
    rdi_3[1].d += 1
    
    if (var_90 != 0)
        var_90[1].d -= 1
        
        if (var_90[1].d == 1)
            (**var_90)(var_90, 1)

return arg2
