// 函数: sub_1410f9be0
// 地址: 0x1410f9be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg3 + 0x37c)
int32_t i = 0
void* result = arg1

if (*(arg1 + 0xa8) s> 0)
    int64_t r14_1 = 0
    int64_t var_58_1 = 0
    int64_t arg_18
    arg_18.d = rbx:4.d
    
    do
        void* r12_2 = *(result + 0xa0) + r14_1
        void* var_48
        sub_1419a2ec0(*(r12_2 + 0x5150), &var_48, &data_143e528c0, 0)
        void* r15_1 = var_48
        void* rbp_1 = nullptr
        
        if (r15_1 != 0)
            int64_t rdx_1 = sx.q(*(r15_1 + 0x10c))
            void* var_40
            int64_t* r14_2 = *(var_40 + 0x10)
            int64_t r12_3 = rdx_1 << 3
            int64_t rbp_2 = r14_2[3]
            
            if (*(r12_3 + rbp_2) == 0)
                sub_1419ccf30(r14_2, rdx_1.d)
                rbp_2 = r14_2[3]
            
            rbp_1 = *(r12_3 + rbp_2)
            r14_1 = var_58_1
        
        *(arg2 + 0x1b0) = rbp_1
        sub_14198aa60(rbp_1)
        void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_1 = &rcx_6[3]
        
        if (rax_1 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_1 = &rcx_6[3]
        
        *(arg2 + 0x30) = rax_1
        void**** rax_2 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_2 = rcx_6
        *(arg2 + 8) = &rcx_6[1]
        rcx_6[1] = 0
        *rcx_6 = &data_142dd5b40
        rcx_6[2] = rbp_1
        sub_1410e8cf0(r15_1, arg2, r12_2, arg4, rbx.d, (*(r12_2 + 0x1598)).d, 1)
        int32_t rcx_12 = *(r12_2 + 0x15a0) - *(r12_2 + 0x1598)
        int32_t rax_6 = *(r12_2 + 0x15a4) - *(r12_2 + 0x159c)
        
        if (arg_18.d s<= rax_6)
            rax_6 = arg_18.d
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_6 + 7)
        
        if (rbx.d s<= rcx_12)
            rcx_12 = rbx.d
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_12 + 7)
        sub_1419cd1c0(arg2, r15_1, ((temp2_1 & 7) + temp3_1) s>> 3, 
            ((temp0_1 & 7) + temp1_1) s>> 3, 1)
        int64_t r12_4 = *(arg2 + 0x1b0)
        
        if (*(r15_1 + 0x126) u> 0)
            uint32_t rbp_3 = zx.d(*(r15_1 + 0x124))
            void*** rax_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rcx_14 = &rax_13[5]
            
            if (rcx_14 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rax_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rcx_14 = &rax_13[5]
            
            *(arg2 + 0x30) = rcx_14
            void**** rcx_16 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rcx_16 = rax_13
            *(arg2 + 8) = &rax_13[1]
            rax_13[1] = 0
            *rax_13 = &data_142da77d8
            rax_13[2] = r12_4
            rax_13[3].d = rbp_3
            rax_13[4] = 0
        
        result = arg1
        r14_1 += 0x5240
        i += 1
        var_58_1 = r14_1
    while (i s< *(result + 0xa8))

return result
