// 函数: sub_14075d020
// 地址: 0x14075d020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg4
*arg2 = 0
arg2[1] = 0
int16_t* rdx

if (arg3[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg3

int64_t arg_10
sub_140b58260(&arg_10, rdx, 1)
void* rax = *(arg1 + 0x528)

if (rax == 0)
    return arg2

int64_t* r15 = *(rax + 0xa0)
void* rax_3 = &r15[sx.q(*(rax + 0xa8)) * 2]

if (r15 == rax_3)
    return arg2

do
    void var_78
    
    if (*sub_1407fb330(sub_1407ef9c0(*r15), &var_78) == arg_10)
        int64_t rbx_2 = sx.q(arg2[1].d)
        int32_t r14_1 = *(*(*(*r15 + 0x778) + 0x98) + 0xb0)
        
        if (r14_1 s> rbx_2.d)
            arg2[1].d = r14_1
            
            if (r14_1 s> *(arg2 + 0xc))
                sub_1406105e0(arg2)
            
            memset(*arg2 + (rbx_2 << 2), 0, sx.q(r14_1 - rbx_2.d) << 2)
        else if (r14_1 s< rbx_2.d && r14_1 != rbx_2.d)
            arg2[1].d = r14_1
            sub_1405dac90(arg2)
        
        int16_t* rdx_3
        
        if (r12[1].d == 0)
            rdx_3 = &data_142d40450
        else
            rdx_3 = *r12
        
        int64_t arg_18
        sub_140b58260(&arg_18, rdx_3, 1)
        int64_t var_f0 = arg_18
        int64_t var_e8_1 = data_14396f088
        int16_t var_e0_1 = data_14396f090
        int32_t var_de_1 = 0xffffffff
        int64_t var_d8_1 = 0
        int64_t var_d0_1 = 0
        int64_t* rbx_3 = *(*r15 + 0x778)
        void var_70
        int64_t* rax_13 = sub_140745220(&var_70, &var_f0)
        int64_t var_b0_1 = data_14396f0d8
        int16_t var_a8_1 = data_14396f0e0
        int64_t var_b8 = 0
        int32_t var_a6_1 = 0xffffffff
        int64_t var_a0_1 = 0
        int64_t var_98_1 = 0
        sub_140747710(&var_b8, rax_13)
        int32_t* rax_14 = sub_1408011e0(rbx_3, rax_13)
        int64_t rcx_13 = rax_13[3]
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        void* rcx_14 = rbx_3[0x13]
        void* rbx_4 = nullptr
        
        if (rax_14 != 0 && rcx_14 != 0)
            rbx_4 = zx.q(*(rcx_14 + 0xb8) * *rax_14) + *(rcx_14 + 0x18)
        
        if (var_d8_1 != 0)
            sub_140a74f90(var_d8_1)
        
        uint32_t r11_1 = 0
        uint64_t rdi_4 = 0
        
        if (r14_1 s>= 4)
            void* r8_2 = rbx_4 + 8
            int64_t r9_1 = neg.q(rbx_4)
            uint64_t rax_17 = zx.q(((r14_1 - 4) u>> 2) + 1)
            uint64_t i_3 = zx.q(rax_17.d)
            r11_1 = (rax_17 << 2).d
            rdi_4 = rax_17 << 2
            uint64_t i
            
            do
                void* rdx_7 = r8_2 + r9_1
                *(rdx_7 + *arg2 - 8) = *(r8_2 - 8)
                *(*arg2 + rdx_7 - 4) = *(r8_2 - 4)
                *(*arg2 + r8_2 + r9_1) = *r8_2
                int32_t rax_21 = *(r8_2 + 4)
                void* rcx_21 = *arg2 + r8_2
                r8_2 += 0x10
                *(rcx_21 + r9_1 + 4) = rax_21
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        if (r11_1 s< r14_1)
            uint64_t rdx_8 = rdi_4 << 2
            uint64_t i_2 = zx.q(r14_1 - r11_1)
            uint64_t i_1
            
            do
                int32_t rax_22 = *(rbx_4 + rdx_8)
                rdx_8 += 4
                *(rdx_8 + *arg2 - 4) = rax_22
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        if (var_a0_1 != 0)
            sub_140a74f90(var_a0_1)
        
        r12 = arg4
    
    r15 = &r15[2]
while (r15 != rax_3)

return arg2
