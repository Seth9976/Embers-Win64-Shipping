// 函数: sub_1418c9ef0
// 地址: 0x1418c9ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r14 = *arg2
uint64_t rbp = zx.q(arg2[1].d)
uint64_t rbx_2 = zx.q(sub_140b21160(r14, rbp.d, 0)) << 0x20 | rbp
uint64_t arg_20 = rbx_2

if (rbx_2 != 0)
    AcquireSRWLockShared(arg1)
    void* const rcx_5
    
    if (arg1->__offset(0x1a0).d == arg1->__offset(0x1cc).d)
    label_1418c9fb0:
        rcx_5 = nullptr
    else
        void* r9_1 = &arg1[0x3a]
        void* r8 = *(r9_1 + 8)
        
        if (r8 != 0)
            r9_1 = r8
        
        int32_t rax_6 = *(r9_1 + ((sx.q((rbx_2 u>> 0x20).d * 0x17 + rbx_2.d)
            & (sx.q(arg1->__offset(0x1e0).d) - 1)) << 2))
        
        if (rax_6 == 0xffffffff)
        label_1418c9fb0_1:
            rcx_5 = nullptr
        else
            struct _RTL_SRWLOCK r8_1 = arg1
            
            while (true)
                int64_t rdx_3 = sx.q(rax_6) * 3
                rcx_5 = r8_1 + (rdx_3 << 3)
                
                if (*(r8_1 + (rdx_3 << 3)) == rbx_2)
                    break
                
                rax_6 = *(rcx_5 + 0x10)
                
                if (rax_6 == 0xffffffff)
                    goto label_1418c9fb0_2
            
            if (rax_6 == 0xffffffff)
            label_1418c9fb0_2:
                rcx_5 = nullptr
    
    void* rbx_3 = rcx_5 + 8
    
    if (rcx_5 == 0)
        rbx_3 = nullptr
    
    if (rbx_3 == 0)
        ReleaseSRWLockShared(arg1)
    else
        void* rbx_4 = *rbx_3
        ReleaseSRWLockShared(arg1)
        void*** rax_7 = rbx_4 - 0x38
        
        if (rbx_4 == 0)
            rax_7 = nullptr
        
        if (rax_7 != 0)
            return rax_7

void*** rax_8 = j_sub_140a82f30(0x1a8)
void*** rdi_1 = rax_8

if (rax_8 == 0)
    rdi_1 = nullptr
else
    *rdi_1 = &data_142d3ff08
    rdi_1[1].d = 0
    *(rdi_1 + 0xc) = 0
    rdi_1[2].w = 0x100
    __builtin_memset(&rdi_1[3], 0, 0x14)
    *rdi_1 = &data_142ef2930
    *(rdi_1 + 0x2c) = 5
    rdi_1[6] = 0
    sub_1418d12b0(&rdi_1[7], arg3, 5, 0x20)
    *rdi_1 = &data_142fef660
    rdi_1[7] = &data_142fef668

uint64_t r8_3 = arg_20
void* rbx_5 = &rdi_1[7]
int32_t var_50_1 = rbp.d
int128_t var_38 = r14.o
sub_1418ee3f0(rbx_5, &var_38, r8_3, arg4)
AcquireSRWLockExclusive(arg1)
uint64_t* var_48 = &arg_20

if (rdi_1 == 0)
    rbx_5 = nullptr

void* var_68 = rbx_5
void** var_40_1 = &var_68
int32_t arg_10
sub_1418ca8c0(&arg1[0x33], &arg_10, &var_48, nullptr)
ReleaseSRWLockExclusive(arg1)
return rdi_1
