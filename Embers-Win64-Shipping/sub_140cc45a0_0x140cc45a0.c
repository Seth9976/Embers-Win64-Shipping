// 函数: sub_140cc45a0
// 地址: 0x140cc45a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
uint64_t result = zx.q(*(arg2 + 8) u>> 0xa)

if ((result.b & 1) != 0)
    char var_228
    char* var_1e0_1 = &var_228
    void*** (* var_1e8)() = sub_140884c50
    var_228 = 0
    void* rax_4 = *(sub_140a756e0(&var_1e8, &data_14397f5f0) + 0x48)
    
    if (sub_140d3cb50(arg2) != arg1 - 0x200)
        result = sub_140d3cb50(arg2)
        uint64_t result_1 = result
        
        if (result != 0)
            int32_t rbx_7 = *(result + 0x290)
            *(result + 0x290) = (*(arg1 + 0x90) & 0x100000) | rbx_7
            result = sub_140cc45a0(result + 0x200, arg2)
            *(result_1 + 0x290) = rbx_7
    else
        uint8_t rbx_2 = not.b((*(sub_140d21d80(arg2) + 0x50) u>> 4).b) & 1
        void* rax_7 = sub_140bdf2e0()
        void* rdx = *(arg2 + 0x10)
        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
        int64_t rdi
        
        if (rax_8.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_8 << 3)) != rax_7 + 0x30
                || rbx_2 == 0)
            rdi.b = 0
        else
            rdi.b = 1
        
        void* rax_10 = sub_140bdfe30()
        void* rdx_1 = *(arg2 + 0x10)
        int64_t rax_11 = sx.q(*(rax_10 + 0x38))
        int64_t r12
        
        if (rax_11.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30
                || rbx_2 == 0)
            r12.b = 0
        else
            r12.b = 1
        
        char rax_13
        
        if (rdi.b != 0 || r12.b != 0)
            rax_13 = sub_140bbd8c0()
        
        if ((rdi.b == 0 && r12.b == 0) || rax_13 == 0)
            rbx_2 = 0
        else
            rbx_2 = 1
        
        result = sub_140ba0b60(arg2)
        
        if (result.b == 0)
            uint64_t r14_1 = nullptr
            void* rax_14 = sub_140be01c0()
            void* rdx_2 = *(arg2 + 0x10)
            int64_t rax_15 = sx.q(*(rax_14 + 0x38))
            
            if (rax_15.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_15 << 3)) == rax_14 + 0x30)
                void* rax_17 = sub_140bdf2e0()
                void* rdx_3 = *(arg2 + 0x10)
                int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                
                if (rax_18.d s<= *(rdx_3 + 0x38)
                        && *(*(rdx_3 + 0x30) + (rax_18 << 3)) == rax_17 + 0x30)
                    r14_1 = arg2
                
                int64_t rdx_4 = *(arg2 + 0x40)
                
                if (rdx_4 != 0)
                    sub_140cc45a0(arg1, rdx_4)
            
            int32_t rdi_1 = *(arg1 + 0x90)
            int32_t var_224_1 = rdi_1
            *(arg1 + 0x90) = rdi_1
            
            if (rbx_2 != 0)
                *(arg1 + 0x90) = rdi_1 | 0x100000
            
            result = zx.q(*(arg2 + 8) u>> 0xa)
            
            if ((result.b & 1) != 0)
                int32_t rax_23 = sub_140d3cbe0(arg2)
                int64_t* rcx_10 = *(arg1 + 0xd8)
                int64_t rbx_3 = sx.q(rax_23)
                int64_t rdx_5 = *rcx_10
                void* r15_3 = (rbx_3 << 7) + *(arg1 - 0x1e8)
                int64_t rax_24 = (*(rdx_5 + 0x20))(rcx_10, rdx_5)
                int64_t* rcx_11 = *(arg1 + 0xd8)
                int64_t r8_5 = *rcx_11
                (*(r8_5 + 0x178))(rcx_11, *(r15_3 + 0x28), r8_5)
                void* rcx_12
                
                if (*(arg1 + 0xa2) != 0)
                    rcx_12 = *(arg1 + 0xd8)
                
                if (*(arg1 + 0xa2) == 0 || rcx_12 == 0)
                    int64_t* rcx_13 = *(arg1 + 0xd8)
                    (*(*rcx_13 + 0x198))(rcx_13, *(r15_3 + 0x28), *(r15_3 + 0x20))
                else
                    sub_140bb1250(rcx_12, *(r15_3 + 0x28), *(r15_3 + 0x20), *(arg1 + 0x12c), 
                        *(arg1 + 0x12d), *(arg1 + 0x138), *(arg1 + 0x134))
                
                *(arg2 + 8) &= 0xfffffbff
                result = zx.q(data_143de5452)
                int32_t rcx_14 = *(arg2 + 8)
                bool rdx_8 = result.b == 0
                bool var_218 = rdx_8
                
                if (result.b == 0)
                    result = sub_140ce3390(&var_218, arg2)
                    rcx_14 = *(arg2 + 8)
                    rdx_8 = var_218
                
                int64_t var_208_1
                int64_t var_1f8
                
                if (((rcx_14 u>> 4).b & 1) == 0)
                    int64_t rax_30 = *(rax_4 + 0x80)
                    *(rax_4 + 0x80) = arg2
                    var_208_1 = rax_30
                    (*(*arg2 + 0xa0))(arg2, arg1)
                label_140cc490e:
                    *(arg2 + 8) |= 0x200000
                    *(rax_4 + 0x80) = var_208_1
                    
                    if (var_218 != 0)
                        sub_140ce3090()
                    
                    if (test_bit(*(arg1 + 0x90) ^ rdi_1, 0x14))
                        if (r12.b == 0)
                            if (*(arg1 + 0x14c) == 0xffffffff)
                                *(arg1 + 0x14c) = sub_140ba6180(arg1 - 0x200, arg2)
                            
                            sub_140bb81a0(arg1 - 0x200, arg2)
                            sub_140ba5a40(arg1 - 0x200, arg2)
                        else
                            sub_140bb81a0(arg1 - 0x200, arg2)
                    
                    if (((*(arg2 + 8) u>> 4).b & 1) == 0)
                        sub_140bb8d30(arg2)
                    
                    int64_t* rcx_30 = *(arg1 + 0xd8)
                    
                    if ((*(*rcx_30 + 0x20))(rcx_30) - *(r15_3 + 0x28) != *(r15_3 + 0x20)
                            && ((*(*(arg2 + 0x10) + 0xcc) u>> 0x19).b & 1) == 0)
                        int64_t* rax_41 = sub_140d21830(arg2, &var_1f8, 0, 0)
                        int16_t* const rdi_3 = &data_142d40450
                        int16_t* const r8_9
                        
                        if (rax_41[1].d == 0)
                            r8_9 = &data_142d40450
                        else
                            r8_9 = *rax_41
                        
                        char var_248
                        var_248.q = *(r15_3 + 0x20)
                        sub_140a2e390(&var_218, %s: Serial size mismatch: Got %d, Expected %d", 
                            r8_9)
                        int32_t var_210
                        
                        if (var_210 != 0)
                            rdi_3 = var_218.q
                        
                        sub_140af98a0("Unknown", 0xf3b, u"%s", rdi_3)
                        int64_t rcx_35 = var_218.q
                        
                        if (rcx_35 != 0)
                            sub_140a74f90(rcx_35)
                        
                        int64_t rcx_36 = var_1f8
                        
                        if (rcx_36 != 0)
                            sub_140a74f90(rcx_36)
                        
                        sub_140afbb40()
                        rdi_1 = var_224_1
                    
                    int64_t* rcx_37 = *(arg1 + 0xd8)
                    (*(*rcx_37 + 0x178))(rcx_37, rax_24)
                    
                    if (r14_1 != 0)
                        int64_t rdx_21 = *(r14_1 + 0x118)
                        
                        if (rdx_21 != 0 && *(r14_1 + 0x58) != 0)
                            sub_140cc45a0(arg1, rdx_21)
                    
                    int32_t r9_4 = *(arg2 + 8)
                    result = zx.q(r9_4 u>> 4)
                    
                    if ((result.b & 1) != 0)
                        result = *(arg2 + 0x10)
                        
                        if (((*(result + 0xcc) u>> 0x12).b & 1) != 0)
                            *(arg2 + 8) = r9_4 | 0x81000
                            result = sub_140d3a600(rax_4, arg2)
                else
                    if ((*(arg1 + 0x90) & 0x100000) == 0)
                        int64_t rax_27 = *(rax_4 + 0x80)
                        *(rax_4 + 0x80) = arg2
                        int64_t* rbx_4 = *(arg2 + 0x10)
                        var_208_1 = rax_27
                        void** var_1d8
                        (*(*rbx_4 + 0x348))(rbx_4, arg2, 
                            *SymBuffer::end(sub_140b4cb20(&var_1d8, arg1), &var_1f8))
                        sub_140b4cbb0(&var_1d8)
                        rdi_1 = var_224_1
                        goto label_140cc490e
                    
                    *(arg1 + 0x14c) = rbx_3.d
                    *(arg2 + 8) |= 0x400
                    
                    if (rdx_8 != 0)
                        result = sub_140ce3090()
            
            *(arg1 + 0x90) = rdi_1

__security_check_cookie(rax_1 ^ &var_268)
return result
