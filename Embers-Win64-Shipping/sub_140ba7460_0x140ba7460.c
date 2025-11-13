// 函数: sub_140ba7460
// 地址: 0x140ba7460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t* var_58 = nullptr
int32_t var_88 = 0
int32_t var_4c = 0
int64_t* r14 = nullptr
int32_t r15 = 0
int64_t* var_78
sub_140b63b70(&arg_18, &var_78)
int64_t* var_68 = nullptr
int64_t var_60 = 0
sub_140bb3810(&var_68)
int64_t* r13 = var_68
int64_t rsi = sx.q(var_60.d)
int64_t* rbx = r13
void* rdi_2 = &r13[rsi * 2]

if (r13 != rdi_2)
    do
        if (sub_140a32a50(&var_78, rbx, 1) != 0)
            if (&var_58 != rbx)
                int32_t r14_1 = rbx[1].d
                int64_t rdi_3 = *rbx
                var_88 = r14_1
                
                if (r14_1 != 0)
                    sub_1405a4c70(&var_58, r14_1, 0)
                    memcpy(var_58, rdi_3, r14_1 * 2)
                    var_88 = r14_1
            
            int32_t rax_3 = rbx[1].d
            int32_t rdx_4 = rax_3 - 1
            
            if (rax_3 == 0)
                rdx_4 = 0
            
            int32_t var_70
            int32_t rbx_1 = var_70 - 1
            
            if (var_70 == 0)
                rbx_1 = 0
            
            int32_t rcx_5
            
            if (rdx_4 s>= 0)
                rcx_5 = rbx_1
                
                if (rdx_4 s< rbx_1)
                    rcx_5 = rdx_4
            else
                rcx_5 = 0
            
            int64_t r10_1 = sx.q(rcx_5)
            
            if (sx.q(rdx_4) + 0x7fffffff s< r10_1)
                rbx_1 = rcx_5
            else if (sx.q(rdx_4) + 0x7fffffff s< sx.q(rbx_1))
                rbx_1 = rdx_4 + 0x7fffffff
            
            var_68 = nullptr
            int64_t* rax_5 = &data_142d40450
            var_60.d = 0
            
            if (var_70 != 0)
                rax_5 = var_78
            
            r14 = nullptr
            int32_t rbx_2 = rbx_1 - rcx_5
            void* rdi_4 = rax_5 + (r10_1 << 1)
            int32_t rax_6 = 0
            var_60:4.d = 0
            
            if (rdi_4 != 0 && *rdi_4 != 0 && rbx_2 s> 0)
                if (rbx_2 + 1 s> 0)
                    sub_1405947f0(&var_68, rbx_2 + 1)
                    rax_6 = var_60:4.d
                    r15 = var_60.d
                    r14 = var_68
                
                r15 += rbx_2 + 1
                var_60.d = r15
                
                if (r15 s> rax_6)
                    sub_140594770(&var_68)
                    r15 = var_60.d
                    r14 = var_68
                
                UnDecorator::getReferenceType(r14, rdi_4, rbx_2 * 2)
                *(r14 + (sx.q(r15) << 1) - 2) = 0
            
            break
        
        rbx = &rbx[2]
    while (rbx != rdi_2)

int64_t* rbx_3 = r13

if (rsi.d != 0)
    int32_t i
    
    do
        int64_t rcx_9 = *rbx_3
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rbx_3 = &rbx_3[2]
        i = rsi.d
        rsi = zx.q(rsi.d - 1)
    while (i != 1)

if (r13 != 0)
    sub_140a74f90(r13)

int64_t* rcx_11 = var_78

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

if (var_88 s<= 1 || r15 s<= 1)
    *arg2 = 0
    
    if (r14 != 0)
        sub_140a74f90(r14)
    
    int64_t* rax_18 = var_58
    
    if (rax_18 != 0)
    label_140ba78fd:
        sub_140a74f90(rax_18)
else
    void* var_48
    int64_t* rcx_13 = sub_140a7c300(sub_140a752e0(), &var_48, arg4)
    void* rbx_4 = var_48
    int32_t i_5
    int32_t i_3 = i_5
    int64_t* r13_1 = var_58
    void* rsi_3 = (sx.q(i_3) << 4) + rbx_4
    int64_t* rcx_31
    
    if (rbx_4 != rsi_3)
        int64_t rdx_9 = sx.q(var_88)
        int64_t rdi_6 = rdx_9 * 2
        int64_t var_80_1 = rdi_6
        
        do
            var_60.d = rdx_9.d
            var_68 = nullptr
            sub_1405a4c70(&var_68, rdx_9.d + sbb.d(rcx_13.d, rcx_13.d, rdx_9.d != 0) + 6, 0)
            memcpy(var_68, r13_1, rdi_6.d)
            sub_140a2cf70(&var_68, u"L10N", 4)
            int32_t rax_10 = *(rbx_4 + 8)
            int32_t rdx_12 = var_60.d
            int32_t rdi_7 = rax_10 - 1
            
            if (rax_10 == 0)
                rdi_7 = 0
            
            int32_t rcx_19
            
            if (rdx_12 == 0)
                rcx_19 = rdx_12 + 2
            
            if (rdx_12 != 0 || rdi_7 == 0xffffffff)
                rcx_19 = 1
            
            int32_t rdx_14 = rdx_12 + rdi_7 + rcx_19
            var_78 = var_68
            int32_t rax_13 = var_60:4.d
            var_68 = nullptr
            var_60 = 0
            
            if (rdx_14 s> rax_13)
                sub_1405947f0(&var_78, rdx_14)
            
            sub_140a2cf70(&var_78, *rbx_4, rdi_7)
            int32_t rdi_8 = r15 - 1
            
            if (r15 == 0)
                rdi_8 = 0
            
            int32_t rcx_22
            
            if (rdx_12 == 0)
                rcx_22 = rdx_12 + 2
            
            if (rdx_12 != 0 || rdi_8 == 0xffffffff)
                rcx_22 = 1
            
            int32_t rdx_18 = rdx_12 + rdi_8 + rcx_22
            var_58 = var_78
            var_78 = nullptr
            int32_t var_4c_1 = rax_13
            int32_t var_70_1
            var_70_1.q = 0
            
            if (rdx_18 s> rax_13)
                sub_1405947f0(&var_58, rdx_18)
            
            sub_140a2cf70(&var_58, r14, rdi_8)
            int64_t* rcx_25 = var_78
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            int64_t* rcx_26 = var_68
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            if (sub_140ba1330(&var_58, 0, nullptr, 1) != 0)
                int64_t* rdx_20 = &data_142d40450
                
                if (rdx_12 != 0)
                    rdx_20 = var_58
                
                sub_140b58260(arg2, rdx_20, 1)
                int64_t* rcx_33 = var_58
                
                if (rcx_33 != 0)
                    sub_140a74f90(rcx_33)
                
                int32_t i_4 = i_5
                void* rbx_5 = var_48
                
                if (i_4 != 0)
                    int32_t i_1
                    
                    do
                        int64_t rcx_34 = *rbx_5
                        
                        if (rcx_34 != 0)
                            sub_140a74f90(rcx_34)
                        
                        rbx_5 += 0x10
                        i_1 = i_4
                        i_4 -= 1
                    while (i_1 != 1)
                    rbx_5 = var_48
                
                if (rbx_5 != 0)
                    sub_140a74f90(rbx_5)
                
                if (r14 != 0)
                    sub_140a74f90(r14)
                
                if (r13_1 == 0)
                    goto label_140ba791c
                
                rcx_31 = r13_1
                goto label_140ba78fd_1
            
            rcx_13 = var_58
            
            if (rcx_13 != 0)
                rcx_13 = sub_140a74f90(rcx_13)
            
            rdx_9 = zx.q(var_88)
            rbx_4 += 0x10
            rdi_6 = var_80_1
        while (rbx_4 != rsi_3)
        
        i_3 = i_5
        rbx_4 = var_48
    
    *arg2 = 0
    
    if (i_3 != 0)
        int32_t i_2
        
        do
            int64_t rcx_28 = *rbx_4
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
            
            rbx_4 += 0x10
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
        rbx_4 = var_48
    
    if (rbx_4 != 0)
        sub_140a74f90(rbx_4)
    
    if (r14 != 0)
        sub_140a74f90(r14)
    
    if (r13_1 != 0)
        rcx_31 = r13_1
    label_140ba78fd_1:
        sub_140a74f90(rcx_31)

label_140ba791c:
return arg2
