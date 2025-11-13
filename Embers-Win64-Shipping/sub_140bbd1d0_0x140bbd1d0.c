// 函数: sub_140bbd1d0
// 地址: 0x140bbd1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ba9350()
EnterCriticalSection(&data_143e1a450)
int64_t* rdi = data_143e1a780
void* rbx_2 = &rdi[sx.q(data_143e1a788) * 4]

if (rdi == rbx_2)
label_140bbd240:
    rbx_2.b = 0
else
    while (true)
        if (sub_140a32a50(arg1, rdi, 1) != 0)
            int32_t rax_3 = rdi[1].d
            rbx_2 = nullptr
            int32_t r9_1 = arg1[1].d
            int32_t rdx_1 = rax_3 - 1
            
            if (rax_3 == 0)
                rdx_1 = 0
            
            int32_t r14_1 = r9_1 - 1
            
            if (r9_1 == 0)
                r14_1 = 0
            
            int32_t rcx_1
            
            if (rdx_1 s>= 0)
                rcx_1 = r14_1
                
                if (rdx_1 s< r14_1)
                    rcx_1 = rdx_1
            else
                rcx_1 = 0
            
            int64_t r8 = sx.q(rcx_1)
            
            if (sx.q(rdx_1) + 0x7fffffff s< r8)
                r14_1 = rcx_1
            else if (sx.q(rdx_1) + 0x7fffffff s< sx.q(r14_1))
                r14_1 = rdx_1 + 0x7fffffff
            
            int16_t* const rax_5
            
            if (r9_1 == 0)
                rax_5 = &data_142d40450
            else
                rax_5 = *arg1
            
            int16_t* r12_1 = &rax_5[r8]
            void* var_68 = nullptr
            int32_t r14_2 = r14_1 - rcx_1
            int64_t var_60_1 = 0
            void* r15_1 = nullptr
            int32_t rsi_1 = 0
            int32_t r13_1 = 0
            
            if (r12_1 != 0 && *r12_1 != 0 && r14_2 s> 0)
                if (r14_2 + 1 s> 0)
                    sub_1405947f0(&var_68, r14_2 + 1)
                    r13_1 = var_60_1:4.d
                    rsi_1 = var_60_1.d
                    r15_1 = var_68
                
                rsi_1 = rsi_1 + 1 + r14_2
                var_60_1.d = rsi_1
                
                if (rsi_1 s> r13_1)
                    sub_140594770(&var_68)
                    r13_1 = var_60_1:4.d
                    rsi_1 = var_60_1.d
                    r15_1 = var_68
                
                UnDecorator::getReferenceType(r15_1, r12_1, r14_2 * 2)
                *(r15_1 + (sx.q(rsi_1) << 1) - 2) = 0
            
            int32_t r14_3 = rdi[3].d
            void* r12_2 = r15_1
            
            if (r14_3 s> 1)
                int32_t rsi_3
                
                if (rsi_1 == 0)
                    rsi_3 = 0
                else
                    rsi_3 = rsi_1 - 1
                
                int32_t rax_7
                
                if (r14_3 == 0)
                    rax_7 = r14_3 + 1
                
                if (r14_3 != 0 || rsi_3 == 0)
                    rax_7 = 0
                
                int64_t rdi_1 = rdi[2]
                int32_t rcx_5 = rax_7 + rsi_3
                var_68 = nullptr
                var_60_1.d = r14_3
                
                if (r14_3 != 0 || rcx_5 != 0)
                    sub_1405a4c70(&var_68, r14_3 + rcx_5, 0)
                    memcpy(var_68, rdi_1, r14_3 * 2)
                else
                    var_60_1:4.d = 0
                
                sub_140a20ba0(&var_68, r15_1, rsi_3)
                r12_2 = var_68
                rsi_1 = var_60_1.d
                r13_1 = var_60_1:4.d
                var_68 = nullptr
                int64_t var_60_2 = 0
            else
                r15_1 = nullptr
            
            int32_t rdi_2 = arg3[1].d
            uint64_t var_48
            int32_t rsi_5
            
            if (rsi_1 s> 1)
                int32_t r14_4 = rdi_2 - 1
                
                if (rdi_2 == 0)
                    r14_4 = 0
                
                int32_t rax_9
                
                if (rsi_1 == 0)
                    rax_9 = rsi_1 + 1
                
                if (rsi_1 != 0 || r14_4 == 0)
                    rax_9 = 0
                
                void* var_58 = r12_2
                int32_t rdx_13 = rax_9 + r14_4 + rsi_1
                r12_2 = nullptr
                
                if (rdx_13 s> r13_1)
                    sub_1405947f0(&var_58, rdx_13)
                
                sub_140a20ba0(&var_58, *arg3, r14_4)
                void* rax_11 = var_58
                rdi_2 = rsi_1
                rsi_5 = r13_1
                var_58 = nullptr
                int32_t var_50_1
                var_50_1.q = 0
                rbx_2 = rax_11
            else
                int64_t rsi_4 = *arg3
                var_48 = 0
                
                if (rdi_2 != 0)
                    sub_1405a4c70(&var_48, rdi_2, 0)
                    rbx_2 = var_48
                    memcpy(rbx_2, rsi_4, rdi_2 * 2)
                    int32_t var_3c
                    rsi_5 = var_3c
                else
                    rsi_5 = 0
            
            if (arg2 != &var_48)
                void* rcx_13 = *arg2
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                *arg2 = rbx_2
                arg2[1].d = rdi_2
                *(arg2 + 0xc) = rsi_5
            else if (rbx_2 != 0)
                sub_140a74f90(rbx_2)
            
            if (r12_2 != 0)
                sub_140a74f90(r12_2)
            
            if (r15_1 != 0)
                sub_140a74f90(r15_1)
            
            rbx_2.b = 1
            break
        
        rdi = &rdi[4]
        
        if (rdi == rbx_2)
            goto label_140bbd240

LeaveCriticalSection(&data_143e1a450)
return zx.q(rbx_2.b)
