// 函数: sub_1420cd7e0
// 地址: 0x1420cd7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1423de540(data_143f5b298, arg1, 1)

if (result != 0)
    void* r10_1 = *(result + 0x188)
    int64_t* r15_1
    
    if (r10_1 == 0)
        r15_1 = result + 0x308
    else
        r15_1 = *(r10_1 + 0xc8)
    
    int64_t rsi_1 = sx.q(arg9[1])
    int64_t var_84
    sub_140d3a3a0(&var_84, *(arg9 + 0x10))
    int32_t var_88
    sub_14066d570(r15_1, &var_88, var_84)
    int64_t rax = sx.q(var_88)
    void* const rcx_5
    
    if (rax.d == 0xffffffff)
        rcx_5 = nullptr
    else
        rcx_5 = (rax << 5) + *r15_1
    
    int64_t* rdi_1 = rcx_5 + 8
    
    if (rcx_5 == 0)
        rdi_1 = nullptr
    
    int64_t* rdi_2
    
    if (rdi_1 == 0)
        rdi_2 = nullptr
    else
        rdi_2 = *rdi_1
    
    void* const rdx_9
    
    if (rdi_2 == 0)
        rdx_9 = nullptr
    else if (sub_1420ce1d0(rdi_2, rsi_1.d) s<= 0)
        rdx_9 = nullptr
    else
        int32_t i_1 = -1
        int32_t var_58_1 = rsi_1.d
        int32_t var_54_1 = 0xffffffff
        sub_141d54100(rdi_2, rdi_2[1].d - *(rdi_2 + 0x34), 0)
        int64_t rax_2 = sx.q(rdi_2[9].d)
        
        if (rax_2.d != 0)
            void* rcx_8 = rdi_2[8]
            void* r8_1 = &rdi_2[7]
            
            if (rcx_8 != 0)
                r8_1 = rcx_8
            
            i_1 = *(r8_1 + (((rax_2 - 1) & rsi_1) << 2))
            int32_t i_2 = i_1
            
            if (i_1 != 0xffffffff)
                int64_t rdx_8 = *rdi_2
                int32_t i_3 = i_1
                int32_t i
                
                do
                    int64_t rcx_9 = sx.q(i_1) * 3
                    i = *(rdx_8 + (rcx_9 << 3) + 0x10)
                    
                    if (*(rdx_8 + (rcx_9 << 3)) == rsi_1.d)
                        break
                    
                    i_1 = i
                while (i != 0xffffffff)
                int32_t i_4 = i_1
        
        if ((var_58_1.q u>> 0x20).d == 0xffffffff)
            rdx_9 = nullptr
        else
            rdx_9 = *(*rdi_2 + sx.q(i_1) * 0x18 + 8)
    
    int64_t* rdi_3
    int64_t* r14_1
    int64_t var_7c
    int64_t var_70
    
    if (arg1 == 0)
        rdi_3 = &var_70
        int32_t rax_9 = data_143dbb200
        r14_1 = &var_7c
        var_70 = data_143dbb1f8.q
        int32_t var_68_2 = rax_9
        result = zx.q(data_143dbb210)
        var_7c = data_143dbb208
        int32_t var_74_2 = result.d
    else
        rdi_3 = &var_7c
        int32_t rax_8 = *(arg1 + 0x124)
        r14_1 = &var_70
        var_7c = *(arg1 + 0x11c)
        int32_t var_74_1 = rax_8
        result = zx.q(arg1[0x26].d)
        var_70 = arg1[0x25]
        int32_t var_68_1 = result.d
    
    if (rdx_9 != 0)
        result = zx.q(arg8)
        int32_t rax_25
        int64_t zmm0_1
        
        if (result.b == 0)
            *(rdx_9 + 8) = arg6.d
            int32_t rax_23 = arg2[1].d
            *(rdx_9 + 0x5c) = *arg2
            *(rdx_9 + 0x64) = rax_23
            zmm0_1 = *arg3
            rax_25 = arg3[1].d
        label_1420cdb65:
            *(rdx_9 + 0x40) = zmm0_1
            *(rdx_9 + 0x50) = *rdi_3
            zmm0_1 = *r14_1
            *(rdx_9 + 0x48) = rax_25
            *(rdx_9 + 0x58) = rdi_3[1].d
            result = zx.q(r14_1[1].d)
            *(rdx_9 + 0x34) = zmm0_1
            *(rdx_9 + 0x3c) = result.d
            *(rdx_9 + 0xc) = 0
        else if (result.b == 1)
            *(rdx_9 + 0x10) = 0
        else if (result.b == 2)
            zmm0_1 = *(rdx_9 + 0x50)
            *(rdx_9 + 8) = *(rdx_9 + 0xc)
            int32_t rax_27 = *(rdx_9 + 0x58)
            *(rdx_9 + 0x5c) = zmm0_1
            zmm0_1 = *(rdx_9 + 0x34)
            *(rdx_9 + 0x64) = rax_27
            rax_25 = *(rdx_9 + 0x3c)
            goto label_1420cdb65
    else if (arg8 == rdx_9.b)
        void*** rax_10 = j_sub_140a82f30(zx.q((rdx_9 + 0x70).d))
        void*** rbx_1 = rax_10
        
        if (rax_10 == 0)
            rbx_1 = nullptr
        else
            void* rdx_10 = *(arg9 + 0x10)
            *rbx_1 = &data_1432bf540
            *(rbx_1 + 0x14) = *(arg9 + 8)
            *(rbx_1 + 0x1c) = *arg9
            rbx_1[1].d = arg6.d
            *(rbx_1 + 0xc) = 0
            rbx_1[2].b = 1
            sub_140d3a3a0(&rbx_1[4], rdx_10)
            sub_140d3a3a0(&rbx_1[5], arg1)
            rbx_1[0xd].b = arg5
            *(rbx_1 + 0x69) = arg4
            *(rbx_1 + 0x6a) = arg7
            rbx_1[6].b = 1
            *(rbx_1 + 0x4c) = 1
        
        void* rdx_12 = *(arg9 + 0x10)
        int32_t rax_17 = arg2[1].d
        *(rbx_1 + 0x5c) = *arg2
        *(rbx_1 + 0x64) = rax_17
        int32_t rax_19 = arg3[1].d
        rbx_1[8] = *arg3
        rbx_1[0xa] = *rdi_3
        rbx_1[9].d = rax_19
        rbx_1[0xb].d = rdi_3[1].d
        int32_t rax_21 = r14_1[1].d
        *(rbx_1 + 0x34) = *r14_1
        *(rbx_1 + 0x3c) = rax_21
        return sub_1420dc280(r15_1, rdx_12, rsi_1.d, rbx_1)

return result
