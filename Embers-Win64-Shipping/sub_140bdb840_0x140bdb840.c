// 函数: sub_140bdb840
// 地址: 0x140bdb840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_50
sub_140a36020(arg1, &var_50)
int16_t* rsi = var_50
int16_t* r10 = rsi
int32_t var_48
int16_t* rcx = &rsi[sx.q(var_48)]
int32_t r10_1

if (rsi == rcx)
label_140bdb8a0:
    r10_1 = -1
else
    while (*r10 != 0x2f)
        r10 = &r10[1]
        
        if (r10 == rcx)
            goto label_140bdb8a0
    
    r10_1 = ((r10 - rsi) s>> 1).d

int16_t* rbx = rsi
int32_t rbx_1

if (rsi == rcx)
label_140bdb8bf:
    rbx_1 = -1
else
    while (*rbx != 0x2e)
        rbx = &rbx[1]
        
        if (rbx == rcx)
            goto label_140bdb8bf
    
    rbx_1 = ((rbx - rsi) s>> 1).d

int16_t* rax_1 = rsi

if (rsi != rcx)
    do
        if (*rax_1 == 0x3a)
            int32_t rax_3 = ((rax_1 - rsi) s>> 1).d
            
            if (rax_3 != 0xffffffff && (rbx_1 == 0xffffffff || rax_3 s< rbx_1))
                rbx_1 = rax_3
            
            break
        
        rax_1 = &rax_1[1]
    while (rax_1 != rcx)

void var_68

if (rbx_1 != 0xffffffff)
    int16_t* rdi_1 = rcx
    int32_t rdi_2
    
    if (rcx == rsi)
    label_140bdb96f:
        rdi_2 = -1
    else
        while (true)
            rdi_1 -= 2
            
            if (*rdi_1 == 0x2e)
                rdi_2 = ((rdi_1 - rsi) s>> 1).d
                break
            
            if (rdi_1 == rsi)
                goto label_140bdb96f
    
    while (rcx != rsi)
        rcx -= 2
        
        if (*rcx == 0x3a)
            int32_t rcx_5 = ((rcx - rsi) s>> 1).d
            
            if (rcx_5 != 0xffffffff && (rdi_2 == 0xffffffff || rcx_5 s> rdi_2))
                rdi_2 = rcx_5
            
            break
    
    int16_t* const r15_1 = &data_142d40450
    int16_t* var_60
    
    if (r10_1 != 0xffffffff)
        int32_t r13_2
        
        if (var_48 == 0)
            rsi = &data_142d40450
            r13_2 = 0
        else
            r13_2 = var_48 - 1
        
        if (rbx_1 s< 0)
            r13_2 = 0
        else if (rbx_1 s< r13_2)
            r13_2 = rbx_1
        
        var_60 = nullptr
        int32_t rdx_8 = 0
        int32_t var_58_3 = 0
        int32_t rcx_12 = 0
        int32_t var_54_2 = 0
        int16_t* r12_2 = nullptr
        int64_t rcx_16
        int16_t* rdx_11
        
        if (rsi != 0 && *rsi != 0 && r13_2 s> 0)
            if (r13_2 + 1 s> 0)
                sub_1405947f0(&var_60, r13_2 + 1)
                rcx_12 = var_54_2
                rdx_8 = var_58_3
                r12_2 = var_60
            
            int32_t rax_12 = rdx_8 + 1 + r13_2
            
            if (rax_12 s> rcx_12)
                sub_140594770(&var_60)
                r12_2 = var_60
            
            UnDecorator::getReferenceType(r12_2, rsi, r13_2 * 2)
            rcx_16 = sx.q(rax_12)
            rdx_11 = r12_2
            r12_2[rcx_16 - 1] = 0
        
        if (rsi == 0 || *rsi == 0 || r13_2 s<= 0 || rcx_16.d == 0)
            rdx_11 = &data_142d40450
        
        *arg4 = *sub_140b58260(&var_68, rdx_11, 1)
        
        if (r12_2 != 0)
            sub_140a74f90(r12_2)
        
        if (rbx_1 != rdi_2)
            int32_t rax_16 = rdi_2 - rbx_1
            int16_t* rsi_3 = nullptr
            int16_t* rdx_19
            int32_t r12_3
            
            if (rax_16 - 1 s>= 0)
                int32_t rbx_5 = var_48 - 1
                
                if (var_48 == 0)
                    rbx_5 = 0
                
                int32_t rcx_19
                
                if (rbx_1 + 1 s>= 0)
                    rcx_19 = rbx_5
                    
                    if (rbx_1 + 1 s< rbx_5)
                        rcx_19 = rbx_1 + 1
                else
                    rcx_19 = 0
                
                int64_t rdx_15 = sx.q(rbx_1 + 1) + sx.q(rax_16 - 1)
                int64_t r9 = sx.q(rcx_19)
                
                if (rdx_15 s< r9)
                    rbx_5 = rcx_19
                else if (rdx_15 s< sx.q(rbx_5))
                    rbx_5 = rdx_15.d
                
                var_60 = nullptr
                int16_t* rax_20 = &data_142d40450
                int32_t var_58_5 = 0
                
                if (var_48 != 0)
                    rax_20 = var_50
                
                r12_3 = 0
                int32_t rbx_6 = rbx_5 - rcx_19
                void* r13_3 = &rax_20[r9]
                int32_t rax_21 = 0
                int32_t var_54_3 = 0
                
                if (r13_3 != 0 && *r13_3 != 0 && rbx_6 s> 0)
                    if (rbx_6 + 1 s> 0)
                        sub_1405947f0(&var_60, rbx_6 + 1)
                        rax_21 = var_54_3
                        r12_3 = var_58_5
                        rsi_3 = var_60
                    
                    r12_3 += rbx_6 + 1
                    
                    if (r12_3 s> rax_21)
                        sub_140594770(&var_60)
                        rsi_3 = var_60
                    
                    UnDecorator::getReferenceType(rsi_3, r13_3, rbx_6 * 2)
                    rsi_3[sx.q(r12_3) - 1] = 0
                
                rdx_19 = rsi_3
            
            if (rax_16 - 1 s< 0 || r12_3 == 0)
                rdx_19 = &data_142d40450
            
            *arg3 = *sub_140b58260(&var_68, rdx_19, 1)
            
            if (rsi_3 != 0)
                sub_140a74f90(rsi_3)
    else
        int16_t* r12_1 = nullptr
        int16_t* rdx_6
        int32_t rsi_1
        
        if (rdi_2 s>= 0)
            int32_t rbx_3 = var_48 - 1
            
            if (var_48 == 0)
                rbx_3 = 0
            
            int64_t rdx_2 = sx.q(rdi_2)
            int32_t rcx_6 = rbx_3
            
            if (rbx_3 s> 0)
                rcx_6 = 0
            
            int64_t r8_1 = sx.q(rcx_6)
            
            if (rdx_2 s< r8_1)
                rbx_3 = rcx_6
            else if (rdx_2 s< sx.q(rbx_3))
                rbx_3 = rdi_2
            
            var_60 = nullptr
            int16_t* rax_5 = &data_142d40450
            int32_t var_58_1 = 0
            
            if (var_48 != 0)
                rax_5 = rsi
            
            int32_t rbx_4 = rbx_3 - rcx_6
            rsi_1 = 0
            void* r13_1 = &rax_5[r8_1]
            int32_t rax_6 = 0
            int32_t var_54_1 = 0
            
            if (r13_1 != 0 && *r13_1 != 0 && rbx_4 s> 0)
                if (rbx_4 + 1 s> 0)
                    sub_1405947f0(&var_60, rbx_4 + 1)
                    rax_6 = var_54_1
                    rsi_1 = var_58_1
                    r12_1 = var_60
                
                rsi_1 = rsi_1 + 1 + rbx_4
                
                if (rsi_1 s> rax_6)
                    sub_140594770(&var_60)
                    r12_1 = var_60
                
                UnDecorator::getReferenceType(r12_1, r13_1, rbx_4 * 2)
                r12_1[sx.q(rsi_1) - 1] = 0
            
            rdx_6 = r12_1
        
        if (rdi_2 s< 0 || rsi_1 == 0)
            rdx_6 = &data_142d40450
        
        *arg3 = *sub_140b58260(&var_68, rdx_6, 1)
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
    
    int32_t rbx_7 = var_48 - 1
    
    if (var_48 == 0)
        rbx_7 = 0
    
    int32_t rcx_24
    
    if (rdi_2 + 1 s>= 0)
        rcx_24 = rbx_7
        
        if (rdi_2 + 1 s< rbx_7)
            rcx_24 = rdi_2 + 1
    else
        rcx_24 = 0
    
    int64_t r9_1 = sx.q(rcx_24)
    
    if (sx.q(rdi_2 + 1) + 0x7fffffff s< r9_1)
        rbx_7 = rcx_24
    else if (sx.q(rdi_2 + 1) + 0x7fffffff s< sx.q(rbx_7))
        rbx_7 = rdi_2 - -0x80000000
    
    var_60 = nullptr
    int16_t* const rax_27 = &data_142d40450
    int32_t var_58_7 = 0
    
    if (var_48 != 0)
        rax_27 = var_50
    
    int16_t* rsi_4 = nullptr
    int32_t rbx_8 = rbx_7 - rcx_24
    int32_t rdi_4 = 0
    void* r12_5 = &rax_27[r9_1]
    int32_t rax_28 = 0
    int32_t var_54_4 = 0
    
    if (r12_5 != 0 && *r12_5 != 0 && rbx_8 s> 0)
        if (rbx_8 + 1 s> 0)
            sub_1405947f0(&var_60, rbx_8 + 1)
            rax_28 = var_54_4
            rdi_4 = var_58_7
            rsi_4 = var_60
        
        rdi_4 = rdi_4 + 1 + rbx_8
        
        if (rdi_4 s> rax_28)
            sub_140594770(&var_60)
            rsi_4 = var_60
        
        UnDecorator::getReferenceType(rsi_4, r12_5, rbx_8 * 2)
        rsi_4[sx.q(rdi_4) - 1] = 0
    
    if (rdi_4 != 0)
        r15_1 = rsi_4
    
    *arg2 = *sub_140b58260(&var_68, r15_1, 1)
    
    if (rsi_4 != 0)
        sub_140a74f90(rsi_4)
else
    int16_t* const rdx_1 = &data_142d40450
    int64_t* rcx_1 = &var_68
    
    if (r10_1 == rbx_1)
        if (var_48 != 0)
            rdx_1 = rsi
        
        *arg2 = *sub_140b58260(rcx_1, rdx_1, rbx_1 + 2)
    else
        if (var_48 != 0)
            rdx_1 = rsi
        
        *arg4 = *sub_140b58260(rcx_1, rdx_1, rbx_1 + 2)
int16_t* rcx_30 = var_50

if (rcx_30 != 0)
    sub_140a74f90(rcx_30)

int64_t* result
result.b = 1
return result
