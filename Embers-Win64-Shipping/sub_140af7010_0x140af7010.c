// 函数: sub_140af7010
// 地址: 0x140af7010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x78)
int64_t r12
r12.b = 1
void* rax_3 = &rbx[sx.q(*(arg1 + 0x80)) * 6]

if (rbx != rax_3)
    TEB* gsbase
    void* rdx_1 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)
    void* arg_8 = rdx_1
    
    do
        int32_t rax_5 = *(rbx + 0x24)
        bool cond:0_1 = rax_5 != 0
        char var_78
        uint64_t var_70
        int64_t var_60
        int64_t rcx_26
        
        if (rax_5 s> 0)
            if (rax_5 != rbx[5].d)
                r12.b = 0
                
                if (data_143de58d0 s> *(0x14 + *rdx_1))
                    _Init_thread_header(&data_143de58d0)
                    
                    if (data_143de58d0 == 0xffffffff)
                        data_143de58c0 = 0
                        data_143de58c8 = 0
                        atexit(sub_142cbedb0)
                        _Init_thread_footer(&data_143de58d0)
                
                int64_t* rdi_3
                
                if (*(arg1 + 0x70) == 0)
                    rdi_3 = &data_143de58c0
                else
                    rdi_3 = (sx.q(*(arg1 + 0x70) - 1) << 4) + *(arg1 + 0x68)
                
                int32_t rcx_1 = rbx[4].d
                wchar16 const* const rcx_2
                
                if (rcx_1 == 0)
                    rcx_2 = u"Exact"
                else if (rcx_1 == 1)
                    rcx_2 = u"Contains"
                else
                    rcx_2 = u"Unknown"
                
                int16_t* const r8_1
                
                if (rbx[1].d == 0)
                    r8_1 = &data_142d40450
                else
                    r8_1 = *rbx
                
                *(rbx + 0x24)
                int32_t var_b0_1 = rbx[5].d
                wchar16 const* const var_b8_1 = rcx_2
                int64_t var_a8
                sub_140a2e390(&var_a8, 
                    Expected Error or Warning matching '%s' to occur %d times with %s match type, but it "
                "was found %d time(s).", r8_1)
                var_70 = 0
                int64_t r14_1 = var_a8
                var_78 = 2
                int32_t var_a0
                int32_t var_68_1 = var_a0
                
                if (var_a0 != 0)
                    sub_1405a4c70(&var_70, var_a0, 0)
                    memcpy(var_70, r14_1, var_a0 * 2)
                else
                    int32_t var_64_1 = 0
                
                sub_140596d10(&var_60, rdi_3)
                int64_t var_50_1 = 0
                int64_t var_48_1 = 0
                sub_140ae9470(arg1 + 0x30, &var_78, 0)
                int64_t rcx_8 = var_60
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                uint64_t rcx_9 = var_70
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                rcx_26 = var_a8
                goto label_140af734e
            
            cond:0_1 = rax_5 != 0
        
        if (not(cond:0_1))
            int32_t rax_11 = rbx[1].d
            
            if (rbx[5].d != 0)
                int16_t* const r8_7
                
                if (rax_11 == 0)
                    r8_7 = &data_142d40450
                else
                    r8_7 = *rbx
                
                int64_t var_88
                sub_140a2e390(&var_88, 
                    Suppressed expected Error or Warning matching '%s' %d times.", r8_7)
                int64_t* rax_13 = sub_140af3580(arg1 + 0x30)
                var_70 = 0
                int64_t r14_3 = var_88
                var_78 = 0
                int32_t var_80
                int32_t var_68_3 = var_80
                
                if (var_80 != 0)
                    sub_1405a4c70(&var_70, var_80, 0)
                    memcpy(var_70, r14_3, var_80 * 2)
                else
                    int32_t var_64_3 = 0
                
                sub_140596d10(&var_60, rax_13)
                int64_t var_50_3 = 0
                int64_t var_48_3 = 0
                sub_140ae9470(arg1 + 0x30, &var_78, 0)
                int64_t rcx_24 = var_60
                
                if (rcx_24 != 0)
                    sub_140a74f90(rcx_24)
                
                uint64_t rcx_25 = var_70
                
                if (rcx_25 != 0)
                    sub_140a74f90(rcx_25)
                
                rcx_26 = var_88
            else
                r12.b = 0
                int16_t* const r8_4
                
                if (rax_11 == 0)
                    r8_4 = &data_142d40450
                else
                    r8_4 = *rbx
                
                int64_t var_98
                sub_140a2e390(&var_98, 
                    Expected suppressed Error or Warning matching '%s' did not occur.", r8_4)
                int64_t* rax_12 = sub_140af3580(arg1 + 0x30)
                var_70 = 0
                int64_t r14_2 = var_98
                var_78 = 2
                int32_t var_90
                int32_t var_68_2 = var_90
                
                if (var_90 != 0)
                    sub_1405a4c70(&var_70, var_90, 0)
                    memcpy(var_70, r14_2, var_90 * 2)
                else
                    int32_t var_64_2 = 0
                
                sub_140596d10(&var_60, rax_12)
                int64_t var_50_2 = 0
                int64_t var_48_2 = 0
                sub_140ae9470(arg1 + 0x30, &var_78, 0)
                int64_t rcx_16 = var_60
                
                if (rcx_16 != 0)
                    sub_140a74f90(rcx_16)
                
                uint64_t rcx_17 = var_70
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
                
                rcx_26 = var_98
            
        label_140af734e:
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            rdx_1 = arg_8
        
        rbx = &rbx[6]
    while (rbx != rax_3)

return zx.q(r12.b)
