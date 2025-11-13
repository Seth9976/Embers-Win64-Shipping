// 函数: sub_140b1d590
// 地址: 0x140b1d590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1
void* rax = sub_140b17d90()
int32_t r12 = 0
void* r14 = rax

if (*(rax + 0x102) == 0)
    int64_t var_68 = 0
    int32_t var_60_1 = 0
    sub_1405947f0(&var_68, 2)
    int32_t r15_1 = var_60_1 + 2
    int32_t var_5c
    
    if (r15_1 s> var_5c)
        sub_140594770(&var_68)
    
    int64_t rsi_1 = var_68
    UnDecorator::getReferenceType(rsi_1, &data_142d5a024, 4)
    void* rax_1
    int32_t rcx_3
    rax_1, rcx_3 = sub_140b1b080()
    void* r13_1 = *rax_1
    void* rax_4 = (sx.q(*(rax_1 + 8)) << 4) + r13_1
    
    if (r13_1 != rax_4)
        do
            int32_t rbx_1 = *(r13_1 + 8)
            uint64_t var_58
            uint64_t rdi_1
            int32_t r14_1
            
            if (r15_1 s> 1)
                int32_t rdi_2 = rbx_1 - 1
                
                if (rbx_1 == 0)
                    rdi_2 = 0
                
                int32_t rax_5
                
                if (r15_1 == 0)
                    rax_5 = r15_1 + 1
                
                if (r15_1 != 0 || rdi_2 == 0)
                    rax_5 = 0
                
                uint64_t var_78 = 0
                int32_t rcx_6 = rax_5 + rdi_2
                int32_t var_6c
                
                if (r15_1 != 0 || rcx_6 != 0)
                    sub_1405a4c70(&var_78, r15_1 + rcx_6, 0)
                    memcpy(var_78, rsi_1, r15_1 * 2)
                else
                    var_6c = 0
                
                rcx_3 = sub_140a20ba0(&var_78, *r13_1, rdi_2)
                rdi_1 = var_78
                rbx_1 = r15_1
                r14_1 = var_6c
                var_78 = 0
                int32_t var_70_1
                var_70_1.q = 0
            else
                int64_t rsi_2 = *r13_1
                rdi_1 = 0
                var_58 = 0
                
                if (rbx_1 != 0)
                    sub_1405a4c70(&var_58, rbx_1, 0)
                    rdi_1 = var_58
                    rcx_3 = memcpy(rdi_1, rsi_2, rbx_1 * 2)
                    int32_t var_4c
                    r14_1 = var_4c
                else
                    r14_1 = 0
            
            uint64_t var_88 = rdi_1
            var_58 = 0
            rcx_3 = sbb.d(rcx_3, rcx_3, rbx_1 != 0)
            int32_t var_7c_1 = r14_1
            int32_t var_50
            var_50.q = 0
            int32_t rdx_8 = rcx_3 + 2 + rbx_1
            
            if (rdx_8 s> r14_1)
                rcx_3 = sub_1405947f0(&var_88, rdx_8)
                r14_1 = var_7c_1
                rdi_1 = var_88
            
            if (rbx_1 s> 0)
                r12 = rbx_1 - 1
            
            int32_t rsi_3
            rsi_3.b = rbx_1 s<= 0
            int32_t rsi_5 = rsi_3 + 1 + rbx_1
            
            if (rsi_5 s> r14_1)
                rcx_3 = sub_140594770(&var_88)
                r14_1 = var_7c_1
                rdi_1 = var_88
            
            *(rdi_1 + (sx.q(r12) << 1)) = 0x2f
            int64_t rbx_2 = sx.q(*(rax + 0xe0))
            int32_t rax_9 = (rbx_2 + 1).d
            *(rax + 0xe0) = rax_9
            
            if (rax_9 s> *(rax + 0xe4))
                rcx_3 = sub_1405a4f90(rax + 0xd8)
            
            r13_1 += 0x10
            int64_t* rax_12 = (rbx_2 << 4) + *(rax + 0xd8)
            r12 = 0
            var_88 = 0
            int32_t var_80_2
            var_80_2.q = 0
            *rax_12 = rdi_1
            rax_12[1].d = rsi_5
            rsi_1 = var_68
            *(rax_12 + 0xc) = r14_1
        while (r13_1 != rax_4)
        
        r14 = rax
        rdi = arg1
    
    *(r14 + 0x102) = 1
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

int32_t rbx_3 = rdi[1].d
int64_t rdi_3 = *rdi
int64_t var_48 = 0
int32_t var_40 = rbx_3

if (rbx_3 != 0)
    sub_1405a4c70(&var_48, rbx_3, 0)
    memcpy(var_48, rdi_3, rbx_3 * 2)
else
    int32_t var_3c_1 = 0

sub_140a306e0(&var_48, &(*U"{}[\nt")[3], &data_142d5a024, 0)
sub_140a2cf70(&var_48, nullptr, 0)
int64_t* rbx_4 = *(r14 + 0xd8)
void* rdi_6 = &rbx_4[sx.q(*(r14 + 0xe0)) * 2]

if (rbx_4 == rdi_6)
label_140b1d8f9:
    rbx_4.b = 0
else
    while (true)
        int16_t* rdx_13
        
        if (rbx_4[1].d == 0)
            rdx_13 = &data_142d40450
        else
            rdx_13 = *rbx_4
        
        if (sub_140a23cf0(&var_48, rdx_13, 1, 0, 0xffffffff) != 0xffffffff)
            rbx_4.b = 1
            break
        
        rbx_4 = &rbx_4[2]
        
        if (rbx_4 == rdi_6)
            goto label_140b1d8f9

int64_t rcx_19 = var_48

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

return zx.q(rbx_4.b)
