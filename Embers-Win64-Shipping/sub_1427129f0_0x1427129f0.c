// 函数: sub_1427129f0
// 地址: 0x1427129f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg5)
void* r13 = nullptr
int64_t r12 = sx.q(arg4)
int64_t r8 = arg2 + 0x258
int32_t var_88 = 0
uint64_t r14
r14.b = 0

if (arg2 == 0)
    r8 = 0

int32_t arg_10
sub_140ba6bd0(arg1 + 0x78, &arg_10, r8)
int64_t rax = sx.q(arg_10)

if (rax.d != 0xffffffff)
    int64_t rax_1 = rax * 0x38
    
    if (rax_1 != neg.q(*(arg1 + 0x78)))
        r13 = rax_1 + *(arg1 + 0x78) + 8

void* const rbx = *(arg1 + 0x28)
void* rax_3
int64_t rax_4
void* rdx_1

if (rbx != 0)
    rax_3 = sub_1426a09e0()
    rdx_1 = *(rbx + 0x10)
    rax_4 = sx.q(*(rax_3 + 0x38))

if (rbx == 0 || rax_4.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
    rbx = nullptr

if (r13 != 0 && (*(r13 + 0x20) & 1) != 0 && *(r13 + 0x18) s>= 0 && *(arg1 + 0xd8) != 0 && rbx != 0
        && arg3 != 0 && *(arg3 + 0x30) s> 1)
    int64_t rax_5
    
    if (r12.d s< 0 || r12.d s>= *(arg3 + 0x108))
        rax_5.b = 0
    else
        rax_5.b = 1
    
    if (rax_5.b != 0)
        if (rdi.d s< 0 || rdi.d s>= *(arg3 + 0x108))
            rax_5.b = 0
        else
            rax_5.b = 1
        
        if (rax_5.b != 0)
            int32_t var_78_1 = arg6[1].d
            int32_t rax_9 = *(arg3 + 0x108) - 1
            int64_t var_80 = *arg6
            
            if (rdi.d s< rax_9)
                sub_142686e60(rbx, *(*(arg3 + 0x100) + (rdi << 3)), &var_80)
            
            int64_t rdi_1 = r12
            int64_t var_60 = 0
            int32_t r8_3 = 0
            int64_t var_58_1 = 0
            
            if (r12 s<= rdi)
                do
                    int64_t rbx_1 = sx.q(var_58_1.d)
                    int64_t r14_1 = *(arg3 + 0x100)
                    int32_t rax_10 = (rbx_1 + 1).d
                    var_58_1.d = rax_10
                    
                    if (rax_10 s> r8_3)
                        sub_1405a4d70(&var_60)
                        r8_3 = var_58_1:4.d
                    
                    int64_t rcx_4 = *(r14_1 + (rdi_1 << 3))
                    rdi_1 += 1
                    *(var_60 + (rbx_1 << 3)) = rcx_4
                while (rdi_1 s<= rdi)
            
            int64_t* rdi_2 = *(arg3 + 0xd0)
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            int64_t* var_48
            int64_t* rcx_5
            char rdx_5
            void* r14_2
            void* r15_2
            
            if (*(arg3 + 0xc8) == 0)
                r15_2 = arg1
                rdx_5 = 0
                r14_2 = *(*(*(r15_2 + 0x28) + 0x338) + 0x10)
                rcx_5 = var_48
            else
                rcx_5 = *(arg3 + 0xd0)
                rdx_5 = 1
                var_48 = rcx_5
                
                if (rcx_5 != 0)
                    rcx_5[1].d += 1
                    rcx_5 = var_48
                
                r14_2 = *(*(arg3 + 0xc8) + 0x10)
                r15_2 = arg1
            
            if ((rdx_5 & 1) != 0 && rcx_5 != 0)
                rcx_5[1].d -= 1
                
                if (rcx_5[1].d == 1)
                    (**var_48)(var_48)
                    int32_t rax_17 = *(var_48 + 0xc)
                    *(var_48 + 0xc) -= 1
                    
                    if (rax_17 == 1)
                        (*(*var_48 + 8))(var_48, 1)
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t rsi_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, zx.q(rsi_1))
            
            void* r8_4 = r14_2 + 8
            
            if (r14_2 == 0)
                r8_4 = nullptr
            
            sub_142617470(*(r15_2 + 0xd8), *(r13 + 0x18), r8_4)
            sub_1426177f0(*(r15_2 + 0xd8), *(r13 + 0x18), 0)
            int32_t var_70[0x4]
            sub_142697e10(&var_70, &var_80)
            int32_t rdi_3 = var_58_1.d
            int64_t rbx_3 = var_60
            char rax_23 = sub_142616010(*(r15_2 + 0xd8), *(r13 + 0x18), 
                *(rbx_3 + (sx.q(rdi_3 - 1) << 3)), &var_70)
            r14 = zx.q(rax_23)
            
            if (rax_23 != 0)
                r14 = zx.q(sub_1426163f0(*(r15_2 + 0xd8), *(r13 + 0x18), rbx_3, rdi_3))
            
            int64_t rbx_4 = var_60
            
            if (rbx_4 != 0)
                sub_140a74f90(rbx_4)

return zx.q(r14.b)
