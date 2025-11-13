// 函数: sub_140936ba0
// 地址: 0x140936ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = 0
int32_t arg_8 = 0

if ((*(*arg1 + 0x28))() == 0)
    *arg2 = 0
    arg2[1] = 0
    sub_1405947f0(arg2, 8)
    int32_t rax_19 = arg2[1].d + 8
    arg2[1].d = rax_19
    
    if (rax_19 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, u"INVALID", 0x10)
    return arg2

int64_t var_68
int64_t var_58
int64_t var_48
int64_t var_38
int64_t* rdx_14
int32_t rbx_4
int64_t rsi_2
int64_t r12_2
int64_t r14

if (sub_140941de0(arg1) != 0)
    int32_t rbx_5 = arg1[4].d
    int64_t rsi_3 = arg1[3]
    var_68 = 0
    int32_t var_60_4 = rbx_5
    
    if (rbx_5 != 0)
        sub_1405a4c70(&var_68, rbx_5, 0)
        memcpy(var_68, rsi_3, rbx_5 * 2)
    else
        int32_t var_5c_2 = 0
    
    r14 = var_68
    rdx_14 = &var_68
    r12_2 = var_58
    rbx_4 = 0x40
    rsi_2 = arg_8.q
else
    int32_t rcx_1 = arg1[4].d
    int64_t rbx = -1
    int32_t rax_3 = rcx_1 - 1
    
    if (rcx_1 == 0)
        rax_3 = -1
    
    int32_t rdx = rcx_1 - 1
    
    if (rcx_1 == 0)
        rax_3 = 0
    
    if (rcx_1 == 0)
        rdx = -1
    
    int64_t* rcx_15
    
    if (rax_3 s<= 0xa)
        var_58 = 0
        int32_t var_50_2 = 0
        sub_1405947f0(&var_58, 0xb)
        int32_t rax_14 = var_50_2 + 0xb
        var_50_2 = rax_14
        
        if (rax_14 s> 0)
            sub_140594770(&var_58)
        
        UnDecorator::getReferenceType(var_58, u"<Redacted>", 0x16)
        r14 = var_68
        rcx_15 = &var_58
        r12_2 = var_58
        rbx_4 = 0x30
        rsi_2 = arg_8.q
    else
        int16_t* const r9_1 = &data_142d40450
        arg_8.q = &data_142d40450
        int16_t* const r8_1
        
        if (rcx_1 != 0)
            r8_1 = arg1[3]
        else
            rdx = 0
            r8_1 = &data_142d40450
        
        var_68 = 0
        int32_t rax_4 = rdx
        int32_t var_60_1 = 0
        
        if (rdx s> 5)
            rax_4 = 5
        
        r14 = 0
        int32_t r15_1 = 0
        int32_t rax_6 = 0
        int32_t var_5c_1 = 0
        void* r12 = &r8_1[sx.q(rdx) - sx.q(rax_4)]
        
        if (r12 != 0 && *r12 != 0)
            do
                rbx += 1
            while (*(r12 + (rbx << 1)) != 0)
            
            if (rbx.d + 1 s> 0)
                sub_1405947f0(&var_68, rbx.d + 1)
                rax_6 = var_5c_1
                r15_1 = var_60_1
                r14 = var_68
            
            r15_1 += rbx.d + 1
            
            if (r15_1 s> rax_6)
                sub_140594770(&var_68)
                r14 = var_68
            
            UnDecorator::getReferenceType(r14, r12, (rbx.d + 1) * 2)
            r9_1 = &data_142d40450
        
        int32_t rax_7 = arg1[4].d
        
        if (rax_7 != 0)
            r9_1 = arg1[3]
            arg_8.q = r9_1
        
        var_58 = 0
        int32_t rsi_1 = rax_7 - 1
        int64_t var_50
        var_50:4.d = 0
        
        if (rax_7 == 0)
            rsi_1 = 0
        
        int32_t rbx_2 = 0
        var_50.d = 0
        int64_t r12_1 = 0
        int32_t rax_8 = 1
        
        if (rsi_1 s> 5)
            rsi_1 = 5
        
        if (r9_1 != 0 && *r9_1 != 0 && rsi_1 s> 0)
            if (rsi_1 + 1 s> 0)
                sub_1405947f0(&var_58, rsi_1 + 1)
                r13 = var_50:4.d
                rbx_2 = var_50.d
                r12_1 = var_58
            
            rbx_2 = rbx_2 + 1 + rsi_1
            var_50.d = rbx_2
            
            if (rbx_2 s> r13)
                sub_140594770(&var_58)
                r13 = var_50:4.d
                rbx_2 = var_50.d
                r12_1 = var_58
            
            UnDecorator::getReferenceType(r12_1, arg_8.q, rsi_1 * 2)
            *(r12_1 + (sx.q(rbx_2) << 1) - 2) = 0
            
            rax_8 = rbx_2 == 0 ? 1 : 0
        
        var_58 = r12_1
        int32_t rdx_8 = rax_8 + 3 + rbx_2
        var_50.d = rbx_2
        var_50:4.d = r13
        r12_2 = 0
        
        if (rdx_8 s> r13)
            sub_1405947f0(&var_58, rdx_8)
        
        sub_140a20ba0(&var_58, &data_142e1f8a0, 3)
        int32_t rax_10 = var_50.d
        rsi_2 = var_58
        int32_t rcx_12 = var_50:4.d
        var_58 = 0
        int64_t var_50_1 = 0
        
        if (rax_10 s> 1)
            int32_t r15_2
            
            if (r15_1 == 0)
                r15_2 = 0
            else
                r15_2 = r15_1 - 1
            
            int32_t rdx_9
            
            if (rax_10 == 0)
                rdx_9 = rax_10 + 1
            
            if (rax_10 != 0 || r15_2 == 0)
                rdx_9 = 0
            
            var_68 = rsi_2
            int32_t rdx_11 = rdx_9 + r15_2 + rax_10
            var_5c_1 = rcx_12
            rsi_2 = 0
            
            if (rdx_11 s> rcx_12)
                sub_1405947f0(&var_68, rdx_11)
            
            sub_140a20ba0(&var_68, r14, r15_2)
            var_48 = var_68
            int32_t var_40_2 = rax_10
        else
            var_48 = r14
            r14 = 0
            int32_t var_40_1 = r15_1
        
        rcx_15 = &var_48
        rbx_4 = 0x2f
        int32_t var_3c_1 = var_5c_1
    
    int64_t rax_15 = *rcx_15
    rdx_14 = &var_38
    *rcx_15 = 0
    var_38 = rax_15
    int32_t var_30_1 = rcx_15[1].d
    int32_t var_2c_1 = *(rcx_15 + 0xc)
    rcx_15[1] = 0

sub_140596d10(arg2, rdx_14)

if ((rbx_4.b & 0x40) != 0)
    int64_t rcx_22 = var_68
    rbx_4 &= 0xffffffbf
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)

if ((rbx_4.b & 0x20) != 0)
    int64_t rcx_23 = var_38
    rbx_4 &= 0xffffffdf
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)

if ((rbx_4.b & 0x10) != 0)
    int64_t rcx_24 = var_58
    rbx_4 &= 0xffffffef
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)

if ((rbx_4.b & 8) != 0)
    int64_t rcx_25 = var_48
    rbx_4 &= 0xfffffff7
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)

if ((rbx_4.b & 4) != 0)
    rbx_4 &= 0xfffffffb
    
    if (rsi_2 != 0)
        sub_140a74f90(rsi_2)

if ((rbx_4.b & 2) != 0)
    rbx_4 &= 0xfffffffd
    
    if (r12_2 != 0)
        sub_140a74f90(r12_2)

if ((rbx_4.b & 1) != 0 && r14 != 0)
    sub_140a74f90(r14)

return arg2
