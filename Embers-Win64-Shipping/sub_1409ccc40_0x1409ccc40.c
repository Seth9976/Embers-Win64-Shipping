// 函数: sub_1409ccc40
// 地址: 0x1409ccc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    void* rax_1 = sub_1425b0750()
    void* rcx = arg3[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        int64_t* rax_4 = arg3
        void* rsi = *(arg1 + 0x30)
        void* rbp
        
        if (rsi == 0)
            rbp = nullptr
        else
            if (arg3 == -1)
                rax_4 = sub_140cde0b0()
            
            int32_t var_48_1 = 0x7f800000
            rbp = sub_140d2e1f0(rsi, rax_4, 0, 0xfffffff, 0, 0)
        
        *(rbp + 8) &= 0xfffffffc
        (*(*arg3 + 0x8a0))(arg3, rbp)
        int64_t arg_18 = 0
        void* result = sub_140998b80(arg2, rbp, 0)
        int64_t* rax_7 = *(arg2 + 0x3b8)
        int64_t* rcx_4 = rax_7
        void* r8_1 = &rax_7[sx.q(*(arg2 + 0x3c0))]
        int32_t rcx_5
        
        if (rax_7 == r8_1)
        label_1409ccd52:
            rcx_5 = -1
        else
            while (*rcx_4 != arg1)
                rcx_4 = &rcx_4[1]
                
                if (rcx_4 == r8_1)
                    goto label_1409ccd52
            
            rcx_5 = ((rcx_4 - rax_7) s>> 3).d
        
        void* const rbx_1 = *(*(result + 0x3b8) + (sx.q(rcx_5) << 3))
        void* rax_9
        int64_t rax_10
        void* rdx_6
        
        if (rbx_1 != 0)
            rax_9 = sub_1409f10a0()
            rdx_6 = *(rbx_1 + 0x10)
            rax_10 = sx.q(*(rax_9 + 0x38))
        
        if (rbx_1 == 0 || rax_10.d s> *(rdx_6 + 0x38)
                || *(*(rdx_6 + 0x30) + (rax_10 << 3)) != rax_9 + 0x30)
            rbx_1 = nullptr
        
        *(rbp + 0x128) = result
        *(rbx_1 + 0x28) = rbp
        int128_t var_38[0x2]
        int128_t* rax_12 = sub_1409cb680(&var_38, arg3, *(arg2 + 0x3a4))
        *(result + 0x390) = *rax_12
        *(result + 0x3a0) = rax_12[1].q
        sub_1409d5470(result)
        return result

return 0
