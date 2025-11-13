// 函数: sub_14097f6c0
// 地址: 0x14097f6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 8)

if (rcx == 0 || (*(*rcx + 0x28))(rcx).b == 0)
    return 

int64_t* rcx_1 = *(arg3 + 8)

if (rcx_1 == 0 || (*(*rcx_1 + 0x28))(rcx_1).b == 0)
    return 

int64_t r12_1 = sx.q((*(*arg1 + 0x2c0))(arg1, arg2).d)

if (r12_1.d == 0xffffffff)
    return 

int64_t r8 = *arg1
int32_t rax_4 = (*(r8 + 0x2c0))(arg1, arg3, r8)
int64_t r8_1 = *arg1
int64_t rsi_1 = sx.q(rax_4)
int64_t rdi_1 = sx.q((*(r8_1 + 0x2b8))(arg1, arg3, r8_1).d)

if (r12_1.d == rsi_1.d)
    if (sub_14094dfb0(arg2, arg3).b != 0)
        goto label_14097f7ad
    
    void* rsi_4 = rsi_1 * 0x50 + arg1[0xb]
    
    if (sub_14094dfb0(rsi_4 + 8, arg2).b == 0)
        goto label_14097f7ad
    
    sub_14094ded0(rsi_4 + 8, arg3)
    return 

label_14097f7ad:

if (rdi_1.d == r12_1.d)
    return 

int64_t rcx_8 = arg1[0xb]
int64_t rdx_7 = r12_1 * 0x50
int32_t* r15_1 = rdx_7 + rcx_8
int32_t* rsi_7

if (rdi_1.d != 0xffffffff)
    int64_t rsi_6 = rdi_1 * 0x50
    rsi_7 = rsi_6 + rcx_8
    
    if (rsi_6 == neg.q(rcx_8) || *rsi_7 == *r15_1)
        goto label_14097f7fb
    
    return 

rsi_7 = nullptr
label_14097f7fb:
void* rcx_9 = *(r15_1 + 0x30)
void* rbx_1 = rcx_9
void* rdi_4 = sx.q(r15_1[0xe]) * 0x50 + rcx_9

if (rcx_9 == rdi_4)
    return 

do
    if (sub_14094dfb0(arg2, rbx_1).b != 0)
        int32_t rbx_5 = ((rbx_1 - rcx_9) s/ 0x50).d
        
        if (rbx_5 != 0xffffffff)
            void** var_98
            sub_140949000(&var_98, sx.q(rbx_5) * 0x50 + *(r15_1 + 0x30))
            sub_140975590(r15_1, rbx_5)
            void* rbx_7
            int64_t var_90
            void* var_88
            int64_t var_70
            int32_t var_68
            int32_t var_64
            int64_t var_60
            int32_t var_58
            int32_t var_54
            char var_50
            int32_t var_4c
            
            if (rsi_7 == 0)
                int32_t var_e8 = *r15_1
                int128_t var_d8
                __builtin_memset(&var_d8, 0, 0x40)
                void** const var_e0 = &data_142e259e0
                sub_14094ded0(&var_e0, arg3)
                int64_t var_b0
                int64_t rbx_8 = sx.q(var_b0.d)
                int32_t r15_2 = var_b0:4.d
                int32_t rdi_5 = (rbx_8 + 1).d
                var_b0.d = rdi_5
                int64_t var_b8
                
                if (rdi_5 s> r15_2)
                    sub_1405c5060(&var_b8)
                    r15_2 = var_b0:4.d
                    rdi_5 = var_b0.d
                
                int64_t rdx_17 = var_b8
                void*** rcx_21 = rbx_8 * 0x50 + rdx_17
                *rcx_21 = &data_142e25968
                rcx_21[1] = var_90
                rcx_21[2] = var_88
                
                if (var_88 != 0)
                    *(var_88 + 8) += 1
                
                rbx_7 = &arg1[0xb]
                *rcx_21 = &data_142e259e0
                rcx_21[3] = 0
                rcx_21[4] = 0
                rcx_21[5] = var_70
                rcx_21[6].d = var_68
                *(rcx_21 + 0x34) = var_64
                rcx_21[7] = var_60
                rcx_21[8].d = var_58
                *(rcx_21 + 0x44) = var_54
                rcx_21[9].b = var_50
                *(rcx_21 + 0x4c) = var_4c
                int64_t r13_1 = sx.q(*(rbx_7 + 8))
                int64_t var_70_2
                __builtin_memset(&var_70_2, 0, 0x20)
                int32_t rax_29 = (r13_1 + 1).d
                *(rbx_7 + 8) = rax_29
                
                if (rax_29 s> *(rbx_7 + 0xc))
                    sub_1405c5060(rbx_7)
                    rdx_17 = var_b8
                
                int32_t* rcx_26 = r13_1 * 0x50 + *rbx_7
                *rcx_26 = var_e8
                int64_t rax_31 = var_d8.q
                *(rcx_26 + 8) = &data_142e25968
                *(rcx_26 + 0x10) = rax_31
                void* rax_32 = var_d8:8.q
                *(rcx_26 + 0x18) = rax_32
                
                if (rax_32 != 0)
                    *(rax_32 + 8) += 1
                
                *(rcx_26 + 8) = &data_142e259e0
                *(rcx_26 + 0x20) = 0
                *(rcx_26 + 0x28) = 0
                *(rcx_26 + 0x30) = rdx_17
                rcx_26[0xe] = rdi_5
                rcx_26[0xf] = r15_2
                int64_t var_a8
                *(rcx_26 + 0x40) = var_a8
                int64_t var_a0
                rcx_26[0x12] = var_a0.d
                rcx_26[0x13] = var_a0:4.d
                __builtin_memset(&var_b8, 0, 0x20)
                sub_14094be10(&var_e8)
                r15_1 = rdx_7 + *rbx_7
            else
                int64_t rbx_6 = sx.q(rsi_7[0xe])
                int32_t rax_9 = (rbx_6 + 1).d
                rsi_7[0xe] = rax_9
                
                if (rax_9 s> rsi_7[0xf])
                    sub_1405c5060(&rsi_7[0xc])
                
                void*** rcx_16 = rbx_6 * 0x50 + *(rsi_7 + 0x30)
                *rcx_16 = &data_142e25968
                rcx_16[1] = var_90
                rcx_16[2] = var_88
                
                if (var_88 != 0)
                    *(var_88 + 8) += 1
                
                rbx_7 = &arg1[0xb]
                *rcx_16 = &data_142e259e0
                rcx_16[3] = 0
                rcx_16[4] = 0
                rcx_16[5] = var_70
                rcx_16[6].d = var_68
                *(rcx_16 + 0x34) = var_64
                rcx_16[7] = var_60
                rcx_16[8].d = var_58
                *(rcx_16 + 0x44) = var_54
                rcx_16[9].b = var_50
                *(rcx_16 + 0x4c) = var_4c
                int64_t var_70_1
                __builtin_memset(&var_70_1, 0, 0x20)
            
            if (r15_1[0xe] == 0)
                sub_140974980(rbx_7, r12_1.d, 1, 1)
            
            remapper::~remapper(&var_98)
        
        break
    
    rbx_1 += 0x50
while (rbx_1 != rdi_4)
