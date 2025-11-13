// 函数: sub_140849a90
// 地址: 0x140849a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
uint64_t result = __security_cookie ^ &var_188
uint64_t result_1 = result
void* r13 = arg1

if (*(arg1 + 0x4e8) != 0 && *(arg1 + 0x3f0) s<= 0 && *(arg1 + 0x3e0) != 0)
    TEB* gsbase
    int32_t* rax_3 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    int32_t* var_158 = rax_3
    result = zx.q(*rax_3)
    
    if (data_143ce4548 s> result.d)
        int64_t r8_8
        result, r8_8 = _Init_thread_header(&data_143ce4548)
        
        if (data_143ce4548 == 0xffffffff)
            int64_t* rcx_31 = data_143db18d0
            
            if (rcx_31 == 0)
                sub_140a53c40()
                rcx_31 = data_143db18d0
            
            r8_8.b = 1
            data_143ce4540 = (*(*rcx_31 + 0xb0))(rcx_31, u"vm.OptimizeVMByteCode", r8_8)
            result = _Init_thread_footer(&data_143ce4548)
    
    int64_t* rcx_1 = data_143ce4540
    
    if (rcx_1 != 0)
        result = (*(*rcx_1 + 0x90))(rcx_1)
        
        if (result.d != 0)
            int32_t rdx_1 = *(r13 + 0x4a0)
            char* var_e0_1 = nullptr
            int32_t var_d8_1 = 0
            int32_t var_d4_1 = 0x20
            void var_100
            
            if (rdx_1 s> 0x20)
                sub_14085a8e0(&var_100, rdx_1)
            
            int64_t* rsi_1 = *(r13 + 0x498)
            void* rax_7 = sx.q(*(r13 + 0x4a0)) * 0x38 + rsi_1
            uint64_t (* var_148)(int64_t* arg1)
            void*** var_138
            
            if (rsi_1 != rax_7)
                void* rbx_1 = &rsi_1[6]
                
                do
                    void*** rdi_1 = nullptr
                    uint32_t count_1 = *(rbx_1 - 0x18)
                    int64_t r15_1 = *(rbx_1 - 0x20)
                    var_148 = *rsi_1
                    int64_t var_140_1 = *(rbx_1 - 0x28)
                    var_138 = nullptr
                    char var_130_1 = count_1.b
                    
                    if (count_1 != 0)
                        sub_1405da9e0(&var_138, count_1, 0)
                        rdi_1 = var_138
                        memcpy(rdi_1, r15_1, count_1)
                    else
                        int32_t var_12c_1 = 0
                    
                    int64_t r15_2 = sx.q(*rbx_1)
                    uint64_t r14_1 = 0
                    char rax_10 = (*(rbx_1 - 0x10)).b
                    uint64_t var_120 = 0
                    int64_t r12_1 = *(rbx_1 - 8)
                    int32_t var_118_1 = r15_2.d
                    uint64_t var_168_1
                    
                    if (r15_2.d != 0)
                        sub_1405a4be0(&var_120, r15_2.d, 0)
                        r14_1 = var_120
                        memcpy(r14_1, r12_1, (r15_2 << 4).d)
                        rdi_1 = var_138
                        var_168_1 = r14_1
                    else
                        var_168_1 = 0
                    
                    int64_t r15_3 = sx.q(var_d8_1)
                    int32_t rax_11 = (r15_3 + 1).d
                    var_d8_1 = rax_11
                    
                    if (rax_11 s> var_d4_1)
                        sub_14085a2c0(&var_100, r15_3.d)
                    
                    char* rdx_7 = &var_100
                    
                    if (var_e0_1 != 0)
                        rdx_7 = var_e0_1
                    
                    rdx_7[r15_3] = rax_10 + var_130_1
                    
                    if (var_168_1 != 0)
                        sub_140a74f90(r14_1)
                    
                    if (rdi_1 != 0)
                        sub_140a74f90(rdi_1)
                    
                    rsi_1 = &rsi_1[7]
                    rbx_1 += 0x38
                while (rsi_1 != rax_7)
                
                r13 = arg1
            
            if (data_143ce4558 s> *var_158)
                _Init_thread_header(&data_143ce4558)
                
                if (data_143ce4558 == 0xffffffff)
                    int64_t* rcx_30 = data_143db18d0
                    
                    if (rcx_30 == 0)
                        sub_140a53c40()
                        rcx_30 = data_143db18d0
                    
                    int64_t r8_7
                    r8_7.b = 1
                    data_143ce4550 = (*(*rcx_30 + 0xb0))(rcx_30, vm.FreeUnoptimizedByteCode", r8_7)
                    _Init_thread_footer(&data_143ce4558)
            
            int64_t* rcx_10 = data_143ce4550
            int32_t rax_16
            
            if (rcx_10 != 0)
                rax_16 = (*(*rcx_10 + 0x90))(rcx_10)
            
            if (rcx_10 == 0 || rax_16 == 0)
                sub_140d3a3a0(&var_158, r13)
                char* rbx_2 = var_e0_1
                int32_t* rax_19 = var_158
                int64_t var_a0_1 = 0
                void var_c0
                
                if (rbx_2 == 0)
                    memmove(&var_c0, &var_100, (&rbx_2[0x20]).d)
                    
                    if (var_a0_1 != 0)
                        sub_140a74f90(var_a0_1)
                        rbx_2 = var_e0_1
                
                int64_t rdi_2 = *(r13 + 0x3d8)
                uint32_t count = *(r13 + 0x3e0)
                var_e0_1 = nullptr
                int32_t var_d8_2 = 0
                int32_t var_d4_2 = 0x20
                int64_t var_90 = 0
                int32_t var_84
                
                if (count != 0)
                    sub_1405da9e0(&var_90, count, 0)
                    memcpy(var_90, rdi_2, count)
                else
                    var_84 = 0
                
                void var_80
                sub_140844740(&var_80, r13 + 0x1e0)
                void*** rax_22 = sub_140a82f30(0x98, 8)
                *rax_22 = &data_142ddc0c8
                rax_22[1] = rax_19
                rax_22[6] = 0
                
                if (rbx_2 == 0)
                    memmove(&rax_22[2], &var_c0, 0x20)
                
                int64_t rcx_22 = rax_22[6]
                
                if (rcx_22 != 0)
                    sub_140a74f90(rcx_22)
                
                rax_22[6] = rbx_2
                int64_t var_a0_3 = 0
                rax_22[7].d = var_d8_1
                *(rax_22 + 0x3c) = var_d4_1
                int32_t var_98_2 = 0
                int32_t var_94_2 = 0x20
                rax_22[8] = 0
                rax_22[8] = var_90
                var_90 = 0
                rax_22[9].d = count
                *(rax_22 + 0x4c) = var_84
                uint32_t var_88_1
                var_88_1.q = 0
                sub_140844740(&rax_22[0xa], &var_80)
                *rax_22 = &data_142ddc0e8
                uint64_t (* rax_29)(int64_t* arg1) = var_148
                
                if (rax_22 != -8)
                    rax_29 = j_sub_140848650
                
                var_138 = rax_22
                var_148 = rax_29
                result = sub_140a20e40(0xff, &var_148)
                int64_t var_48
                
                if (var_48 != 0)
                    result = sub_140a74f90(var_48)
                
                int64_t rcx_25 = var_90
                
                if (rcx_25 != 0)
                    result = sub_140a74f90(rcx_25)
                
                if (var_a0_3 != 0)
                    result = sub_140a74f90(var_a0_3)
            else
                char* rcx_11 = &var_100
                
                if (var_e0_1 != 0)
                    rcx_11 = var_e0_1
                
                var_158 = rcx_11
                int32_t var_150_1 = var_d8_1
                var_158.o = var_158.o
                result = sub_14276e8e0(*(r13 + 0x3d8), r13 + 0x3e8, &var_158)
                
                if (*(r13 + 0x3f0) s> 0)
                    bool cond:3_1 = *(r13 + 0x3e4) == 0
                    *(r13 + 0x3e0) = 0
                    
                    if (not(cond:3_1))
                        result = sub_1405c5510(r13 + 0x3d8, 0)
            
            if (var_e0_1 != 0)
                result = sub_140a74f90(var_e0_1)

__security_check_cookie(result_1 ^ &var_188)
return result
