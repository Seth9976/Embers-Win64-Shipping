// 函数: sub_1422c51e0
// 地址: 0x1422c51e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_88 = arg2
int64_t* var_78 = &var_88
void* var_70 = arg1 + 0x38
void* var_68 = arg1 + 0x48
int32_t var_80 = 0
int32_t var_60 = *(arg1 + 0x50)
int32_t var_5c = 0
int64_t var_58 = 1
int32_t var_50 = *(arg1 + 0x40) - 1
int64_t var_38 = *(arg1 + 0x60)
int32_t var_30 = 0xffffffff
arg4[1].d = 0

if (*(arg4 + 0xc) != 1)
    sub_1405947f0(arg4, 1)

if (sub_1422cb580(&var_78) != 0)
    char i
    
    do
        void* rax_6 = *(arg3 + 0x10)
        void* rdx = arg3
        int32_t var_48
        void* rdi_3 = (sx.q(var_48) << 5) + *(arg1 + 0x38)
        uint32_t rcx_2 = zx.d(*(rdi_3 + 0x16))
        
        if (rax_6 != 0)
            rdx = rax_6
        
        if (not(test_bit(*(rdx + (zx.q(rcx_2) u>> 5 << 2)), rcx_2 & 0x1f)))
            int64_t rsi_1 = sx.q(arg4[1].d)
            int32_t rax_8 = (rsi_1 + 1).d
            arg4[1].d = rax_8
            
            if (rax_8 s> *(arg4 + 0xc))
                sub_140594770(arg4)
            
            int16_t var_4c
            *(*arg4 + (rsi_1 << 1)) = var_4c
            
            if (*(rdi_3 + 0x1c) == 0)
                int64_t rdi_4 = sx.q(arg4[1].d)
                int32_t rax_11 = (rdi_4 + 1).d
                uint32_t rbp_1 = zx.d(*(*var_88 + (sx.q(var_80) << 1)))
                arg4[1].d = rax_11
                
                if (rax_11 s> *(arg4 + 0xc))
                    sub_140594770(arg4)
                
                *(*arg4 + (rdi_4 << 1)) = rbp_1.w
                int32_t rdi_5 = 0
                
                if (rbp_1 != 0)
                    do
                        int64_t rsi_2 = sx.q(arg4[1].d)
                        int32_t rax_14 = (rsi_2 + 1).d
                        arg4[1].d = rax_14
                        void* r14_1 = *var_88 + (sx.q(var_80 + rdi_5) << 1)
                        
                        if (rax_14 s> *(arg4 + 0xc))
                            sub_140594770(arg4)
                        
                        rdi_5 += 1
                        *(*arg4 + (rsi_2 << 1)) = *(r14_1 + 2)
                    while (rdi_5 s< rbp_1)
                
                int64_t rdi_6 = sx.q(arg4[1].d)
                int32_t rax_16 = (rdi_6 + 1).d
                arg4[1].d = rax_16
                
                if (rax_16 s> *(arg4 + 0xc))
                    sub_140594770(arg4)
                
                *(*arg4 + (rdi_6 << 1)) = 0
                goto label_1422c5399
        else if (*(rdi_3 + 0x1c) == 0)
        label_1422c5399:
            int64_t* r9 = var_78
            int64_t rax_18 = sx.q(r9[1].d)
            int32_t r8_2 = (rax_18 + 1).d
            r9[1].d = r8_2
            int32_t r10_2 = zx.d(*(**r9 + (rax_18 << 1))) + r8_2
            r9[1].d = r10_2
            
            if (*(**r9 + (sx.q(r10_2) << 1)) == 0)
                r9[1].d = r10_2 + 1
        
        i = sub_1422cb580(&var_78)
    while (i != 0)

int64_t rdi_7 = sx.q(arg4[1].d)
int32_t rax_22 = (rdi_7 + 1).d
arg4[1].d = rax_22

if (rax_22 s> *(arg4 + 0xc))
    sub_140594770(arg4)

uint64_t result = *arg4
*(result + (rdi_7 << 1)) = 0
return result
