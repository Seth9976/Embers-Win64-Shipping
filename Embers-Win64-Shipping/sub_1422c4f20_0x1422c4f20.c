// 函数: sub_1422c4f20
// 地址: 0x1422c4f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_88 = arg2
int64_t* var_78 = &var_88
void* rbx = arg1 + 0x38
void* var_70 = rbx
void* var_68 = arg1 + 0x48
int32_t var_80 = 0
int32_t var_60 = *(arg1 + 0x50)
int32_t var_5c = 0
int64_t var_58 = 1
int32_t var_50 = *(arg1 + 0x40) - 1
int64_t var_38 = *(arg1 + 0x60)
int32_t var_30 = 0xffffffff
void* arg_8 = rbx
arg4[1].d = 0

if (*(arg4 + 0xc) != 1)
    sub_1405947f0(arg4, 1)

arg5[1].d = 0

if (*(arg5 + 0xc) != 1)
    sub_1405947f0(arg5, 1)

if (sub_1422cb580(&var_78) != 0)
    char i
    
    do
        void* rax_6 = *(arg3 + 0x10)
        void* rdx = arg3
        int32_t var_48
        void* rsi_3 = (sx.q(var_48) << 5) + *rbx
        uint64_t* rbx_1 = arg5
        uint32_t rcx_3 = zx.d(*(rsi_3 + 0x16))
        
        if (rax_6 != 0)
            rdx = rax_6
        
        if (test_bit(*(rdx + (zx.q(rcx_3) u>> 5 << 2)), rcx_3 & 0x1f))
            rbx_1 = arg4
        
        int64_t rdi_1 = sx.q(rbx_1[1].d)
        int32_t rax_8 = (rdi_1 + 1).d
        rbx_1[1].d = rax_8
        
        if (rax_8 s> *(rbx_1 + 0xc))
            sub_140594770(rbx_1)
        
        int16_t var_4c
        *(*rbx_1 + (rdi_1 << 1)) = var_4c
        
        if (*(rsi_3 + 0x1c) == 0)
            int64_t rdi_2 = sx.q(rbx_1[1].d)
            int32_t rax_11 = (rdi_2 + 1).d
            uint32_t rbp_1 = zx.d(*(*var_88 + (sx.q(var_80) << 1)))
            rbx_1[1].d = rax_11
            
            if (rax_11 s> *(rbx_1 + 0xc))
                sub_140594770(rbx_1)
            
            *(*rbx_1 + (rdi_2 << 1)) = rbp_1.w
            int32_t rdi_3 = 0
            
            if (rbp_1 != 0)
                do
                    int64_t rsi_4 = sx.q(rbx_1[1].d)
                    int32_t rax_14 = (rsi_4 + 1).d
                    rbx_1[1].d = rax_14
                    void* r14_1 = *var_88 + (sx.q(var_80 + rdi_3) << 1)
                    
                    if (rax_14 s> *(rbx_1 + 0xc))
                        sub_140594770(rbx_1)
                    
                    rdi_3 += 1
                    *(*rbx_1 + (rsi_4 << 1)) = *(r14_1 + 2)
                while (rdi_3 s< rbp_1)
            
            int64_t rdi_4 = sx.q(rbx_1[1].d)
            int32_t rax_16 = (rdi_4 + 1).d
            rbx_1[1].d = rax_16
            
            if (rax_16 s> *(rbx_1 + 0xc))
                sub_140594770(rbx_1)
            
            int64_t* r9 = var_78
            *(*rbx_1 + (rdi_4 << 1)) = 0
            int64_t rax_18 = sx.q(r9[1].d)
            int32_t r8_2 = (rax_18 + 1).d
            r9[1].d = r8_2
            int32_t r10_2 = zx.d(*(**r9 + (rax_18 << 1))) + r8_2
            r9[1].d = r10_2
            
            if (*(**r9 + (sx.q(r10_2) << 1)) == 0)
                r9[1].d = r10_2 + 1
        
        i = sub_1422cb580(&var_78)
        rbx = arg_8
    while (i != 0)

int64_t rbx_2 = sx.q(arg4[1].d)
int32_t rax_22 = (rbx_2 + 1).d
arg4[1].d = rax_22

if (rax_22 s> *(arg4 + 0xc))
    sub_140594770(arg4)

*(*arg4 + (rbx_2 << 1)) = 0
int64_t rbx_3 = sx.q(arg5[1].d)
int32_t rax_24 = (rbx_3 + 1).d
arg5[1].d = rax_24

if (rax_24 s> *(arg5 + 0xc))
    sub_140594770(arg5)

uint64_t result = *arg5
*(result + (rbx_3 << 1)) = 0
return result
