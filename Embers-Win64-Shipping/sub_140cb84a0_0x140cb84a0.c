// 函数: sub_140cb84a0
// 地址: 0x140cb84a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x78)
char result = (*(*rcx + 0x110))(rcx, arg4)

if (result != 0)
    char rdi_1 = *(arg1 + 0x80) & 1
    sub_140d12020()
    
    if ((data_143e1c4a8 & *(*(*(arg1 + 0x78) + 8) + 0x10)) == 0)
        sub_140d11cb0()
        void arg_8
        
        if ((data_143e1c068 & *(*(*(arg1 + 0x78) + 8) + 0x10)) != 0)
            int32_t r9_1 = 4
            
            if (rdi_1 != 0)
                r9_1 = 0x11
            
            return sub_140cb8370(arg2, *(arg1 + 0x4c) + arg3, &arg_8, r9_1)
        
        sub_140d11730()
        
        if ((data_143e1bb18 & *(*(*(arg1 + 0x78) + 8) + 0x10)) == 0)
            sub_140ccfb50()
            
            if ((data_143e1b2d8 & *(*(*(arg1 + 0x78) + 8) + 0x10)) != 0)
                return sub_140cb8370(arg2, *(arg1 + 0x4c) + arg3, &arg_8, 0xc)
            
            int64_t var_28
            int64_t* rax_16 = sub_140cbc340(arg1, &var_28)
            int16_t* const rbx_8 = &data_142d40450
            int16_t* const rdi_4
            
            if (rax_16[1].d == 0)
                rdi_4 = &data_142d40450
            else
                rdi_4 = *rax_16
            
            int64_t var_38
            int16_t** rax_17 = sub_140cbc340(*(arg1 + 0x78), &var_38)
            
            if (rax_17[1].d != 0)
                rbx_8 = *rax_17
            
            int16_t* const var_48_1 = rdi_4
            sub_140af98a0("Unknown", 0x966, 
                Encountered unknown property containing object or name reference: %s in %s", rbx_8)
            int64_t rcx_28 = var_38
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
            
            int64_t rcx_29 = var_28
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
            
            return sub_140afbb40()
        
        int32_t r9_2 = 5
        
        if (rdi_1 != 0)
            r9_2 = 0x12
        
        sub_140cb8370(arg2, *(arg1 + 0x4c) + arg3, &arg_8, r9_2)
        sub_140cb8cc0(arg2 + 0x1e8, *(*(arg1 + 0x78) + 0x3c))
        int64_t rdi_3 = sx.q(sub_140cb8c80(arg2 + 0x1e8))
        sub_140cb8370(arg2, 0, &arg_8, 1)
        int64_t rdx_16 = sx.q(*(arg2 + 0x1f0))
        int64_t rcx_20 = *(arg2 + 0x1e8)
        int32_t rcx_21 = *(rcx_20 + (rdx_16 << 2) - 4)
        *(rcx_20 + (rdx_16 << 2) - 4) = zx.d(rcx_21.b + 1) ^ zx.d(rcx_21.b) ^ rcx_21
        int64_t r8_10 = sx.q(*(arg2 + 0x1f0))
        int64_t rdx_19 = *(arg2 + 0x1e8)
        result = (*(rdx_19 + (r8_10 << 2) - 4)).b - 1
        *(rdx_19 + (rdi_3 << 2)) = (r8_10.d - rdi_3.d) << 8 | zx.d(result)
    else
        int32_t rax_1 = 0x500
        int64_t r14_1 = sx.q(*(arg2 + 0x1f0))
        
        if (rdi_1 != 0)
            rax_1 = 0x1200
        
        int32_t rbx_4 = (*(arg1 + 0x4c) + arg3) << 0xd | rax_1
        int32_t rax_2 = (r14_1 + 1).d
        *(arg2 + 0x1f0) = rax_2
        
        if (rax_2 s> *(arg2 + 0x1f4))
            sub_1405a4cf0(arg2 + 0x1e8)
        
        *(*(arg2 + 0x1e8) + (r14_1 << 2)) = rbx_4
        int64_t rbx_5 = sx.q(*(arg2 + 0x1f0))
        int32_t r14_2 = *(*(arg1 + 0x78) + 0x3c)
        int32_t rax_5 = (rbx_5 + 1).d
        *(arg2 + 0x1f0) = rax_5
        
        if (rax_5 s> *(arg2 + 0x1f4))
            sub_1405a4cf0(arg2 + 0x1e8)
        
        *(*(arg2 + 0x1e8) + (rbx_5 << 2)) = r14_2
        int64_t r14_3 = sx.q(*(arg2 + 0x1f0))
        int32_t rax_7 = (r14_3 + 1).d
        *(arg2 + 0x1f0) = rax_7
        
        if (rax_7 s> *(arg2 + 0x1f4))
            sub_1405a4cf0(arg2 + 0x1e8)
        
        *((r14_3 << 2) + *(arg2 + 0x1e8)) = 0xdeadbabe
        int64_t* rcx_6 = *(arg1 + 0x78)
        (*(*rcx_6 + 0x120))(rcx_6, arg2, 0, arg4)
        int64_t rcx_7 = sx.q(*(arg2 + 0x1f0))
        int64_t rax_10 = *(arg2 + 0x1e8)
        int32_t rax_11 = *(rax_10 + (rcx_7 << 2) - 4)
        *(rax_10 + (rcx_7 << 2) - 4) = zx.d(rax_11.b + 1) ^ zx.d(rax_11.b) ^ rax_11
        int64_t r8_1 = sx.q(*(arg2 + 0x1f0))
        int32_t* rdx_8 = *(arg2 + 0x1e8)
        result = (rdx_8[r8_1 - 1]).b - 1
        rdx_8[r14_3] = (r8_1.d - r14_3.d) << 8 | zx.d(result)

return result
