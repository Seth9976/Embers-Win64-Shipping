// 函数: sub_140ba3610
// 地址: 0x140ba3610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = *(arg1 + 0x50)
int64_t rsi = sx.q(arg2)
int32_t* rdi_2 = (rsi << 7) + *(rax + 0x18)
int64_t* rbx = *(rdi_2 + 0x40)

if (rbx != 0)
    void*** (* var_58)()
    
    if (*(rax + 0x295) != 0)
        void* rax_1 = sub_140bdf670()
        void* rdx = rbx[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38))
            int64_t rcx = rax_2
            rax_2 = *(rdx + 0x30)
            
            if (*(rax_2 + (rcx << 3)) == rax_1 + 0x30)
                uint64_t* rax_3 = sub_140cbbb90(*(arg1 + 0x50), &var_58, rsi.d, 0, 0)
                uint64_t rsi_1
                
                if (rax_3[1].d == 0)
                    rsi_1 = &data_142d40450
                else
                    rsi_1 = *rax_3
                
                void arg_8
                rax_2 = sub_140d1aab0(*sub_140b58260(&arg_8, rsi_1, 1), 1)
                void*** (* rcx_4)() = var_58
                
                if (rcx_4 != 0)
                    rax_2 = sub_140a74f90(rcx_4)
        
        rbx[1].d &= 0xf7fffbff
        return rax_2
    
    rax = zx.q(rbx[1].d u>> 0xa)
    
    if ((rax.b & 1) != 0)
        *(arg1 + 0xd8) = rbx
        *(arg1 + 0xe0) = u"EventDrivenSerializeExport"
        void* rax_6 = sub_140be01c0()
        void* rdx_4 = rbx[2]
        int64_t rax_7 = sx.q(*(rax_6 + 0x38))
        char var_68
        int64_t var_48
        
        if (rax_7.d s<= *(rdx_4 + 0x38) && *(*(rdx_4 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30)
            int32_t rdx_5 = rdi_2[5]
            
            if (rdx_5 != 0)
                void* r8_3
                r8_3.b = 1
                void* rax_9 = sub_140ba3170(arg1, rdx_5, r8_3.b, (rsi + 1).d)
                
                if (rax_9 == 0)
                    int64_t* rax_10 = sub_140b63b70(rdi_2, &var_48)
                    int16_t* const rsi_2 = &data_142d40450
                    int16_t* const rbx_1
                    
                    if (rax_10[1].d == 0)
                        rbx_1 = &data_142d40450
                    else
                        rbx_1 = *rax_10
                    
                    int32_t rax_11 = rdi_2[5]
                    int64_t rdx_8 = *(arg1 + 0x50)
                    int32_t* rcx_10
                    
                    if (rax_11 s>= 0)
                        rcx_10 = (sx.q(rax_11 - 1) << 7) + *(rdx_8 + 0x18)
                    else
                        rcx_10 = sx.q(0xffffffff - rax_11) * 0x38 + *(rdx_8 + 8)
                    
                    int16_t** rax_14 = sub_140b63b70(rcx_10, &var_58)
                    
                    if (rax_14[1].d != 0)
                        rsi_2 = *rax_14
                    
                    var_68.q = rbx_1
                    sub_140af98a0("Unknown", 0xc36, Could not find SuperStruct %s to create %s", 
                        rsi_2)
                    void*** (* rcx_13)() = var_58
                    
                    if (rcx_13 != 0)
                        sub_140a74f90(rcx_13)
                    
                    int64_t rcx_14 = var_48
                    
                    if (rcx_14 != 0)
                        sub_140a74f90(rcx_14)
                    
                    int64_t rax_15 = sub_140afbb40()
                    *(rdi_2 + 0x51) = 1
                    return rax_15
                
                (*(*rbx + 0x2c8))(rbx, rax_9)
                void* rax_17 = sub_140bdf2e0()
                void* rdx_10 = rbx[2]
                int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                
                if (rax_18.d s<= *(rdx_10 + 0x38)
                        && *(*(rdx_10 + 0x30) + (rax_18 << 3)) == rax_17 + 0x30)
                    (*(*rbx + 0x268))(rbx, rdx_10)
        
        void* r14_1 = *(arg1 + 0x50)
        void* const r14_2
        
        if (*(r14_1 + 0x2a2) == 0)
            r14_2 = nullptr
        else
            r14_2 = *(r14_1 + 0x2d8)
        
        void* rax_21 = *(r14_2 + 8)
        int64_t r15_3 = *(r14_2 + 0xd8) - *(rax_21 + 0x10) + *rax_21
        sub_140bb9a60(r14_2, *(rdi_2 + 0x28))
        rbx[1].d &= 0xfffffbff
        char arg_10
        int32_t var_50_1 = &arg_10
        arg_10 = 0
        var_58 = sub_140884c50
        void* r13_1 = *(sub_140a756e0(&var_58, &data_14397f5f0) + 0x48)
        int64_t r12_1 = *(r13_1 + 0x80)
        *(r13_1 + 0x80) = rbx
        *(*(arg1 + 0x50) + 0x2a0) = 1
        *(*(arg1 + 0x50) + 0x298) = sub_140ba3170(arg1, rdi_2[6], 1, (rsi + 1).d)
        
        if (((rbx[1].d u>> 4).b & 1) == 0)
            (*(*rbx + 0xa0))(rbx, *(arg1 + 0x50) + 0x200)
        else
            sub_140bba0d0(rbx[2], rbx, *(arg1 + 0x50) + 0x200)
        
        *(*(arg1 + 0x50) + 0x298) = 0
        rbx[1].d |= 0x200000
        *(r13_1 + 0x80) = r12_1
        *(*(arg1 + 0x50) + 0x2a0) = 0
        int64_t* rax_30 = *(r14_2 + 8)
        
        if (*rax_30 - *(rdi_2 + 0x28) + *(r14_2 + 0xd8) - rax_30[2] != *(rdi_2 + 0x20)
                && ((*(rbx[2] + 0xcc) u>> 0x19).b & 1) == 0)
            int64_t* rax_35 = sub_140d21830(rbx, &var_48, 0, 0)
            void*** (* rsi_3)() = &data_142d40450
            int16_t* const r8_9
            
            if (rax_35[1].d == 0)
                r8_9 = &data_142d40450
            else
                r8_9 = *rax_35
            
            rdi_2[0xa]
            var_68.q = *(rdi_2 + 0x20)
            sub_140a2e390(&var_58, u"%s: Serial size mismatch: Got %d, Expected %d", r8_9)
            
            if (var_50_1 != 0)
                rsi_3 = var_58
            
            sub_140af98a0("Unknown", 0xc7a, u"%s", rsi_3)
            void*** (* rcx_28)() = var_58
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
            
            int64_t rcx_29 = var_48
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
            
            sub_140afbb40()
        
        return sub_140bb9a60(r14_2, r15_3)

return rax
