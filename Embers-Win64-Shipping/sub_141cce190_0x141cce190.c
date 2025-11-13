// 函数: sub_141cce190
// 地址: 0x141cce190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = (arg4 << 3).d

if (*(arg1 + 0x200) s> 0)
    char r9 = *(sx.q(arg4.d) + arg3 - 1)
    
    if (r9 == 0)
        *(arg2 + 0xc) = 1
        *arg2 = 0
        arg2[1].d = 0
        return arg2
    
    r10 -= 1
    
    if (r9 s>= 0)
        char temp0_1
        char temp1_1
        
        do
            r10 -= 1
            temp0_1 = r9
            temp1_1 = r9
            r9 *= 2
        while (temp0_1 + temp1_1 s>= 0)

void** var_d8
sub_140b4c3a0(&var_d8, arg3, sx.q(r10))
int64_t var_e8 = 0
int32_t var_e0 = 0
sub_1405947f0(&var_e8, 0x12)
int32_t rax_2 = var_e0 + 0x12
var_e0 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_e8)

int64_t rbx = var_e8
UnDecorator::getReferenceType(rbx, u"PostPacketHandler", 0x24)

if (rbx != 0)
    sub_140a74f90(rbx)

if (*(arg1 + 0x21c) == 0)
    sub_141ccf650(arg1)

int32_t rax_3 = *(arg1 + 0x200)
int64_t r14 = sx.q(rax_3 - 1)
char var_af
int64_t var_38
int64_t var_30

if (rax_3 - 1 s>= 0)
    int64_t r15_2 = r14 << 4
    int64_t temp4_1
    
    do
        int64_t* rdi_1 = *(r15_2 + *(arg1 + 0x1f8))
        
        if ((*(*rdi_1 + 8))(rdi_1) != 0 && (var_af & 1) == 0 && var_38 - var_30 s> 0)
            if (var_30 != 0 && (*(*rdi_1 + 0x58))(rdi_1) == 0 && var_30 != 0)
                int32_t rbx_1 = var_38.d
                uint64_t rbx_2 = zx.q(rbx_1 - var_30.d)
                
                if (rbx_1 != var_30.d)
                    int64_t rdx_2 = 0
                    var_e8 = 0
                    var_e0 = 0
                    int32_t rax_15 = ((var_38 - var_30 + 7) s>> 3).d
                    
                    if (rax_15 s> 0)
                        sub_1405daba0(&var_e8)
                        rdx_2 = var_e8
                    
                    *(sx.q(rax_15 - 1) + rdx_2) = 0
                    var_d8[0x2b](&var_d8, var_e8, rbx_2)
                    sub_140b55010(&var_d8, &var_e8, rbx_2)
                    int64_t rcx_14 = var_e8
                    
                    if (rcx_14 != 0)
                        sub_140a74f90(rcx_14)
            
            int64_t rax_18 = *rdi_1
            
            if (arg5 == 0)
                (*(rax_18 + 0x18))(rdi_1, &var_d8)
            else
                (*(rax_18 + 0x30))(rdi_1, arg6, &var_d8)
        
        r15_2 -= 0x10
        temp4_1 = r14
        r14 -= 1
    while (temp4_1 - 1 s>= 0)

int64_t var_48

if ((var_af & 1) != 0)
    *arg2 = 0
    arg2[1].d = 0
    *(arg2 + 0xc) = 1
else
    if (var_30 == 0 || var_38 == var_30)
        sub_140b4cc40(arg1 + 0x148, &var_d8)
        
        if (arg1 + 0x1d8 != &var_48)
            int64_t rcx_23 = *(arg1 + 0x1d8)
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
            
            *(arg1 + 0x1d8) = var_48
            int32_t var_40
            *(arg1 + 0x1e0) = var_40
            int32_t var_3c
            *(arg1 + 0x1e4) = var_3c
            var_40.q = 0
            var_48 = 0
        
        *(arg1 + 0x1e8) = var_38
        *(arg1 + 0x1f0) = var_30
    else
        var_e0 = 0
        int32_t rax_23 = ((var_38 - var_30 + 7) s>> 3).d
        int64_t rdx_7 = 0
        var_e8 = 0
        
        if (rax_23 s> 0)
            sub_1405daba0(&var_e8)
            rdx_7 = var_e8
        
        *(sx.q(rax_23 - 1) + rdx_7) = 0
        int64_t rbx_4 = var_38 - var_30
        var_d8[0x2b](&var_d8, var_e8, rbx_4)
        sub_140b55010(arg1 + 0x148, &var_e8, rbx_4)
        int64_t rcx_21 = var_e8
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
    
    if (*(arg1 + 0x1e8) - *(arg1 + 0x1f0) s> 0)
        var_e8 = 0
        int32_t var_e0_1 = 0
        sub_1405947f0(&var_e8, 0x11)
        int32_t rax_33 = var_e0_1 + 0x11
        var_e0_1 = rax_33
        
        if (rax_33 s> 0)
            sub_140594770(&var_e8)
        
        int64_t rbx_6 = var_e8
        UnDecorator::getReferenceType(rbx_6, u"PrePacketHandler", 0x22)
        
        if (rbx_6 != 0)
            sub_140a74f90(rbx_6)
    
    *arg2 = *(arg1 + 0x1d8)
    arg2[1].d = *(arg1 + 0x1e8) - *(arg1 + 0x1f0)
    *(arg2 + 0xc) = 0

int64_t rcx_28 = var_48

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

sub_140b4cb40(&var_d8)
return arg2
